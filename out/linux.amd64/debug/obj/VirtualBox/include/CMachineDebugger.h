/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CMachineDebugger_h__
#define __CMachineDebugger_h__

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
class CMachineDebugger : public CInterface<IMachineDebugger, COMBaseWithEI>
{
public:

    typedef CInterface<IMachineDebugger, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CMachineDebugger() {}

    template<class OI, class OB> explicit CMachineDebugger(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CMachineDebugger(const CMachineDebugger & that) : Base(that) {}

    template<class OI> explicit CMachineDebugger(OI * aIface) { attach(aIface); }

    explicit CMachineDebugger(IMachineDebugger * aIface) : Base(aIface) {}

    template<class OI, class OB> CMachineDebugger & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CMachineDebugger & operator=(const CMachineDebugger & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CMachineDebugger & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CMachineDebugger & operator=(IMachineDebugger * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    BOOL GetSingleStep() const;
    void SetSingleStep(BOOL aSingleStep);
    BOOL GetRecompileUser() const;
    void SetRecompileUser(BOOL aRecompileUser);
    BOOL GetRecompileSupervisor() const;
    void SetRecompileSupervisor(BOOL aRecompileSupervisor);
    BOOL GetExecuteAllInIEM() const;
    void SetExecuteAllInIEM(BOOL aExecuteAllInIEM);
    BOOL GetPATMEnabled() const;
    void SetPATMEnabled(BOOL aPATMEnabled);
    BOOL GetCSAMEnabled() const;
    void SetCSAMEnabled(BOOL aCSAMEnabled);
    BOOL GetLogEnabled() const;
    void SetLogEnabled(BOOL aLogEnabled);
    QString GetLogDbgFlags() const;
    QString GetLogDbgGroups() const;
    QString GetLogDbgDestinations() const;
    QString GetLogRelFlags() const;
    QString GetLogRelGroups() const;
    QString GetLogRelDestinations() const;
    BOOL GetHWVirtExEnabled() const;
    BOOL GetHWVirtExNestedPagingEnabled() const;
    BOOL GetHWVirtExVPIDEnabled() const;
    BOOL GetHWVirtExUXEnabled() const;
    QString GetOSName() const;
    QString GetOSVersion() const;
    BOOL GetPAEEnabled() const;
    ULONG GetVirtualTimeRate() const;
    void SetVirtualTimeRate(ULONG aVirtualTimeRate);
    LONG64 GetVM() const;

    /* Methods: */
    void DumpGuestCore(const QString & aFilename, const QString & aCompression);
    void DumpHostProcessCore(const QString & aFilename, const QString & aCompression);
    QString Info(const QString & aName, const QString & aArgs);
    void InjectNMI();
    void ModifyLogGroups(const QString & aSettings);
    void ModifyLogFlags(const QString & aSettings);
    void ModifyLogDestinations(const QString & aSettings);
    QVector<BYTE> ReadPhysicalMemory(LONG64 aAddress, ULONG aSize);
    void WritePhysicalMemory(LONG64 aAddress, ULONG aSize, const QVector<BYTE> & aBytes);
    QVector<BYTE> ReadVirtualMemory(ULONG aCpuId, LONG64 aAddress, ULONG aSize);
    void WriteVirtualMemory(ULONG aCpuId, LONG64 aAddress, ULONG aSize, const QVector<BYTE> & aBytes);
    QString DetectOS();
    QString GetRegister(ULONG aCpuId, const QString & aName);
    void GetRegisters(ULONG aCpuId, QVector<QString> & aNames, QVector<QString> & aValues);
    void SetRegister(ULONG aCpuId, const QString & aName, const QString & aValue);
    void SetRegisters(ULONG aCpuId, const QVector<QString> & aNames, const QVector<QString> & aValues);
    QString DumpGuestStack(ULONG aCpuId);
    void ResetStats(const QString & aPattern);
    void DumpStats(const QString & aPattern);
    QString GetStats(const QString & aPattern, BOOL aWithDescriptions);

    /* Friend wrappers: */
    friend class CUnknown;
    friend class CConsole;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CMachineDebugger)

#endif /* __CMachineDebugger_h__ */

