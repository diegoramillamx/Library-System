/****************************************************************************
** Meta object code from reading C++ file 'crudbook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../biblioteca/crudbook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crudbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CrudBook_t {
    QByteArrayData data[12];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CrudBook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CrudBook_t qt_meta_stringdata_CrudBook = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CrudBook"
QT_MOC_LITERAL(1, 9, 24), // "on_lneGenero_textChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "arg1"
QT_MOC_LITERAL(4, 40, 27), // "on_lnePublisher_textChanged"
QT_MOC_LITERAL(5, 68, 25), // "on_lneFormate_textChanged"
QT_MOC_LITERAL(6, 94, 17), // "on_pbPush_clicked"
QT_MOC_LITERAL(7, 112, 16), // "on_pbPop_clicked"
QT_MOC_LITERAL(8, 129, 19), // "on_pbActive_clicked"
QT_MOC_LITERAL(9, 149, 19), // "on_pbInsert_clicked"
QT_MOC_LITERAL(10, 169, 24), // "on_lneWriter_textChanged"
QT_MOC_LITERAL(11, 194, 5) // "value"

    },
    "CrudBook\0on_lneGenero_textChanged\0\0"
    "arg1\0on_lnePublisher_textChanged\0"
    "on_lneFormate_textChanged\0on_pbPush_clicked\0"
    "on_pbPop_clicked\0on_pbActive_clicked\0"
    "on_pbInsert_clicked\0on_lneWriter_textChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CrudBook[] = {

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
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void CrudBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CrudBook *_t = static_cast<CrudBook *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lneGenero_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_lnePublisher_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lneFormate_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pbPush_clicked(); break;
        case 4: _t->on_pbPop_clicked(); break;
        case 5: _t->on_pbActive_clicked(); break;
        case 6: _t->on_pbInsert_clicked(); break;
        case 7: _t->on_lneWriter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CrudBook::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CrudBook.data,
      qt_meta_data_CrudBook,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CrudBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CrudBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CrudBook.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CrudBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
