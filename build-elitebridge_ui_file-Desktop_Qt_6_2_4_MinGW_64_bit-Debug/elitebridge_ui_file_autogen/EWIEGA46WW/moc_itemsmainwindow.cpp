/****************************************************************************
** Meta object code from reading C++ file 'itemsmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../elitebridge_ui_file/itemsmainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemsmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ItemsMainWindow_t {
    const uint offsetsAndSize[24];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ItemsMainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ItemsMainWindow_t qt_meta_stringdata_ItemsMainWindow = {
    {
QT_MOC_LITERAL(0, 15), // "ItemsMainWindow"
QT_MOC_LITERAL(16, 6), // "search"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 10), // "deleteItem"
QT_MOC_LITERAL(35, 10), // "updateItem"
QT_MOC_LITERAL(46, 8), // "itemSave"
QT_MOC_LITERAL(55, 14), // "fillUndoStruct"
QT_MOC_LITERAL(70, 8), // "undoFunc"
QT_MOC_LITERAL(79, 13), // "onCellClicked"
QT_MOC_LITERAL(93, 3), // "row"
QT_MOC_LITERAL(97, 6), // "column"
QT_MOC_LITERAL(104, 13) // "fillLineEdits"

    },
    "ItemsMainWindow\0search\0\0deleteItem\0"
    "updateItem\0itemSave\0fillUndoStruct\0"
    "undoFunc\0onCellClicked\0row\0column\0"
    "fillLineEdits"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemsMainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    2,   68,    2, 0x08,    7 /* Private */,
      11,    0,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,

       0        // eod
};

void ItemsMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ItemsMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->search(); break;
        case 1: _t->deleteItem(); break;
        case 2: _t->updateItem(); break;
        case 3: _t->itemSave(); break;
        case 4: _t->fillUndoStruct(); break;
        case 5: _t->undoFunc(); break;
        case 6: _t->onCellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->fillLineEdits(); break;
        default: ;
        }
    }
}

const QMetaObject ItemsMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ItemsMainWindow.offsetsAndSize,
    qt_meta_data_ItemsMainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ItemsMainWindow_t
, QtPrivate::TypeAndForceComplete<ItemsMainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ItemsMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemsMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ItemsMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ItemsMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
