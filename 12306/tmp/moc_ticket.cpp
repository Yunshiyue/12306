/****************************************************************************
** Meta object code from reading C++ file 'ticket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ticket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ticket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ticket_t {
    QByteArrayData data[21];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ticket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ticket_t qt_meta_stringdata_Ticket = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Ticket"
QT_MOC_LITERAL(1, 7, 24), // "on_search_button_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 37), // "on_station_station_widget_cel..."
QT_MOC_LITERAL(4, 71, 3), // "row"
QT_MOC_LITERAL(5, 75, 6), // "column"
QT_MOC_LITERAL(6, 82, 34), // "on_choose_passenger_button_cl..."
QT_MOC_LITERAL(7, 117, 41), // "on_seat_type_combo_box_curren..."
QT_MOC_LITERAL(8, 159, 9), // "seat_type"
QT_MOC_LITERAL(9, 169, 13), // "on_A2_toggled"
QT_MOC_LITERAL(10, 183, 7), // "checked"
QT_MOC_LITERAL(11, 191, 13), // "on_B2_toggled"
QT_MOC_LITERAL(12, 205, 13), // "on_C2_toggled"
QT_MOC_LITERAL(13, 219, 13), // "on_D2_toggled"
QT_MOC_LITERAL(14, 233, 13), // "on_F2_toggled"
QT_MOC_LITERAL(15, 247, 13), // "on_A1_toggled"
QT_MOC_LITERAL(16, 261, 13), // "on_B1_toggled"
QT_MOC_LITERAL(17, 275, 13), // "on_C1_toggled"
QT_MOC_LITERAL(18, 289, 13), // "on_D1_toggled"
QT_MOC_LITERAL(19, 303, 13), // "on_F1_toggled"
QT_MOC_LITERAL(20, 317, 30) // "on_submit_order_button_clicked"

    },
    "Ticket\0on_search_button_clicked\0\0"
    "on_station_station_widget_cellClicked\0"
    "row\0column\0on_choose_passenger_button_clicked\0"
    "on_seat_type_combo_box_currentTextChanged\0"
    "seat_type\0on_A2_toggled\0checked\0"
    "on_B2_toggled\0on_C2_toggled\0on_D2_toggled\0"
    "on_F2_toggled\0on_A1_toggled\0on_B1_toggled\0"
    "on_C1_toggled\0on_D1_toggled\0on_F1_toggled\0"
    "on_submit_order_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ticket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    2,   90,    2, 0x08 /* Private */,
       6,    0,   95,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      11,    1,  102,    2, 0x08 /* Private */,
      12,    1,  105,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      14,    1,  111,    2, 0x08 /* Private */,
      15,    1,  114,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,
      17,    1,  120,    2, 0x08 /* Private */,
      18,    1,  123,    2, 0x08 /* Private */,
      19,    1,  126,    2, 0x08 /* Private */,
      20,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void Ticket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ticket *_t = static_cast<Ticket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_search_button_clicked(); break;
        case 1: _t->on_station_station_widget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_choose_passenger_button_clicked(); break;
        case 3: _t->on_seat_type_combo_box_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_A2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_B2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_C2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_D2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_F2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_A1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_B1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_C1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_D1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_F1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_submit_order_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Ticket::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Ticket.data,
      qt_meta_data_Ticket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Ticket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ticket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ticket.stringdata0))
        return static_cast<void*>(const_cast< Ticket*>(this));
    return QWidget::qt_metacast(_clname);
}

int Ticket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
