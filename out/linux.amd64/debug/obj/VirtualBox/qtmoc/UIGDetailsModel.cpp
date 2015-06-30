/****************************************************************************
** Meta object code from reading C++ file 'UIGDetailsModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/details/UIGDetailsModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGDetailsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGDetailsModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      43,   17,   16,   16, 0x05,
     110,   83,   16,   16, 0x05,
     180,  151,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     220,   16,   16,   16, 0x08,
     256,  242,   16,   16, 0x08,
     299,  242,   16,   16, 0x08,
     351,   16,   16,   16, 0x08,
     375,   16,   16,   16, 0x08,
     401,   16,   16,   16, 0x08,
     426,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGDetailsModel[] = {
    "UIGDetailsModel\0\0iRootItemMinimumWidthHint\0"
    "sigRootItemMinimumWidthHintChanged(int)\0"
    "iRootItemMinimumHeightHint\0"
    "sigRootItemMinimumHeightHintChanged(int)\0"
    "strCategory,strControl,strId\0"
    "sigLinkClicked(QString,QString,QString)\0"
    "sltHandleViewResize()\0type,fToggled\0"
    "sltToggleElements(DetailsElementType,bool)\0"
    "sltToggleAnimationFinished(DetailsElementType,bool)\0"
    "sltElementTypeToggled()\0"
    "sltHandleSlidingStarted()\0"
    "sltHandleToggleStarted()\0"
    "sltHandleToggleFinished()\0"
};

void UIGDetailsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGDetailsModel *_t = static_cast<UIGDetailsModel *>(_o);
        switch (_id) {
        case 0: _t->sigRootItemMinimumWidthHintChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigRootItemMinimumHeightHintChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sigLinkClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->sltHandleViewResize(); break;
        case 4: _t->sltToggleElements((*reinterpret_cast< DetailsElementType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->sltToggleAnimationFinished((*reinterpret_cast< DetailsElementType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->sltElementTypeToggled(); break;
        case 7: _t->sltHandleSlidingStarted(); break;
        case 8: _t->sltHandleToggleStarted(); break;
        case 9: _t->sltHandleToggleFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGDetailsModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIGDetailsModel,
      qt_meta_data_UIGDetailsModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsModel))
        return static_cast<void*>(const_cast< UIGDetailsModel*>(this));
    return QObject::qt_metacast(_clname);
}

int UIGDetailsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void UIGDetailsModel::sigRootItemMinimumWidthHintChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIGDetailsModel::sigRootItemMinimumHeightHintChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UIGDetailsModel::sigLinkClicked(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_UIGDetailsElementAnimationCallback[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      50,   36,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGDetailsElementAnimationCallback[] = {
    "UIGDetailsElementAnimationCallback\0\0"
    "type,fToggled\0"
    "sigAllAnimationFinished(DetailsElementType,bool)\0"
    "sltAnimationFinished()\0"
};

void UIGDetailsElementAnimationCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGDetailsElementAnimationCallback *_t = static_cast<UIGDetailsElementAnimationCallback *>(_o);
        switch (_id) {
        case 0: _t->sigAllAnimationFinished((*reinterpret_cast< DetailsElementType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->sltAnimationFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGDetailsElementAnimationCallback::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementAnimationCallback::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIGDetailsElementAnimationCallback,
      qt_meta_data_UIGDetailsElementAnimationCallback, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementAnimationCallback::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementAnimationCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementAnimationCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementAnimationCallback))
        return static_cast<void*>(const_cast< UIGDetailsElementAnimationCallback*>(this));
    return QObject::qt_metacast(_clname);
}

int UIGDetailsElementAnimationCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UIGDetailsElementAnimationCallback::sigAllAnimationFinished(DetailsElementType _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
