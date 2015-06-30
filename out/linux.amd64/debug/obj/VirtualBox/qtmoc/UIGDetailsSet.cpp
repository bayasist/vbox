/****************************************************************************
** Meta object code from reading C++ file 'UIGDetailsSet.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/details/UIGDetailsSet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGDetailsSet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGDetailsSet[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   15,   14,   14, 0x08,
      69,   63,   14,   14, 0x08,
     100,   63,   14,   14, 0x08,
     136,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGDetailsSet[] = {
    "UIGDetailsSet\0\0strStepId,iStepNumber\0"
    "sltBuildStep(QString,int)\0strId\0"
    "sltMachineStateChange(QString)\0"
    "sltMachineAttributesChange(QString)\0"
    "sltUpdateAppearance()\0"
};

void UIGDetailsSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGDetailsSet *_t = static_cast<UIGDetailsSet *>(_o);
        switch (_id) {
        case 0: _t->sltBuildStep((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sltMachineStateChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sltMachineAttributesChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sltUpdateAppearance(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGDetailsSet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsSet::staticMetaObject = {
    { &UIGDetailsItem::staticMetaObject, qt_meta_stringdata_UIGDetailsSet,
      qt_meta_data_UIGDetailsSet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsSet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsSet))
        return static_cast<void*>(const_cast< UIGDetailsSet*>(this));
    return UIGDetailsItem::qt_metacast(_clname);
}

int UIGDetailsSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
