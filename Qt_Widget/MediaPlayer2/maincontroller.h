#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QtWidgets>
#include "videoplayer.h"

class MainController : public QWidget
{
    Q_OBJECT
public:
    explicit MainController(QWidget *parent = nullptr);

private:
    //VideoPlayer *secondWindow;
    VideoPlayer *videoWindow;

public slots:
    void openPlayer();
signals:


};

#endif // MAINCONTROLLER_H
