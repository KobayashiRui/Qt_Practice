#include "helloworld.h"
#include <thread>
#include <iostream>
#include <QDebug>

HelloWorld::HelloWorld(QObject *parent) : QObject(parent)
{

}

void HelloWorld::start_thread()
{
    _worker_state = true;
    _worker = std::thread([&](){
        while(true){
            qDebug() << "counter: " << _counter << " worker state: " << _worker_state;
            std::this_thread::sleep_for(std::chrono::seconds(3));
            _counter++;
            emit countChanged();
            if(!_worker_state){
                break;
            }
        }
    });
}

void HelloWorld::stop_thread()
{
    qDebug() << "job end";
    _worker_state = false;
    _worker.join();
    _counter = 0;
    emit countChanged();
}

