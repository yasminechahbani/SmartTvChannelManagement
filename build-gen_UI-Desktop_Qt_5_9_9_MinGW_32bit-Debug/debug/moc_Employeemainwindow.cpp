/****************************************************************************
** Meta object code from reading C++ file 'Employeemainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Employeemainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Employeemainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EmployeeMainWindow_t {
    QByteArrayData data[13];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmployeeMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmployeeMainWindow_t qt_meta_stringdata_EmployeeMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EmployeeMainWindow"
QT_MOC_LITERAL(1, 19, 18), // "on_ajouter_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "on_delete_button_clicked"
QT_MOC_LITERAL(4, 64, 26), // "on_list_all_button_clicked"
QT_MOC_LITERAL(5, 91, 27), // "on_clear_all_button_clicked"
QT_MOC_LITERAL(6, 119, 23), // "on_Generate_PDF_clicked"
QT_MOC_LITERAL(7, 143, 15), // "on_stat_clicked"
QT_MOC_LITERAL(8, 159, 19), // "on_Sponsors_clicked"
QT_MOC_LITERAL(9, 179, 17), // "on_guests_clicked"
QT_MOC_LITERAL(10, 197, 21), // "on_equipement_clicked"
QT_MOC_LITERAL(11, 219, 16), // "on_shows_clicked"
QT_MOC_LITERAL(12, 236, 14) // "readFromSerial"

    },
    "EmployeeMainWindow\0on_ajouter_clicked\0"
    "\0on_delete_button_clicked\0"
    "on_list_all_button_clicked\0"
    "on_clear_all_button_clicked\0"
    "on_Generate_PDF_clicked\0on_stat_clicked\0"
    "on_Sponsors_clicked\0on_guests_clicked\0"
    "on_equipement_clicked\0on_shows_clicked\0"
    "readFromSerial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmployeeMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EmployeeMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmployeeMainWindow *_t = static_cast<EmployeeMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ajouter_clicked(); break;
        case 1: _t->on_delete_button_clicked(); break;
        case 2: _t->on_list_all_button_clicked(); break;
        case 3: _t->on_clear_all_button_clicked(); break;
        case 4: _t->on_Generate_PDF_clicked(); break;
        case 5: _t->on_stat_clicked(); break;
        case 6: _t->on_Sponsors_clicked(); break;
        case 7: _t->on_guests_clicked(); break;
        case 8: _t->on_equipement_clicked(); break;
        case 9: _t->on_shows_clicked(); break;
        //case 10: _t->readFromSerial(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EmployeeMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EmployeeMainWindow.data,
      qt_meta_data_EmployeeMainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EmployeeMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmployeeMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EmployeeMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int EmployeeMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
