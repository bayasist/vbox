/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CSnapshotChangedEvent_h__
#define __CSnapshotChangedEvent_h__

/* GUI includes: */
#include "COMDefs.h"

/* Forward declarations: */
class CVirtualBoxErrorInfo;
class CNATNetwork;
class CDHCPServer;
class CVirtualBox;
class CVFSExplorer;
class CAppliance;
class CVirtualSystemDescription;
class CBIOSSettings;
class CPCIAddress;
class CPCIDeviceAttachment;
class CMachine;
class CEmulatedUSB;
class CVRDEServerInfo;
class CConsole;
class CHostNetworkInterface;
class CHostVideoInputDevice;
class CHost;
class CSystemProperties;
class CGuestOSType;
class CAdditionsFacility;
class CGuestSession;
class CProcess;
class CGuestProcess;
class CDirectory;
class CGuestDirectory;
class CFile;
class CGuestFile;
class CFsObjInfo;
class CGuestFsObjInfo;
class CGuest;
class CProgress;
class CSnapshot;
class CMediumAttachment;
class CMedium;
class CMediumFormat;
class CToken;
class CKeyboard;
class CMouse;
class CFramebuffer;
class CFramebufferOverlay;
class CDisplay;
class CNetworkAdapter;
class CSerialPort;
class CParallelPort;
class CMachineDebugger;
class CUSBDeviceFilters;
class CUSBController;
class CUSBDevice;
class CUSBDeviceFilter;
class CHostUSBDevice;
class CHostUSBDeviceFilter;
class CAudioAdapter;
class CVRDEServer;
class CSharedFolder;
class CSession;
class CStorageController;
class CPerformanceMetric;
class CPerformanceCollector;
class CNATEngine;
class CExtPackPlugIn;
class CExtPackBase;
class CExtPack;
class CExtPackFile;
class CExtPackManager;
class CBandwidthGroup;
class CBandwidthControl;
class CVirtualBoxClient;
class CEventSource;
class CEventListener;
class CEvent;
class CReusableEvent;
class CMachineEvent;
class CMachineStateChangedEvent;
class CMachineDataChangedEvent;
class CMediumRegisteredEvent;
class CMachineRegisteredEvent;
class CSessionStateChangedEvent;
class CGuestPropertyChangedEvent;
class CSnapshotEvent;
class CSnapshotTakenEvent;
class CSnapshotDeletedEvent;
class CSnapshotChangedEvent;
class CMousePointerShapeChangedEvent;
class CMouseCapabilityChangedEvent;
class CKeyboardLedsChangedEvent;
class CStateChangedEvent;
class CAdditionsStateChangedEvent;
class CNetworkAdapterChangedEvent;
class CSerialPortChangedEvent;
class CParallelPortChangedEvent;
class CStorageControllerChangedEvent;
class CMediumChangedEvent;
class CClipboardModeChangedEvent;
class CDragAndDropModeChangedEvent;
class CCPUChangedEvent;
class CCPUExecutionCapChangedEvent;
class CGuestKeyboardEvent;
class CGuestMouseEvent;
class CGuestMultiTouchEvent;
class CGuestSessionEvent;
class CGuestSessionStateChangedEvent;
class CGuestSessionRegisteredEvent;
class CGuestProcessEvent;
class CGuestProcessRegisteredEvent;
class CGuestProcessStateChangedEvent;
class CGuestProcessIOEvent;
class CGuestProcessInputNotifyEvent;
class CGuestProcessOutputEvent;
class CGuestFileEvent;
class CGuestFileRegisteredEvent;
class CGuestFileStateChangedEvent;
class CGuestFileIOEvent;
class CGuestFileOffsetChangedEvent;
class CGuestFileReadEvent;
class CGuestFileWriteEvent;
class CVRDEServerChangedEvent;
class CVRDEServerInfoChangedEvent;
class CVideoCaptureChangedEvent;
class CUSBControllerChangedEvent;
class CUSBDeviceStateChangedEvent;
class CSharedFolderChangedEvent;
class CRuntimeErrorEvent;
class CEventSourceChangedEvent;
class CExtraDataChangedEvent;
class CVetoEvent;
class CExtraDataCanChangeEvent;
class CCanShowWindowEvent;
class CShowWindowEvent;
class CNATRedirectEvent;
class CHostPCIDevicePlugEvent;
class CVBoxSVCAvailabilityChangedEvent;
class CBandwidthGroupChangedEvent;
class CGuestMonitorChangedEvent;
class CGuestUserStateChangedEvent;
class CStorageDeviceChangedEvent;
class CNATNetworkChangedEvent;
class CNATNetworkStartStopEvent;
class CNATNetworkAlterEvent;
class CNATNetworkCreationDeletionEvent;
class CNATNetworkSettingEvent;
class CNATNetworkPortForwardEvent;
class CHostNameResolutionConfigurationChangeEvent;
class CVirtualBox;
class CVirtualBoxClient;
class CSession;

/* Interface declaration: */
class CSnapshotChangedEvent : public CInterface<ISnapshotChangedEvent, COMBaseWithEI>
{
public:

    typedef CInterface<ISnapshotChangedEvent, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CSnapshotChangedEvent() {}

    template<class OI, class OB> explicit CSnapshotChangedEvent(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CSnapshotChangedEvent(const CSnapshotChangedEvent & that) : Base(that) {}

    template<class OI> explicit CSnapshotChangedEvent(OI * aIface) { attach(aIface); }

    explicit CSnapshotChangedEvent(ISnapshotChangedEvent * aIface) : Base(aIface) {}

    template<class OI, class OB> CSnapshotChangedEvent & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CSnapshotChangedEvent & operator=(const CSnapshotChangedEvent & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CSnapshotChangedEvent & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CSnapshotChangedEvent & operator=(ISnapshotChangedEvent * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    QString GetSnapshotId() const;

    QString GetMachineId() const;

    KVBoxEventType GetType() const;
    CEventSource GetSource() const;
    BOOL GetWaitable() const;

    /* Methods: */
    void SetProcessed();
    BOOL WaitProcessed(LONG aTimeout);

    /* Friend wrappers: */
    friend class CUnknown;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CSnapshotChangedEvent)

#endif /* __CSnapshotChangedEvent_h__ */
