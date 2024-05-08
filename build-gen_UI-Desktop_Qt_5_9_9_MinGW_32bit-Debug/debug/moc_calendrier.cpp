/****************************************************************************
** Meta object code from reading C++ file 'calendrier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../calendrier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calendrier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_calendrier_t {
    QByteArrayData data[10];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_calendrier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_calendrier_t qt_meta_stringdata_calendrier = {
    {
QT_MOC_LITERAL(0, 0, 10), // "calendrier"
QT_MOC_LITERAL(1, 11, 12), // "dateSelected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "selectedDate"
QT_MOC_LITERAL(4, 38, 9), // "noteAdded"
QT_MOC_LITERAL(5, 48, 4), // "date"
QT_MOC_LITERAL(6, 53, 4), // "note"
QT_MOC_LITERAL(7, 58, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(8, 83, 9), // "showNotes"
QT_MOC_LITERAL(9, 93, 11) // "addCheckBox"

    },
    "calendrier\0dateSelected\0\0selectedDate\0"
    "noteAdded\0date\0note\0on_pushButton_11_clicked\0"
    "showNotes\0addCheckBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_calendrier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   47,    2, 0x08 /* Private */,
       8,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QDate, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void,

       0        // eod
};

void calendrier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        calendrier *_t = static_cast<calendrier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dateSelected((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->noteAdded((*reinterpret_cast< const QDate(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->on_pushButton_11_clicked(); break;
        case 3: _t->showNotes((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->addCheckBox(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (calendrier::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&calendrier::dateSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (calendrier::*_t)(const QDate & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&calendrier::noteAdded)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject calendrier::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_calendrier.data,
      qt_meta_data_calendrier,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *calendrier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *calendrier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_calendrier.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int calendrier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void calendrier::dateSelected(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void calendrier::noteAdded(const QDate & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
