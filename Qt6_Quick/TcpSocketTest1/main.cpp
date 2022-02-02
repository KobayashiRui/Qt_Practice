#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "socketmaster.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/TcpSocketTest1/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    SocketMaster socketMaster;
    engine.rootContext()->setContextProperty("socketMaster", &socketMaster);

    engine.load(url);

    return app.exec();
}
