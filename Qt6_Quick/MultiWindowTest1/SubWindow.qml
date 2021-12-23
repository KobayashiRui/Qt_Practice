import QtQuick 2.0
import QtQuick.Window 2.1 // needed for the Window component

Window {
    property int x_pos: 0
    property int y_pos: 0
    x: x_pos
    y: y_pos
    width: 300
    height: 200
    visible: true
    Rectangle {
        anchors.fill: parent
        color: "lightGrey"
        Text {
            anchors.centerIn: parent
            text: "My New Window"
        }
    }
}
