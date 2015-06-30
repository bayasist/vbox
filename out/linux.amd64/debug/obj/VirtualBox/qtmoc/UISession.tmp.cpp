/****************************************************************************
** Meta object code from reading C++ file 'UISession.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/UISession.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UISession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UISession[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      31,   10,   10,   10, 0x05,
      60,   10,   10,   10, 0x05,
      87,   10,   10,   10, 0x05,
     111,   10,   10,   10, 0x05,
     135,   10,   10,   10, 0x05,
     161,   10,   10,   10, 0x05,
     208,  193,   10,   10, 0x05,
     266,  249,   10,   10, 0x05,
     301,   10,   10,   10, 0x05,
     317,   10,   10,   10, 0x05,
     341,   10,   10,   10, 0x05,
     391,  366,   10,   10, 0x05,
     453,   10,   10,   10, 0x05,
     508,  477,   10,   10, 0x05,
     546,   10,   10,   10, 0x05,
     604,  573,   10,   10, 0x05,
     669,   10,   10,   10, 0x05,
     696,   10,   10,   10, 0x05,
     726,   10,   10,   10, 0x05,
     761,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     784,  774,   10,   10, 0x0a,
     822,   10,   10,   10, 0x08,
     839,   10,   10,   10, 0x08,
     896,  859,   10,   10, 0x08,
    1037,  964,   10,   10, 0x08,
    1114, 1083,   10,   10, 0x08,
    1163, 1157,   10,   10, 0x08,
    1193,   10,   10,   10, 0x08,
    1214,   10,   10,   10, 0x08,
    1230,   10,   10,   10, 0x08,
    1254,  573,   10,   10, 0x08,
    1319,   10,   10,   10, 0x08,
    1352,   10,   10,   10, 0x08,
    1388,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UISession[] = {
    "UISession\0\0sigCloseRuntimeUI()\0"
    "sigMousePointerShapeChange()\0"
    "sigMouseCapabilityChange()\0"
    "sigKeyboardLedsChange()\0sigMachineStateChange()\0"
    "sigAdditionsStateChange()\0"
    "sigAdditionsStateActualChange()\0"
    "networkAdapter\0sigNetworkAdapterChange(CNetworkAdapter)\0"
    "mediumAttachment\0sigMediumChange(CMediumAttachment)\0"
    "sigVRDEChange()\0sigVideoCaptureChange()\0"
    "sigUSBControllerChange()\0"
    "device,bIsAttached,error\0"
    "sigUSBDeviceStateChange(CUSBDevice,bool,CVirtualBoxErrorInfo)\0"
    "sigSharedFolderChange()\0"
    "bIsFatal,strErrorId,strMessage\0"
    "sigRuntimeError(bool,QString,QString)\0"
    "sigCPUExecutionCapChange()\0"
    "changeType,uScreenId,screenGeo\0"
    "sigGuestMonitorChange(KGuestMonitorChangedEventType,ulong,QRect)\0"
    "sigHostScreenCountChange()\0"
    "sigHostScreenGeometryChange()\0"
    "sigHostScreenAvailableAreaChange()\0"
    "sigStarted()\0strSource\0"
    "sltInstallGuestAdditionsFrom(QString)\0"
    "sltMarkStarted()\0sltCloseRuntimeUI()\0"
    "fVisible,fAlpha,hotCorner,size,shape\0"
    "sltMousePointerShapeChange(bool,bool,QPoint,QSize,QVector<uint8_t>)\0"
    "fSupportsAbsolute,fSupportsRelative,fSupportsMultiTouch,fNeedsHostCurs"
    "or\0"
    "sltMouseCapabilityChange(bool,bool,bool,bool)\0"
    "fNumLock,fCapsLock,fScrollLock\0"
    "sltKeyboardLedsChangeEvent(bool,bool,bool)\0"
    "state\0sltStateChange(KMachineState)\0"
    "sltAdditionsChange()\0sltVRDEChange()\0"
    "sltVideoCaptureChange()\0"
    "sltGuestMonitorChange(KGuestMonitorChangedEventType,ulong,QRect)\0"
    "sltHandleHostScreenCountChange()\0"
    "sltHandleHostScreenGeometryChange()\0"
    "sltHandleHostScreenAvailableAreaChange()\0"
};

void UISession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISession *_t = static_cast<UISession *>(_o);
        switch (_id) {
        case 0: _t->sigCloseRuntimeUI(); break;
        case 1: _t->sigMousePointerShapeChange(); break;
        case 2: _t->sigMouseCapabilityChange(); break;
        case 3: _t->sigKeyboardLedsChange(); break;
        case 4: _t->sigMachineStateChange(); break;
        case 5: _t->sigAdditionsStateChange(); break;
        case 6: _t->sigAdditionsStateActualChange(); break;
        case 7: _t->sigNetworkAdapterChange((*reinterpret_cast< const CNetworkAdapter(*)>(_a[1]))); break;
        case 8: _t->sigMediumChange((*reinterpret_cast< const CMediumAttachment(*)>(_a[1]))); break;
        case 9: _t->sigVRDEChange(); break;
        case 10: _t->sigVideoCaptureChange(); break;
        case 11: _t->sigUSBControllerChange(); break;
        case 12: _t->sigUSBDeviceStateChange((*reinterpret_cast< const CUSBDevice(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const CVirtualBoxErrorInfo(*)>(_a[3]))); break;
        case 13: _t->sigSharedFolderChange(); break;
        case 14: _t->sigRuntimeError((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 15: _t->sigCPUExecutionCapChange(); break;
        case 16: _t->sigGuestMonitorChange((*reinterpret_cast< KGuestMonitorChangedEventType(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QRect(*)>(_a[3]))); break;
        case 17: _t->sigHostScreenCountChange(); break;
        case 18: _t->sigHostScreenGeometryChange(); break;
        case 19: _t->sigHostScreenAvailableAreaChange(); break;
        case 20: _t->sigStarted(); break;
        case 21: _t->sltInstallGuestAdditionsFrom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->sltMarkStarted(); break;
        case 23: _t->sltCloseRuntimeUI(); break;
        case 24: _t->sltMousePointerShapeChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3])),(*reinterpret_cast< QSize(*)>(_a[4])),(*reinterpret_cast< QVector<uint8_t>(*)>(_a[5]))); break;
        case 25: _t->sltMouseCapabilityChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 26: _t->sltKeyboardLedsChangeEvent((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 27: _t->sltStateChange((*reinterpret_cast< KMachineState(*)>(_a[1]))); break;
        case 28: _t->sltAdditionsChange(); break;
        case 29: _t->sltVRDEChange(); break;
        case 30: _t->sltVideoCaptureChange(); break;
        case 31: _t->sltGuestMonitorChange((*reinterpret_cast< KGuestMonitorChangedEventType(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QRect(*)>(_a[3]))); break;
        case 32: _t->sltHandleHostScreenCountChange(); break;
        case 33: _t->sltHandleHostScreenGeometryChange(); break;
        case 34: _t->sltHandleHostScreenAvailableAreaChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISession::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISession,
      qt_meta_data_UISession, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISession::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISession::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISession))
        return static_cast<void*>(const_cast< UISession*>(this));
    return QObject::qt_metacast(_clname);
}

int UISession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void UISession::sigCloseRuntimeUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UISession::sigMousePointerShapeChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UISession::sigMouseCapabilityChange()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UISession::sigKeyboardLedsChange()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UISession::sigMachineStateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void UISession::sigAdditionsStateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void UISession::sigAdditionsStateActualChange()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void UISession::sigNetworkAdapterChange(const CNetworkAdapter & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UISession::sigMediumChange(const CMediumAttachment & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UISession::sigVRDEChange()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void UISession::sigVideoCaptureChange()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void UISession::sigUSBControllerChange()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void UISession::sigUSBDeviceStateChange(const CUSBDevice & _t1, bool _t2, const CVirtualBoxErrorInfo & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UISession::sigSharedFolderChange()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void UISession::sigRuntimeError(bool _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UISession::sigCPUExecutionCapChange()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void UISession::sigGuestMonitorChange(KGuestMonitorChangedEventType _t1, ulong _t2, QRect _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void UISession::sigHostScreenCountChange()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void UISession::sigHostScreenGeometryChange()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void UISession::sigHostScreenAvailableAreaChange()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void UISession::sigStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}
QT_END_MOC_NAMESPACE
