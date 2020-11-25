/****************************************************************************
** Meta object code from reading C++ file 'qpointcloud.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/qpointcloud.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpointcloud.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPointcloud_t {
    QByteArrayData data[34];
    char stringdata0[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPointcloud_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPointcloud_t qt_meta_stringdata_QPointcloud = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QPointcloud"
QT_MOC_LITERAL(1, 12, 13), // "heightChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "height"
QT_MOC_LITERAL(4, 34, 12), // "widthChanged"
QT_MOC_LITERAL(5, 47, 5), // "width"
QT_MOC_LITERAL(6, 53, 13), // "fieldsChanged"
QT_MOC_LITERAL(7, 67, 29), // "QQmlListProperty<QPointfield>"
QT_MOC_LITERAL(8, 97, 6), // "fields"
QT_MOC_LITERAL(9, 104, 19), // "is_bigendianChanged"
QT_MOC_LITERAL(10, 124, 12), // "is_bigendian"
QT_MOC_LITERAL(11, 137, 17), // "point_stepChanged"
QT_MOC_LITERAL(12, 155, 10), // "point_step"
QT_MOC_LITERAL(13, 166, 15), // "row_stepChanged"
QT_MOC_LITERAL(14, 182, 8), // "row_step"
QT_MOC_LITERAL(15, 191, 11), // "dataChanged"
QT_MOC_LITERAL(16, 203, 4), // "data"
QT_MOC_LITERAL(17, 208, 15), // "is_denseChanged"
QT_MOC_LITERAL(18, 224, 8), // "is_dense"
QT_MOC_LITERAL(19, 233, 14), // "minimumChanged"
QT_MOC_LITERAL(20, 248, 7), // "minimum"
QT_MOC_LITERAL(21, 256, 14), // "maximumChanged"
QT_MOC_LITERAL(22, 271, 7), // "maximum"
QT_MOC_LITERAL(23, 279, 15), // "centroidChanged"
QT_MOC_LITERAL(24, 295, 8), // "centroid"
QT_MOC_LITERAL(25, 304, 13), // "offsetChanged"
QT_MOC_LITERAL(26, 318, 6), // "offset"
QT_MOC_LITERAL(27, 325, 9), // "setHeight"
QT_MOC_LITERAL(28, 335, 8), // "setWidth"
QT_MOC_LITERAL(29, 344, 15), // "setIs_bigendian"
QT_MOC_LITERAL(30, 360, 13), // "setPoint_step"
QT_MOC_LITERAL(31, 374, 11), // "setRow_step"
QT_MOC_LITERAL(32, 386, 7), // "setData"
QT_MOC_LITERAL(33, 394, 11) // "setIs_dense"

    },
    "QPointcloud\0heightChanged\0\0height\0"
    "widthChanged\0width\0fieldsChanged\0"
    "QQmlListProperty<QPointfield>\0fields\0"
    "is_bigendianChanged\0is_bigendian\0"
    "point_stepChanged\0point_step\0"
    "row_stepChanged\0row_step\0dataChanged\0"
    "data\0is_denseChanged\0is_dense\0"
    "minimumChanged\0minimum\0maximumChanged\0"
    "maximum\0centroidChanged\0centroid\0"
    "offsetChanged\0offset\0setHeight\0setWidth\0"
    "setIs_bigendian\0setPoint_step\0setRow_step\0"
    "setData\0setIs_dense"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPointcloud[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      12,  166, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       6,    1,  115,    2, 0x06 /* Public */,
       9,    1,  118,    2, 0x06 /* Public */,
      11,    1,  121,    2, 0x06 /* Public */,
      13,    1,  124,    2, 0x06 /* Public */,
      15,    1,  127,    2, 0x06 /* Public */,
      17,    1,  130,    2, 0x06 /* Public */,
      19,    1,  133,    2, 0x06 /* Public */,
      21,    1,  136,    2, 0x06 /* Public */,
      23,    1,  139,    2, 0x06 /* Public */,
      25,    1,  142,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  145,    2, 0x0a /* Public */,
      28,    1,  148,    2, 0x0a /* Public */,
      29,    1,  151,    2, 0x0a /* Public */,
      30,    1,  154,    2, 0x0a /* Public */,
      31,    1,  157,    2, 0x0a /* Public */,
      32,    1,  160,    2, 0x0a /* Public */,
      33,    1,  163,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::UChar,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::UInt,   14,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void, QMetaType::UChar,   18,
    QMetaType::Void, QMetaType::QVector3D,   20,
    QMetaType::Void, QMetaType::QVector3D,   22,
    QMetaType::Void, QMetaType::QVector3D,   24,
    QMetaType::Void, QMetaType::QVector3D,   26,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UChar,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::UInt,   14,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void, QMetaType::UChar,   18,

 // properties: name, type, flags
       3, QMetaType::UInt, 0x00495103,
       5, QMetaType::UInt, 0x00495103,
       8, 0x80000000 | 7, 0x00495009,
      10, QMetaType::UChar, 0x00495103,
      12, QMetaType::UInt, 0x00495103,
      14, QMetaType::UInt, 0x00495103,
      16, QMetaType::QByteArray, 0x00495103,
      18, QMetaType::UChar, 0x00495103,
      20, QMetaType::QVector3D, 0x00495001,
      22, QMetaType::QVector3D, 0x00495001,
      24, QMetaType::QVector3D, 0x00495001,
      26, QMetaType::QVector3D, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,

       0        // eod
};

