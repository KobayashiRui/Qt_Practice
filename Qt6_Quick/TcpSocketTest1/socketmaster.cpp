#include "socketmaster.h"

SocketMaster::SocketMaster(QObject *parent)
    : QObject{parent}
{
    socket = new QTcpSocket;

    QObject::connect(socket, &QTcpSocket::connected, this, &SocketMaster::handleConnected);
    QObject::connect(socket, &QTcpSocket::disconnected, this, &SocketMaster::handleDisconnected);
    QObject::connect(socket, &QTcpSocket::readyRead, this, &SocketMaster::handleReadyRead);
    QObject::connect(socket, &QTcpSocket::errorOccurred, this, &SocketMaster::handleError);
}

void SocketMaster::connect(QString addr, uint16_t  port)
{
    socket->connectToHost(addr, port);
}

void SocketMaster::disconnect()
{
    socket->close();
}

void SocketMaster::sendData(QString sendData){
    //UTF-8化
    //QByteArray utf8_str = sendData.toUtf8();
    const char send_data[] = {0x02, '?', 0x03};
    QByteArray utf8_str(QByteArray::fromRawData(send_data, 3));

    qDebug("send: '%s'", utf8_str.constData());

    //送信
    socket->write(utf8_str);
}

void SocketMaster::handleConnected()
{
    qDebug() << "connected";
    connectState = true;
}


void SocketMaster::handleDisconnected()
{
    qDebug() << "disconnected";
    connectState = false;
}

void SocketMaster::handleReadyRead()
{
    qDebug("rcv: start");

    //受信
    QByteArray rcv_bytes = socket->readAll();

    QString rcv_data;
    //データなし？
    if (rcv_bytes.length() == 0) rcv_data = "[no data]";
    //データあり → UTF8でQString化
    else rcv_data = QString::fromUtf8(rcv_bytes);

    //表示
    qDebug("rcv: '%s'", rcv_data.toUtf8().constData());

}


void SocketMaster::handleError(QAbstractSocket::SocketError error)
{
    qDebug() << "handler error";
}
