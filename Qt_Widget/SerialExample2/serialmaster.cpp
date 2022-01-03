#include "serialmaster.h"
#include <QSerialPort>
#include <QDebug>

SerialMaster::SerialMaster(QObject *parent)
    :QObject(parent)
{
}

SerialMaster::~SerialMaster()
{
}

void SerialMaster::setup(const QString &portName, const qint32 &baudRate)
{
    m_portName = portName;
    m_serialPort = new QSerialPort;
    m_serialPort->setPortName(m_portName);
    m_serialPort->setBaudRate(baudRate, QSerialPort::AllDirections);

    if(!m_serialPort->open(QIODevice::ReadWrite)){
        qDebug() << "Error";
    }
    connect(m_serialPort, &QSerialPort::bytesWritten,
            this, &SerialMaster::handleBytesWritten);
    connect(m_serialPort, &QSerialPort::readyRead, this, &SerialMaster::handleReadyRead);
    connect(m_serialPort, &QSerialPort::errorOccurred, this, &SerialMaster::handleError);
    connect(&m_timer, &QTimer::timeout, this, &SerialMaster::handleTimeout);

    //m_timer.start(5000);
    m_timer.start(100);
}

void SerialMaster::handleReadyRead()
{
    //qDebug() << "read ready";
    m_readData.append(m_serialPort->readAll());

    if (!m_timer.isActive())
        //m_timer.start(5000);
        m_timer.start(100);
}


void SerialMaster::handleTimeout()
{
    if (m_readData.isEmpty()) {
        //qDebug() << "Empty";
    } else {
        qDebug() << QObject::tr("Data successfully received from port %1")
                            .arg(m_serialPort->portName());
        qDebug() << QString(m_readData);
        console->append(QString(m_readData));
        m_readData.clear();
    }

    //QCoreApplication::quit();
}

void SerialMaster::handleError(QSerialPort::SerialPortError serialPortError)
{
    if (serialPortError == QSerialPort::ReadError) {
        qDebug() << "handler error";
        //QCoreApplication::exit(1);
    }
}

void SerialMaster::handleBytesWritten(qint64 bytes)
{
    m_bytesWritten += bytes;
    if (m_bytesWritten == m_writeData.size()) {
        m_bytesWritten = 0;
        qDebug() << QObject::tr("Data successfully sent to port %1")
                            .arg(m_serialPort->portName()) << "\n";
    }
}

void SerialMaster::write(const QByteArray &writeData)
{
    m_writeData = writeData;

    const qint64 bytesWritten = m_serialPort->write(writeData);

    if (bytesWritten == -1) {
        qDebug() << QObject::tr("Failed to write the data to port %1, error: %2")
                            .arg(m_serialPort->portName())
                            .arg(m_serialPort->errorString())
                         << "\n";
    } else if (bytesWritten != m_writeData.size()) {
        qDebug() << QObject::tr("Failed to write all the data to port %1, error: %2")
                            .arg(m_serialPort->portName())
                            .arg(m_serialPort->errorString())
                         << "\n";
    }

    //m_timer.start(5000);
    m_timer.start(100);
}
