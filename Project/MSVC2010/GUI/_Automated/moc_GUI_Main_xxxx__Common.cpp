/****************************************************************************
** Meta object code from reading C++ file 'GUI_Main_xxxx__Common.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Source/GUI/Qt/GUI_Main_xxxx__Common.h"
#include <qbytearray.h>
#include <qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUI_Main_xxxx__Common.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GUI_Main_xxxx__Common_t {
    QByteArrayData data[3];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GUI_Main_xxxx__Common_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GUI_Main_xxxx__Common_t qt_meta_stringdata_GUI_Main_xxxx__Common = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 22),
QT_MOC_LITERAL(2, 45, 0)
    },
    "GUI_Main_xxxx__Common\0OnItemSelectionChanged\0"
    "\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUI_Main_xxxx__Common[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GUI_Main_xxxx__Common::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GUI_Main_xxxx__Common *_t = static_cast<GUI_Main_xxxx__Common *>(_o);
        switch (_id) {
        case 0: _t->OnItemSelectionChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GUI_Main_xxxx__Common::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_GUI_Main_xxxx__Common.data,
      qt_meta_data_GUI_Main_xxxx__Common,  qt_static_metacall, 0, 0}
};


const QMetaObject *GUI_Main_xxxx__Common::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI_Main_xxxx__Common::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI_Main_xxxx__Common.stringdata))
        return static_cast<void*>(const_cast< GUI_Main_xxxx__Common*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int GUI_Main_xxxx__Common::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OriginationTimeDelegate_t {
    QByteArrayData data[1];
    char stringdata[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OriginationTimeDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OriginationTimeDelegate_t qt_meta_stringdata_OriginationTimeDelegate = {
    {
QT_MOC_LITERAL(0, 0, 23)
    },
    "OriginationTimeDelegate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OriginationTimeDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OriginationTimeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OriginationTimeDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_OriginationTimeDelegate.data,
      qt_meta_data_OriginationTimeDelegate,  qt_static_metacall, 0, 0}
};


const QMetaObject *OriginationTimeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OriginationTimeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OriginationTimeDelegate.stringdata))
        return static_cast<void*>(const_cast< OriginationTimeDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int OriginationTimeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_TimeReferenceDelegate_t {
    QByteArrayData data[1];
    char stringdata[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TimeReferenceDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TimeReferenceDelegate_t qt_meta_stringdata_TimeReferenceDelegate = {
    {
QT_MOC_LITERAL(0, 0, 21)
    },
    "TimeReferenceDelegate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeReferenceDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TimeReferenceDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TimeReferenceDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_TimeReferenceDelegate.data,
      qt_meta_data_TimeReferenceDelegate,  qt_static_metacall, 0, 0}
};


const QMetaObject *TimeReferenceDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeReferenceDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeReferenceDelegate.stringdata))
        return static_cast<void*>(const_cast< TimeReferenceDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int TimeReferenceDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
