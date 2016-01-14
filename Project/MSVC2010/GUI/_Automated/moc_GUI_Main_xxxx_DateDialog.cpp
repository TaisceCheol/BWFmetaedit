/****************************************************************************
** Meta object code from reading C++ file 'GUI_Main_xxxx_DateDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Source/GUI/Qt/GUI_Main_xxxx_DateDialog.h"
#include <qbytearray.h>
#include <qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUI_Main_xxxx_DateDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GUI_Main_xxxx_DateDialog_t {
    QByteArrayData data[12];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GUI_Main_xxxx_DateDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GUI_Main_xxxx_DateDialog_t qt_meta_stringdata_GUI_Main_xxxx_DateDialog = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 8),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 18),
QT_MOC_LITERAL(4, 54, 11),
QT_MOC_LITERAL(5, 66, 15),
QT_MOC_LITERAL(6, 82, 11),
QT_MOC_LITERAL(7, 94, 13),
QT_MOC_LITERAL(8, 108, 16),
QT_MOC_LITERAL(9, 125, 5),
QT_MOC_LITERAL(10, 131, 22),
QT_MOC_LITERAL(11, 154, 5)
    },
    "GUI_Main_xxxx_DateDialog\0OnAccept\0\0"
    "OnCalendar_Changed\0OnMenu_Date\0"
    "OnMenu_Calendar\0OnMenu_Text\0OnTextChanged\0"
    "OnCurrentChanged\0Index\0OnTimeActivatedChanged\0"
    "State\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUI_Main_xxxx_DateDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08,
       3,    0,   55,    2, 0x08,
       4,    0,   56,    2, 0x08,
       5,    0,   57,    2, 0x08,
       6,    0,   58,    2, 0x08,
       7,    0,   59,    2, 0x08,
       8,    1,   60,    2, 0x08,
      10,    1,   63,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void GUI_Main_xxxx_DateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GUI_Main_xxxx_DateDialog *_t = static_cast<GUI_Main_xxxx_DateDialog *>(_o);
        switch (_id) {
        case 0: _t->OnAccept(); break;
        case 1: _t->OnCalendar_Changed(); break;
        case 2: _t->OnMenu_Date(); break;
        case 3: _t->OnMenu_Calendar(); break;
        case 4: _t->OnMenu_Text(); break;
        case 5: _t->OnTextChanged(); break;
        case 6: _t->OnCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnTimeActivatedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GUI_Main_xxxx_DateDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GUI_Main_xxxx_DateDialog.data,
      qt_meta_data_GUI_Main_xxxx_DateDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *GUI_Main_xxxx_DateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI_Main_xxxx_DateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI_Main_xxxx_DateDialog.stringdata))
        return static_cast<void*>(const_cast< GUI_Main_xxxx_DateDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GUI_Main_xxxx_DateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
