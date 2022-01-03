#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QtWidgets>
#include <QSerialPort>
#include "serialmaster.h"

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    //QSerialPort *serialPort;
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();
public slots:
    void getPort();
    void setUp();
    void send();
    void sendGcode();
    void getGcode();
private:
    QLineEdit *sendInput;
    SerialMaster *m_serialmaster;
    QListWidget *list_widget;
    QString gcode_path;
};
#endif // MAINWIDGET_H
