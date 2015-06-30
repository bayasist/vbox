/****************************************************************************
** Meta object code from reading C++ file 'UIGChooserItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/chooser/UIGChooserItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGChooserItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGChooserItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   16,   15,   15, 0x05,
      85,   66,   15,   15, 0x05,
     118,   15,   15,   15, 0x05,
     134,   15,   15,   15, 0x05,

 // properties: name, type, flags
     154,  150, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_UIGChooserItem[] = {
    "UIGChooserItem\0\0iMinimumWidthHint\0"
    "sigMinimumWidthHintChanged(int)\0"
    "iMinimumHeightHint\0sigMinimumHeightHintChanged(int)\0"
    "sigHoverEnter()\0sigHoverLeave()\0int\0"
    "animationDarkness\0"
};

void UIGChooserItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGChooserItem *_t = static_cast<UIGChooserItem *>(_o);
        switch (_id) {
        case 0: _t->sigMinimumWidthHintChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigMinimumHeightHintChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sigHoverEnter(); break;
        case 3: _t->sigHoverLeave(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGChooserItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGChooserItem::staticMetaObject = {
    { &QIWithRetranslateUI4<QIGraphicsWidget>::staticMetaObject, qt_meta_stringdata_UIGChooserItem,
      qt_meta_data_UIGChooserItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGChooserItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGChooserItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGChooserItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGChooserItem))
        return static_cast<void*>(const_cast< UIGChooserItem*>(this));
    return QIWithRetranslateUI4<QIGraphicsWidget>::qt_metacast(_clname);
}

int UIGChooserItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI4<QIGraphicsWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = animationDarkness(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAnimationDarkness(*reinterpret_cast< int*>(_v)); break;
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
void UIGChooserItem::sigMinimumWidthHintChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIGChooserItem::sigMinimumHeightHintChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UIGChooserItem::sigHoverEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIGChooserItem::sigHoverLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_UIGChooserItemMimeData[] = {

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

static const char qt_meta_stringdata_UIGChooserItemMimeData[] = {
    "UIGChooserItemMimeData\0"
};

void UIGChooserItemMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGChooserItemMimeData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGChooserItemMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_UIGChooserItemMimeData,
      qt_meta_data_UIGChooserItemMimeData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGChooserItemMimeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGChooserItemMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGChooserItemMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGChooserItemMimeData))
        return static_cast<void*>(const_cast< UIGChooserItemMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int UIGChooserItemMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
