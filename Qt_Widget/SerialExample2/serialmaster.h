#ifndef SERIALMASTER_H
#define SERIALMASTER_H

#include <QByteArray>
#include <QSerialPort>
#include <QTextStream>
#include <QTimer>
#include <QLineEdit>
#include <QTextEdit>

class SerialMaster : public QObject
{
    Q_OBJECT
public:
    SerialMaster(QObject *parent = nullptr);
    ~SerialMaster();
    QTextEdit *console;
    void setup(const QString &portName, const qint32 &baudRate);
    void write(const QByteArray &writeData);
private slots:
    void handleReadyRead();
    void handleTimeout();
    void handleError(QSerialPort::SerialPortError error);
    void handleBytesWritten(qint64 bytes);

private:
    QSerialPort *m_serialPort;
    QByteArray m_readData;
    //QTextStream m_standardOutput;
    QString m_portName;
    QTimer m_timer;
    QByteArray m_writeData;
    qint64 m_bytesWritten = 0;
};

#endif // SERIALMASTER_H
