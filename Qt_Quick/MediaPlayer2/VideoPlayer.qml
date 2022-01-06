import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.15
import QtMultimedia 5.15

Window{
    id:root
    width: 200
    height: 200
    visible: true

    Playlist{
        id: playlistMedia
        playbackMode: Playlist.Loop
    }

    MediaPlayer {
        id: mediaplayer
        playlist: playlistMedia
    }

    VideoOutput {
        flushMode:VideoOutput.FirstFrame
        //flushMode: VideoOutput.LastFrame
        anchors.fill: parent
        source: mediaplayer
    }

    function addItems(file_urls){
        playlistMedia.addItems(file_urls)
    }

    function play(){
        mediaplayer.play()
    }

}
