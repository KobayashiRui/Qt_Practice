import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.15
import QtMultimedia 5.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Row{
    Button{
        id:readFileButton
        text:qsTr("Read")
        onClicked: {
            fileDialog.open()
        }
    }

    Button{
        id:startButton
        text:qsTr("Start")
        onClicked: {
            mediaplayer.play();
        }
    }
    }

    FileDialog{
        id:fileDialog
        selectMultiple:true
        onAccepted:{
            console.log(fileDialog.fileUrls)
            playlistMedia.addItems(fileDialog.fileUrls);
            //mediaPlayer.source = fileDialog.fileUrl
            //mediaPlayer.play()
        }
    }

    Playlist{
        id: playlistMedia
    }

    MediaPlayer {
        id: mediaplayer
        playlist: playlistMedia
    }

    VideoOutput {
        flushMode:VideoOutput.FirstFrame
        anchors.fill: parent
        source: mediaplayer
    }
}
