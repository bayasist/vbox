/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CConsole_h__
#define __CConsole_h__

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
class CConsole : public CInterface<IConsole, COMBaseWithEI>
{
public:

    typedef CInterface<IConsole, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CConsole() {}

    template<class OI, class OB> explicit CConsole(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CConsole(const CConsole & that) : Base(that) {}

    template<class OI> explicit CConsole(OI * aIface) { attach(aIface); }

    explicit CConsole(IConsole * aIface) : Base(aIface) {}

    template<class OI, class OB> CConsole & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CConsole & operator=(const CConsole & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CConsole & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CConsole & operator=(IConsole * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    CMachine GetMachine() const;
    KMachineState GetState() const;
    CGuest GetGuest() const;
    CKeyboard GetKeyboard() const;
    CMouse GetMouse() const;
    CDisplay GetDisplay() const;
    CMachineDebugger GetDebugger() const;
    QVector<CUSBDevice> GetUSBDevices() const;
    QVector<CHostUSBDevice> GetRemoteUSBDevices() const;
    QVector<CSharedFolder> GetSharedFolders() const;
    CVRDEServerInfo GetVRDEServerInfo() const;
    CEventSource GetEventSource() const;
    QVector<CPCIDeviceAttachment> GetAttachedPCIDevices() const;
    BOOL GetUseHostClipboard() const;
    void SetUseHostClipboard(BOOL aUseHostClipboard);
    CEmulatedUSB GetEmulatedUSB() const;

    /* Methods: */
    CProgress PowerUp();
    CProgress PowerUpPaused();
    CProgress PowerDown();
    void Reset();
    void Pause();
    void Resume();
    void PowerButton();
    void SleepButton();
    BOOL GetPowerButtonHandled();
    BOOL GetGuestEnteredACPIMode();
    CProgress SaveState();
    void AdoptSavedState(const QString & aSavedStateFile);
    void DiscardSavedState(BOOL aFRemoveFile);
    KDeviceActivity GetDeviceActivity(const KDeviceType & aType);
    void AttachUSBDevice(QString aId);
    CUSBDevice DetachUSBDevice(QString aId);
    CUSBDevice FindUSBDeviceByAddress(const QString & aName);
    CUSBDevice FindUSBDeviceById(QString aId);
    void CreateSharedFolder(const QString & aName, const QString & aHostPath, BOOL aWritable, BOOL aAutomount);
    void RemoveSharedFolder(const QString & aName);
    CProgress TakeSnapshot(const QString & aName, const QString & aDescription);
    CProgress DeleteSnapshot(QString aId);
    CProgress DeleteSnapshotAndAllChildren(QString aId);
    CProgress DeleteSnapshotRange(QString aStartId, QString aEndId);
    CProgress RestoreSnapshot(const CSnapshot & aSnapshot);
    CProgress Teleport(const QString & aHostname, ULONG aTcpport, const QString & aPassword, ULONG aMaxDowntime);

    /* Friend wrappers: */
    friend class CUnknown;
    friend class CInternalMachineControl;
    friend class CInternalSessionControl;
    friend class CSession;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CConsole)

#endif /* __CConsole_h__ */

