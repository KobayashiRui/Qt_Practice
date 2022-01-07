import QtQuick
import QtMultimedia

Window{
    id:root
    width: 200
    height: 200
    visible: true
    property var playList:[]
    property int nowIndex:0
    property bool now:false

    signal mediaComp()




    MediaPlayer {
        id: mediaPlayer1
        videoOutput: videoOutput1

        function getPath(){
            return listData[nowIndex]
        }

        function start(){
            mediaPlayer.source =  getPath()
            mediaPlayer.play()
        }

        onMediaStatusChanged: {
            console.log("media1:", mediaPlayer1.mediaStatus)
            if(mediaPlayer1.mediaStatus === MediaPlayer.EndOfMedia){
                root.mediaComp()
            }
        }
    }


    MediaPlayer{
        id: mediaPlayer2
        videoOutput: videoOutput2
        onMediaStatusChanged: {
            console.log("media2:", mediaPlayer2.mediaStatus)
            if(mediaPlayer2.mediaStatus === MediaPlayer.EndOfMedia){
                root.mediaComp()
            }
        }
    }

    VideoOutput {
        id: videoOutput1
        z:3
        //property bool fullScreen: false
        anchors.fill: parent
    }

    VideoOutput {
        id: videoOutput2
        z:2
        //visible: false
        property bool fullScreen: false
        anchors.fill:parent
    }

    function set(urls){
        playList = urls
    }

    function init(){
        console.log(root.nowIndex)
        console.log(root.playList)
        console.log(root.now)
        root.nowIndex = 0;
        root.now = false;
        videoOutput1.z =3;
        videoOutput2.z = 2;

    }

    function start(){
        if(!root.now){
            mediaPlayer1.source = root.playList[nowIndex]
            mediaPlayer1.play()
        }else{
            mediaPlayer2.source = root.playList[nowIndex]
            mediaPlayer2.play()
        }


        if(nowIndex >= (root.playList.length-1)){
            nowIndex = 0
        }else{
            nowIndex += 1
        }

        if(!root.now){
            mediaPlayer2.source = root.playList[nowIndex]
            mediaPlayer2.play()
            mediaPlayer2.pause()

        }else{
            mediaPlayer1.source = root.playList[nowIndex]
            mediaPlayer1.play()
            mediaPlayer1.pause()
        }
    }

    function stop(){

    }

    function next(){
        if(!root.now){
            mediaPlayer2.play()
            videoOutput1.z = 2
            videoOutput2.z = 3
        }else{
            mediaPlayer1.play()
            videoOutput1.z = 3
            videoOutput2.z = 2
        }

        if(nowIndex >= (root.playList.length-1)){
            nowIndex = 0
        }else{
            nowIndex += 1
        }

        if(!root.now){
            mediaPlayer1.source = root.playList[nowIndex]
            mediaPlayer1.play()
            mediaPlayer1.pause()

        }else{
            mediaPlayer2.source = root.playList[nowIndex]
            mediaPlayer2.play()
            mediaPlayer2.pause()
        }

        root.now = !root.now
    }

}
