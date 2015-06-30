/****************************************************************************
** Meta object code from reading C++ file 'UIGraphicsZoomButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/graphics/UIGraphicsZoomButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGraphicsZoomButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGraphicsZoomButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      38,   21,   21,   21, 0x05,

 // properties: name, type, flags
      59,   54, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_UIGraphicsZoomButton[] = {
    "UIGraphicsZoomButton\0\0sigHoverEnter()\0"
    "sigHoverLeave()\0bool\0stateDefault\0"
};

void UIGraphicsZoomButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGraphicsZoomButton *_t = static_cast<UIGraphicsZoomButton *>(_o);
        switch (_id) {
        case 0: _t->sigHoverEnter(); break;
        case 1: _t->sigHoverLeave(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGraphicsZoomButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGraphicsZoomButton::staticMetaObject = {
    { &UIGraphicsButton::staticMetaObject, qt_meta_stringdata_UIGraphicsZoomButton,
      qt_meta_data_UIGraphicsZoomButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGraphicsZoomButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGraphicsZoomButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGraphicsZoomButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGraphicsZoomButton))
        return static_cast<void*>(const_cast< UIGraphicsZoomButton*>(this));
    return UIGraphicsButton::qt_metacast(_clname);
}

int UIGraphicsZoomButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGraphicsButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = stateDefault(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStateDefault(*reinterpret_cast< bool*>(_v)); break;
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
void UIGraphicsZoomButton::sigHoverEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIGraphicsZoomButton::sigHoverLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
