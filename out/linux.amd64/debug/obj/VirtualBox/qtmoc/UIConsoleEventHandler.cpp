/****************************************************************************
** Meta object code from reading C++ file 'UIConsoleEventHandler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/UIConsoleEventHandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIConsoleEventHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIConsoleEventHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      60,   23,   22,   22, 0x05,
     201,  128,   22,   22, 0x05,
     278,  247,   22,   22, 0x05,
     327,  321,   22,   22, 0x05,
     357,   22,   22,   22, 0x05,
     386,  378,   22,   22, 0x05,
     438,  427,   22,   22, 0x05,
     473,   22,   22,   22, 0x05,
     489,   22,   22,   22, 0x05,
     513,   22,   22,   22, 0x05,
     561,  538,   22,   22, 0x05,
     623,   22,   22,   22, 0x05,
     671,  647,   22,   22, 0x05,
     709,   22,   22,   22, 0x05,
     767,  736,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     848,  832,   22,   22, 0x08,
     887,  881,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIConsoleEventHandler[] = {
    "UIConsoleEventHandler\0\0"
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
    "sigCPUExecutionCapChange()\0"
    "changeType,uScreenId,screenGeo\0"
    "sigGuestMonitorChange(KGuestMonitorChangedEventType,ulong,QRect)\0"
    "fVeto,strReason\0sltCanShowWindow(bool&,QString&)\0"
    "winId\0sltShowWindow(LONG64&)\0"
};

void UIConsoleEventHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIConsoleEventHandler *_t = static_cast<UIConsoleEventHandler *>(_o);
        switch (_id) {
        case 0: _t->sigMousePointerShapeChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3])),(*reinterpret_cast< QSize(*)>(_a[4])),(*reinterpret_cast< QVector<uint8_t>(*)>(_a[5]))); break;
        case 1: _t->sigMouseCapabilityChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->sigKeyboardLedsChangeEvent((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->sigStateChange((*reinterpret_cast< KMachineState(*)>(_a[1]))); break;
        case 4: _t->sigAdditionsChange(); break;
        case 5: _t->sigNetworkAdapterChange((*reinterpret_cast< CNetworkAdapter(*)>(_a[1]))); break;
        case 6: _t->sigMediumChange((*reinterpret_cast< CMediumAttachment(*)>(_a[1]))); break;
        case 7: _t->sigVRDEChange(); break;
        case 8: _t->sigVideoCaptureChange(); break;
        case 9: _t->sigUSBControllerChange(); break;
        case 10: _t->sigUSBDeviceStateChange((*reinterpret_cast< CUSBDevice(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< CVirtualBoxErrorInfo(*)>(_a[3]))); break;
        case 11: _t->sigSharedFolderChange(); break;
        case 12: _t->sigRuntimeError((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: _t->sigCPUExecutionCapChange(); break;
        case 14: _t->sigGuestMonitorChange((*reinterpret_cast< KGuestMonitorChangedEventType(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QRect(*)>(_a[3]))); break;
        case 15: _t->sltCanShowWindow((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->sltShowWindow((*reinterpret_cast< LONG64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIConsoleEventHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIConsoleEventHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIConsoleEventHandler,
      qt_meta_data_UIConsoleEventHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIConsoleEventHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIConsoleEventHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIConsoleEventHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIConsoleEventHandler))
        return static_cast<void*>(const_cast< UIConsoleEventHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int UIConsoleEventHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void UIConsoleEventHandler::sigMousePointerShapeChange(bool _t1, bool _t2, QPoint _t3, QSize _t4, QVector<uint8_t> _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIConsoleEventHandler::sigMouseCapabilityChange(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UIConsoleEventHandler::sigKeyboardLedsChangeEvent(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UIConsoleEventHandler::sigStateChange(KMachineState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UIConsoleEventHandler::sigAdditionsChange()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void UIConsoleEventHandler::sigNetworkAdapterChange(CNetworkAdapter _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UIConsoleEventHandler::sigMediumChange(CMediumAttachment _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UIConsoleEventHandler::sigVRDEChange()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void UIConsoleEventHandler::sigVideoCaptureChange()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void UIConsoleEventHandler::sigUSBControllerChange()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void UIConsoleEventHandler::sigUSBDeviceStateChange(CUSBDevice _t1, bool _t2, CVirtualBoxErrorInfo _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UIConsoleEventHandler::sigSharedFolderChange()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void UIConsoleEventHandler::sigRuntimeError(bool _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UIConsoleEventHandler::sigCPUExecutionCapChange()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void UIConsoleEventHandler::sigGuestMonitorChange(KGuestMonitorChangedEventType _t1, ulong _t2, QRect _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
