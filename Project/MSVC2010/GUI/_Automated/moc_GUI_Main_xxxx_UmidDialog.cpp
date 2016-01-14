/****************************************************************************
** Meta object code from reading C++ file 'GUI_Main_xxxx_UmidDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Source/GUI/Qt/GUI_Main_xxxx_UmidDialog.h"
#include <qbytearray.h>
#include <qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUI_Main_xxxx_UmidDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GUI_Main_xxxx_UmidDialog_t {
    QByteArrayData data[16];
    char stringdata[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GUI_Main_xxxx_UmidDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GUI_Main_xxxx_UmidDialog_t qt_meta_stringdata_GUI_Main_xxxx_UmidDialog = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 8),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 13),
QT_MOC_LITERAL(4, 49, 11),
QT_MOC_LITERAL(5, 61, 11),
QT_MOC_LITERAL(6, 73, 11),
QT_MOC_LITERAL(7, 85, 11),
QT_MOC_LITERAL(8, 97, 16),
QT_MOC_LITERAL(9, 114, 5),
QT_MOC_LITERAL(10, 120, 19),
QT_MOC_LITERAL(11, 140, 7),
QT_MOC_LITERAL(12, 148, 19),
QT_MOC_LITERAL(13, 168, 19),
QT_MOC_LITERAL(14, 188, 18),
QT_MOC_LITERAL(15, 207, 18)
    },
    "GUI_Main_xxxx_UmidDialog\0OnAccept\0\0"
    "OnTextChanged\0OnMenu_Load\0OnMenu_Save\0"
    "OnMenu_List\0OnMenu_Text\0OnCurrentChanged\0"
    "Index\0OnSignature_Toggled\0Checked\0"
    "OnvalueChanged_BM_T\0OnvalueChanged_BM_S\0"
    "OnvalueChanged_S_T\0OnvalueChanged_S_S\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUI_Main_xxxx_UmidDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08,
       3,    1,   75,    2, 0x08,
       4,    0,   78,    2, 0x08,
       5,    0,   79,    2, 0x08,
       6,    0,   80,    2, 0x08,
       7,    0,   81,    2, 0x08,
       8,    1,   82,    2, 0x08,
      10,    1,   85,    2, 0x08,
      12,    1,   88,    2, 0x08,
      13,    1,   91,    2, 0x08,
      14,    1,   94,    2, 0x08,
      15,    1,   97,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void GUI_Main_xxxx_UmidDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GUI_Main_xxxx_UmidDialog *_t = static_cast<GUI_Main_xxxx_UmidDialog *>(_o);
        switch (_id) {
        case 0: _t->OnAccept(); break;
        case 1: _t->OnTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnMenu_Load(); break;
        case 3: _t->OnMenu_Save(); break;
        case 4: _t->OnMenu_List(); break;
        case 5: _t->OnMenu_Text(); break;
        case 6: _t->OnCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnSignature_Toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->OnvalueChanged_BM_T((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 9: _t->OnvalueChanged_BM_S((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->OnvalueChanged_S_T((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 11: _t->OnvalueChanged_S_S((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GUI_Main_xxxx_UmidDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GUI_Main_xxxx_UmidDialog.data,
      qt_meta_data_GUI_Main_xxxx_UmidDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *GUI_Main_xxxx_UmidDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI_Main_xxxx_UmidDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI_Main_xxxx_UmidDialog.stringdata))
        return static_cast<void*>(const_cast< GUI_Main_xxxx_UmidDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GUI_Main_xxxx_UmidDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
