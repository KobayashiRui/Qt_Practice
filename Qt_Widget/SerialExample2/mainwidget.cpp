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

    QAbstractButton *getGcode = new QPushButton(tr("SELECT GCODE"));
    connect(getGcode, &QAbstractButton::clicked, this, &MainWidget::getGcode);

    QAbstractButton *sendGcode = new QPushButton(tr("SEND GCODE"));
    connect(sendGcode, &QAbstractButton::clicked, this, &MainWidget::sendGcode);

    sendInput = new QLineEdit;

    m_serialmaster = new SerialMaster;

    m_serialmaster->console = new QTextEdit;

    QVBoxLayout* layout = new QVBoxLayout;
    //layout->addWidget(list_widget);
    layout->addWidget(list_widget);
    layout->addWidget(getButton);
    layout->addWidget(setupButton);
    layout->addWidget(sendInput);
    layout->addWidget(sendButton);
    layout->addWidget(getGcode);
    layout->addWidget(sendGcode);
    layout->addWidget(m_serialmaster->console);

    setLayout(layout);

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

void MainWidget::getGcode()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::ExistingFiles);
    fileDialog.setAcceptMode(QFileDialog::AcceptOpen);
    fileDialog.setDirectory(QStandardPaths::standardLocations(QStandardPaths::MoviesLocation).value(0, QDir::homePath()));
    if (fileDialog.exec() == QDialog::Accepted)
        //qDebug() << fileDialog.selectedUrls() ;
        //playListMaster->setList(fileDialog.selectedUrls());
        gcode_path = fileDialog.selectedFiles().at(0);
}

void MainWidget::sendGcode()
{
    QFile file(gcode_path);
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        qDebug() << "g:" << line;
        line += "\n";
        //QStringList fields = line.split(",");
        m_serialmaster->write(line.toUtf8());
        //model->appendRow(fields);
    }

    file.close();
}
