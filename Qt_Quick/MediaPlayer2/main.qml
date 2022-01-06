import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.15
import QtMultimedia 5.15

//import "VideoPlayer.qml" as VideoPlayer

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
            player1.play();
            player2.play();

        }
    }
    }

    FileDialog{
        id:fileDialog
        selectMultiple:true
        onAccepted:{
            console.log(fileDialog.fileUrls)
            player1.addItems(fileDialog.fileUrls);
            player2.addItems(fileDialog.fileUrls);
            //mediaPlayer.source = fileDialog.fileUrl
            //mediaPlayer.play()
        }
    }

    VideoPlayer{
        id: player1
    }

    VideoPlayer{
        id: player2
    }

    /*
    Window{
        id: player1
        width: 200
        height: 200
        visible: true
        Playlist{
            id: playlistMedia1
        }

        MediaPlayer {
            id: mediaplayer1
            playlist: playlistMedia1
        }

        VideoOutput {
            //flushMode:VideoOutput.FirstFrame
            flushMode: VideoOutput.LastFrame
            anchors.fill: parent
            source: mediaplayer1
        }

    }*/

}
