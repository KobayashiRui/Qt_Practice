/****************************************************************************
** Meta object code from reading C++ file 'ControlGeometry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ControlGeometry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControlGeometry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlGeometry_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlGeometry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlGeometry_t qt_meta_stringdata_ControlGeometry = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ControlGeometry"
QT_MOC_LITERAL(1, 16, 15), // "getGeometryData"
QT_MOC_LITERAL(2, 32, 22), // "Qt3DRender::QGeometry*"
QT_MOC_LITERAL(3, 55, 0), // ""
QT_MOC_LITERAL(4, 56, 4) // "test"

    },
    "ControlGeometry\0getGeometryData\0"
    "Qt3DRender::QGeometry*\0\0test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlGeometry[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    3, 0x02 /* Public */,
       4,    0,   27,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, 0x80000000 | 2,    3,
    QMetaType::Void,

       0        // eod
};

void ControlGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlGeometry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Qt3DRender::QGeometry* _r = _t->getGeometryData((*reinterpret_cast< Qt3DRender::QGeometry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt3DRender::QGeometry**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->test(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QGeometry* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlGeometry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ControlGeometry.data,
    qt_meta_data_ControlGeometry,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlGeometry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ControlGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE