/****************************************************************************
** Meta object code from reading C++ file 'userwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../elitebridge_ui_file/userwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_userWindow_t {
    const uint offsetsAndSize[50];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_userWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_userWindow_t qt_meta_stringdata_userWindow = {
    {
QT_MOC_LITERAL(0, 10), // "userWindow"
QT_MOC_LITERAL(11, 12), // "cellSelected"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 13), // "selectedValue"
QT_MOC_LITERAL(39, 13), // "onCellClicked"
QT_MOC_LITERAL(53, 3), // "row"
QT_MOC_LITERAL(57, 6), // "column"
QT_MOC_LITERAL(64, 31), // "on_create_transaction_triggered"
QT_MOC_LITERAL(96, 30), // "on_actionuser_grants_triggered"
QT_MOC_LITERAL(127, 6), // "search"
QT_MOC_LITERAL(134, 10), // "deleteUser"
QT_MOC_LITERAL(145, 10), // "updateUser"
QT_MOC_LITERAL(156, 8), // "userSave"
QT_MOC_LITERAL(165, 14), // "fillUndoStruct"
QT_MOC_LITERAL(180, 8), // "undoFunc"
QT_MOC_LITERAL(189, 12), // "fillLineEdit"
QT_MOC_LITERAL(202, 36), // "on_actionAdd_User_To_Group_tr..."
QT_MOC_LITERAL(239, 11), // "eventFilter"
QT_MOC_LITERAL(251, 3), // "obj"
QT_MOC_LITERAL(255, 7), // "QEvent*"
QT_MOC_LITERAL(263, 5), // "event"
QT_MOC_LITERAL(269, 15), // "mousePressEvent"
QT_MOC_LITERAL(285, 12), // "QMouseEvent*"
QT_MOC_LITERAL(298, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(313, 17) // "mouseReleaseEvent"

    },
    "userWindow\0cellSelected\0\0selectedValue\0"
    "onCellClicked\0row\0column\0"
    "on_create_transaction_triggered\0"
    "on_actionuser_grants_triggered\0search\0"
    "deleteUser\0updateUser\0userSave\0"
    "fillUndoStruct\0undoFunc\0fillLineEdit\0"
    "on_actionAdd_User_To_Group_triggered\0"
    "eventFilter\0obj\0QEvent*\0event\0"
    "mousePressEvent\0QMouseEvent*\0"
    "mouseMoveEvent\0mouseReleaseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,  113,    2, 0x08,    3 /* Private */,
       7,    0,  118,    2, 0x08,    6 /* Private */,
       8,    0,  119,    2, 0x08,    7 /* Private */,
       9,    0,  120,    2, 0x08,    8 /* Private */,
      10,    0,  121,    2, 0x08,    9 /* Private */,
      11,    0,  122,    2, 0x08,   10 /* Private */,
      12,    0,  123,    2, 0x08,   11 /* Private */,
      13,    0,  124,    2, 0x08,   12 /* Private */,
      14,    0,  125,    2, 0x08,   13 /* Private */,
      15,    0,  126,    2, 0x08,   14 /* Private */,
      16,    0,  127,    2, 0x08,   15 /* Private */,
      17,    2,  128,    2, 0x08,   16 /* Private */,
      21,    1,  133,    2, 0x08,   19 /* Private */,
      23,    1,  136,    2, 0x08,   21 /* Private */,
      24,    1,  139,    2, 0x08,   23 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
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
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 22,   20,

       0        // eod
};

void userWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cellSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->onCellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->on_create_transaction_triggered(); break;
        case 3: _t->on_actionuser_grants_triggered(); break;
        case 4: _t->search(); break;
        case 5: _t->deleteUser(); break;
        case 6: _t->updateUser(); break;
        case 7: _t->userSave(); break;
        case 8: _t->fillUndoStruct(); break;
        case 9: _t->undoFunc(); break;
        case 10: _t->fillLineEdit(); break;
        case 11: _t->on_actionAdd_User_To_Group_triggered(); break;
        case 12: { bool _r = _t->eventFilter((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->mousePressEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 14: _t->mouseMoveEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 15: _t->mouseReleaseEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (userWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::cellSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject userWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_userWindow.offsetsAndSize,
    qt_meta_data_userWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_userWindow_t
, QtPrivate::TypeAndForceComplete<userWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *userWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_userWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int userWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void userWindow::cellSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
