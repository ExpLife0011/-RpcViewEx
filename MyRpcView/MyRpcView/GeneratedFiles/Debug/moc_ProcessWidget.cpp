/****************************************************************************
** Meta object code from reading C++ file 'ProcessWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RpcViewMain/RpcView/ProcessWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProcessWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProcessWidget_C_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessWidget_C_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessWidget_C_t qt_meta_stringdata_ProcessWidget_C = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ProcessWidget_C"
QT_MOC_LITERAL(1, 16, 15), // "ProcessSelected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 50, 15), // "ApplyUserFilter"
QT_MOC_LITERAL(5, 66, 17), // "TreeHeaderClicked"
QT_MOC_LITERAL(6, 84, 12), // "logicalIndex"
QT_MOC_LITERAL(7, 97, 17) // "ViewHeaderClicked"

    },
    "ProcessWidget_C\0ProcessSelected\0\0"
    "QTreeWidgetItem*\0ApplyUserFilter\0"
    "TreeHeaderClicked\0logicalIndex\0"
    "ViewHeaderClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessWidget_C[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    2,   47,    2, 0x08 /* Private */,
       1,    1,   52,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void ProcessWidget_C::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProcessWidget_C *_t = static_cast<ProcessWidget_C *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ProcessSelected((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 1: _t->ProcessSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->ProcessSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->ApplyUserFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->TreeHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ViewHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProcessWidget_C::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessWidget_C::ProcessSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ProcessWidget_C::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_ProcessWidget_C.data,
      qt_meta_data_ProcessWidget_C,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProcessWidget_C::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessWidget_C::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessWidget_C.stringdata0))
        return static_cast<void*>(const_cast< ProcessWidget_C*>(this));
    if (!strcmp(_clname, "View_I"))
        return static_cast< View_I*>(const_cast< ProcessWidget_C*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int ProcessWidget_C::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ProcessWidget_C::ProcessSelected(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
