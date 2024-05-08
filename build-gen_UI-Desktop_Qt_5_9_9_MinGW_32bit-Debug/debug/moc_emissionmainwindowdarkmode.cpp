/****************************************************************************
** Meta object code from reading C++ file 'emissionmainwindowdarkmode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../emissionmainwindowdarkmode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emissionmainwindowdarkmode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EmissionMainWindowDarkMode_t {
    QByteArrayData data[18];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmissionMainWindowDarkMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmissionMainWindowDarkMode_t qt_meta_stringdata_EmissionMainWindowDarkMode = {
    {
QT_MOC_LITERAL(0, 0, 26), // "EmissionMainWindowDarkMode"
QT_MOC_LITERAL(1, 27, 18), // "on_ajouter_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 24), // "on_delete_button_clicked"
QT_MOC_LITERAL(4, 72, 26), // "on_list_all_button_clicked"
QT_MOC_LITERAL(5, 99, 29), // "on_clear_all_in_table_clicked"
QT_MOC_LITERAL(6, 129, 17), // "on_update_clicked"
QT_MOC_LITERAL(7, 147, 23), // "on_Generate_PDF_clicked"
QT_MOC_LITERAL(8, 171, 15), // "on_stat_clicked"
QT_MOC_LITERAL(9, 187, 25), // "on_printEmissions_clicked"
QT_MOC_LITERAL(10, 213, 16), // "on_excel_clicked"
QT_MOC_LITERAL(11, 230, 20), // "readEmissionForExcel"
QT_MOC_LITERAL(12, 251, 21), // "const QSqlQueryModel*"
QT_MOC_LITERAL(13, 273, 5), // "model"
QT_MOC_LITERAL(14, 279, 3), // "row"
QT_MOC_LITERAL(15, 283, 27), // "on_generateQRButton_clicked"
QT_MOC_LITERAL(16, 311, 20), // "on_dark_mode_clicked"
QT_MOC_LITERAL(17, 332, 15) // "on_Sort_clicked"

    },
    "EmissionMainWindowDarkMode\0"
    "on_ajouter_clicked\0\0on_delete_button_clicked\0"
    "on_list_all_button_clicked\0"
    "on_clear_all_in_table_clicked\0"
    "on_update_clicked\0on_Generate_PDF_clicked\0"
    "on_stat_clicked\0on_printEmissions_clicked\0"
    "on_excel_clicked\0readEmissionForExcel\0"
    "const QSqlQueryModel*\0model\0row\0"
    "on_generateQRButton_clicked\0"
    "on_dark_mode_clicked\0on_Sort_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmissionMainWindowDarkMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    2,   88,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,
      16,    0,   94,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,

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
    QMetaType::QStringList, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EmissionMainWindowDarkMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmissionMainWindowDarkMode *_t = static_cast<EmissionMainWindowDarkMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ajouter_clicked(); break;
        case 1: _t->on_delete_button_clicked(); break;
        case 2: _t->on_list_all_button_clicked(); break;
        case 3: _t->on_clear_all_in_table_clicked(); break;
        case 4: _t->on_update_clicked(); break;
        case 5: _t->on_Generate_PDF_clicked(); break;
        case 6: _t->on_stat_clicked(); break;
        case 7: _t->on_printEmissions_clicked(); break;
        case 8: _t->on_excel_clicked(); break;
        case 9: { QStringList _r = _t->readEmissionForExcel((*reinterpret_cast< const QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_generateQRButton_clicked(); break;
        case 11: _t->on_dark_mode_clicked(); break;
        case 12: _t->on_Sort_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject EmissionMainWindowDarkMode::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EmissionMainWindowDarkMode.data,
      qt_meta_data_EmissionMainWindowDarkMode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EmissionMainWindowDarkMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmissionMainWindowDarkMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EmissionMainWindowDarkMode.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int EmissionMainWindowDarkMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
