#include <QDateTime>
#include <QObject>
#include <QString>
#include <Qt3DRender/QMesh>
#include <Qt3DRender/QGeometry>
#include <QGeometryRenderer>
#include <QVector>
#include <QList>
#include <QUrl>

#include <QPickTriangleEvent>

class ControlGeometry : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE Qt3DRender::QGeometry* getGeometryData(Qt3DRender::QGeometry *);
    Q_INVOKABLE void test();
    //Q_INVOKABLE Qt3DRender::QGeometry* setGeometryData(Qt3DRender::QGeometry *);
};