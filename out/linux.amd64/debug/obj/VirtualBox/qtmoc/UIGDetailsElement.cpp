/****************************************************************************
** Meta object code from reading C++ file 'UIGDetailsElement.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/details/UIGDetailsElement.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGDetailsElement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGDetailsElement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      35,   18,   18,   18, 0x05,
      65,   51,   18,   18, 0x05,
     107,   18,   18,   18, 0x05,
     163,  134,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     203,   18,   18,   18, 0x09,
     228,   18,   18,   18, 0x09,
     261,  252,   18,   18, 0x09,

 // properties: name, type, flags
     294,  290, 0x02095103,
     312,  290, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_UIGDetailsElement[] = {
    "UIGDetailsElement\0\0sigHoverEnter()\0"
    "sigHoverLeave()\0type,fToggled\0"
    "sigToggleElement(DetailsElementType,bool)\0"
    "sigToggleElementFinished()\0"
    "strCategory,strControl,strId\0"
    "sigLinkClicked(QString,QString,QString)\0"
    "sltToggleButtonClicked()\0"
    "sltElementToggleStart()\0fToggled\0"
    "sltElementToggleFinish(bool)\0int\0"
    "animationDarkness\0additionalHeight\0"
};

void UIGDetailsElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGDetailsElement *_t = static_cast<UIGDetailsElement *>(_o);
        switch (_id) {
        case 0: _t->sigHoverEnter(); break;
        case 1: _t->sigHoverLeave(); break;
        case 2: _t->sigToggleElement((*reinterpret_cast< DetailsElementType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->sigToggleElementFinished(); break;
        case 4: _t->sigLinkClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->sltToggleButtonClicked(); break;
        case 6: _t->sltElementToggleStart(); break;
        case 7: _t->sltElementToggleFinish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGDetailsElement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElement::staticMetaObject = {
    { &UIGDetailsItem::staticMetaObject, qt_meta_stringdata_UIGDetailsElement,
      qt_meta_data_UIGDetailsElement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElement))
        return static_cast<void*>(const_cast< UIGDetailsElement*>(this));
    return UIGDetailsItem::qt_metacast(_clname);
}

int UIGDetailsElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = animationDarkness(); break;
        case 1: *reinterpret_cast< int*>(_v) = additionalHeight(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAnimationDarkness(*reinterpret_cast< int*>(_v)); break;
        case 1: setAdditionalHeight(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UIGDetailsElement::sigHoverEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIGDetailsElement::sigHoverLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIGDetailsElement::sigToggleElement(DetailsElementType _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UIGDetailsElement::sigToggleElementFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UIGDetailsElement::sigLinkClicked(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
