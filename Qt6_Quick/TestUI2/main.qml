import QtQuick
import QtQuick.Controls

Window {
    id:root
    width: 800
    height: 480
    visible: true
    title: qsTr("ログ出力とかのデザイン参考例")


    Rectangle { // our inlined button ui
        id: addButton
        x: 12; y: 12
        width: 116; height: 26
        color: "lightsteelblue"
        border.color: "slategrey"
        Text {
            anchors.centerIn: parent
            text: "Start"
        }
        MouseArea {
            anchors.fill: parent
            onClicked:{
                var dt = new Date().toLocaleString(Qt.locale(), "yyyy-MM-dd hh:mm:ss")
                //logDataの処理
                logData.model.append({date:dt, comment:"hello"})

                //logData2の処理
                logData2.model.append({date:dt, comment:"hello2"})

                //logData3 の処理
                logData3.model.append({date:dt, comment:"hello3"})
                //if(logData3.model.count > 10){
                //    logData3.model.remove(0)
                //}
                //outputData.sync()

                //logData4の処理
                logData4.add({date:dt, comment:"hello4"})
            }
        }
    }

/*
単純なリストの実装例
*/
    Rectangle{
        id: rectangle
        opacity: 1
        visible: true
        color: "#706b6b"
        border.color: "#d56c6c"
        border.width: 0
        width: 200
        anchors.top : addButton.bottom
        anchors.left: parent.left
        anchors.bottom:parent.bottom
        anchors.topMargin: 10
        anchors.bottomMargin: 0
        anchors.rightMargin: 0
        anchors.leftMargin: 0
        z: 0
        ListView{
            id:logData
            //clip: true
            anchors.fill:parent
            anchors.topMargin: 0
            highlightFollowsCurrentItem: true
            activeFocusOnTab: false
            focus: false
            clip: true
            model: ListModel{}
            delegate: Row{
                spacing: 10
                Text{text:date}
                Text{text:comment}
            }
        }


    }

/*
自動で最下部へのスクロールを行う実装
*/
    Rectangle{
        id: rectangle2
        width: 200
        opacity: 1
        visible: true
        color: "#aea6a6"
        border.color: "#d56c6c"
        border.width: 0
        anchors.top : addButton.bottom
        anchors.left: rectangle.right
        anchors.bottom:parent.bottom
        anchors.topMargin: 10
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        z: 0

        ListView{
            id:logData2
            //clip: true
            anchors.fill:parent
            anchors.topMargin: 0
            highlightFollowsCurrentItem: true
            activeFocusOnTab: false
            focus: false
            clip: true
            model: ListModel{}
            delegate: Row{
                spacing: 10
                Text{text: date}
                Text{text: comment}
            }

            onCountChanged: {
                logData2.currentIndex = count - 1
            }
        }
    }

/*
FIFOバッファー的な感じのリストの実装
上限的なものを設けてそれ以上のデータが入ってきた場合は古いデータから消していくもの
リストの上限値以上の値が入った場合に
*/

    Rectangle{
        id: rectangle3
        width: 200
        opacity: 1
        visible: true
        color: "#d8d1d1"
        border.color: "#d56c6c"
        border.width: 0
        anchors.top : addButton.bottom
        anchors.left: rectangle2.right
        anchors.bottom:parent.bottom
        anchors.leftMargin: 0
        anchors.topMargin: 10
        anchors.bottomMargin: 0
        anchors.rightMargin: 0
        z: 0

        ListModel{
            id: listData
            onCountChanged: {
                console.log(listData.count)
                if(listData.count > 10){
                    listData.remove(0)
                }
            }
        }

        ListView{
            id:logData3
            //clip: true
            anchors.fill:parent
            anchors.topMargin: 0
            highlightFollowsCurrentItem: true
            activeFocusOnTab: false
            focus: false
            clip: true
            model: listData
            delegate: Row{
                spacing: 10
                Text{text: date}
                Text{text: comment}
            }

            onCountChanged: {
                logData3.currentIndex = count - 1
            }
        }
    }

    LogView{
        id: logData4
        width: 200
        color: "#ded4d4"
        border.width: 0
        anchors.top : addButton.bottom
        anchors.left: rectangle3.right
        anchors.bottom:parent.bottom
        opacity: 1
        visible: true
        anchors.leftMargin: 0
        anchors.topMargin: 10
        anchors.bottomMargin: 0
        anchors.rightMargin: 0
        z: 0
        maxValue: 11
    }
}
