/****************************************************************************
** Meta object code from reading C++ file 'UIMainEventListener.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/globals/UIMainEventListener.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMainEventListener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMainEventListener[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   21,   20,   20, 0x05,
      84,   78,   20,   20, 0x05,
     156,  114,   20,   20, 0x05,
     240,  218,   20,   20, 0x05,
     302,  284,   20,   20, 0x05,
     337,   21,   20,   20, 0x05,
     402,  382,   20,   20, 0x05,
     435,  382,   20,   20, 0x05,
     470,  382,   20,   20, 0x05,
     542,  505,   20,   20, 0x05,
     683,  610,   20,   20, 0x05,
     760,  729,   20,   20, 0x05,
     809,  803,   20,   20, 0x05,
     839,   20,   20,   20, 0x05,
     868,  860,   20,   20, 0x05,
     920,  909,   20,   20, 0x05,
     955,   20,   20,   20, 0x05,
     971,   20,   20,   20, 0x05,
     995,   20,   20,   20, 0x05,
    1043, 1020,   20,   20, 0x05,
    1105,   20,   20,   20, 0x05,
    1153, 1129,   20,   20, 0x05,
    1207, 1191,   20,   20, 0x05,
    1246, 1240,   20,   20, 0x05,
    1269,   20,   20,   20, 0x05,
    1327, 1296,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIMainEventListener[] = {
    "UIMainEventListener\0\0strId,state\0"
    "sigMachineStateChange(QString,KMachineState)\0"
    "strId\0sigMachineDataChange(QString)\0"
    "strId,strKey,strValue,fVeto,strVetoReason\0"
    "sigExtraDataCanChange(QString,QString,QString,bool&,QString&)\0"
    "strId,strKey,strValue\0"
    "sigExtraDataChange(QString,QString,QString)\0"
    "strId,fRegistered\0sigMachineRegistered(QString,bool)\0"
    "sigSessionStateChange(QString,KSessionState)\0"
    "strId,strSnapshotId\0"
    "sigSnapshotTake(QString,QString)\0"
    "sigSnapshotDelete(QString,QString)\0"
    "sigSnapshotChange(QString,QString)\0"
    "fVisible,fAlpha,hotCorner,size,shape\0"
    "sigMousePointerShapeChange(bool,bool,QPoint,QSize,QVector<uint8_t>)\0"
    "fSupportsAbsolute,fSupportsRelative,fSupportsMultiTouch,fNeedsHostCurs"
    "or\0"
    "sigMouseCapabilityChange(bool,bool,bool,bool)\0"
    "fNumLock,fCapsLock,fScrollLock\0"
    "sigKeyboardLedsChangeEvent(bool,bool,bool)\0"
    "state\0sigStateChange(KMachineState)\0"
    "sigAdditionsChange()\0adapter\0"
    "sigNetworkAdapterChange(CNetworkAdapter)\0"
    "attachment\0sigMediumChange(CMediumAttachment)\0"
    "sigVRDEChange()\0sigVideoCaptureChange()\0"
    "sigUSBControllerChange()\0"
    "device,fAttached,error\0"
    "sigUSBDeviceStateChange(CUSBDevice,bool,CVirtualBoxErrorInfo)\0"
    "sigSharedFolderChange()\0fFatal,strId,strMessage\0"
    "sigRuntimeError(bool,QString,QString)\0"
    "fVeto,strReason\0sigCanShowWindow(bool&,QString&)\0"
    "winId\0sigShowWindow(LONG64&)\0"
    "sigCPUExecutionCapChange()\0"
    "changeType,uScreenId,screenGeo\0"
    "sigGuestMonitorChange(KGuestMonitorChangedEventType,ulong,QRect)\0"
};

void UIMainEventListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMainEventListener *_t = static_cast<UIMainEventListener *>(_o);
        switch (_id) {
        case 0: _t->sigMachineStateChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< KMachineState(*)>(_a[2]))); break;
        case 1: _t->sigMachineDataChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sigExtraDataCanChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 3: _t->sigExtraDataChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->sigMachineRegistered((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->sigSessionStateChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< KSessionState(*)>(_a[2]))); break;
        case 6: _t->sigSnapshotTake((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->sigSnapshotDelete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->sigSnapshotChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->sigMousePointerShapeChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3])),(*reinterpret_cast< QSize(*)>(_a[4])),(*reinterpret_cast< QVector<uint8_t>(*)>(_a[5]))); break;
        case 10: _t->sigMouseCapabilityChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 11: _t->sigKeyboardLedsChangeEvent((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->sigStateChange((*reinterpret_cast< KMachineState(*)>(_a[1]))); break;
        case 13: _t->sigAdditionsChange(); break;
        case 14: _t->sigNetworkAdapterChange((*reinterpret_cast< CNetworkAdapter(*)>(_a[1]))); break;
        case 15: _t->sigMediumChange((*reinterpret_cast< CMediumAttachment(*)>(_a[1]))); break;
        case 16: _t->sigVRDEChange(); break;
        case 17: _t->sigVideoCaptureChange(); break;
        case 18: _t->sigUSBControllerChange(); break;
        case 19: _t->sigUSBDeviceStateChange((*reinterpret_cast< CUSBDevice(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< CVirtualBoxErrorInfo(*)>(_a[3]))); break;
        case 20: _t->sigSharedFolderChange(); break;
        case 21: _t->sigRuntimeError((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 22: _t->sigCanShowWindow((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->sigShowWindow((*reinterpret_cast< LONG64(*)>(_a[1]))); break;
        case 24: _t->sigCPUExecutionCapChange(); break;
        case 25: _t->sigGuestMonitorChange((*reinterpret_cast< KGuestMonitorChangedEventType(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QRect(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMainEventListener::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMainEventListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIMainEventListener,
      qt_meta_data_UIMainEventListener, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMainEventListener::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMainEventListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMainEventListener::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMainEventListener))
        return static_cast<void*>(const_cast< UIMainEventListener*>(this));
    return QObject::qt_metacast(_clname);
}

int UIMainEventListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void UIMainEventListener::sigMachineStateChange(QString _t1, KMachineState _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIMainEventListener::sigMachineDataChange(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UIMainEventListener::sigExtraDataCanChange(QString _t1, QString _t2, QString _t3, bool & _t4, QString & _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UIMainEventListener::sigExtraDataChange(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UIMainEventListener::sigMachineRegistered(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UIMainEventListener::sigSessionStateChange(QString _t1, KSessionState _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UIMainEventListener::sigSnapshotTake(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UIMainEventListener::sigSnapshotDelete(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UIMainEventListener::sigSnapshotChange(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UIMainEventListener::sigMousePointerShapeChange(bool _t1, bool _t2, QPoint _t3, QSize _t4, QVector<uint8_t> _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void UIMainEventListener::sigMouseCapabilityChange(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UIMainEventListener::sigKeyboardLedsChangeEvent(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UIMainEventListener::sigStateChange(KMachineState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UIMainEventListener::sigAdditionsChange()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void UIMainEventListener::sigNetworkAdapterChange(CNetworkAdapter _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UIMainEventListener::sigMediumChange(CMediumAttachment _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void UIMainEventListener::sigVRDEChange()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void UIMainEventListener::sigVideoCaptureChange()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void UIMainEventListener::sigUSBControllerChange()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void UIMainEventListener::sigUSBDeviceStateChange(CUSBDevice _t1, bool _t2, CVirtualBoxErrorInfo _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void UIMainEventListener::sigSharedFolderChange()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void UIMainEventListener::sigRuntimeError(bool _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void UIMainEventListener::sigCanShowWindow(bool & _t1, QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void UIMainEventListener::sigShowWindow(LONG64 & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void UIMainEventListener::sigCPUExecutionCapChange()
{
    QMetaObject::activate(this, &staticMetaObject, 24, 0);
}

// SIGNAL 25
void UIMainEventListener::sigGuestMonitorChange(KGuestMonitorChangedEventType _t1, ulong _t2, QRect _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}
QT_END_MOC_NAMESPACE
