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
        onAccepted: {
            mediaPlayer.stop()
            mediaPlayer.source = fileDialog.currentFile
            mediaPlayer.play()
        }
    }

    MediaPlayer {
        id: mediaPlayer
        videoOutput: videoOutput
    }

    VideoOutput {
        id: videoOutput

        property bool fullScreen: false
        anchors.top: readVideoButton.bottom
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
    }

}

