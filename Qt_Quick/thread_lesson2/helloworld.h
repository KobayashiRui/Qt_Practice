#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QObject>
#include <thread>

struct Datas{
    uint32_t count = 0;
    std::string name = "Hogehoge";
    Datas(uint32_t init_count, std::string name): count{init_count}, name{name} {};
};

class HelloWorker{

public:   
    Datas _datas;
    HelloWorker();
    HelloWorker(uint32_t init_count, std::string name);
    void count_up();
    void reset_count();
};


class HelloWorld : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(int q_counter MEMBER _counter NOTIFY countChanged);
    Q_PROPERTY(int q_counter READ getCounter NOTIFY countChanged);
public:
    explicit HelloWorld(QObject *parent=nullptr);
    Q_INVOKABLE void start_thread();
    Q_INVOKABLE void stop_thread();
    int getCounter() { return _hello_worker._datas.count;}
private:
    bool _worker_state =false;
    std::thread _worker;
    HelloWorker _hello_worker = HelloWorker(0, "hogefuga");

signals:
    void countChanged();
};

#endif // HELLOWORLD_H

