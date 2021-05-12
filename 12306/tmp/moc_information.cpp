/****************************************************************************
** Meta object code from reading C++ file 'information.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../information.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'information.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Information_t {
    QByteArrayData data[12];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Information_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Information_t qt_meta_stringdata_Information = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Information"
QT_MOC_LITERAL(1, 12, 24), // "on_update_button_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "on_sure_button_clicked"
QT_MOC_LITERAL(4, 61, 24), // "on_cancel_button_clicked"
QT_MOC_LITERAL(5, 86, 33), // "on_update_password_button_cli..."
QT_MOC_LITERAL(6, 120, 30), // "on_passenger_table_cellClicked"
QT_MOC_LITERAL(7, 151, 3), // "row"
QT_MOC_LITERAL(8, 155, 6), // "column"
QT_MOC_LITERAL(9, 162, 34), // "on_change_passenger_button_cl..."
QT_MOC_LITERAL(10, 197, 34), // "on_delete_passenger_button_cl..."
QT_MOC_LITERAL(11, 232, 31) // "on_add_passenger_button_clicked"

    },
    "Information\0on_update_button_clicked\0"
    "\0on_sure_button_clicked\0"
    "on_cancel_button_clicked\0"
    "on_update_password_button_clicked\0"
    "on_passenger_table_cellClicked\0row\0"
    "column\0on_change_passenger_button_clicked\0"
    "on_delete_passenger_button_clicked\0"
    "on_add_passenger_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Information[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    2,   58,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Information::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Information *_t = static_cast<Information *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_update_button_clicked(); break;
        case 1: _t->on_sure_button_clicked(); break;
        case 2: _t->on_cancel_button_clicked(); break;
        case 3: _t->on_update_password_button_clicked(); break;
        case 4: _t->on_passenger_table_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_change_passenger_button_clicked(); break;
        case 6: _t->on_delete_passenger_button_clicked(); break;
        case 7: _t->on_add_passenger_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Information::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Information.data,
      qt_meta_data_Information,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Information::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Information::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Information.stringdata0))
        return static_cast<void*>(const_cast< Information*>(this));
    return QWidget::qt_metacast(_clname);
}

int Information::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
