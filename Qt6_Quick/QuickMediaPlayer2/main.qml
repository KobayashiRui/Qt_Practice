import QtQuick
import QtQuick.Controls
import QtMultimedia
import QtQuick.Layouts
import QtQuick.Dialogs

Window {
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Quick Media Player")

    // 動画を読み込むファイルダイアログの表示
    Button {
        id: readVideoButton
        text: qsTr("Read")
        onClicked: {
            console.log("click!")
            fileDialog.open()
        }

        contentItem: Text {
            text: readVideoButton.text
            font: readVideoButton.font
            opacity: enabled ? 1.0 : 0.3
            color: readVideoButton.down ? "#17a81a" : "#21be2b"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
        }

        background: Rectangle {
            implicitWidth: 100
            implicitHeight: 40
            opacity: enabled ? 1 : 0.3
            border.color: readVideoButton.down ? "#17a81a" : "#21be2b"
            border.width: 1
            radius: 2
        }
    }

    FileDialog {
        id: fileDialog
        title: "Please choose a file"
        fileMode: FileDialog.OpenFiles
        onAccepted: {
            console.log(fileDialog.currentFiles)
            mediaPlayer2.stop()
            mediaPlayer.source = fileDialog.currentFiles[0]
            mediaPlayer2.source=fileDialog.currentFiles[1]
            mediaPlayer.play()
            mediaPlayer2.pause()
            //mediaPlayer.listData = fileDialog.currentFiles
            //mediaPlayer.start()
        }
    }

    MediaPlayer{
        id: mediaPlayer2
        videoOutput: videoOutput2
        onMediaStatusChanged: {
            console.log("media2:", mediaPlayer2.mediaStatus)
        }
    }


    MediaPlayer {
        id: mediaPlayer
        property var listData : []
        property int nowIndex: 0
        videoOutput: videoOutput

        function getPath(){
            return listData[nowIndex]
        }

        function start(){
            mediaPlayer.source =  getPath()
            mediaPlayer.play()
        }

        onMediaStatusChanged: {
            console.log("media1:", mediaPlayer.mediaStatus)
          if(mediaPlayer.mediaStatus === MediaPlayer.EndOfMedia){
            videoOutput2.visible = true
            videoOutput.visible = false
            mediaPlayer2.play()
          }
            //if(mediaPlayer.mediaStatus === MediaPlayer.EndOfMedia){
            //    nowIndex += 1
            //    if(listData.length === nowIndex){
            //        nowIndex = 0
            //    }else{
            //        mediaPlayer.source =  getPath()
            //        mediaPlayer.play()
            //    }
            //}
        }
        //onPositionChanged: {
        //    console.log(mediaPlayer.position ," / ", mediaPlayer.duration)
        //    if (mediaPlayer.duration >0 &&  (mediaPlayer.duration-mediaPlayer.position) < 100 ){
        //        nowIndex += 1
        //        if(listData.length === nowIndex){
        //            nowIndex = 0
        //        }else{
        //            mediaPlayer.pause()
        //            mediaPlayer.source =  getPath()
        //            mediaPlayer.play()
        //        }
        //    }
        //}
    }

    VideoOutput {
        id: videoOutput

        property bool fullScreen: false
        anchors.top: readVideoButton.bottom
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
    }

    VideoOutput {
        id: videoOutput2
        visible: false
        property bool fullScreen: false
        anchors.top: readVideoButton.bottom
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
    }

}
