#include "mainwidget.h"
#include "serialmaster.h"
#include <QVBoxLayout>
#include <QSerialPortInfo>
#include <QLineEdit>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{

    list_widget = new QListWidget();
    list_widget->setAcceptDrops( true );
    list_widget->setDragEnabled( true );
    list_widget->setDragDropMode( QAbstractItemView::DragDropMode::InternalMove );

    //QSerialPort* serialPort = new QSerialPort;
    QAbstractButton *getButton = new QPushButton(tr("GET PORT"));
    connect(getButton, &QAbstractButton::clicked, this, &MainWidget::getPort);

    QAbstractButton *setupButton = new QPushButton(tr("SETUP"));
    connect(setupButton, &QAbstractButton::clicked, this, &MainWidget::setUp);

    QAbstractButton *sendButton = new QPushButton(tr("SEND"));
    connect(sendButton, &QAbstractButton::clicked, this, &MainWidget::send);

    sendInput = new QLineEdit;

    QVBoxLayout* layout = new QVBoxLayout;
    //layout->addWidget(list_widget);
    layout->addWidget(list_widget);
    layout->addWidget(getButton);
    layout->addWidget(setupButton);
    layout->addWidget(sendInput);
    layout->addWidget(sendButton);

    setLayout(layout);

    m_serialmaster = new SerialMaster;
}

MainWidget::~MainWidget()
{
}

void MainWidget::getPort(){
    list_widget->clear();
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos){
        QListWidgetItem *_item = new QListWidgetItem(info.portName());
        _item->setData(QListWidgetItem::UserType, info.systemLocation());
        list_widget->addItem(_item);
        //qDebug() << info.systemLocation();
    }
}

void MainWidget::setUp(){
    const auto _item = list_widget->currentItem();
    qDebug() << _item->data(QListWidgetItem::Type).toString();
    qDebug() << _item->data(QListWidgetItem::UserType).toString();
    m_serialmaster->setup(_item->data(QListWidgetItem::UserType).toString(), 115200);
}

void MainWidget::send(){
    //qDebug() << sendInput->text();
    //QByteArray send_data("M114 \n");
    QString send_data = sendInput->text();
    send_data += "\n";
    m_serialmaster->write( send_data.toUtf8());
}
