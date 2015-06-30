/****************************************************************************
** Meta object code from reading C++ file 'UIMachineLogic.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/UIMachineLogic.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineLogic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineLogic[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x09,
      54,   15,   15,   15, 0x09,
      85,   15,   15,   15, 0x09,
     120,   15,   15,   15, 0x09,
     153,   15,   15,   15, 0x09,
     183,   15,   15,   15, 0x09,
     208,   15,   15,   15, 0x09,
     235,   15,   15,   15, 0x09,
     263,   15,   15,   15, 0x09,
     313,  288,   15,   15, 0x09,
     406,  375,   15,   15, 0x09,
     475,  444,   15,   15, 0x09,
     540,   15,   15,   15, 0x09,
     567,   15,   15,   15, 0x09,
     597,   15,   15,   15, 0x09,
     641,  632,   15,   15, 0x08,
     672,   15,   15,   15, 0x08,
     700,  690,   15,   15, 0x08,
     732,   15,   15,   15, 0x08,
     745,   15,   15,   15, 0x08,
     759,   15,   15,   15, 0x08,
     777,   15,   15,   15, 0x08,
     797,   15,   15,   15, 0x08,
     824,   15,   15,   15, 0x08,
     839,  835,   15,   15, 0x08,
     854,   15,   15,   15, 0x08,
     869,   15,   15,   15, 0x08,
     883,   15,   15,   15, 0x08,
     897,   15,   15,   15, 0x08,
     931,  908,   15,   15, 0x08,
     984,  972,   15,   15, 0x28,
    1017,   15,   15,   15, 0x28,
    1043,   15,   15,   15, 0x08,
    1074,   15,   15,   15, 0x08,
    1103,   15,   15,   15, 0x08,
    1127,   15,   15,   15, 0x08,
    1151,   15,   15,   15, 0x08,
    1181,   15,   15,   15, 0x08,
    1201,   15,   15,   15, 0x08,
    1224,   15,   15,   15, 0x08,
    1245,   15,   15,   15, 0x08,
    1269,   15,   15,   15, 0x08,
    1309, 1301,   15,   15, 0x08,
    1348,   15,   15,   15, 0x08,
    1376,   15,   15,   15, 0x08,
    1400,   15,   15,   15, 0x08,
    1436, 1301,   15,   15, 0x08,
    1471,  632,   15,   15, 0x08,
    1491,  632,   15,   15, 0x08,
    1519,   15,   15,   15, 0x08,
    1548,   15,   15,   15, 0x08,
    1575,   15,   15,   15, 0x08,
    1597,   15,   15,   15, 0x08,
    1622,   15,   15,   15, 0x08,
    1648,   15,   15,   15, 0x08,
    1672,   15,   15,   15, 0x08,
    1691,  632,   15,   15, 0x08,
    1724,   15,   15,   15, 0x08,
    1759,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineLogic[] = {
    "UIMachineLogic\0\0sltCheckForRequestedVisualStateType()\0"
    "sltChangeVisualStateToNormal()\0"
    "sltChangeVisualStateToFullscreen()\0"
    "sltChangeVisualStateToSeamless()\0"
    "sltChangeVisualStateToScale()\0"
    "sltMachineStateChanged()\0"
    "sltAdditionsStateChanged()\0"
    "sltMouseCapabilityChanged()\0"
    "sltKeyboardLedsChanged()\0"
    "device,fIsAttached,error\0"
    "sltUSBDeviceStateChange(CUSBDevice,bool,CVirtualBoxErrorInfo)\0"
    "fIsFatal,strErrorId,strMessage\0"
    "sltRuntimeError(bool,QString,QString)\0"
    "changeType,uScreenId,screenGeo\0"
    "sltGuestMonitorChange(KGuestMonitorChangedEventType,ulong,QRect)\0"
    "sltHostScreenCountChange()\0"
    "sltHostScreenGeometryChange()\0"
    "sltHostScreenAvailableAreaChange()\0"
    "fEnabled\0sltToggleGuestAutoresize(bool)\0"
    "sltAdjustWindow()\0fDisabled\0"
    "sltToggleMouseIntegration(bool)\0"
    "sltTypeCAD()\0sltTypeCABS()\0sltTakeSnapshot()\0"
    "sltTakeScreenshot()\0sltShowInformationDialog()\0"
    "sltReset()\0fOn\0sltPause(bool)\0"
    "sltSaveState()\0sltShutdown()\0sltPowerOff()\0"
    "sltClose()\0strCategory,strControl\0"
    "sltOpenVMSettingsDialog(QString,QString)\0"
    "strCategory\0sltOpenVMSettingsDialog(QString)\0"
    "sltOpenVMSettingsDialog()\0"
    "sltOpenNetworkAdaptersDialog()\0"
    "sltOpenSharedFoldersDialog()\0"
    "sltPrepareStorageMenu()\0sltMountStorageMedium()\0"
    "sltMountRecentStorageMedium()\0"
    "sltPrepareUSBMenu()\0sltPrepareWebCamMenu()\0"
    "sltAttachUSBDevice()\0sltAttachWebCamDevice()\0"
    "sltPrepareSharedClipboardMenu()\0pAction\0"
    "sltChangeSharedClipboardType(QAction*)\0"
    "sltPrepareDragAndDropMenu()\0"
    "sltPrepareNetworkMenu()\0"
    "sltToggleNetworkAdapterConnection()\0"
    "sltChangeDragAndDropType(QAction*)\0"
    "sltToggleVRDE(bool)\0sltToggleVideoCapture(bool)\0"
    "sltOpenVideoCaptureOptions()\0"
    "sltInstallGuestAdditions()\0"
    "sltPrepareDebugMenu()\0sltShowDebugStatistics()\0"
    "sltShowDebugCommandLine()\0"
    "sltLoggingToggled(bool)\0sltShowLogDialog()\0"
    "sltHidLedsSyncStateChanged(bool)\0"
    "sltSwitchKeyboardLedsToGuestLeds()\0"
    "sltSwitchKeyboardLedsToPreviousLeds()\0"
};

void UIMachineLogic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineLogic *_t = static_cast<UIMachineLogic *>(_o);
        switch (_id) {
        case 0: _t->sltCheckForRequestedVisualStateType(); break;
        case 1: _t->sltChangeVisualStateToNormal(); break;
        case 2: _t->sltChangeVisualStateToFullscreen(); break;
        case 3: _t->sltChangeVisualStateToSeamless(); break;
        case 4: _t->sltChangeVisualStateToScale(); break;
        case 5: _t->sltMachineStateChanged(); break;
        case 6: _t->sltAdditionsStateChanged(); break;
        case 7: _t->sltMouseCapabilityChanged(); break;
        case 8: _t->sltKeyboardLedsChanged(); break;
        case 9: _t->sltUSBDeviceStateChange((*reinterpret_cast< const CUSBDevice(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const CVirtualBoxErrorInfo(*)>(_a[3]))); break;
        case 10: _t->sltRuntimeError((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->sltGuestMonitorChange((*reinterpret_cast< KGuestMonitorChangedEventType(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QRect(*)>(_a[3]))); break;
        case 12: _t->sltHostScreenCountChange(); break;
        case 13: _t->sltHostScreenGeometryChange(); break;
        case 14: _t->sltHostScreenAvailableAreaChange(); break;
        case 15: _t->sltToggleGuestAutoresize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->sltAdjustWindow(); break;
        case 17: _t->sltToggleMouseIntegration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->sltTypeCAD(); break;
        case 19: _t->sltTypeCABS(); break;
        case 20: _t->sltTakeSnapshot(); break;
        case 21: _t->sltTakeScreenshot(); break;
        case 22: _t->sltShowInformationDialog(); break;
        case 23: _t->sltReset(); break;
        case 24: _t->sltPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->sltSaveState(); break;
        case 26: _t->sltShutdown(); break;
        case 27: _t->sltPowerOff(); break;
        case 28: _t->sltClose(); break;
        case 29: _t->sltOpenVMSettingsDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->sltOpenVMSettingsDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->sltOpenVMSettingsDialog(); break;
        case 32: _t->sltOpenNetworkAdaptersDialog(); break;
        case 33: _t->sltOpenSharedFoldersDialog(); break;
        case 34: _t->sltPrepareStorageMenu(); break;
        case 35: _t->sltMountStorageMedium(); break;
        case 36: _t->sltMountRecentStorageMedium(); break;
        case 37: _t->sltPrepareUSBMenu(); break;
        case 38: _t->sltPrepareWebCamMenu(); break;
        case 39: _t->sltAttachUSBDevice(); break;
        case 40: _t->sltAttachWebCamDevice(); break;
        case 41: _t->sltPrepareSharedClipboardMenu(); break;
        case 42: _t->sltChangeSharedClipboardType((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 43: _t->sltPrepareDragAndDropMenu(); break;
        case 44: _t->sltPrepareNetworkMenu(); break;
        case 45: _t->sltToggleNetworkAdapterConnection(); break;
        case 46: _t->sltChangeDragAndDropType((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 47: _t->sltToggleVRDE((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->sltToggleVideoCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->sltOpenVideoCaptureOptions(); break;
        case 50: _t->sltInstallGuestAdditions(); break;
        case 51: _t->sltPrepareDebugMenu(); break;
        case 52: _t->sltShowDebugStatistics(); break;
        case 53: _t->sltShowDebugCommandLine(); break;
        case 54: _t->sltLoggingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->sltShowLogDialog(); break;
        case 56: _t->sltHidLedsSyncStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->sltSwitchKeyboardLedsToGuestLeds(); break;
        case 58: _t->sltSwitchKeyboardLedsToPreviousLeds(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineLogic::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineLogic::staticMetaObject = {
    { &QIWithRetranslateUI3<QObject>::staticMetaObject, qt_meta_stringdata_UIMachineLogic,
      qt_meta_data_UIMachineLogic, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineLogic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineLogic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineLogic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineLogic))
        return static_cast<void*>(const_cast< UIMachineLogic*>(this));
    return QIWithRetranslateUI3<QObject>::qt_metacast(_clname);
}

int UIMachineLogic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI3<QObject>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
