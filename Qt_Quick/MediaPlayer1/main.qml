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
    Button{
        id:readFileButton
        text:qsTr("Read")
        onClicked: {
            fileDialog.open()
        }
    }

    FileDialog{
        id:fileDialog

        onAccepted:{
            console.log(fileDialog.fileUrl)
            mediaPlayer.source = fileDialog.fileUrl
            mediaPlayer.play()
        }
    }

    MediaPlayer{
        id: mediaPlayer
    }

    VideoOutput{
        source: mediaPlayer
        anchors.top : readFileButton.bottom
        anchors.bottom : parent.bottom
        anchors.left : parent.left
        anchors.right: parent.right
    }
}
