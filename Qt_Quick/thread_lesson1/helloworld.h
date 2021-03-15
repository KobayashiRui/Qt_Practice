#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QObject>
#include <thread>

class HelloWorld : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int q_counter MEMBER _counter NOTIFY countChanged);
public:
    explicit HelloWorld(QObject *parent=nullptr);

    Q_INVOKABLE void start_thread();
    Q_INVOKABLE void stop_thread();
private:
    int _counter = 0;
    bool _worker_state =false;
    std::thread _worker;

signals:
    void countChanged();

};

#endif // HELLOWORLD_H
