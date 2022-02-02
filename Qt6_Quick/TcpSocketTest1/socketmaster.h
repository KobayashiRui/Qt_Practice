#ifndef SOCKETMASTER_H
#define SOCKETMASTER_H
#include <QObject>
#include <QTcpSocket>

class SocketMaster : public QObject
{
    Q_OBJECT
public:
    explicit SocketMaster(QObject *parent = nullptr);
    bool connectState = false;
    Q_INVOKABLE void connect(QString addr, uint16_t  port);
    Q_INVOKABLE void disconnect();
    Q_INVOKABLE void sendData(QString sendData);
private slots:
    void handleConnected();
    void handleDisconnected();
    void handleReadyRead();
    void handleError(QAbstractSocket::SocketError error);
private:
    QTcpSocket* socket;

signals:

};

#endif // SOCKETMASTER_H
