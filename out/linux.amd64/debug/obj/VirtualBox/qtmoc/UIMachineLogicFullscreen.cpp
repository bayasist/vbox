/****************************************************************************
** Meta object code from reading C++ file 'UIMachineLogicFullscreen.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/fullscreen/UIMachineLogicFullscreen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineLogicFullscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineLogicFullscreen[] = {

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
      26,   25,   25,   25, 0x08,
      51,   25,   25,   25, 0x08,
     107,   76,   25,   25, 0x08,
     172,   25,   25,   25, 0x08,
     199,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineLogicFullscreen[] = {
    "UIMachineLogicFullscreen\0\0"
    "sltMachineStateChanged()\0"
    "sltScreenLayoutChanged()\0"
    "changeType,uScreenId,screenGeo\0"
    "sltGuestMonitorChange(KGuestMonitorChangedEventType,ulong,QRect)\0"
    "sltHostScreenCountChange()\0"
    "sltHostScreenAvailableAreaChange()\0"
};

void UIMachineLogicFullscreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineLogicFullscreen *_t = static_cast<UIMachineLogicFullscreen *>(_o);
        switch (_id) {
        case 0: _t->sltMachineStateChanged(); break;
        case 1: _t->sltScreenLayoutChanged(); break;
        case 2: _t->sltGuestMonitorChange((*reinterpret_cast< KGuestMonitorChangedEventType(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QRect(*)>(_a[3]))); break;
        case 3: _t->sltHostScreenCountChange(); break;
        case 4: _t->sltHostScreenAvailableAreaChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineLogicFullscreen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineLogicFullscreen::staticMetaObject = {
    { &UIMachineLogic::staticMetaObject, qt_meta_stringdata_UIMachineLogicFullscreen,
      qt_meta_data_UIMachineLogicFullscreen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineLogicFullscreen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineLogicFullscreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineLogicFullscreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineLogicFullscreen))
        return static_cast<void*>(const_cast< UIMachineLogicFullscreen*>(this));
    return UIMachineLogic::qt_metacast(_clname);
}

int UIMachineLogicFullscreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
