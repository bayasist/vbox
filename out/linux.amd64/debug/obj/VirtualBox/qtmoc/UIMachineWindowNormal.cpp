/****************************************************************************
** Meta object code from reading C++ file 'UIMachineWindowNormal.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/normal/UIMachineWindowNormal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineWindowNormal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineWindowNormal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      46,   22,   22,   22, 0x08,
      82,   71,   22,   22, 0x08,
     117,   22,   22,   22, 0x08,
     142,   22,   22,   22, 0x08,
     168,   22,   22,   22, 0x08,
     194,   22,   22,   22, 0x08,
     218,   22,   22,   22, 0x08,
     242,   22,   22,   22, 0x08,
     269,   22,   22,   22, 0x08,
     309,  291,   22,   22, 0x08,
     394,  376,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineWindowNormal[] = {
    "UIMachineWindowNormal\0\0sltNormalizeGeometry()\0"
    "sltMachineStateChanged()\0attachment\0"
    "sltMediumChange(CMediumAttachment)\0"
    "sltUSBControllerChange()\0"
    "sltUSBDeviceStateChange()\0"
    "sltNetworkAdapterChange()\0"
    "sltSharedFolderChange()\0sltVideoCaptureChange()\0"
    "sltCPUExecutionCapChange()\0"
    "sltUpdateIndicators()\0pIndicator,pEvent\0"
    "sltShowIndicatorsContextMenu(QIStateIndicator*,QContextMenuEvent*)\0"
    "aPublicName,aName\0"
    "sltProcessGlobalSettingChange(const char*,const char*)\0"
};

void UIMachineWindowNormal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineWindowNormal *_t = static_cast<UIMachineWindowNormal *>(_o);
        switch (_id) {
        case 0: _t->sltNormalizeGeometry(); break;
        case 1: _t->sltMachineStateChanged(); break;
        case 2: _t->sltMediumChange((*reinterpret_cast< const CMediumAttachment(*)>(_a[1]))); break;
        case 3: _t->sltUSBControllerChange(); break;
        case 4: _t->sltUSBDeviceStateChange(); break;
        case 5: _t->sltNetworkAdapterChange(); break;
        case 6: _t->sltSharedFolderChange(); break;
        case 7: _t->sltVideoCaptureChange(); break;
        case 8: _t->sltCPUExecutionCapChange(); break;
        case 9: _t->sltUpdateIndicators(); break;
        case 10: _t->sltShowIndicatorsContextMenu((*reinterpret_cast< QIStateIndicator*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 11: _t->sltProcessGlobalSettingChange((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineWindowNormal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineWindowNormal::staticMetaObject = {
    { &UIMachineWindow::staticMetaObject, qt_meta_stringdata_UIMachineWindowNormal,
      qt_meta_data_UIMachineWindowNormal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineWindowNormal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineWindowNormal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineWindowNormal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineWindowNormal))
        return static_cast<void*>(const_cast< UIMachineWindowNormal*>(this));
    return UIMachineWindow::qt_metacast(_clname);
}

int UIMachineWindowNormal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIMachineWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
