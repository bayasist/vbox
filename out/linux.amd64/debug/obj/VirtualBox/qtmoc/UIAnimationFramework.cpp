/****************************************************************************
** Meta object code from reading C++ file 'UIAnimationFramework.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/globals/UIAnimationFramework.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIAnimationFramework.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIAnimation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      36,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIAnimation[] = {
    "UIAnimation\0\0sigStateEnteredStart()\0"
    "sigStateEnteredFinal()\0"
};

void UIAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIAnimation *_t = static_cast<UIAnimation *>(_o);
        switch (_id) {
        case 0: _t->sigStateEnteredStart(); break;
        case 1: _t->sigStateEnteredFinal(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIAnimation,
      qt_meta_data_UIAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIAnimation))
        return static_cast<void*>(const_cast< UIAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int UIAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UIAnimation::sigStateEnteredStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIAnimation::sigStateEnteredFinal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_UIAnimationLoop[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_UIAnimationLoop[] = {
    "UIAnimationLoop\0"
};

void UIAnimationLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIAnimationLoop::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIAnimationLoop::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIAnimationLoop,
      qt_meta_data_UIAnimationLoop, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIAnimationLoop::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIAnimationLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIAnimationLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIAnimationLoop))
        return static_cast<void*>(const_cast< UIAnimationLoop*>(this));
    return QObject::qt_metacast(_clname);
}

int UIAnimationLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
