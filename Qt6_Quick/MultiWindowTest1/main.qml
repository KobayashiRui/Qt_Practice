import QtQuick 2.0

Window {
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    property variant win;  // you can hold this as a reference..
    Text {
        text: "Click here to open new window!"
        anchors.centerIn: parent
    }

    SubWindow{
        x_pos : 100
        y_pos : 100
    }
    SubWindow{
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            var component = Qt.createComponent("subwindow.qml");
            component.createObject(root)
            //win = component.createObject(root);
            //win.show();
        }
    }

}
