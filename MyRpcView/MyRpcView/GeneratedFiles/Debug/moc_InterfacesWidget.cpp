/****************************************************************************
** Meta object code from reading C++ file 'InterfacesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RpcViewMain/RpcView/InterfacesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InterfacesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InterfacesWidget_C_t {
    QByteArrayData data[13];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfacesWidget_C_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfacesWidget_C_t qt_meta_stringdata_InterfacesWidget_C = {
    {
QT_MOC_LITERAL(0, 0, 18), // "InterfacesWidget_C"
QT_MOC_LITERAL(1, 19, 17), // "InterfaceSelected"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3), // "Pid"
QT_MOC_LITERAL(4, 42, 10), // "RPC_IF_ID*"
QT_MOC_LITERAL(5, 53, 3), // "pIf"
QT_MOC_LITERAL(6, 57, 21), // "SigDecompileInterface"
QT_MOC_LITERAL(7, 79, 15), // "ApplyUserFilter"
QT_MOC_LITERAL(8, 95, 5), // "Index"
QT_MOC_LITERAL(9, 101, 11), // "SetRowColor"
QT_MOC_LITERAL(10, 113, 5), // "Color"
QT_MOC_LITERAL(11, 119, 14), // "ShowUserFilter"
QT_MOC_LITERAL(12, 134, 14) // "HideUserFilter"

    },
    "InterfacesWidget_C\0InterfaceSelected\0"
    "\0Pid\0RPC_IF_ID*\0pIf\0SigDecompileInterface\0"
    "ApplyUserFilter\0Index\0SetRowColor\0"
    "Color\0ShowUserFilter\0HideUserFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfacesWidget_C[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   59,    2, 0x0a /* Public */,
       1,    1,   62,    2, 0x08 /* Private */,
       9,    2,   65,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QColor,    8,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InterfacesWidget_C::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InterfacesWidget_C *_t = static_cast<InterfacesWidget_C *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InterfaceSelected((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< RPC_IF_ID*(*)>(_a[2]))); break;
        case 1: _t->SigDecompileInterface((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< RPC_IF_ID*(*)>(_a[2]))); break;
        case 2: _t->ApplyUserFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->InterfaceSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->SetRowColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 5: _t->ShowUserFilter(); break;
        case 6: _t->HideUserFilter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InterfacesWidget_C::*_t)(quint32 , RPC_IF_ID * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InterfacesWidget_C::InterfaceSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InterfacesWidget_C::*_t)(quint32 , RPC_IF_ID * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InterfacesWidget_C::SigDecompileInterface)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject InterfacesWidget_C::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_InterfacesWidget_C.data,
      qt_meta_data_InterfacesWidget_C,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InterfacesWidget_C::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfacesWidget_C::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InterfacesWidget_C.stringdata0))
        return static_cast<void*>(const_cast< InterfacesWidget_C*>(this));
    if (!strcmp(_clname, "View_I"))
        return static_cast< View_I*>(const_cast< InterfacesWidget_C*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int InterfacesWidget_C::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void InterfacesWidget_C::InterfaceSelected(quint32 _t1, RPC_IF_ID * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InterfacesWidget_C::SigDecompileInterface(quint32 _t1, RPC_IF_ID * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
