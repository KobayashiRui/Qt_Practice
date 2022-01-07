import QtQuick
import QtQuick.Controls
import QtQuick.Dialogs


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
            vp1.init();
            vp1.start();
        }
    }
    }

    FileDialog{
        id:fileDialog
        fileMode: FileDialog.OpenFiles
        onAccepted:{
            console.log(fileDialog.selectedFiles)
            vp1.playList = fileDialog.selectedFiles
            //vp1.set(fileDialog.fileUrls)
        }
    }

    VideoPlayer{
        id: vp1
        onMediaComp: {
            next();
        }
    }

}
