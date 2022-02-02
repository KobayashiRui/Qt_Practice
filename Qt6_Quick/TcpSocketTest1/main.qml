import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Socket Test")

    Row {
        Rectangle { // our inlined button ui
            id: connectButton
            width: 116; height: 26
            color: "lightsteelblue"
            border.color: "slategrey"
            Text {
                anchors.centerIn: parent
                text: "Connect"
            }
            MouseArea {
                anchors.fill: parent
                onClicked:{
                    socketMaster.connect("192.168.0.101", 9101)
                }
            }
        }

        Rectangle { // our inlined button ui
            id: disconnectButton
            width: 116; height: 26
            color: "lightsteelblue"
            border.color: "slategrey"
            Text {
                anchors.centerIn: parent
                text: "DisConnect"
            }
            MouseArea {
                anchors.fill: parent
                onClicked:{
                    socketMaster.disconnect()
                }
            }
        }
        Rectangle { // our inlined button ui
            id: sendButton
            width: 116; height: 26
            color: "lightsteelblue"
            border.color: "slategrey"
            Text {
                anchors.centerIn: parent
                text: "Send"
            }
            MouseArea {
                anchors.fill: parent
                onClicked:{
                    socketMaster.sendData("")
                }
            }
        }
    }
}
