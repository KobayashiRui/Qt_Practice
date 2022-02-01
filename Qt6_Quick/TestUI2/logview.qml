import QtQuick

Rectangle{
    id: root

    property int maxValue : 10

    function add(data){
        listData.append(data)
        if(listData.count > root.maxValue){
            listData.remove(0)
        }
    }

    ListModel{
        id: listData
    }


    ListView{
        id:logData
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

        //一番したをビューに(auto scroll)
        onCountChanged: {
            logData.currentIndex = count - 1
        }
    }
}
