/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CNATNetwork_h__
#define __CNATNetwork_h__

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
class CNATNetwork : public CInterface<INATNetwork, COMBaseWithEI>
{
public:

    typedef CInterface<INATNetwork, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CNATNetwork() {}

    template<class OI, class OB> explicit CNATNetwork(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CNATNetwork(const CNATNetwork & that) : Base(that) {}

    template<class OI> explicit CNATNetwork(OI * aIface) { attach(aIface); }

    explicit CNATNetwork(INATNetwork * aIface) : Base(aIface) {}

    template<class OI, class OB> CNATNetwork & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CNATNetwork & operator=(const CNATNetwork & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CNATNetwork & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CNATNetwork & operator=(INATNetwork * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    QString GetNetworkName() const;
    void SetNetworkName(const QString & aNetworkName);
    BOOL GetEnabled() const;
    void SetEnabled(BOOL aEnabled);
    QString GetNetwork() const;
    void SetNetwork(const QString & aNetwork);
    QString GetGateway() const;
    BOOL GetIPv6Enabled() const;
    void SetIPv6Enabled(BOOL aIPv6Enabled);
    QString GetIPv6Prefix() const;
    void SetIPv6Prefix(const QString & aIPv6Prefix);
    BOOL GetAdvertiseDefaultIPv6RouteEnabled() const;
    void SetAdvertiseDefaultIPv6RouteEnabled(BOOL aAdvertiseDefaultIPv6RouteEnabled);
    BOOL GetNeedDhcpServer() const;
    void SetNeedDhcpServer(BOOL aNeedDhcpServer);
    CEventSource GetEventSource() const;
    QVector<QString> GetPortForwardRules4() const;
    QVector<QString> GetLocalMappings() const;
    LONG GetLoopbackIp6() const;
    void SetLoopbackIp6(LONG aLoopbackIp6);
    QVector<QString> GetPortForwardRules6() const;

    /* Methods: */
    void AddLocalMapping(const QString & aHostid, LONG aOffset);
    void AddPortForwardRule(BOOL aIsIpv6, const QString & aRuleName, const KNATProtocol & aProto, const QString & aHostIP, USHORT aHostPort, const QString & aGuestIP, USHORT aGuestPort);
    void RemovePortForwardRule(BOOL aISipv6, const QString & aRuleName);
    void Start(const QString & aTrunkType);
    void Stop();

    /* Friend wrappers: */
    friend class CUnknown;
    friend class CVirtualBox;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CNATNetwork)

/* Declare safe-array: */
typedef QVector<CNATNetwork> CNATNetworkVector;

#endif /* __CNATNetwork_h__ */

