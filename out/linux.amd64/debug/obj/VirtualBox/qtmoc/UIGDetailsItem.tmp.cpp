/****************************************************************************
** Meta object code from reading C++ file 'UIGDetailsItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/details/UIGDetailsItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGDetailsItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGDetailsItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   16,   15,   15, 0x05,
      64,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   16,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UIGDetailsItem[] = {
    "UIGDetailsItem\0\0strStepId,iStepNumber\0"
    "sigBuildStep(QString,int)\0sigBuildDone()\0"
    "sltBuildStep(QString,int)\0"
};

void UIGDetailsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGDetailsItem *_t = static_cast<UIGDetailsItem *>(_o);
        switch (_id) {
        case 0: _t->sigBuildStep((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sigBuildDone(); break;
        case 2: _t->sltBuildStep((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGDetailsItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsItem::staticMetaObject = {
    { &QIWithRetranslateUI4<QIGraphicsWidget>::staticMetaObject, qt_meta_stringdata_UIGDetailsItem,
      qt_meta_data_UIGDetailsItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsItem))
        return static_cast<void*>(const_cast< UIGDetailsItem*>(this));
    return QIWithRetranslateUI4<QIGraphicsWidget>::qt_metacast(_clname);
}

int UIGDetailsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI4<QIGraphicsWidget>::qt_metacall(_c, _id, _a);
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
void UIGDetailsItem::sigBuildStep(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIGDetailsItem::sigBuildDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_UIBuildStep[] = {

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
      35,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIBuildStep[] = {
    "UIBuildStep\0\0strStepId,iStepNumber\0"
    "sigStepDone(QString,int)\0sltStepDone()\0"
};

void UIBuildStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIBuildStep *_t = static_cast<UIBuildStep *>(_o);
        switch (_id) {
        case 0: _t->sigStepDone((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sltStepDone(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIBuildStep::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIBuildStep::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIBuildStep,
      qt_meta_data_UIBuildStep, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIBuildStep::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIBuildStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIBuildStep::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIBuildStep))
        return static_cast<void*>(const_cast< UIBuildStep*>(this));
    return QObject::qt_metacast(_clname);
}

int UIBuildStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UIBuildStep::sigStepDone(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
