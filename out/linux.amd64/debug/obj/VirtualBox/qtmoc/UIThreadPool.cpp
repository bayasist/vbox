/****************************************************************************
** Meta object code from reading C++ file 'UIThreadPool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/globals/UIThreadPool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIThreadPool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIThreadPool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   14,   13,   13, 0x08,
      84,   76,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIThreadPool[] = {
    "UIThreadPool\0\0pTask\0sigTaskComplete(UITask*)\0"
    "sltHandleTaskComplete(UITask*)\0pWorker\0"
    "sltHandleWorkerFinished(UIThreadWorker*)\0"
};

void UIThreadPool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIThreadPool *_t = static_cast<UIThreadPool *>(_o);
        switch (_id) {
        case 0: _t->sigTaskComplete((*reinterpret_cast< UITask*(*)>(_a[1]))); break;
        case 1: _t->sltHandleTaskComplete((*reinterpret_cast< UITask*(*)>(_a[1]))); break;
        case 2: _t->sltHandleWorkerFinished((*reinterpret_cast< UIThreadWorker*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIThreadPool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIThreadPool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIThreadPool,
      qt_meta_data_UIThreadPool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIThreadPool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIThreadPool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIThreadPool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIThreadPool))
        return static_cast<void*>(const_cast< UIThreadPool*>(this));
    return QObject::qt_metacast(_clname);
}

int UIThreadPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UIThreadPool::sigTaskComplete(UITask * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_UITask[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,    8,    7,    7, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UITask[] = {
    "UITask\0\0pTask\0sigComplete(UITask*)\0"
};

void UITask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UITask *_t = static_cast<UITask *>(_o);
        switch (_id) {
        case 0: _t->sigComplete((*reinterpret_cast< UITask*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UITask::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UITask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UITask,
      qt_meta_data_UITask, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UITask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UITask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UITask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UITask))
        return static_cast<void*>(const_cast< UITask*>(this));
    return QObject::qt_metacast(_clname);
}

int UITask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void UITask::sigComplete(UITask * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
