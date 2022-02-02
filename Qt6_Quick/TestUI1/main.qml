import QtQuick

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("レイアウト参考")

    Column{
        anchors.fill: parent
        Row{
            Rectangle{
                width:50
                height: 50
                color: "#d21313"
            }
            Rectangle{
                width:60
                height: 50
                color: "#ebed0b"
            }
        }
        Row{
            Rectangle{
                width:80
                height: 50
                color: "#64e200"
                clip: true
            }
            Rectangle{
                width:100
                height: 50
                color: "#0ad887"
            }
        }
    }
}