void QPointcloud::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPointcloud *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->heightChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 1: _t->widthChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->fieldsChanged((*reinterpret_cast< QQmlListProperty<QPointfield>(*)>(_a[1]))); break;
        case 3: _t->is_bigendianChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->point_stepChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->row_stepChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->dataChanged((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->is_denseChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->minimumChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 9: _t->maximumChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 10: _t->centroidChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 11: _t->offsetChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 12: _t->setHeight((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 13: _t->setWidth((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 14: _t->setIs_bigendian((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 15: _t->setPoint_step((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 16: _t->setRow_step((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 17: _t->setData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 18: _t->setIs_dense((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPointcloud::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::heightChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::widthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(QQmlListProperty<QPointfield> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::fieldsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::is_bigendianChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::point_stepChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::row_stepChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::dataChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::is_denseChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(QVector3D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::minimumChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(QVector3D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::maximumChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(QVector3D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::centroidChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QPointcloud::*)(QVector3D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointcloud::offsetChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPointcloud *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->height(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->width(); break;
        case 2: *reinterpret_cast< QQmlListProperty<QPointfield>*>(_v) = _t->fields(); break;
        case 3: *reinterpret_cast< quint8*>(_v) = _t->is_bigendian(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->point_step(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->row_step(); break;
        case 6: *reinterpret_cast< QByteArray*>(_v) = _t->data(); break;
        case 7: *reinterpret_cast< quint8*>(_v) = _t->is_dense(); break;
        case 8: *reinterpret_cast< QVector3D*>(_v) = _t->minimum(); break;
        case 9: *reinterpret_cast< QVector3D*>(_v) = _t->maximum(); break;
        case 10: *reinterpret_cast< QVector3D*>(_v) = _t->centroid(); break;
        case 11: *reinterpret_cast< QVector3D*>(_v) = _t->offset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPointcloud *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHeight(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setWidth(*reinterpret_cast< quint32*>(_v)); break;
        case 3: _t->setIs_bigendian(*reinterpret_cast< quint8*>(_v)); break;
        case 4: _t->setPoint_step(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setRow_step(*reinterpret_cast< quint32*>(_v)); break;
        case 6: _t->setData(*reinterpret_cast< QByteArray*>(_v)); break;
        case 7: _t->setIs_dense(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPointcloud::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QPointcloud.data,
    qt_meta_data_QPointcloud,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPointcloud::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPointcloud::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPointcloud.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPointcloud::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPointcloud::heightChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPointcloud::widthChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPointcloud::fieldsChanged(QQmlListProperty<QPointfield> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPointcloud::is_bigendianChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QPointcloud::point_stepChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QPointcloud::row_stepChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QPointcloud::dataChanged(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QPointcloud::is_denseChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QPointcloud::minimumChanged(QVector3D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QPointcloud::maximumChanged(QVector3D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QPointcloud::centroidChanged(QVector3D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QPointcloud::offsetChanged(QVector3D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
