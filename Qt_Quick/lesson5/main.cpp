#include <QQuickView>
#include <QGuiApplication>
#include <QQmlContext>
#include <QSurfaceFormat>
#include "ControlGeometry.h"

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);
    QQuickView view;
    QSurfaceFormat format;
    ControlGeometry controlGeometry;

    format.setVersion(3,3);
    format.setProfile(QSurfaceFormat::CoreProfile);
    format.setDepthBufferSize(24);
    format.setStencilBufferSize(8);

    view.setFormat(format);

    view.resize(500, 500);
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.rootContext()->setContextProperty("controlGeometry", &controlGeometry);
    view.setSource(QUrl("qrc:/main.qml"));

    view.show();

    return app.exec();
}