#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QAbstractButton;
class QSlider;
class QLabel;
class QUrl;
QT_END_NAMESPACE

class VideoPlayer : public QWidget
{
    Q_OBJECT
public:
    VideoPlayer(QWidget *parent = nullptr);
    ~VideoPlayer();

    void setUrl(const QUrl &url);
    void setUrls(const QList<QUrl> &urls);

public slots:
    void openFile();
    void play();

private slots:
    void mediaStateChanged(QMediaPlayer::State state);
    void positionChanged(qint64 position);
    void durationChanged(qint64 duration);
    void setPosition(int position);
    void handleError();
    void changePlaylistIndex(int position);

private:
    QMediaPlayer* m_mediaPlayer;
    QAbstractButton *m_playButton;
    QSlider *m_positionSlider;
    QLabel *m_errorLabel;
    QMediaPlaylist *m_mediaPlaylist;
};


#endif // VIDEOPLAYER_H
