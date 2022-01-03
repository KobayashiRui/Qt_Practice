#include "mainwindow.h"
#include <QListWidget>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    list_widget = new QListWidget();
    QListWidgetItem *item1 = new QListWidgetItem(QString("item1"));
    QListWidgetItem *item2 = new QListWidgetItem(QString("item2"));
    QListWidgetItem *item3 = new QListWidgetItem(QString("item3"));
    list_widget->addItem( item1 );
    list_widget->addItem( item2 );
    list_widget->addItem( item3 );

    list_widget->setAcceptDrops( true );
    list_widget->setDragEnabled( true );
    list_widget->setDragDropMode( QAbstractItemView::DragDropMode::InternalMove );


    QAbstractButton *getButton = new QPushButton(tr("GET"));
    connect(getButton, &QAbstractButton::clicked, this, &MainWindow::getListData);

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(list_widget);
    layout->addWidget(getButton);

    setLayout(layout);


}

MainWindow::~MainWindow()
{
}

void MainWindow::getListData(){
    qDebug() << "count:" << list_widget->count();
    for(int i=0; i <list_widget->count(); i++){
        qDebug() << list_widget->item(i)->data(QListWidgetItem::Type).toString();
    }
}

