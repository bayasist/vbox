/****************************************************************************
** Meta object code from reading C++ file 'UIMachineLogicSeamless.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/seamless/UIMachineLogicSeamless.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineLogicSeamless.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineLogicSeamless[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      62,   23,   23,   23, 0x08,
      87,   23,   23,   23, 0x08,
     143,  112,   23,   23, 0x08,
     208,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineLogicSeamless[] = {
    "UIMachineLogicSeamless\0\0"
    "sltCheckForRequestedVisualStateType()\0"
    "sltMachineStateChanged()\0"
    "sltScreenLayoutChanged()\0"
    "changeType,uScreenId,screenGeo\0"
    "sltGuestMonitorChange(KGuestMonitorChangedEventType,ulong,QRect)\0"
    "sltHostScreenCountChange()\0"
};

void UIMachineLogicSeamless::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineLogicSeamless *_t = static_cast<UIMachineLogicSeamless *>(_o);
        switch (_id) {
        case 0: _t->sltCheckForRequestedVisualStateType(); break;
        case 1: _t->sltMachineStateChanged(); break;
        case 2: _t->sltScreenLayoutChanged(); break;
        case 3: _t->sltGuestMonitorChange((*reinterpret_cast< KGuestMonitorChangedEventType(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QRect(*)>(_a[3]))); break;
        case 4: _t->sltHostScreenCountChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineLogicSeamless::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineLogicSeamless::staticMetaObject = {
    { &UIMachineLogic::staticMetaObject, qt_meta_stringdata_UIMachineLogicSeamless,
      qt_meta_data_UIMachineLogicSeamless, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineLogicSeamless::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineLogicSeamless::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineLogicSeamless::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineLogicSeamless))
        return static_cast<void*>(const_cast< UIMachineLogicSeamless*>(this));
    return UIMachineLogic::qt_metacast(_clname);
}

int UIMachineLogicSeamless::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIMachineLogic::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
