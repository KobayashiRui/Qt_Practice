#include <iostream>
#include <Qt3DRender/QGeometry>
#include <Qt3DRender/QMesh>
#include <Qt3DRender/QAttribute>
#include <QGeometryRenderer>
#include <QObject>
#include <QVector>
#include <QList>

#include <QUrl>
#include <Qt3DRender/QBuffer>
#include <QByteArray>

#include <QPickTriangleEvent>
#include "ControlGeometry.h"

Qt3DRender::QGeometry *ControlGeometry::getGeometryData(Qt3DRender::QGeometry *geometry)
{
    std::cout << "defaultPositionAttributeName: " <<  Qt3DRender::QAttribute::defaultPositionAttributeName().toStdString() << std::endl;

    return geometry;
}

void ControlGeometry::test()
{
    std::cout << "this is test" << std::endl;
    std::cout << "defaultPositionAttributeName: " <<  Qt3DRender::QAttribute::defaultPositionAttributeName().toStdString() << std::endl;

}