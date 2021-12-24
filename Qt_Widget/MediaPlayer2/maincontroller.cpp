#include "maincontroller.h"
#include "videoplayer.h"
#include <QtWidgets>

MainController::MainController(QWidget *parent)
    : QWidget(parent)
{
    QAbstractButton *openButton = new QPushButton(tr("Open..."));

    connect(openButton, &QAbstractButton::clicked, this, &MainController::openPlayer);

    QBoxLayout *layout = new QHBoxLayout;
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(openButton);

    setLayout(layout);

    videoWindow = new VideoPlayer(this);
    videoWindow -> show();
}


void MainController::openPlayer(){
    QDebug() << "click!";
}
