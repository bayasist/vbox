/****************************************************************************
** Meta object code from reading C++ file 'UIGraphicsRotatorButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/graphics/UIGraphicsRotatorButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGraphicsRotatorButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGraphicsRotatorButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      42,   24,   24,   24, 0x05,
      57,   24,   24,   24, 0x05,
      72,   24,   24,   24, 0x05,
     100,   91,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     124,   24,   24,   24, 0x09,

 // properties: name, type, flags
     172,  143, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_UIGraphicsRotatorButton[] = {
    "UIGraphicsRotatorButton\0\0sigToAnimating()\0"
    "sigToRotated()\0sigToDefault()\0"
    "sigRotationStart()\0fRotated\0"
    "sigRotationFinish(bool)\0sltButtonClicked()\0"
    "UIGraphicsRotatorButtonState\0state\0"
};

void UIGraphicsRotatorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGraphicsRotatorButton *_t = static_cast<UIGraphicsRotatorButton *>(_o);
        switch (_id) {
        case 0: _t->sigToAnimating(); break;
        case 1: _t->sigToRotated(); break;
        case 2: _t->sigToDefault(); break;
        case 3: _t->sigRotationStart(); break;
        case 4: _t->sigRotationFinish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sltButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGraphicsRotatorButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGraphicsRotatorButton::staticMetaObject = {
    { &UIGraphicsButton::staticMetaObject, qt_meta_stringdata_UIGraphicsRotatorButton,
      qt_meta_data_UIGraphicsRotatorButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGraphicsRotatorButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGraphicsRotatorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGraphicsRotatorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGraphicsRotatorButton))
        return static_cast<void*>(const_cast< UIGraphicsRotatorButton*>(this));
    return UIGraphicsButton::qt_metacast(_clname);
}

int UIGraphicsRotatorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGraphicsButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< UIGraphicsRotatorButtonState*>(_v) = state(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setState(*reinterpret_cast< UIGraphicsRotatorButtonState*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UIGraphicsRotatorButton::sigToAnimating()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIGraphicsRotatorButton::sigToRotated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIGraphicsRotatorButton::sigToDefault()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIGraphicsRotatorButton::sigRotationStart()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UIGraphicsRotatorButton::sigRotationFinish(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
