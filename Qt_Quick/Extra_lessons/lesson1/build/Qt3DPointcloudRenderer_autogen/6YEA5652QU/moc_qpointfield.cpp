/****************************************************************************
** Meta object code from reading C++ file 'qpointfield.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/qpointfield.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpointfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPointfield_t {
    QByteArrayData data[23];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPointfield_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPointfield_t qt_meta_stringdata_QPointfield = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QPointfield"
QT_MOC_LITERAL(1, 12, 11), // "nameChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "name"
QT_MOC_LITERAL(4, 30, 13), // "offsetChanged"
QT_MOC_LITERAL(5, 44, 6), // "offset"
QT_MOC_LITERAL(6, 51, 15), // "datatypeChanged"
QT_MOC_LITERAL(7, 67, 15), // "PointFieldTypes"
QT_MOC_LITERAL(8, 83, 8), // "datatype"
QT_MOC_LITERAL(9, 92, 12), // "countChanged"
QT_MOC_LITERAL(10, 105, 5), // "count"
QT_MOC_LITERAL(11, 111, 7), // "setName"
QT_MOC_LITERAL(12, 119, 9), // "setOffset"
QT_MOC_LITERAL(13, 129, 11), // "setDatatype"
QT_MOC_LITERAL(14, 141, 8), // "setCount"
QT_MOC_LITERAL(15, 150, 4), // "INT8"
QT_MOC_LITERAL(16, 155, 5), // "UINT8"
QT_MOC_LITERAL(17, 161, 5), // "INT16"
QT_MOC_LITERAL(18, 167, 6), // "UINT16"
QT_MOC_LITERAL(19, 174, 5), // "INT32"
QT_MOC_LITERAL(20, 180, 6), // "UINT32"
QT_MOC_LITERAL(21, 187, 7), // "FLOAT32"
QT_MOC_LITERAL(22, 195, 7) // "FLOAT64"

    },
    "QPointfield\0nameChanged\0\0name\0"
    "offsetChanged\0offset\0datatypeChanged\0"
    "PointFieldTypes\0datatype\0countChanged\0"
    "count\0setName\0setOffset\0setDatatype\0"
    "setCount\0INT8\0UINT8\0INT16\0UINT16\0INT32\0"
    "UINT32\0FLOAT32\0FLOAT64"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPointfield[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::UInt,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::UInt,   10,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::UInt, 0x00495103,
       8, 0x80000000 | 7, 0x0049510b,
      10, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    8,   99,

 // enum data: key, value
      15, uint(QPointfield::INT8),
      16, uint(QPointfield::UINT8),
      17, uint(QPointfield::INT16),
      18, uint(QPointfield::UINT16),
      19, uint(QPointfield::INT32),
      20, uint(QPointfield::UINT32),
      21, uint(QPointfield::FLOAT32),
      22, uint(QPointfield::FLOAT64),

       0        // eod
};

void QPointfield::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPointfield *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->offsetChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->datatypeChanged((*reinterpret_cast< PointFieldTypes(*)>(_a[1]))); break;
        case 3: _t->countChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setOffset((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->setDatatype((*reinterpret_cast< PointFieldTypes(*)>(_a[1]))); break;
        case 7: _t->setCount((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPointfield::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointfield::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPointfield::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointfield::offsetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QPointfield::*)(PointFieldTypes );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointfield::datatypeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QPointfield::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointfield::countChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPointfield *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->offset(); break;
        case 2: *reinterpret_cast< PointFieldTypes*>(_v) = _t->datatype(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPointfield *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setOffset(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setDatatype(*reinterpret_cast< PointFieldTypes*>(_v)); break;
        case 3: _t->setCount(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPointfield::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QPointfield.data,
    qt_meta_data_QPointfield,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPointfield::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPointfield::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPointfield.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPointfield::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPointfield::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPointfield::offsetChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPointfield::datatypeChanged(PointFieldTypes _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPointfield::countChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
