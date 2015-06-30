/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrappers definitions for VirtualBox Main API (COM) interfaces.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

/* COM includes: */
#include "COMEnums.h"
#include "CVirtualBoxErrorInfo.h"
#include "CNATNetwork.h"
#include "CDHCPServer.h"
#include "CVirtualBox.h"
#include "CVFSExplorer.h"
#include "CAppliance.h"
#include "CVirtualSystemDescription.h"
#include "CBIOSSettings.h"
#include "CPCIAddress.h"
#include "CPCIDeviceAttachment.h"
#include "CMachine.h"
#include "CEmulatedUSB.h"
#include "CVRDEServerInfo.h"
#include "CConsole.h"
#include "CHostNetworkInterface.h"
#include "CHostVideoInputDevice.h"
#include "CHost.h"
#include "CSystemProperties.h"
#include "CGuestOSType.h"
#include "CAdditionsFacility.h"
#include "CGuestSession.h"
#include "CProcess.h"
#include "CGuestProcess.h"
#include "CDirectory.h"
#include "CGuestDirectory.h"
#include "CFile.h"
#include "CGuestFile.h"
#include "CFsObjInfo.h"
#include "CGuestFsObjInfo.h"
#include "CGuest.h"
#include "CProgress.h"
#include "CSnapshot.h"
#include "CMediumAttachment.h"
#include "CMedium.h"
#include "CMediumFormat.h"
#include "CToken.h"
#include "CKeyboard.h"
#include "CMouse.h"
#include "CFramebuffer.h"
#include "CFramebufferOverlay.h"
#include "CDisplay.h"
#include "CNetworkAdapter.h"
#include "CSerialPort.h"
#include "CParallelPort.h"
#include "CMachineDebugger.h"
#include "CUSBDeviceFilters.h"
#include "CUSBController.h"
#include "CUSBDevice.h"
#include "CUSBDeviceFilter.h"
#include "CHostUSBDevice.h"
#include "CHostUSBDeviceFilter.h"
#include "CAudioAdapter.h"
#include "CVRDEServer.h"
#include "CSharedFolder.h"
#include "CSession.h"
#include "CStorageController.h"
#include "CPerformanceMetric.h"
#include "CPerformanceCollector.h"
#include "CNATEngine.h"
#include "CExtPackPlugIn.h"
#include "CExtPackBase.h"
#include "CExtPack.h"
#include "CExtPackFile.h"
#include "CExtPackManager.h"
#include "CBandwidthGroup.h"
#include "CBandwidthControl.h"
#include "CVirtualBoxClient.h"
#include "CEventSource.h"
#include "CEventListener.h"
#include "CEvent.h"
#include "CReusableEvent.h"
#include "CMachineEvent.h"
#include "CMachineStateChangedEvent.h"
#include "CMachineDataChangedEvent.h"
#include "CMediumRegisteredEvent.h"
#include "CMachineRegisteredEvent.h"
#include "CSessionStateChangedEvent.h"
#include "CGuestPropertyChangedEvent.h"
#include "CSnapshotEvent.h"
#include "CSnapshotTakenEvent.h"
#include "CSnapshotDeletedEvent.h"
#include "CSnapshotChangedEvent.h"
#include "CMousePointerShapeChangedEvent.h"
#include "CMouseCapabilityChangedEvent.h"
#include "CKeyboardLedsChangedEvent.h"
#include "CStateChangedEvent.h"
#include "CAdditionsStateChangedEvent.h"
#include "CNetworkAdapterChangedEvent.h"
#include "CSerialPortChangedEvent.h"
#include "CParallelPortChangedEvent.h"
#include "CStorageControllerChangedEvent.h"
#include "CMediumChangedEvent.h"
#include "CClipboardModeChangedEvent.h"
#include "CDragAndDropModeChangedEvent.h"
#include "CCPUChangedEvent.h"
#include "CCPUExecutionCapChangedEvent.h"
#include "CGuestKeyboardEvent.h"
#include "CGuestMouseEvent.h"
#include "CGuestMultiTouchEvent.h"
#include "CGuestSessionEvent.h"
#include "CGuestSessionStateChangedEvent.h"
#include "CGuestSessionRegisteredEvent.h"
#include "CGuestProcessEvent.h"
#include "CGuestProcessRegisteredEvent.h"
#include "CGuestProcessStateChangedEvent.h"
#include "CGuestProcessIOEvent.h"
#include "CGuestProcessInputNotifyEvent.h"
#include "CGuestProcessOutputEvent.h"
#include "CGuestFileEvent.h"
#include "CGuestFileRegisteredEvent.h"
#include "CGuestFileStateChangedEvent.h"
#include "CGuestFileIOEvent.h"
#include "CGuestFileOffsetChangedEvent.h"
#include "CGuestFileReadEvent.h"
#include "CGuestFileWriteEvent.h"
#include "CVRDEServerChangedEvent.h"
#include "CVRDEServerInfoChangedEvent.h"
#include "CVideoCaptureChangedEvent.h"
#include "CUSBControllerChangedEvent.h"
#include "CUSBDeviceStateChangedEvent.h"
#include "CSharedFolderChangedEvent.h"
#include "CRuntimeErrorEvent.h"
#include "CEventSourceChangedEvent.h"
#include "CExtraDataChangedEvent.h"
#include "CVetoEvent.h"
#include "CExtraDataCanChangeEvent.h"
#include "CCanShowWindowEvent.h"
#include "CShowWindowEvent.h"
#include "CNATRedirectEvent.h"
#include "CHostPCIDevicePlugEvent.h"
#include "CVBoxSVCAvailabilityChangedEvent.h"
#include "CBandwidthGroupChangedEvent.h"
#include "CGuestMonitorChangedEvent.h"
#include "CGuestUserStateChangedEvent.h"
#include "CStorageDeviceChangedEvent.h"
#include "CNATNetworkChangedEvent.h"
#include "CNATNetworkStartStopEvent.h"
#include "CNATNetworkAlterEvent.h"
#include "CNATNetworkCreationDeletionEvent.h"
#include "CNATNetworkSettingEvent.h"
#include "CNATNetworkPortForwardEvent.h"
#include "CHostNameResolutionConfigurationChangeEvent.h"

// IVirtualBoxErrorInfo wrapper

LONG CVirtualBoxErrorInfo::GetResultCode() const
{
    LONG aResultCode = 0;
    AssertReturn(ptr(), aResultCode);
    mRC = ptr()->COMGETTER(ResultCode)(&aResultCode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    return aResultCode;
}

LONG CVirtualBoxErrorInfo::GetResultDetail() const
{
    LONG aResultDetail = 0;
    AssertReturn(ptr(), aResultDetail);
    mRC = ptr()->COMGETTER(ResultDetail)(&aResultDetail);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    return aResultDetail;
}

QString CVirtualBoxErrorInfo::GetInterfaceID() const
{
    QString aInterfaceID;
    AssertReturn(ptr(), aInterfaceID);
    mRC = ptr()->COMGETTER(InterfaceID)(BSTROut(aInterfaceID));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    return aInterfaceID;
}

QString CVirtualBoxErrorInfo::GetComponent() const
{
    QString aComponent;
    AssertReturn(ptr(), aComponent);
    mRC = ptr()->COMGETTER(Component)(BSTROut(aComponent));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    return aComponent;
}

QString CVirtualBoxErrorInfo::GetText() const
{
    QString aText;
    AssertReturn(ptr(), aText);
    mRC = ptr()->COMGETTER(Text)(BSTROut(aText));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    return aText;
}

CVirtualBoxErrorInfo CVirtualBoxErrorInfo::GetNext() const
{
    CVirtualBoxErrorInfo aNext;
    AssertReturn(ptr(), aNext);
    IVirtualBoxErrorInfo* nextPtr = NULL;
    mRC = ptr()->COMGETTER(Next)(&nextPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aNext.setPtr(nextPtr);
    return aNext;
}

// INATNetwork wrapper

QString CNATNetwork::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}
void CNATNetwork::SetNetworkName(const QString & aNetworkName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(NetworkName)(BSTRIn(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetwork::GetEnabled() const
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->COMGETTER(Enabled)(&aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}
void CNATNetwork::SetEnabled(BOOL aEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Enabled)(aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNATNetwork::GetNetwork() const
{
    QString aNetwork;
    AssertReturn(ptr(), aNetwork);
    mRC = ptr()->COMGETTER(Network)(BSTROut(aNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetwork;
}
void CNATNetwork::SetNetwork(const QString & aNetwork)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Network)(BSTRIn(aNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNATNetwork::GetGateway() const
{
    QString aGateway;
    AssertReturn(ptr(), aGateway);
    mRC = ptr()->COMGETTER(Gateway)(BSTROut(aGateway));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGateway;
}

BOOL CNATNetwork::GetIPv6Enabled() const
{
    BOOL aIPv6Enabled = FALSE;
    AssertReturn(ptr(), aIPv6Enabled);
    mRC = ptr()->COMGETTER(IPv6Enabled)(&aIPv6Enabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIPv6Enabled;
}
void CNATNetwork::SetIPv6Enabled(BOOL aIPv6Enabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IPv6Enabled)(aIPv6Enabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNATNetwork::GetIPv6Prefix() const
{
    QString aIPv6Prefix;
    AssertReturn(ptr(), aIPv6Prefix);
    mRC = ptr()->COMGETTER(IPv6Prefix)(BSTROut(aIPv6Prefix));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIPv6Prefix;
}
void CNATNetwork::SetIPv6Prefix(const QString & aIPv6Prefix)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IPv6Prefix)(BSTRIn(aIPv6Prefix));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetwork::GetAdvertiseDefaultIPv6RouteEnabled() const
{
    BOOL aAdvertiseDefaultIPv6RouteEnabled = FALSE;
    AssertReturn(ptr(), aAdvertiseDefaultIPv6RouteEnabled);
    mRC = ptr()->COMGETTER(AdvertiseDefaultIPv6RouteEnabled)(&aAdvertiseDefaultIPv6RouteEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdvertiseDefaultIPv6RouteEnabled;
}
void CNATNetwork::SetAdvertiseDefaultIPv6RouteEnabled(BOOL aAdvertiseDefaultIPv6RouteEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AdvertiseDefaultIPv6RouteEnabled)(aAdvertiseDefaultIPv6RouteEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetwork::GetNeedDhcpServer() const
{
    BOOL aNeedDhcpServer = FALSE;
    AssertReturn(ptr(), aNeedDhcpServer);
    mRC = ptr()->COMGETTER(NeedDhcpServer)(&aNeedDhcpServer);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNeedDhcpServer;
}
void CNATNetwork::SetNeedDhcpServer(BOOL aNeedDhcpServer)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(NeedDhcpServer)(aNeedDhcpServer);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CEventSource CNATNetwork::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

QVector<QString> CNATNetwork::GetPortForwardRules4() const
{
    QVector<QString> aPortForwardRules4;
    AssertReturn(ptr(), aPortForwardRules4);
    com::SafeArray <BSTR> portForwardRules4;
    mRC = ptr()->COMGETTER(PortForwardRules4)(ComSafeArrayAsOutParam(portForwardRules4));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(portForwardRules4, aPortForwardRules4);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPortForwardRules4;
}

QVector<QString> CNATNetwork::GetLocalMappings() const
{
    QVector<QString> aLocalMappings;
    AssertReturn(ptr(), aLocalMappings);
    com::SafeArray <BSTR> localMappings;
    mRC = ptr()->COMGETTER(LocalMappings)(ComSafeArrayAsOutParam(localMappings));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(localMappings, aLocalMappings);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLocalMappings;
}

LONG CNATNetwork::GetLoopbackIp6() const
{
    LONG aLoopbackIp6 = 0;
    AssertReturn(ptr(), aLoopbackIp6);
    mRC = ptr()->COMGETTER(LoopbackIp6)(&aLoopbackIp6);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLoopbackIp6;
}
void CNATNetwork::SetLoopbackIp6(LONG aLoopbackIp6)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LoopbackIp6)(aLoopbackIp6);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CNATNetwork::GetPortForwardRules6() const
{
    QVector<QString> aPortForwardRules6;
    AssertReturn(ptr(), aPortForwardRules6);
    com::SafeArray <BSTR> portForwardRules6;
    mRC = ptr()->COMGETTER(PortForwardRules6)(ComSafeArrayAsOutParam(portForwardRules6));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(portForwardRules6, aPortForwardRules6);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPortForwardRules6;
}

void CNATNetwork::AddLocalMapping(const QString & aHostid, LONG aOffset)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddLocalMapping(BSTRIn(aHostid), aOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CNATNetwork::AddPortForwardRule(BOOL aIsIpv6, const QString & aRuleName, const KNATProtocol & aProto, const QString & aHostIP, USHORT aHostPort, const QString & aGuestIP, USHORT aGuestPort)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddPortForwardRule(aIsIpv6, BSTRIn(aRuleName), (NATProtocol_T) aProto, BSTRIn(aHostIP), aHostPort, BSTRIn(aGuestIP), aGuestPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CNATNetwork::RemovePortForwardRule(BOOL aISipv6, const QString & aRuleName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemovePortForwardRule(aISipv6, BSTRIn(aRuleName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CNATNetwork::Start(const QString & aTrunkType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Start(BSTRIn(aTrunkType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CNATNetwork::Stop()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Stop();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IDHCPServer wrapper

CEventSource CDHCPServer::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

BOOL CDHCPServer::GetEnabled() const
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->COMGETTER(Enabled)(&aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}
void CDHCPServer::SetEnabled(BOOL aEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Enabled)(aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CDHCPServer::GetIPAddress() const
{
    QString aIPAddress;
    AssertReturn(ptr(), aIPAddress);
    mRC = ptr()->COMGETTER(IPAddress)(BSTROut(aIPAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIPAddress;
}

QString CDHCPServer::GetNetworkMask() const
{
    QString aNetworkMask;
    AssertReturn(ptr(), aNetworkMask);
    mRC = ptr()->COMGETTER(NetworkMask)(BSTROut(aNetworkMask));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkMask;
}

QString CDHCPServer::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}

QString CDHCPServer::GetLowerIP() const
{
    QString aLowerIP;
    AssertReturn(ptr(), aLowerIP);
    mRC = ptr()->COMGETTER(LowerIP)(BSTROut(aLowerIP));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLowerIP;
}

QString CDHCPServer::GetUpperIP() const
{
    QString aUpperIP;
    AssertReturn(ptr(), aUpperIP);
    mRC = ptr()->COMGETTER(UpperIP)(BSTROut(aUpperIP));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUpperIP;
}

QVector<QString> CDHCPServer::GetGlobalOptions() const
{
    QVector<QString> aGlobalOptions;
    AssertReturn(ptr(), aGlobalOptions);
    com::SafeArray <BSTR> globalOptions;
    mRC = ptr()->COMGETTER(GlobalOptions)(ComSafeArrayAsOutParam(globalOptions));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(globalOptions, aGlobalOptions);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGlobalOptions;
}

QVector<QString> CDHCPServer::GetVmConfigs() const
{
    QVector<QString> aVmConfigs;
    AssertReturn(ptr(), aVmConfigs);
    com::SafeArray <BSTR> vmConfigs;
    mRC = ptr()->COMGETTER(VmConfigs)(ComSafeArrayAsOutParam(vmConfigs));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(vmConfigs, aVmConfigs);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVmConfigs;
}

void CDHCPServer::AddGlobalOption(const KDhcpOpt & aOption, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddGlobalOption((DhcpOpt_T) aOption, BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDHCPServer::AddVmSlotOption(const QString & aVmname, LONG aSlot, const KDhcpOpt & aOption, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddVmSlotOption(BSTRIn(aVmname), aSlot, (DhcpOpt_T) aOption, BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDHCPServer::RemoveVmSlotOptions(const QString & aVmname, LONG aSlot)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveVmSlotOptions(BSTRIn(aVmname), aSlot);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CDHCPServer::GetVmSlotOptions(const QString & aVmname, LONG aSlot)
{
    QVector<QString> aOption;
    AssertReturn(ptr(), aOption);
    com::SafeArray <BSTR> option;
    mRC = ptr()->GetVmSlotOptions(BSTRIn(aVmname), aSlot, ComSafeArrayAsOutParam(option));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(option, aOption);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOption;
}

QVector<QString> CDHCPServer::GetMacOptions(const QString & aMac)
{
    QVector<QString> aOption;
    AssertReturn(ptr(), aOption);
    com::SafeArray <BSTR> option;
    mRC = ptr()->GetMacOptions(BSTRIn(aMac), ComSafeArrayAsOutParam(option));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(option, aOption);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOption;
}

void CDHCPServer::SetConfiguration(const QString & aIPAddress, const QString & aNetworkMask, const QString & aFromIPAddress, const QString & aToIPAddress)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetConfiguration(BSTRIn(aIPAddress), BSTRIn(aNetworkMask), BSTRIn(aFromIPAddress), BSTRIn(aToIPAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDHCPServer::Start(const QString & aNetworkName, const QString & aTrunkName, const QString & aTrunkType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Start(BSTRIn(aNetworkName), BSTRIn(aTrunkName), BSTRIn(aTrunkType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDHCPServer::Stop()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Stop();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IVirtualBox wrapper

QString CVirtualBox::GetVersion() const
{
    QString aVersion;
    AssertReturn(ptr(), aVersion);
    mRC = ptr()->COMGETTER(Version)(BSTROut(aVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVersion;
}

QString CVirtualBox::GetVersionNormalized() const
{
    QString aVersionNormalized;
    AssertReturn(ptr(), aVersionNormalized);
    mRC = ptr()->COMGETTER(VersionNormalized)(BSTROut(aVersionNormalized));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVersionNormalized;
}

ULONG CVirtualBox::GetRevision() const
{
    ULONG aRevision = 0;
    AssertReturn(ptr(), aRevision);
    mRC = ptr()->COMGETTER(Revision)(&aRevision);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRevision;
}

QString CVirtualBox::GetPackageType() const
{
    QString aPackageType;
    AssertReturn(ptr(), aPackageType);
    mRC = ptr()->COMGETTER(PackageType)(BSTROut(aPackageType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPackageType;
}

QString CVirtualBox::GetAPIVersion() const
{
    QString aAPIVersion;
    AssertReturn(ptr(), aAPIVersion);
    mRC = ptr()->COMGETTER(APIVersion)(BSTROut(aAPIVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAPIVersion;
}

QString CVirtualBox::GetHomeFolder() const
{
    QString aHomeFolder;
    AssertReturn(ptr(), aHomeFolder);
    mRC = ptr()->COMGETTER(HomeFolder)(BSTROut(aHomeFolder));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHomeFolder;
}

QString CVirtualBox::GetSettingsFilePath() const
{
    QString aSettingsFilePath;
    AssertReturn(ptr(), aSettingsFilePath);
    mRC = ptr()->COMGETTER(SettingsFilePath)(BSTROut(aSettingsFilePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSettingsFilePath;
}

CHost CVirtualBox::GetHost() const
{
    CHost aHost;
    AssertReturn(ptr(), aHost);
    IHost* hostPtr = NULL;
    mRC = ptr()->COMGETTER(Host)(&hostPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aHost.setPtr(hostPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHost;
}

CSystemProperties CVirtualBox::GetSystemProperties() const
{
    CSystemProperties aSystemProperties;
    AssertReturn(ptr(), aSystemProperties);
    ISystemProperties* systemPropertiesPtr = NULL;
    mRC = ptr()->COMGETTER(SystemProperties)(&systemPropertiesPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSystemProperties.setPtr(systemPropertiesPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSystemProperties;
}

QVector<CMachine> CVirtualBox::GetMachines() const
{
    QVector<CMachine> aMachines;
    AssertReturn(ptr(), aMachines);
    com::SafeIfaceArray <IMachine> machines;
    mRC = ptr()->COMGETTER(Machines)(ComSafeArrayAsOutParam(machines));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(machines, aMachines);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachines;
}

QVector<QString> CVirtualBox::GetMachineGroups() const
{
    QVector<QString> aMachineGroups;
    AssertReturn(ptr(), aMachineGroups);
    com::SafeArray <BSTR> machineGroups;
    mRC = ptr()->COMGETTER(MachineGroups)(ComSafeArrayAsOutParam(machineGroups));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(machineGroups, aMachineGroups);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineGroups;
}

QVector<CMedium> CVirtualBox::GetHardDisks() const
{
    QVector<CMedium> aHardDisks;
    AssertReturn(ptr(), aHardDisks);
    com::SafeIfaceArray <IMedium> hardDisks;
    mRC = ptr()->COMGETTER(HardDisks)(ComSafeArrayAsOutParam(hardDisks));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(hardDisks, aHardDisks);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHardDisks;
}

QVector<CMedium> CVirtualBox::GetDVDImages() const
{
    QVector<CMedium> aDVDImages;
    AssertReturn(ptr(), aDVDImages);
    com::SafeIfaceArray <IMedium> DVDImages;
    mRC = ptr()->COMGETTER(DVDImages)(ComSafeArrayAsOutParam(DVDImages));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(DVDImages, aDVDImages);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDVDImages;
}

QVector<CMedium> CVirtualBox::GetFloppyImages() const
{
    QVector<CMedium> aFloppyImages;
    AssertReturn(ptr(), aFloppyImages);
    com::SafeIfaceArray <IMedium> floppyImages;
    mRC = ptr()->COMGETTER(FloppyImages)(ComSafeArrayAsOutParam(floppyImages));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(floppyImages, aFloppyImages);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFloppyImages;
}

QVector<CProgress> CVirtualBox::GetProgressOperations() const
{
    QVector<CProgress> aProgressOperations;
    AssertReturn(ptr(), aProgressOperations);
    com::SafeIfaceArray <IProgress> progressOperations;
    mRC = ptr()->COMGETTER(ProgressOperations)(ComSafeArrayAsOutParam(progressOperations));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(progressOperations, aProgressOperations);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgressOperations;
}

QVector<CGuestOSType> CVirtualBox::GetGuestOSTypes() const
{
    QVector<CGuestOSType> aGuestOSTypes;
    AssertReturn(ptr(), aGuestOSTypes);
    com::SafeIfaceArray <IGuestOSType> guestOSTypes;
    mRC = ptr()->COMGETTER(GuestOSTypes)(ComSafeArrayAsOutParam(guestOSTypes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(guestOSTypes, aGuestOSTypes);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestOSTypes;
}

QVector<CSharedFolder> CVirtualBox::GetSharedFolders() const
{
    QVector<CSharedFolder> aSharedFolders;
    AssertReturn(ptr(), aSharedFolders);
    com::SafeIfaceArray <ISharedFolder> sharedFolders;
    mRC = ptr()->COMGETTER(SharedFolders)(ComSafeArrayAsOutParam(sharedFolders));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(sharedFolders, aSharedFolders);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSharedFolders;
}

CPerformanceCollector CVirtualBox::GetPerformanceCollector() const
{
    CPerformanceCollector aPerformanceCollector;
    AssertReturn(ptr(), aPerformanceCollector);
    IPerformanceCollector* performanceCollectorPtr = NULL;
    mRC = ptr()->COMGETTER(PerformanceCollector)(&performanceCollectorPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aPerformanceCollector.setPtr(performanceCollectorPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPerformanceCollector;
}

QVector<CDHCPServer> CVirtualBox::GetDHCPServers() const
{
    QVector<CDHCPServer> aDHCPServers;
    AssertReturn(ptr(), aDHCPServers);
    com::SafeIfaceArray <IDHCPServer> DHCPServers;
    mRC = ptr()->COMGETTER(DHCPServers)(ComSafeArrayAsOutParam(DHCPServers));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(DHCPServers, aDHCPServers);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDHCPServers;
}

QVector<CNATNetwork> CVirtualBox::GetNATNetworks() const
{
    QVector<CNATNetwork> aNATNetworks;
    AssertReturn(ptr(), aNATNetworks);
    com::SafeIfaceArray <INATNetwork> NATNetworks;
    mRC = ptr()->COMGETTER(NATNetworks)(ComSafeArrayAsOutParam(NATNetworks));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(NATNetworks, aNATNetworks);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNATNetworks;
}

CEventSource CVirtualBox::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

CExtPackManager CVirtualBox::GetExtensionPackManager() const
{
    CExtPackManager aExtensionPackManager;
    AssertReturn(ptr(), aExtensionPackManager);
    IExtPackManager* extensionPackManagerPtr = NULL;
    mRC = ptr()->COMGETTER(ExtensionPackManager)(&extensionPackManagerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aExtensionPackManager.setPtr(extensionPackManagerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExtensionPackManager;
}

QVector<QString> CVirtualBox::GetInternalNetworks() const
{
    QVector<QString> aInternalNetworks;
    AssertReturn(ptr(), aInternalNetworks);
    com::SafeArray <BSTR> internalNetworks;
    mRC = ptr()->COMGETTER(InternalNetworks)(ComSafeArrayAsOutParam(internalNetworks));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(internalNetworks, aInternalNetworks);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInternalNetworks;
}

QVector<QString> CVirtualBox::GetGenericNetworkDrivers() const
{
    QVector<QString> aGenericNetworkDrivers;
    AssertReturn(ptr(), aGenericNetworkDrivers);
    com::SafeArray <BSTR> genericNetworkDrivers;
    mRC = ptr()->COMGETTER(GenericNetworkDrivers)(ComSafeArrayAsOutParam(genericNetworkDrivers));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(genericNetworkDrivers, aGenericNetworkDrivers);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGenericNetworkDrivers;
}

QString CVirtualBox::ComposeMachineFilename(const QString & aName, const QString & aGroup, const QString & aCreateFlags, const QString & aBaseFolder)
{
    QString aFile;
    AssertReturn(ptr(), aFile);
    mRC = ptr()->ComposeMachineFilename(BSTRIn(aName), BSTRIn(aGroup), BSTRIn(aCreateFlags), BSTRIn(aBaseFolder), BSTROut(aFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CMachine CVirtualBox::CreateMachine(const QString & aSettingsFile, const QString & aName, const QVector<QString> & aGroups, const QString & aOsTypeId, const QString & aFlags)
{
    CMachine aMachine;
    AssertReturn(ptr(), aMachine);
    com::SafeArray <BSTR> groups;
    ToSafeArray(aGroups, groups);
    IMachine* machinePtr = NULL;
    mRC = ptr()->CreateMachine(BSTRIn(aSettingsFile), BSTRIn(aName), ComSafeArrayAsInParam(groups), BSTRIn(aOsTypeId), BSTRIn(aFlags), &machinePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMachine.setPtr(machinePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachine;
}

CMachine CVirtualBox::OpenMachine(const QString & aSettingsFile)
{
    CMachine aMachine;
    AssertReturn(ptr(), aMachine);
    IMachine* machinePtr = NULL;
    mRC = ptr()->OpenMachine(BSTRIn(aSettingsFile), &machinePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMachine.setPtr(machinePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachine;
}

void CVirtualBox::RegisterMachine(const CMachine & aMachine)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RegisterMachine(aMachine.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CMachine CVirtualBox::FindMachine(const QString & aNameOrId)
{
    CMachine aMachine;
    AssertReturn(ptr(), aMachine);
    IMachine* machinePtr = NULL;
    mRC = ptr()->FindMachine(BSTRIn(aNameOrId), &machinePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMachine.setPtr(machinePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachine;
}

QVector<CMachine> CVirtualBox::GetMachinesByGroups(const QVector<QString> & aGroups)
{
    QVector<CMachine> aMachines;
    AssertReturn(ptr(), aMachines);
    com::SafeArray <BSTR> groups;
    ToSafeArray(aGroups, groups);
    com::SafeIfaceArray <IMachine> machines;
    mRC = ptr()->GetMachinesByGroups(ComSafeArrayAsInParam(groups), ComSafeArrayAsOutParam(machines));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(machines, aMachines);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachines;
}

QVector<KMachineState> CVirtualBox::GetMachineStates(const QVector<CMachine> & aMachines)
{
    QVector<KMachineState> aStates;
    AssertReturn(ptr(), aStates);
    com::SafeIfaceArray <IMachine> machines;
    ToSafeIfaceArray(aMachines, machines);
    com::SafeArray <MachineState_T> states;
    mRC = ptr()->GetMachineStates(ComSafeArrayAsInParam(machines), ComSafeArrayAsOutParam(states));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(states, aStates);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStates;
}

CAppliance CVirtualBox::CreateAppliance()
{
    CAppliance aAppliance;
    AssertReturn(ptr(), aAppliance);
    IAppliance* appliancePtr = NULL;
    mRC = ptr()->CreateAppliance(&appliancePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aAppliance.setPtr(appliancePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAppliance;
}

CMedium CVirtualBox::CreateHardDisk(const QString & aFormat, const QString & aLocation)
{
    CMedium aMedium;
    AssertReturn(ptr(), aMedium);
    IMedium* mediumPtr = NULL;
    mRC = ptr()->CreateHardDisk(BSTRIn(aFormat), BSTRIn(aLocation), &mediumPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMedium.setPtr(mediumPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMedium;
}

CMedium CVirtualBox::OpenMedium(const QString & aLocation, const KDeviceType & aDeviceType, const KAccessMode & aAccessMode, BOOL aForceNewUuid)
{
    CMedium aMedium;
    AssertReturn(ptr(), aMedium);
    IMedium* mediumPtr = NULL;
    mRC = ptr()->OpenMedium(BSTRIn(aLocation), (DeviceType_T) aDeviceType, (AccessMode_T) aAccessMode, aForceNewUuid, &mediumPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMedium.setPtr(mediumPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMedium;
}

CGuestOSType CVirtualBox::GetGuestOSType(QString aId)
{
    CGuestOSType aType;
    AssertReturn(ptr(), aType);
    IGuestOSType* typePtr = NULL;
    mRC = ptr()->GetGuestOSType(BSTRIn(aId), &typePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aType.setPtr(typePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

void CVirtualBox::CreateSharedFolder(const QString & aName, const QString & aHostPath, BOOL aWritable, BOOL aAutomount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->CreateSharedFolder(BSTRIn(aName), BSTRIn(aHostPath), aWritable, aAutomount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CVirtualBox::RemoveSharedFolder(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveSharedFolder(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CVirtualBox::GetExtraDataKeys()
{
    QVector<QString> aKeys;
    AssertReturn(ptr(), aKeys);
    com::SafeArray <BSTR> keys;
    mRC = ptr()->GetExtraDataKeys(ComSafeArrayAsOutParam(keys));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(keys, aKeys);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aKeys;
}

QString CVirtualBox::GetExtraData(const QString & aKey)
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetExtraData(BSTRIn(aKey), BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CVirtualBox::SetExtraData(const QString & aKey, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetExtraData(BSTRIn(aKey), BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CVirtualBox::SetSettingsSecret(const QString & aPassword)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetSettingsSecret(BSTRIn(aPassword));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CDHCPServer CVirtualBox::CreateDHCPServer(const QString & aName)
{
    CDHCPServer aServer;
    AssertReturn(ptr(), aServer);
    IDHCPServer* serverPtr = NULL;
    mRC = ptr()->CreateDHCPServer(BSTRIn(aName), &serverPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aServer.setPtr(serverPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aServer;
}

CDHCPServer CVirtualBox::FindDHCPServerByNetworkName(const QString & aName)
{
    CDHCPServer aServer;
    AssertReturn(ptr(), aServer);
    IDHCPServer* serverPtr = NULL;
    mRC = ptr()->FindDHCPServerByNetworkName(BSTRIn(aName), &serverPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aServer.setPtr(serverPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aServer;
}

void CVirtualBox::RemoveDHCPServer(const CDHCPServer & aServer)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveDHCPServer(aServer.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CNATNetwork CVirtualBox::CreateNATNetwork(const QString & aNetworkName)
{
    CNATNetwork aNetwork;
    AssertReturn(ptr(), aNetwork);
    INATNetwork* networkPtr = NULL;
    mRC = ptr()->CreateNATNetwork(BSTRIn(aNetworkName), &networkPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aNetwork.setPtr(networkPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetwork;
}

CNATNetwork CVirtualBox::FindNATNetworkByName(const QString & aNetworkName)
{
    CNATNetwork aNetwork;
    AssertReturn(ptr(), aNetwork);
    INATNetwork* networkPtr = NULL;
    mRC = ptr()->FindNATNetworkByName(BSTRIn(aNetworkName), &networkPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aNetwork.setPtr(networkPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetwork;
}

void CVirtualBox::RemoveNATNetwork(const CNATNetwork & aNetwork)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveNATNetwork(aNetwork.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVirtualBox::CheckFirmwarePresent(const KFirmwareType & aFirmwareType, const QString & aVersion, QString & aUrl, QString & aFile)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->CheckFirmwarePresent((FirmwareType_T) aFirmwareType, BSTRIn(aVersion), BSTROut(aUrl), BSTROut(aFile), &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

/* ExtraData helpers: */
void CVirtualBox::SetExtraDataBool(const QString &strKey, bool fValue)
{
    SetExtraData(strKey, fValue == true ? "true" : "false");
}

bool CVirtualBox::GetExtraDataBool(const QString &strKey, bool fDef /* = true */)
{
    bool fResult = fDef;
    QString value = GetExtraData(strKey);
    if (   value == "true"
        || value == "on"
        || value == "yes")
        fResult = true;
    else if (   value == "false"
             || value == "off"
             || value == "no")
             fResult = false;
    return fResult;
}

void CVirtualBox::SetExtraDataInt(const QString &strKey, int value)
{
    SetExtraData(strKey, QString::number(value));
}

int CVirtualBox::GetExtraDataInt(const QString &strKey, int def /* = 0 */)
{
    QString value = GetExtraData(strKey);
    bool fOk;
    int result = value.toInt(&fOk);
    if (fOk)
        return result;
    return def;
}

void CVirtualBox::SetExtraDataRect(const QString &strKey, const QRect &value)
{
    SetExtraData(strKey, QString("%1,%2,%3,%4")
                         .arg(value.x())
                         .arg(value.y())
                         .arg(value.width())
                         .arg(value.height()));
}

QRect CVirtualBox::GetExtraDataRect(const QString &strKey, const QRect &def /* = QRect() */)
{
    QRect result = def;
    QList<int> intList = GetExtraDataIntList(strKey);
    if (intList.size() == 4)
    {
        result.setRect(intList.at(0),
                       intList.at(1),
                       intList.at(2),
                       intList.at(3));
    }
    return result;
}

void CVirtualBox::SetExtraDataStringList(const QString &strKey, const QStringList &value)
{
    SetExtraData(strKey, value.join(","));
}

QStringList CVirtualBox::GetExtraDataStringList(const QString &strKey, QStringList def /* = QStringList() */)
{
    QString strValue = GetExtraData(strKey);
    if (strValue.isEmpty())
        return def;
    else
        return strValue.split(",");
}

void CVirtualBox::SetExtraDataIntList(const QString &strKey, const QList<int> &value)
{
    QStringList strList;
    for (int i=0; i < value.size(); ++i)
        strList << QString::number(value.at(i));
    SetExtraDataStringList(strKey, strList);
}

QList<int> CVirtualBox::GetExtraDataIntList(const QString &strKey, QList<int> def /* = QList<int>() */)
{
    QStringList strList = GetExtraDataStringList(strKey);
    if (strList.size() > 0)
    {
        QList<int> intList;
        bool fOk;
        for (int i=0; i < strList.size(); ++i)
        {
            intList << strList.at(i).toInt(&fOk);
            if (!fOk)
                return def;
        }
        return intList;
    }
    return def;
}

// IVFSExplorer wrapper

QString CVFSExplorer::GetPath() const
{
    QString aPath;
    AssertReturn(ptr(), aPath);
    mRC = ptr()->COMGETTER(Path)(BSTROut(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPath;
}

KVFSType CVFSExplorer::GetType() const
{
    KVFSType aType = (KVFSType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVFSType, VFSType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CProgress CVFSExplorer::Update()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Update(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CVFSExplorer::Cd(const QString & aDir)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Cd(BSTRIn(aDir), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CVFSExplorer::CdUp()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->CdUp(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

void CVFSExplorer::EntryList(QVector<QString> & aNames, QVector<ULONG> & aTypes, QVector<LONG64> & aSizes, QVector<ULONG> & aModes)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> names;
    com::SafeArray <ULONG> types;
    com::SafeArray <LONG64> sizes;
    com::SafeArray <ULONG> modes;
    mRC = ptr()->EntryList(ComSafeArrayAsOutParam(names), ComSafeArrayAsOutParam(types), ComSafeArrayAsOutParam(sizes), ComSafeArrayAsOutParam(modes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(names, aNames);
    FromSafeArray(types, aTypes);
    FromSafeArray(sizes, aSizes);
    FromSafeArray(modes, aModes);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CVFSExplorer::Exists(const QVector<QString> & aNames)
{
    QVector<QString> aExists;
    AssertReturn(ptr(), aExists);
    com::SafeArray <BSTR> names;
    ToSafeArray(aNames, names);
    com::SafeArray <BSTR> exists;
    mRC = ptr()->Exists(ComSafeArrayAsInParam(names), ComSafeArrayAsOutParam(exists));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(exists, aExists);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExists;
}

CProgress CVFSExplorer::Remove(const QVector<QString> & aNames)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <BSTR> names;
    ToSafeArray(aNames, names);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Remove(ComSafeArrayAsInParam(names), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

// IAppliance wrapper

QString CAppliance::GetPath() const
{
    QString aPath;
    AssertReturn(ptr(), aPath);
    mRC = ptr()->COMGETTER(Path)(BSTROut(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPath;
}

QVector<QString> CAppliance::GetDisks() const
{
    QVector<QString> aDisks;
    AssertReturn(ptr(), aDisks);
    com::SafeArray <BSTR> disks;
    mRC = ptr()->COMGETTER(Disks)(ComSafeArrayAsOutParam(disks));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(disks, aDisks);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDisks;
}

QVector<CVirtualSystemDescription> CAppliance::GetVirtualSystemDescriptions() const
{
    QVector<CVirtualSystemDescription> aVirtualSystemDescriptions;
    AssertReturn(ptr(), aVirtualSystemDescriptions);
    com::SafeIfaceArray <IVirtualSystemDescription> virtualSystemDescriptions;
    mRC = ptr()->COMGETTER(VirtualSystemDescriptions)(ComSafeArrayAsOutParam(virtualSystemDescriptions));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(virtualSystemDescriptions, aVirtualSystemDescriptions);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVirtualSystemDescriptions;
}

QVector<QString> CAppliance::GetMachines() const
{
    QVector<QString> aMachines;
    AssertReturn(ptr(), aMachines);
    com::SafeArray <BSTR> machines;
    mRC = ptr()->COMGETTER(Machines)(ComSafeArrayAsOutParam(machines));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(machines, aMachines);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachines;
}

CProgress CAppliance::Read(const QString & aFile)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Read(BSTRIn(aFile), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

void CAppliance::Interpret()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Interpret();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CProgress CAppliance::ImportMachines(const QVector<KImportOptions> & aOptions)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <ImportOptions_T> options;
    ToSafeArray(aOptions, options);
    IProgress* progressPtr = NULL;
    mRC = ptr()->ImportMachines(ComSafeArrayAsInParam(options), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CVFSExplorer CAppliance::CreateVFSExplorer(const QString & aURI)
{
    CVFSExplorer aExplorer;
    AssertReturn(ptr(), aExplorer);
    IVFSExplorer* explorerPtr = NULL;
    mRC = ptr()->CreateVFSExplorer(BSTRIn(aURI), &explorerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aExplorer.setPtr(explorerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExplorer;
}

CProgress CAppliance::Write(const QString & aFormat, const QVector<KExportOptions> & aOptions, const QString & aPath)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <ExportOptions_T> options;
    ToSafeArray(aOptions, options);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Write(BSTRIn(aFormat), ComSafeArrayAsInParam(options), BSTRIn(aPath), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

QVector<QString> CAppliance::GetWarnings()
{
    QVector<QString> aWarnings;
    AssertReturn(ptr(), aWarnings);
    com::SafeArray <BSTR> warnings;
    mRC = ptr()->GetWarnings(ComSafeArrayAsOutParam(warnings));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(warnings, aWarnings);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWarnings;
}

// IVirtualSystemDescription wrapper

ULONG CVirtualSystemDescription::GetCount() const
{
    ULONG aCount = 0;
    AssertReturn(ptr(), aCount);
    mRC = ptr()->COMGETTER(Count)(&aCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCount;
}

void CVirtualSystemDescription::GetDescription(QVector<KVirtualSystemDescriptionType> & aTypes, QVector<QString> & aRefs, QVector<QString> & aOVFValues, QVector<QString> & aVBoxValues, QVector<QString> & aExtraConfigValues)
{
    AssertReturnVoid(ptr());
    com::SafeArray <VirtualSystemDescriptionType_T> types;
    com::SafeArray <BSTR> refs;
    com::SafeArray <BSTR> OVFValues;
    com::SafeArray <BSTR> VBoxValues;
    com::SafeArray <BSTR> extraConfigValues;
    mRC = ptr()->GetDescription(ComSafeArrayAsOutParam(types), ComSafeArrayAsOutParam(refs), ComSafeArrayAsOutParam(OVFValues), ComSafeArrayAsOutParam(VBoxValues), ComSafeArrayAsOutParam(extraConfigValues));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(types, aTypes);
    FromSafeArray(refs, aRefs);
    FromSafeArray(OVFValues, aOVFValues);
    FromSafeArray(VBoxValues, aVBoxValues);
    FromSafeArray(extraConfigValues, aExtraConfigValues);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CVirtualSystemDescription::GetDescriptionByType(const KVirtualSystemDescriptionType & aType, QVector<KVirtualSystemDescriptionType> & aTypes, QVector<QString> & aRefs, QVector<QString> & aOVFValues, QVector<QString> & aVBoxValues, QVector<QString> & aExtraConfigValues)
{
    AssertReturnVoid(ptr());
    com::SafeArray <VirtualSystemDescriptionType_T> types;
    com::SafeArray <BSTR> refs;
    com::SafeArray <BSTR> OVFValues;
    com::SafeArray <BSTR> VBoxValues;
    com::SafeArray <BSTR> extraConfigValues;
    mRC = ptr()->GetDescriptionByType((VirtualSystemDescriptionType_T) aType, ComSafeArrayAsOutParam(types), ComSafeArrayAsOutParam(refs), ComSafeArrayAsOutParam(OVFValues), ComSafeArrayAsOutParam(VBoxValues), ComSafeArrayAsOutParam(extraConfigValues));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(types, aTypes);
    FromSafeArray(refs, aRefs);
    FromSafeArray(OVFValues, aOVFValues);
    FromSafeArray(VBoxValues, aVBoxValues);
    FromSafeArray(extraConfigValues, aExtraConfigValues);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CVirtualSystemDescription::GetValuesByType(const KVirtualSystemDescriptionType & aType, const KVirtualSystemDescriptionValueType & aWhich)
{
    QVector<QString> aValues;
    AssertReturn(ptr(), aValues);
    com::SafeArray <BSTR> values;
    mRC = ptr()->GetValuesByType((VirtualSystemDescriptionType_T) aType, (VirtualSystemDescriptionValueType_T) aWhich, ComSafeArrayAsOutParam(values));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(values, aValues);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValues;
}

void CVirtualSystemDescription::SetFinalValues(const QVector<BOOL> & aEnabled, const QVector<QString> & aVBoxValues, const QVector<QString> & aExtraConfigValues)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BOOL> enabled;
    ToSafeArray(aEnabled, enabled);
    com::SafeArray <BSTR> VBoxValues;
    ToSafeArray(aVBoxValues, VBoxValues);
    com::SafeArray <BSTR> extraConfigValues;
    ToSafeArray(aExtraConfigValues, extraConfigValues);
    mRC = ptr()->SetFinalValues(ComSafeArrayAsInParam(enabled), ComSafeArrayAsInParam(VBoxValues), ComSafeArrayAsInParam(extraConfigValues));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CVirtualSystemDescription::AddDescription(const KVirtualSystemDescriptionType & aType, const QString & aVBoxValue, const QString & aExtraConfigValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddDescription((VirtualSystemDescriptionType_T) aType, BSTRIn(aVBoxValue), BSTRIn(aExtraConfigValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IBIOSSettings wrapper

BOOL CBIOSSettings::GetLogoFadeIn() const
{
    BOOL aLogoFadeIn = FALSE;
    AssertReturn(ptr(), aLogoFadeIn);
    mRC = ptr()->COMGETTER(LogoFadeIn)(&aLogoFadeIn);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogoFadeIn;
}
void CBIOSSettings::SetLogoFadeIn(BOOL aLogoFadeIn)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LogoFadeIn)(aLogoFadeIn);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CBIOSSettings::GetLogoFadeOut() const
{
    BOOL aLogoFadeOut = FALSE;
    AssertReturn(ptr(), aLogoFadeOut);
    mRC = ptr()->COMGETTER(LogoFadeOut)(&aLogoFadeOut);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogoFadeOut;
}
void CBIOSSettings::SetLogoFadeOut(BOOL aLogoFadeOut)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LogoFadeOut)(aLogoFadeOut);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CBIOSSettings::GetLogoDisplayTime() const
{
    ULONG aLogoDisplayTime = 0;
    AssertReturn(ptr(), aLogoDisplayTime);
    mRC = ptr()->COMGETTER(LogoDisplayTime)(&aLogoDisplayTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogoDisplayTime;
}
void CBIOSSettings::SetLogoDisplayTime(ULONG aLogoDisplayTime)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LogoDisplayTime)(aLogoDisplayTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CBIOSSettings::GetLogoImagePath() const
{
    QString aLogoImagePath;
    AssertReturn(ptr(), aLogoImagePath);
    mRC = ptr()->COMGETTER(LogoImagePath)(BSTROut(aLogoImagePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogoImagePath;
}
void CBIOSSettings::SetLogoImagePath(const QString & aLogoImagePath)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LogoImagePath)(BSTRIn(aLogoImagePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KBIOSBootMenuMode CBIOSSettings::GetBootMenuMode() const
{
    KBIOSBootMenuMode aBootMenuMode = (KBIOSBootMenuMode) 0;
    AssertReturn(ptr(), aBootMenuMode);
    mRC = ptr()->COMGETTER(BootMenuMode)(ENUMOut<KBIOSBootMenuMode, BIOSBootMenuMode_T>(aBootMenuMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBootMenuMode;
}
void CBIOSSettings::SetBootMenuMode(const KBIOSBootMenuMode & aBootMenuMode)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(BootMenuMode)((BIOSBootMenuMode_T) aBootMenuMode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CBIOSSettings::GetACPIEnabled() const
{
    BOOL aACPIEnabled = FALSE;
    AssertReturn(ptr(), aACPIEnabled);
    mRC = ptr()->COMGETTER(ACPIEnabled)(&aACPIEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aACPIEnabled;
}
void CBIOSSettings::SetACPIEnabled(BOOL aACPIEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ACPIEnabled)(aACPIEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CBIOSSettings::GetIOAPICEnabled() const
{
    BOOL aIOAPICEnabled = FALSE;
    AssertReturn(ptr(), aIOAPICEnabled);
    mRC = ptr()->COMGETTER(IOAPICEnabled)(&aIOAPICEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIOAPICEnabled;
}
void CBIOSSettings::SetIOAPICEnabled(BOOL aIOAPICEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IOAPICEnabled)(aIOAPICEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

LONG64 CBIOSSettings::GetTimeOffset() const
{
    LONG64 aTimeOffset = 0;
    AssertReturn(ptr(), aTimeOffset);
    mRC = ptr()->COMGETTER(TimeOffset)(&aTimeOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTimeOffset;
}
void CBIOSSettings::SetTimeOffset(LONG64 aTimeOffset)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TimeOffset)(aTimeOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CBIOSSettings::GetPXEDebugEnabled() const
{
    BOOL aPXEDebugEnabled = FALSE;
    AssertReturn(ptr(), aPXEDebugEnabled);
    mRC = ptr()->COMGETTER(PXEDebugEnabled)(&aPXEDebugEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPXEDebugEnabled;
}
void CBIOSSettings::SetPXEDebugEnabled(BOOL aPXEDebugEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(PXEDebugEnabled)(aPXEDebugEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CBIOSSettings::GetNonVolatileStorageFile() const
{
    QString aNonVolatileStorageFile;
    AssertReturn(ptr(), aNonVolatileStorageFile);
    mRC = ptr()->COMGETTER(NonVolatileStorageFile)(BSTROut(aNonVolatileStorageFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNonVolatileStorageFile;
}

// IPCIAddress wrapper

SHORT CPCIAddress::GetBus() const
{
    SHORT aBus = 0;
    AssertReturn(ptr(), aBus);
    mRC = ptr()->COMGETTER(Bus)(&aBus);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBus;
}
void CPCIAddress::SetBus(SHORT aBus)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Bus)(aBus);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

SHORT CPCIAddress::GetDevice() const
{
    SHORT aDevice = 0;
    AssertReturn(ptr(), aDevice);
    mRC = ptr()->COMGETTER(Device)(&aDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}
void CPCIAddress::SetDevice(SHORT aDevice)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Device)(aDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

SHORT CPCIAddress::GetDevFunction() const
{
    SHORT aDevFunction = 0;
    AssertReturn(ptr(), aDevFunction);
    mRC = ptr()->COMGETTER(DevFunction)(&aDevFunction);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevFunction;
}
void CPCIAddress::SetDevFunction(SHORT aDevFunction)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DevFunction)(aDevFunction);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

LONG CPCIAddress::AsLong()
{
    LONG aResult = 0;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->AsLong(&aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

void CPCIAddress::FromLong(LONG aNumber)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->FromLong(aNumber);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IPCIDeviceAttachment wrapper

QString CPCIDeviceAttachment::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

BOOL CPCIDeviceAttachment::GetIsPhysicalDevice() const
{
    BOOL aIsPhysicalDevice = FALSE;
    AssertReturn(ptr(), aIsPhysicalDevice);
    mRC = ptr()->COMGETTER(IsPhysicalDevice)(&aIsPhysicalDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIsPhysicalDevice;
}

LONG CPCIDeviceAttachment::GetHostAddress() const
{
    LONG aHostAddress = 0;
    AssertReturn(ptr(), aHostAddress);
    mRC = ptr()->COMGETTER(HostAddress)(&aHostAddress);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostAddress;
}

LONG CPCIDeviceAttachment::GetGuestAddress() const
{
    LONG aGuestAddress = 0;
    AssertReturn(ptr(), aGuestAddress);
    mRC = ptr()->COMGETTER(GuestAddress)(&aGuestAddress);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestAddress;
}

// IMachine wrapper

CVirtualBox CMachine::GetParent() const
{
    CVirtualBox aParent;
    AssertReturn(ptr(), aParent);
    IVirtualBox* parentPtr = NULL;
    mRC = ptr()->COMGETTER(Parent)(&parentPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aParent.setPtr(parentPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aParent;
}

QVector<BYTE> CMachine::GetIcon() const
{
    QVector<BYTE> aIcon;
    AssertReturn(ptr(), aIcon);
    com::SafeArray <BYTE> icon;
    mRC = ptr()->COMGETTER(Icon)(ComSafeArrayAsOutParam(icon));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(icon, aIcon);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIcon;
}
void CMachine::SetIcon(const QVector<BYTE> & aIcon)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BYTE> icon;
    ToSafeArray(aIcon, icon);
    mRC = ptr()->COMSETTER(Icon)(ComSafeArrayAsInParam(icon));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetAccessible() const
{
    BOOL aAccessible = FALSE;
    AssertReturn(ptr(), aAccessible);
    mRC = ptr()->COMGETTER(Accessible)(&aAccessible);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAccessible;
}

CVirtualBoxErrorInfo CMachine::GetAccessError() const
{
    CVirtualBoxErrorInfo aAccessError;
    AssertReturn(ptr(), aAccessError);
    IVirtualBoxErrorInfo* accessErrorPtr = NULL;
    mRC = ptr()->COMGETTER(AccessError)(&accessErrorPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aAccessError.setPtr(accessErrorPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAccessError;
}

QString CMachine::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}
void CMachine::SetName(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Name)(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}
void CMachine::SetDescription(const QString & aDescription)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Description)(BSTRIn(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

QVector<QString> CMachine::GetGroups() const
{
    QVector<QString> aGroups;
    AssertReturn(ptr(), aGroups);
    com::SafeArray <BSTR> groups;
    mRC = ptr()->COMGETTER(Groups)(ComSafeArrayAsOutParam(groups));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(groups, aGroups);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGroups;
}
void CMachine::SetGroups(const QVector<QString> & aGroups)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> groups;
    ToSafeArray(aGroups, groups);
    mRC = ptr()->COMSETTER(Groups)(ComSafeArrayAsInParam(groups));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetOSTypeId() const
{
    QString aOSTypeId;
    AssertReturn(ptr(), aOSTypeId);
    mRC = ptr()->COMGETTER(OSTypeId)(BSTROut(aOSTypeId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOSTypeId;
}
void CMachine::SetOSTypeId(const QString & aOSTypeId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(OSTypeId)(BSTRIn(aOSTypeId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetHardwareVersion() const
{
    QString aHardwareVersion;
    AssertReturn(ptr(), aHardwareVersion);
    mRC = ptr()->COMGETTER(HardwareVersion)(BSTROut(aHardwareVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHardwareVersion;
}
void CMachine::SetHardwareVersion(const QString & aHardwareVersion)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(HardwareVersion)(BSTRIn(aHardwareVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetHardwareUUID() const
{
    QString aHardwareUUID;
    AssertReturn(ptr(), aHardwareUUID);
    mRC = ptr()->COMGETTER(HardwareUUID)(BSTROut(aHardwareUUID));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHardwareUUID;
}
void CMachine::SetHardwareUUID(QString aHardwareUUID)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(HardwareUUID)(BSTRIn(aHardwareUUID));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetCPUCount() const
{
    ULONG aCPUCount = 0;
    AssertReturn(ptr(), aCPUCount);
    mRC = ptr()->COMGETTER(CPUCount)(&aCPUCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCPUCount;
}
void CMachine::SetCPUCount(ULONG aCPUCount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(CPUCount)(aCPUCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetCPUHotPlugEnabled() const
{
    BOOL aCPUHotPlugEnabled = FALSE;
    AssertReturn(ptr(), aCPUHotPlugEnabled);
    mRC = ptr()->COMGETTER(CPUHotPlugEnabled)(&aCPUHotPlugEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCPUHotPlugEnabled;
}
void CMachine::SetCPUHotPlugEnabled(BOOL aCPUHotPlugEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(CPUHotPlugEnabled)(aCPUHotPlugEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetCPUExecutionCap() const
{
    ULONG aCPUExecutionCap = 0;
    AssertReturn(ptr(), aCPUExecutionCap);
    mRC = ptr()->COMGETTER(CPUExecutionCap)(&aCPUExecutionCap);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCPUExecutionCap;
}
void CMachine::SetCPUExecutionCap(ULONG aCPUExecutionCap)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(CPUExecutionCap)(aCPUExecutionCap);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetMemorySize() const
{
    ULONG aMemorySize = 0;
    AssertReturn(ptr(), aMemorySize);
    mRC = ptr()->COMGETTER(MemorySize)(&aMemorySize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMemorySize;
}
void CMachine::SetMemorySize(ULONG aMemorySize)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(MemorySize)(aMemorySize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetMemoryBalloonSize() const
{
    ULONG aMemoryBalloonSize = 0;
    AssertReturn(ptr(), aMemoryBalloonSize);
    mRC = ptr()->COMGETTER(MemoryBalloonSize)(&aMemoryBalloonSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMemoryBalloonSize;
}
void CMachine::SetMemoryBalloonSize(ULONG aMemoryBalloonSize)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(MemoryBalloonSize)(aMemoryBalloonSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetPageFusionEnabled() const
{
    BOOL aPageFusionEnabled = FALSE;
    AssertReturn(ptr(), aPageFusionEnabled);
    mRC = ptr()->COMGETTER(PageFusionEnabled)(&aPageFusionEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPageFusionEnabled;
}
void CMachine::SetPageFusionEnabled(BOOL aPageFusionEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(PageFusionEnabled)(aPageFusionEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KGraphicsControllerType CMachine::GetGraphicsControllerType() const
{
    KGraphicsControllerType aGraphicsControllerType = (KGraphicsControllerType) 0;
    AssertReturn(ptr(), aGraphicsControllerType);
    mRC = ptr()->COMGETTER(GraphicsControllerType)(ENUMOut<KGraphicsControllerType, GraphicsControllerType_T>(aGraphicsControllerType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGraphicsControllerType;
}
void CMachine::SetGraphicsControllerType(const KGraphicsControllerType & aGraphicsControllerType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(GraphicsControllerType)((GraphicsControllerType_T) aGraphicsControllerType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetVRAMSize() const
{
    ULONG aVRAMSize = 0;
    AssertReturn(ptr(), aVRAMSize);
    mRC = ptr()->COMGETTER(VRAMSize)(&aVRAMSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRAMSize;
}
void CMachine::SetVRAMSize(ULONG aVRAMSize)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VRAMSize)(aVRAMSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetAccelerate3DEnabled() const
{
    BOOL aAccelerate3DEnabled = FALSE;
    AssertReturn(ptr(), aAccelerate3DEnabled);
    mRC = ptr()->COMGETTER(Accelerate3DEnabled)(&aAccelerate3DEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAccelerate3DEnabled;
}
void CMachine::SetAccelerate3DEnabled(BOOL aAccelerate3DEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Accelerate3DEnabled)(aAccelerate3DEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetAccelerate2DVideoEnabled() const
{
    BOOL aAccelerate2DVideoEnabled = FALSE;
    AssertReturn(ptr(), aAccelerate2DVideoEnabled);
    mRC = ptr()->COMGETTER(Accelerate2DVideoEnabled)(&aAccelerate2DVideoEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAccelerate2DVideoEnabled;
}
void CMachine::SetAccelerate2DVideoEnabled(BOOL aAccelerate2DVideoEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Accelerate2DVideoEnabled)(aAccelerate2DVideoEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetMonitorCount() const
{
    ULONG aMonitorCount = 0;
    AssertReturn(ptr(), aMonitorCount);
    mRC = ptr()->COMGETTER(MonitorCount)(&aMonitorCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMonitorCount;
}
void CMachine::SetMonitorCount(ULONG aMonitorCount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(MonitorCount)(aMonitorCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetVideoCaptureEnabled() const
{
    BOOL aVideoCaptureEnabled = FALSE;
    AssertReturn(ptr(), aVideoCaptureEnabled);
    mRC = ptr()->COMGETTER(VideoCaptureEnabled)(&aVideoCaptureEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVideoCaptureEnabled;
}
void CMachine::SetVideoCaptureEnabled(BOOL aVideoCaptureEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VideoCaptureEnabled)(aVideoCaptureEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<BOOL> CMachine::GetVideoCaptureScreens() const
{
    QVector<BOOL> aVideoCaptureScreens;
    AssertReturn(ptr(), aVideoCaptureScreens);
    com::SafeArray <BOOL> videoCaptureScreens;
    mRC = ptr()->COMGETTER(VideoCaptureScreens)(ComSafeArrayAsOutParam(videoCaptureScreens));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(videoCaptureScreens, aVideoCaptureScreens);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVideoCaptureScreens;
}
void CMachine::SetVideoCaptureScreens(const QVector<BOOL> & aVideoCaptureScreens)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BOOL> videoCaptureScreens;
    ToSafeArray(aVideoCaptureScreens, videoCaptureScreens);
    mRC = ptr()->COMSETTER(VideoCaptureScreens)(ComSafeArrayAsInParam(videoCaptureScreens));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetVideoCaptureFile() const
{
    QString aVideoCaptureFile;
    AssertReturn(ptr(), aVideoCaptureFile);
    mRC = ptr()->COMGETTER(VideoCaptureFile)(BSTROut(aVideoCaptureFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVideoCaptureFile;
}
void CMachine::SetVideoCaptureFile(const QString & aVideoCaptureFile)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VideoCaptureFile)(BSTRIn(aVideoCaptureFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetVideoCaptureWidth() const
{
    ULONG aVideoCaptureWidth = 0;
    AssertReturn(ptr(), aVideoCaptureWidth);
    mRC = ptr()->COMGETTER(VideoCaptureWidth)(&aVideoCaptureWidth);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVideoCaptureWidth;
}
void CMachine::SetVideoCaptureWidth(ULONG aVideoCaptureWidth)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VideoCaptureWidth)(aVideoCaptureWidth);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetVideoCaptureHeight() const
{
    ULONG aVideoCaptureHeight = 0;
    AssertReturn(ptr(), aVideoCaptureHeight);
    mRC = ptr()->COMGETTER(VideoCaptureHeight)(&aVideoCaptureHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVideoCaptureHeight;
}
void CMachine::SetVideoCaptureHeight(ULONG aVideoCaptureHeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VideoCaptureHeight)(aVideoCaptureHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetVideoCaptureRate() const
{
    ULONG aVideoCaptureRate = 0;
    AssertReturn(ptr(), aVideoCaptureRate);
    mRC = ptr()->COMGETTER(VideoCaptureRate)(&aVideoCaptureRate);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVideoCaptureRate;
}
void CMachine::SetVideoCaptureRate(ULONG aVideoCaptureRate)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VideoCaptureRate)(aVideoCaptureRate);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetVideoCaptureFPS() const
{
    ULONG aVideoCaptureFPS = 0;
    AssertReturn(ptr(), aVideoCaptureFPS);
    mRC = ptr()->COMGETTER(VideoCaptureFPS)(&aVideoCaptureFPS);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVideoCaptureFPS;
}
void CMachine::SetVideoCaptureFPS(ULONG aVideoCaptureFPS)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VideoCaptureFPS)(aVideoCaptureFPS);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CBIOSSettings CMachine::GetBIOSSettings() const
{
    CBIOSSettings aBIOSSettings;
    AssertReturn(ptr(), aBIOSSettings);
    IBIOSSettings* BIOSSettingsPtr = NULL;
    mRC = ptr()->COMGETTER(BIOSSettings)(&BIOSSettingsPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aBIOSSettings.setPtr(BIOSSettingsPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBIOSSettings;
}

KFirmwareType CMachine::GetFirmwareType() const
{
    KFirmwareType aFirmwareType = (KFirmwareType) 0;
    AssertReturn(ptr(), aFirmwareType);
    mRC = ptr()->COMGETTER(FirmwareType)(ENUMOut<KFirmwareType, FirmwareType_T>(aFirmwareType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFirmwareType;
}
void CMachine::SetFirmwareType(const KFirmwareType & aFirmwareType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FirmwareType)((FirmwareType_T) aFirmwareType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KPointingHIDType CMachine::GetPointingHIDType() const
{
    KPointingHIDType aPointingHIDType = (KPointingHIDType) 0;
    AssertReturn(ptr(), aPointingHIDType);
    mRC = ptr()->COMGETTER(PointingHIDType)(ENUMOut<KPointingHIDType, PointingHIDType_T>(aPointingHIDType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPointingHIDType;
}
void CMachine::SetPointingHIDType(const KPointingHIDType & aPointingHIDType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(PointingHIDType)((PointingHIDType_T) aPointingHIDType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KKeyboardHIDType CMachine::GetKeyboardHIDType() const
{
    KKeyboardHIDType aKeyboardHIDType = (KKeyboardHIDType) 0;
    AssertReturn(ptr(), aKeyboardHIDType);
    mRC = ptr()->COMGETTER(KeyboardHIDType)(ENUMOut<KKeyboardHIDType, KeyboardHIDType_T>(aKeyboardHIDType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aKeyboardHIDType;
}
void CMachine::SetKeyboardHIDType(const KKeyboardHIDType & aKeyboardHIDType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(KeyboardHIDType)((KeyboardHIDType_T) aKeyboardHIDType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetHPETEnabled() const
{
    BOOL aHPETEnabled = FALSE;
    AssertReturn(ptr(), aHPETEnabled);
    mRC = ptr()->COMGETTER(HPETEnabled)(&aHPETEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHPETEnabled;
}
void CMachine::SetHPETEnabled(BOOL aHPETEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(HPETEnabled)(aHPETEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KChipsetType CMachine::GetChipsetType() const
{
    KChipsetType aChipsetType = (KChipsetType) 0;
    AssertReturn(ptr(), aChipsetType);
    mRC = ptr()->COMGETTER(ChipsetType)(ENUMOut<KChipsetType, ChipsetType_T>(aChipsetType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aChipsetType;
}
void CMachine::SetChipsetType(const KChipsetType & aChipsetType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ChipsetType)((ChipsetType_T) aChipsetType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetSnapshotFolder() const
{
    QString aSnapshotFolder;
    AssertReturn(ptr(), aSnapshotFolder);
    mRC = ptr()->COMGETTER(SnapshotFolder)(BSTROut(aSnapshotFolder));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSnapshotFolder;
}
void CMachine::SetSnapshotFolder(const QString & aSnapshotFolder)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(SnapshotFolder)(BSTRIn(aSnapshotFolder));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CVRDEServer CMachine::GetVRDEServer() const
{
    CVRDEServer aVRDEServer;
    AssertReturn(ptr(), aVRDEServer);
    IVRDEServer* VRDEServerPtr = NULL;
    mRC = ptr()->COMGETTER(VRDEServer)(&VRDEServerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aVRDEServer.setPtr(VRDEServerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRDEServer;
}

BOOL CMachine::GetEmulatedUSBCardReaderEnabled() const
{
    BOOL aEmulatedUSBCardReaderEnabled = FALSE;
    AssertReturn(ptr(), aEmulatedUSBCardReaderEnabled);
    mRC = ptr()->COMGETTER(EmulatedUSBCardReaderEnabled)(&aEmulatedUSBCardReaderEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEmulatedUSBCardReaderEnabled;
}
void CMachine::SetEmulatedUSBCardReaderEnabled(BOOL aEmulatedUSBCardReaderEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(EmulatedUSBCardReaderEnabled)(aEmulatedUSBCardReaderEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<CMediumAttachment> CMachine::GetMediumAttachments() const
{
    QVector<CMediumAttachment> aMediumAttachments;
    AssertReturn(ptr(), aMediumAttachments);
    com::SafeIfaceArray <IMediumAttachment> mediumAttachments;
    mRC = ptr()->COMGETTER(MediumAttachments)(ComSafeArrayAsOutParam(mediumAttachments));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(mediumAttachments, aMediumAttachments);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMediumAttachments;
}

QVector<CUSBController> CMachine::GetUSBControllers() const
{
    QVector<CUSBController> aUSBControllers;
    AssertReturn(ptr(), aUSBControllers);
    com::SafeIfaceArray <IUSBController> USBControllers;
    mRC = ptr()->COMGETTER(USBControllers)(ComSafeArrayAsOutParam(USBControllers));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(USBControllers, aUSBControllers);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUSBControllers;
}

CUSBDeviceFilters CMachine::GetUSBDeviceFilters() const
{
    CUSBDeviceFilters aUSBDeviceFilters;
    AssertReturn(ptr(), aUSBDeviceFilters);
    IUSBDeviceFilters* USBDeviceFiltersPtr = NULL;
    mRC = ptr()->COMGETTER(USBDeviceFilters)(&USBDeviceFiltersPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aUSBDeviceFilters.setPtr(USBDeviceFiltersPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUSBDeviceFilters;
}

CAudioAdapter CMachine::GetAudioAdapter() const
{
    CAudioAdapter aAudioAdapter;
    AssertReturn(ptr(), aAudioAdapter);
    IAudioAdapter* audioAdapterPtr = NULL;
    mRC = ptr()->COMGETTER(AudioAdapter)(&audioAdapterPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aAudioAdapter.setPtr(audioAdapterPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAudioAdapter;
}

QVector<CStorageController> CMachine::GetStorageControllers() const
{
    QVector<CStorageController> aStorageControllers;
    AssertReturn(ptr(), aStorageControllers);
    com::SafeIfaceArray <IStorageController> storageControllers;
    mRC = ptr()->COMGETTER(StorageControllers)(ComSafeArrayAsOutParam(storageControllers));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(storageControllers, aStorageControllers);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStorageControllers;
}

QString CMachine::GetSettingsFilePath() const
{
    QString aSettingsFilePath;
    AssertReturn(ptr(), aSettingsFilePath);
    mRC = ptr()->COMGETTER(SettingsFilePath)(BSTROut(aSettingsFilePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSettingsFilePath;
}

BOOL CMachine::GetSettingsModified() const
{
    BOOL aSettingsModified = FALSE;
    AssertReturn(ptr(), aSettingsModified);
    mRC = ptr()->COMGETTER(SettingsModified)(&aSettingsModified);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSettingsModified;
}

KSessionState CMachine::GetSessionState() const
{
    KSessionState aSessionState = (KSessionState) 0;
    AssertReturn(ptr(), aSessionState);
    mRC = ptr()->COMGETTER(SessionState)(ENUMOut<KSessionState, SessionState_T>(aSessionState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSessionState;
}

QString CMachine::GetSessionType() const
{
    QString aSessionType;
    AssertReturn(ptr(), aSessionType);
    mRC = ptr()->COMGETTER(SessionType)(BSTROut(aSessionType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSessionType;
}

ULONG CMachine::GetSessionPID() const
{
    ULONG aSessionPID = 0;
    AssertReturn(ptr(), aSessionPID);
    mRC = ptr()->COMGETTER(SessionPID)(&aSessionPID);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSessionPID;
}

KMachineState CMachine::GetState() const
{
    KMachineState aState = (KMachineState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KMachineState, MachineState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

LONG64 CMachine::GetLastStateChange() const
{
    LONG64 aLastStateChange = 0;
    AssertReturn(ptr(), aLastStateChange);
    mRC = ptr()->COMGETTER(LastStateChange)(&aLastStateChange);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLastStateChange;
}

QString CMachine::GetStateFilePath() const
{
    QString aStateFilePath;
    AssertReturn(ptr(), aStateFilePath);
    mRC = ptr()->COMGETTER(StateFilePath)(BSTROut(aStateFilePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStateFilePath;
}

QString CMachine::GetLogFolder() const
{
    QString aLogFolder;
    AssertReturn(ptr(), aLogFolder);
    mRC = ptr()->COMGETTER(LogFolder)(BSTROut(aLogFolder));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogFolder;
}

CSnapshot CMachine::GetCurrentSnapshot() const
{
    CSnapshot aCurrentSnapshot;
    AssertReturn(ptr(), aCurrentSnapshot);
    ISnapshot* currentSnapshotPtr = NULL;
    mRC = ptr()->COMGETTER(CurrentSnapshot)(&currentSnapshotPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aCurrentSnapshot.setPtr(currentSnapshotPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCurrentSnapshot;
}

ULONG CMachine::GetSnapshotCount() const
{
    ULONG aSnapshotCount = 0;
    AssertReturn(ptr(), aSnapshotCount);
    mRC = ptr()->COMGETTER(SnapshotCount)(&aSnapshotCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSnapshotCount;
}

BOOL CMachine::GetCurrentStateModified() const
{
    BOOL aCurrentStateModified = FALSE;
    AssertReturn(ptr(), aCurrentStateModified);
    mRC = ptr()->COMGETTER(CurrentStateModified)(&aCurrentStateModified);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCurrentStateModified;
}

QVector<CSharedFolder> CMachine::GetSharedFolders() const
{
    QVector<CSharedFolder> aSharedFolders;
    AssertReturn(ptr(), aSharedFolders);
    com::SafeIfaceArray <ISharedFolder> sharedFolders;
    mRC = ptr()->COMGETTER(SharedFolders)(ComSafeArrayAsOutParam(sharedFolders));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(sharedFolders, aSharedFolders);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSharedFolders;
}

KClipboardMode CMachine::GetClipboardMode() const
{
    KClipboardMode aClipboardMode = (KClipboardMode) 0;
    AssertReturn(ptr(), aClipboardMode);
    mRC = ptr()->COMGETTER(ClipboardMode)(ENUMOut<KClipboardMode, ClipboardMode_T>(aClipboardMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aClipboardMode;
}
void CMachine::SetClipboardMode(const KClipboardMode & aClipboardMode)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ClipboardMode)((ClipboardMode_T) aClipboardMode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KDragAndDropMode CMachine::GetDragAndDropMode() const
{
    KDragAndDropMode aDragAndDropMode = (KDragAndDropMode) 0;
    AssertReturn(ptr(), aDragAndDropMode);
    mRC = ptr()->COMGETTER(DragAndDropMode)(ENUMOut<KDragAndDropMode, DragAndDropMode_T>(aDragAndDropMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDragAndDropMode;
}
void CMachine::SetDragAndDropMode(const KDragAndDropMode & aDragAndDropMode)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DragAndDropMode)((DragAndDropMode_T) aDragAndDropMode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetGuestPropertyNotificationPatterns() const
{
    QString aGuestPropertyNotificationPatterns;
    AssertReturn(ptr(), aGuestPropertyNotificationPatterns);
    mRC = ptr()->COMGETTER(GuestPropertyNotificationPatterns)(BSTROut(aGuestPropertyNotificationPatterns));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestPropertyNotificationPatterns;
}
void CMachine::SetGuestPropertyNotificationPatterns(const QString & aGuestPropertyNotificationPatterns)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(GuestPropertyNotificationPatterns)(BSTRIn(aGuestPropertyNotificationPatterns));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetTeleporterEnabled() const
{
    BOOL aTeleporterEnabled = FALSE;
    AssertReturn(ptr(), aTeleporterEnabled);
    mRC = ptr()->COMGETTER(TeleporterEnabled)(&aTeleporterEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTeleporterEnabled;
}
void CMachine::SetTeleporterEnabled(BOOL aTeleporterEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TeleporterEnabled)(aTeleporterEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetTeleporterPort() const
{
    ULONG aTeleporterPort = 0;
    AssertReturn(ptr(), aTeleporterPort);
    mRC = ptr()->COMGETTER(TeleporterPort)(&aTeleporterPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTeleporterPort;
}
void CMachine::SetTeleporterPort(ULONG aTeleporterPort)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TeleporterPort)(aTeleporterPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetTeleporterAddress() const
{
    QString aTeleporterAddress;
    AssertReturn(ptr(), aTeleporterAddress);
    mRC = ptr()->COMGETTER(TeleporterAddress)(BSTROut(aTeleporterAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTeleporterAddress;
}
void CMachine::SetTeleporterAddress(const QString & aTeleporterAddress)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TeleporterAddress)(BSTRIn(aTeleporterAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetTeleporterPassword() const
{
    QString aTeleporterPassword;
    AssertReturn(ptr(), aTeleporterPassword);
    mRC = ptr()->COMGETTER(TeleporterPassword)(BSTROut(aTeleporterPassword));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTeleporterPassword;
}
void CMachine::SetTeleporterPassword(const QString & aTeleporterPassword)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TeleporterPassword)(BSTRIn(aTeleporterPassword));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KFaultToleranceState CMachine::GetFaultToleranceState() const
{
    KFaultToleranceState aFaultToleranceState = (KFaultToleranceState) 0;
    AssertReturn(ptr(), aFaultToleranceState);
    mRC = ptr()->COMGETTER(FaultToleranceState)(ENUMOut<KFaultToleranceState, FaultToleranceState_T>(aFaultToleranceState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFaultToleranceState;
}
void CMachine::SetFaultToleranceState(const KFaultToleranceState & aFaultToleranceState)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FaultToleranceState)((FaultToleranceState_T) aFaultToleranceState);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetFaultTolerancePort() const
{
    ULONG aFaultTolerancePort = 0;
    AssertReturn(ptr(), aFaultTolerancePort);
    mRC = ptr()->COMGETTER(FaultTolerancePort)(&aFaultTolerancePort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFaultTolerancePort;
}
void CMachine::SetFaultTolerancePort(ULONG aFaultTolerancePort)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FaultTolerancePort)(aFaultTolerancePort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetFaultToleranceAddress() const
{
    QString aFaultToleranceAddress;
    AssertReturn(ptr(), aFaultToleranceAddress);
    mRC = ptr()->COMGETTER(FaultToleranceAddress)(BSTROut(aFaultToleranceAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFaultToleranceAddress;
}
void CMachine::SetFaultToleranceAddress(const QString & aFaultToleranceAddress)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FaultToleranceAddress)(BSTRIn(aFaultToleranceAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetFaultTolerancePassword() const
{
    QString aFaultTolerancePassword;
    AssertReturn(ptr(), aFaultTolerancePassword);
    mRC = ptr()->COMGETTER(FaultTolerancePassword)(BSTROut(aFaultTolerancePassword));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFaultTolerancePassword;
}
void CMachine::SetFaultTolerancePassword(const QString & aFaultTolerancePassword)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FaultTolerancePassword)(BSTRIn(aFaultTolerancePassword));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetFaultToleranceSyncInterval() const
{
    ULONG aFaultToleranceSyncInterval = 0;
    AssertReturn(ptr(), aFaultToleranceSyncInterval);
    mRC = ptr()->COMGETTER(FaultToleranceSyncInterval)(&aFaultToleranceSyncInterval);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFaultToleranceSyncInterval;
}
void CMachine::SetFaultToleranceSyncInterval(ULONG aFaultToleranceSyncInterval)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FaultToleranceSyncInterval)(aFaultToleranceSyncInterval);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetRTCUseUTC() const
{
    BOOL aRTCUseUTC = FALSE;
    AssertReturn(ptr(), aRTCUseUTC);
    mRC = ptr()->COMGETTER(RTCUseUTC)(&aRTCUseUTC);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRTCUseUTC;
}
void CMachine::SetRTCUseUTC(BOOL aRTCUseUTC)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(RTCUseUTC)(aRTCUseUTC);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetIOCacheEnabled() const
{
    BOOL aIOCacheEnabled = FALSE;
    AssertReturn(ptr(), aIOCacheEnabled);
    mRC = ptr()->COMGETTER(IOCacheEnabled)(&aIOCacheEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIOCacheEnabled;
}
void CMachine::SetIOCacheEnabled(BOOL aIOCacheEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IOCacheEnabled)(aIOCacheEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetIOCacheSize() const
{
    ULONG aIOCacheSize = 0;
    AssertReturn(ptr(), aIOCacheSize);
    mRC = ptr()->COMGETTER(IOCacheSize)(&aIOCacheSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIOCacheSize;
}
void CMachine::SetIOCacheSize(ULONG aIOCacheSize)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IOCacheSize)(aIOCacheSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<CPCIDeviceAttachment> CMachine::GetPCIDeviceAssignments() const
{
    QVector<CPCIDeviceAttachment> aPCIDeviceAssignments;
    AssertReturn(ptr(), aPCIDeviceAssignments);
    com::SafeIfaceArray <IPCIDeviceAttachment> PCIDeviceAssignments;
    mRC = ptr()->COMGETTER(PCIDeviceAssignments)(ComSafeArrayAsOutParam(PCIDeviceAssignments));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(PCIDeviceAssignments, aPCIDeviceAssignments);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPCIDeviceAssignments;
}

CBandwidthControl CMachine::GetBandwidthControl() const
{
    CBandwidthControl aBandwidthControl;
    AssertReturn(ptr(), aBandwidthControl);
    IBandwidthControl* bandwidthControlPtr = NULL;
    mRC = ptr()->COMGETTER(BandwidthControl)(&bandwidthControlPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aBandwidthControl.setPtr(bandwidthControlPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBandwidthControl;
}

BOOL CMachine::GetTracingEnabled() const
{
    BOOL aTracingEnabled = FALSE;
    AssertReturn(ptr(), aTracingEnabled);
    mRC = ptr()->COMGETTER(TracingEnabled)(&aTracingEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTracingEnabled;
}
void CMachine::SetTracingEnabled(BOOL aTracingEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TracingEnabled)(aTracingEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetTracingConfig() const
{
    QString aTracingConfig;
    AssertReturn(ptr(), aTracingConfig);
    mRC = ptr()->COMGETTER(TracingConfig)(BSTROut(aTracingConfig));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTracingConfig;
}
void CMachine::SetTracingConfig(const QString & aTracingConfig)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TracingConfig)(BSTRIn(aTracingConfig));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetAllowTracingToAccessVM() const
{
    BOOL aAllowTracingToAccessVM = FALSE;
    AssertReturn(ptr(), aAllowTracingToAccessVM);
    mRC = ptr()->COMGETTER(AllowTracingToAccessVM)(&aAllowTracingToAccessVM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAllowTracingToAccessVM;
}
void CMachine::SetAllowTracingToAccessVM(BOOL aAllowTracingToAccessVM)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AllowTracingToAccessVM)(aAllowTracingToAccessVM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetAutostartEnabled() const
{
    BOOL aAutostartEnabled = FALSE;
    AssertReturn(ptr(), aAutostartEnabled);
    mRC = ptr()->COMGETTER(AutostartEnabled)(&aAutostartEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAutostartEnabled;
}
void CMachine::SetAutostartEnabled(BOOL aAutostartEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AutostartEnabled)(aAutostartEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CMachine::GetAutostartDelay() const
{
    ULONG aAutostartDelay = 0;
    AssertReturn(ptr(), aAutostartDelay);
    mRC = ptr()->COMGETTER(AutostartDelay)(&aAutostartDelay);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAutostartDelay;
}
void CMachine::SetAutostartDelay(ULONG aAutostartDelay)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AutostartDelay)(aAutostartDelay);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KAutostopType CMachine::GetAutostopType() const
{
    KAutostopType aAutostopType = (KAutostopType) 0;
    AssertReturn(ptr(), aAutostopType);
    mRC = ptr()->COMGETTER(AutostopType)(ENUMOut<KAutostopType, AutostopType_T>(aAutostopType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAutostopType;
}
void CMachine::SetAutostopType(const KAutostopType & aAutostopType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AutostopType)((AutostopType_T) aAutostopType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetDefaultFrontend() const
{
    QString aDefaultFrontend;
    AssertReturn(ptr(), aDefaultFrontend);
    mRC = ptr()->COMGETTER(DefaultFrontend)(BSTROut(aDefaultFrontend));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDefaultFrontend;
}
void CMachine::SetDefaultFrontend(const QString & aDefaultFrontend)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DefaultFrontend)(BSTRIn(aDefaultFrontend));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetUSBProxyAvailable() const
{
    BOOL aUSBProxyAvailable = FALSE;
    AssertReturn(ptr(), aUSBProxyAvailable);
    mRC = ptr()->COMGETTER(USBProxyAvailable)(&aUSBProxyAvailable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUSBProxyAvailable;
}

void CMachine::LockMachine(const CSession & aSession, const KLockType & aLockType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->LockMachine(aSession.ptr(), (LockType_T) aLockType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CProgress CMachine::LaunchVMProcess(const CSession & aSession, const QString & aType, const QString & aEnvironment)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->LaunchVMProcess(aSession.ptr(), BSTRIn(aType), BSTRIn(aEnvironment), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

void CMachine::SetBootOrder(ULONG aPosition, const KDeviceType & aDevice)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetBootOrder(aPosition, (DeviceType_T) aDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KDeviceType CMachine::GetBootOrder(ULONG aPosition) const
{
    KDeviceType aDevice = (KDeviceType) 0;
    AssertReturn(ptr(), aDevice);
    mRC = ptr()->GetBootOrder(aPosition, ENUMOut<KDeviceType, DeviceType_T>(aDevice));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}

void CMachine::AttachDevice(const QString & aName, LONG aControllerPort, LONG aDevice, const KDeviceType & aType, const CMedium & aMedium)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AttachDevice(BSTRIn(aName), aControllerPort, aDevice, (DeviceType_T) aType, aMedium.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::AttachDeviceWithoutMedium(const QString & aName, LONG aControllerPort, LONG aDevice, const KDeviceType & aType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AttachDeviceWithoutMedium(BSTRIn(aName), aControllerPort, aDevice, (DeviceType_T) aType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::DetachDevice(const QString & aName, LONG aControllerPort, LONG aDevice)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DetachDevice(BSTRIn(aName), aControllerPort, aDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::PassthroughDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aPassthrough)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->PassthroughDevice(BSTRIn(aName), aControllerPort, aDevice, aPassthrough);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::TemporaryEjectDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aTemporaryEject)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->TemporaryEjectDevice(BSTRIn(aName), aControllerPort, aDevice, aTemporaryEject);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::NonRotationalDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aNonRotational)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->NonRotationalDevice(BSTRIn(aName), aControllerPort, aDevice, aNonRotational);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::SetAutoDiscardForDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aDiscard)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetAutoDiscardForDevice(BSTRIn(aName), aControllerPort, aDevice, aDiscard);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::SetHotPluggableForDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aHotPluggable)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetHotPluggableForDevice(BSTRIn(aName), aControllerPort, aDevice, aHotPluggable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::SetBandwidthGroupForDevice(const QString & aName, LONG aControllerPort, LONG aDevice, const CBandwidthGroup & aBandwidthGroup)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetBandwidthGroupForDevice(BSTRIn(aName), aControllerPort, aDevice, aBandwidthGroup.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::SetNoBandwidthGroupForDevice(const QString & aName, LONG aControllerPort, LONG aDevice)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetNoBandwidthGroupForDevice(BSTRIn(aName), aControllerPort, aDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::UnmountMedium(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aForce)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->UnmountMedium(BSTRIn(aName), aControllerPort, aDevice, aForce);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::MountMedium(const QString & aName, LONG aControllerPort, LONG aDevice, const CMedium & aMedium, BOOL aForce)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->MountMedium(BSTRIn(aName), aControllerPort, aDevice, aMedium.ptr(), aForce);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CMedium CMachine::GetMedium(const QString & aName, LONG aControllerPort, LONG aDevice) const
{
    CMedium aMedium;
    AssertReturn(ptr(), aMedium);
    IMedium* mediumPtr = NULL;
    mRC = ptr()->GetMedium(BSTRIn(aName), aControllerPort, aDevice, &mediumPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMedium.setPtr(mediumPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMedium;
}

QVector<CMediumAttachment> CMachine::GetMediumAttachmentsOfController(const QString & aName) const
{
    QVector<CMediumAttachment> aMediumAttachments;
    AssertReturn(ptr(), aMediumAttachments);
    com::SafeIfaceArray <IMediumAttachment> mediumAttachments;
    mRC = ptr()->GetMediumAttachmentsOfController(BSTRIn(aName), ComSafeArrayAsOutParam(mediumAttachments));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(mediumAttachments, aMediumAttachments);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMediumAttachments;
}

CMediumAttachment CMachine::GetMediumAttachment(const QString & aName, LONG aControllerPort, LONG aDevice) const
{
    CMediumAttachment aAttachment;
    AssertReturn(ptr(), aAttachment);
    IMediumAttachment* attachmentPtr = NULL;
    mRC = ptr()->GetMediumAttachment(BSTRIn(aName), aControllerPort, aDevice, &attachmentPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aAttachment.setPtr(attachmentPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAttachment;
}

void CMachine::AttachHostPCIDevice(LONG aHostAddress, LONG aDesiredGuestAddress, BOOL aTryToUnbind)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AttachHostPCIDevice(aHostAddress, aDesiredGuestAddress, aTryToUnbind);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::DetachHostPCIDevice(LONG aHostAddress)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DetachHostPCIDevice(aHostAddress);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CNetworkAdapter CMachine::GetNetworkAdapter(ULONG aSlot) const
{
    CNetworkAdapter aAdapter;
    AssertReturn(ptr(), aAdapter);
    INetworkAdapter* adapterPtr = NULL;
    mRC = ptr()->GetNetworkAdapter(aSlot, &adapterPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aAdapter.setPtr(adapterPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdapter;
}

CStorageController CMachine::AddStorageController(const QString & aName, const KStorageBus & aConnectionType)
{
    CStorageController aController;
    AssertReturn(ptr(), aController);
    IStorageController* controllerPtr = NULL;
    mRC = ptr()->AddStorageController(BSTRIn(aName), (StorageBus_T) aConnectionType, &controllerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aController.setPtr(controllerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aController;
}

CStorageController CMachine::GetStorageControllerByName(const QString & aName) const
{
    CStorageController aStorageController;
    AssertReturn(ptr(), aStorageController);
    IStorageController* storageControllerPtr = NULL;
    mRC = ptr()->GetStorageControllerByName(BSTRIn(aName), &storageControllerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aStorageController.setPtr(storageControllerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStorageController;
}

CStorageController CMachine::GetStorageControllerByInstance(ULONG aInstance) const
{
    CStorageController aStorageController;
    AssertReturn(ptr(), aStorageController);
    IStorageController* storageControllerPtr = NULL;
    mRC = ptr()->GetStorageControllerByInstance(aInstance, &storageControllerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aStorageController.setPtr(storageControllerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStorageController;
}

void CMachine::RemoveStorageController(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveStorageController(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::SetStorageControllerBootable(const QString & aName, BOOL aBootable)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetStorageControllerBootable(BSTRIn(aName), aBootable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CUSBController CMachine::AddUSBController(const QString & aName, const KUSBControllerType & aType)
{
    CUSBController aController;
    AssertReturn(ptr(), aController);
    IUSBController* controllerPtr = NULL;
    mRC = ptr()->AddUSBController(BSTRIn(aName), (USBControllerType_T) aType, &controllerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aController.setPtr(controllerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aController;
}

void CMachine::RemoveUSBController(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveUSBController(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CUSBController CMachine::GetUSBControllerByName(const QString & aName) const
{
    CUSBController aController;
    AssertReturn(ptr(), aController);
    IUSBController* controllerPtr = NULL;
    mRC = ptr()->GetUSBControllerByName(BSTRIn(aName), &controllerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aController.setPtr(controllerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aController;
}

ULONG CMachine::GetUSBControllerCountByType(const KUSBControllerType & aType) const
{
    ULONG aControllers = 0;
    AssertReturn(ptr(), aControllers);
    mRC = ptr()->GetUSBControllerCountByType((USBControllerType_T) aType, &aControllers);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aControllers;
}

CSerialPort CMachine::GetSerialPort(ULONG aSlot) const
{
    CSerialPort aPort;
    AssertReturn(ptr(), aPort);
    ISerialPort* portPtr = NULL;
    mRC = ptr()->GetSerialPort(aSlot, &portPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aPort.setPtr(portPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPort;
}

CParallelPort CMachine::GetParallelPort(ULONG aSlot) const
{
    CParallelPort aPort;
    AssertReturn(ptr(), aPort);
    IParallelPort* portPtr = NULL;
    mRC = ptr()->GetParallelPort(aSlot, &portPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aPort.setPtr(portPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPort;
}

QVector<QString> CMachine::GetExtraDataKeys()
{
    QVector<QString> aKeys;
    AssertReturn(ptr(), aKeys);
    com::SafeArray <BSTR> keys;
    mRC = ptr()->GetExtraDataKeys(ComSafeArrayAsOutParam(keys));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(keys, aKeys);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aKeys;
}

QString CMachine::GetExtraData(const QString & aKey)
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetExtraData(BSTRIn(aKey), BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CMachine::SetExtraData(const QString & aKey, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetExtraData(BSTRIn(aKey), BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetCPUProperty(const KCPUPropertyType & aProperty) const
{
    BOOL aValue = FALSE;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetCPUProperty((CPUPropertyType_T) aProperty, &aValue);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CMachine::SetCPUProperty(const KCPUPropertyType & aProperty, BOOL aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetCPUProperty((CPUPropertyType_T) aProperty, aValue);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::GetCPUIDLeaf(ULONG aId, ULONG & aValEax, ULONG & aValEbx, ULONG & aValEcx, ULONG & aValEdx) const
{
    AssertReturnVoid(ptr());
    mRC = ptr()->GetCPUIDLeaf(aId, &aValEax, &aValEbx, &aValEcx, &aValEdx);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::SetCPUIDLeaf(ULONG aId, ULONG aValEax, ULONG aValEbx, ULONG aValEcx, ULONG aValEdx)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetCPUIDLeaf(aId, aValEax, aValEbx, aValEcx, aValEdx);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::RemoveCPUIDLeaf(ULONG aId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveCPUIDLeaf(aId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::RemoveAllCPUIDLeaves()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveAllCPUIDLeaves();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetHWVirtExProperty(const KHWVirtExPropertyType & aProperty) const
{
    BOOL aValue = FALSE;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetHWVirtExProperty((HWVirtExPropertyType_T) aProperty, &aValue);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CMachine::SetHWVirtExProperty(const KHWVirtExPropertyType & aProperty, BOOL aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetHWVirtExProperty((HWVirtExPropertyType_T) aProperty, aValue);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CProgress CMachine::SetSettingsFilePath(const QString & aSettingsFilePath)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->SetSettingsFilePath(BSTRIn(aSettingsFilePath), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

void CMachine::SaveSettings()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SaveSettings();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::DiscardSettings()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DiscardSettings();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<CMedium> CMachine::Unregister(const KCleanupMode & aCleanupMode)
{
    QVector<CMedium> aMedia;
    AssertReturn(ptr(), aMedia);
    com::SafeIfaceArray <IMedium> media;
    mRC = ptr()->Unregister((CleanupMode_T) aCleanupMode, ComSafeArrayAsOutParam(media));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(media, aMedia);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMedia;
}

CProgress CMachine::DeleteConfig(const QVector<CMedium> & aMedia)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeIfaceArray <IMedium> media;
    ToSafeIfaceArray(aMedia, media);
    IProgress* progressPtr = NULL;
    mRC = ptr()->DeleteConfig(ComSafeArrayAsInParam(media), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CVirtualSystemDescription CMachine::ExportTo(const CAppliance & aAppliance, const QString & aLocation)
{
    CVirtualSystemDescription aDescription;
    AssertReturn(ptr(), aDescription);
    IVirtualSystemDescription* descriptionPtr = NULL;
    mRC = ptr()->ExportTo(aAppliance.ptr(), BSTRIn(aLocation), &descriptionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDescription.setPtr(descriptionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

CSnapshot CMachine::FindSnapshot(const QString & aNameOrId)
{
    CSnapshot aSnapshot;
    AssertReturn(ptr(), aSnapshot);
    ISnapshot* snapshotPtr = NULL;
    mRC = ptr()->FindSnapshot(BSTRIn(aNameOrId), &snapshotPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSnapshot.setPtr(snapshotPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSnapshot;
}

void CMachine::CreateSharedFolder(const QString & aName, const QString & aHostPath, BOOL aWritable, BOOL aAutomount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->CreateSharedFolder(BSTRIn(aName), BSTRIn(aHostPath), aWritable, aAutomount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::RemoveSharedFolder(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveSharedFolder(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::CanShowConsoleWindow()
{
    BOOL aCanShow = FALSE;
    AssertReturn(ptr(), aCanShow);
    mRC = ptr()->CanShowConsoleWindow(&aCanShow);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCanShow;
}

LONG64 CMachine::ShowConsoleWindow()
{
    LONG64 aWinId = 0;
    AssertReturn(ptr(), aWinId);
    mRC = ptr()->ShowConsoleWindow(&aWinId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWinId;
}

void CMachine::GetGuestProperty(const QString & aName, QString & aValue, LONG64 & aTimestamp, QString & aFlags) const
{
    AssertReturnVoid(ptr());
    mRC = ptr()->GetGuestProperty(BSTRIn(aName), BSTROut(aValue), &aTimestamp, BSTROut(aFlags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachine::GetGuestPropertyValue(const QString & aProperty) const
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetGuestPropertyValue(BSTRIn(aProperty), BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

LONG64 CMachine::GetGuestPropertyTimestamp(const QString & aProperty) const
{
    LONG64 aValue = 0;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetGuestPropertyTimestamp(BSTRIn(aProperty), &aValue);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CMachine::SetGuestProperty(const QString & aProperty, const QString & aValue, const QString & aFlags)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetGuestProperty(BSTRIn(aProperty), BSTRIn(aValue), BSTRIn(aFlags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::SetGuestPropertyValue(const QString & aProperty, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetGuestPropertyValue(BSTRIn(aProperty), BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::DeleteGuestProperty(const QString & aName) const
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DeleteGuestProperty(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::EnumerateGuestProperties(const QString & aPatterns, QVector<QString> & aNames, QVector<QString> & aValues, QVector<LONG64> & aTimestamps, QVector<QString> & aFlags) const
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> names;
    com::SafeArray <BSTR> values;
    com::SafeArray <LONG64> timestamps;
    com::SafeArray <BSTR> flags;
    mRC = ptr()->EnumerateGuestProperties(BSTRIn(aPatterns), ComSafeArrayAsOutParam(names), ComSafeArrayAsOutParam(values), ComSafeArrayAsOutParam(timestamps), ComSafeArrayAsOutParam(flags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(names, aNames);
    FromSafeArray(values, aValues);
    FromSafeArray(timestamps, aTimestamps);
    FromSafeArray(flags, aFlags);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::QuerySavedGuestScreenInfo(ULONG aScreenId, ULONG & aOriginX, ULONG & aOriginY, ULONG & aWidth, ULONG & aHeight, BOOL & aEnabled) const
{
    AssertReturnVoid(ptr());
    mRC = ptr()->QuerySavedGuestScreenInfo(aScreenId, &aOriginX, &aOriginY, &aWidth, &aHeight, &aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::QuerySavedThumbnailSize(ULONG aScreenId, ULONG & aSize, ULONG & aWidth, ULONG & aHeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->QuerySavedThumbnailSize(aScreenId, &aSize, &aWidth, &aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<BYTE> CMachine::ReadSavedThumbnailToArray(ULONG aScreenId, BOOL aBGR, ULONG & aWidth, ULONG & aHeight)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->ReadSavedThumbnailToArray(aScreenId, aBGR, &aWidth, &aHeight, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

QVector<BYTE> CMachine::ReadSavedThumbnailPNGToArray(ULONG aScreenId, ULONG & aWidth, ULONG & aHeight)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->ReadSavedThumbnailPNGToArray(aScreenId, &aWidth, &aHeight, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

void CMachine::QuerySavedScreenshotPNGSize(ULONG aScreenId, ULONG & aSize, ULONG & aWidth, ULONG & aHeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->QuerySavedScreenshotPNGSize(aScreenId, &aSize, &aWidth, &aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<BYTE> CMachine::ReadSavedScreenshotPNGToArray(ULONG aScreenId, ULONG & aWidth, ULONG & aHeight)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->ReadSavedScreenshotPNGToArray(aScreenId, &aWidth, &aHeight, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

void CMachine::HotPlugCPU(ULONG aCpu)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->HotPlugCPU(aCpu);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachine::HotUnplugCPU(ULONG aCpu)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->HotUnplugCPU(aCpu);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachine::GetCPUStatus(ULONG aCpu)
{
    BOOL aAttached = FALSE;
    AssertReturn(ptr(), aAttached);
    mRC = ptr()->GetCPUStatus(aCpu, &aAttached);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAttached;
}

QString CMachine::QueryLogFilename(ULONG aIdx)
{
    QString aFilename;
    AssertReturn(ptr(), aFilename);
    mRC = ptr()->QueryLogFilename(aIdx, BSTROut(aFilename));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFilename;
}

QVector<BYTE> CMachine::ReadLog(ULONG aIdx, LONG64 aOffset, LONG64 aSize)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->ReadLog(aIdx, aOffset, aSize, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

CProgress CMachine::CloneTo(const CMachine & aTarget, const KCloneMode & aMode, const QVector<KCloneOptions> & aOptions)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <CloneOptions_T> options;
    ToSafeArray(aOptions, options);
    IProgress* progressPtr = NULL;
    mRC = ptr()->CloneTo(aTarget.ptr(), (CloneMode_T) aMode, ComSafeArrayAsInParam(options), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

/* ExtraData helpers: */
void CMachine::SetExtraDataBool(const QString &strKey, bool fValue)
{
    SetExtraData(strKey, fValue == true ? "true" : "false");
}

bool CMachine::GetExtraDataBool(const QString &strKey, bool fDef /* = true */)
{
    bool fResult = fDef;
    QString value = GetExtraData(strKey);
    if (   value == "true"
        || value == "on"
        || value == "yes")
        fResult = true;
    else if (   value == "false"
             || value == "off"
             || value == "no")
             fResult = false;
    return fResult;
}

void CMachine::SetExtraDataInt(const QString &strKey, int value)
{
    SetExtraData(strKey, QString::number(value));
}

int CMachine::GetExtraDataInt(const QString &strKey, int def /* = 0 */)
{
    QString value = GetExtraData(strKey);
    bool fOk;
    int result = value.toInt(&fOk);
    if (fOk)
        return result;
    return def;
}

void CMachine::SetExtraDataRect(const QString &strKey, const QRect &value)
{
    SetExtraData(strKey, QString("%1,%2,%3,%4")
                         .arg(value.x())
                         .arg(value.y())
                         .arg(value.width())
                         .arg(value.height()));
}

QRect CMachine::GetExtraDataRect(const QString &strKey, const QRect &def /* = QRect() */)
{
    QRect result = def;
    QList<int> intList = GetExtraDataIntList(strKey);
    if (intList.size() == 4)
    {
        result.setRect(intList.at(0),
                       intList.at(1),
                       intList.at(2),
                       intList.at(3));
    }
    return result;
}

void CMachine::SetExtraDataStringList(const QString &strKey, const QStringList &value)
{
    SetExtraData(strKey, value.join(","));
}

QStringList CMachine::GetExtraDataStringList(const QString &strKey, QStringList def /* = QStringList() */)
{
    QString strValue = GetExtraData(strKey);
    if (strValue.isEmpty())
        return def;
    else
        return strValue.split(",");
}

void CMachine::SetExtraDataIntList(const QString &strKey, const QList<int> &value)
{
    QStringList strList;
    for (int i=0; i < value.size(); ++i)
        strList << QString::number(value.at(i));
    SetExtraDataStringList(strKey, strList);
}

QList<int> CMachine::GetExtraDataIntList(const QString &strKey, QList<int> def /* = QList<int>() */)
{
    QStringList strList = GetExtraDataStringList(strKey);
    if (strList.size() > 0)
    {
        QList<int> intList;
        bool fOk;
        for (int i=0; i < strList.size(); ++i)
        {
            intList << strList.at(i).toInt(&fOk);
            if (!fOk)
                return def;
        }
        return intList;
    }
    return def;
}

// IEmulatedUSB wrapper

QVector<QString> CEmulatedUSB::GetWebcams() const
{
    QVector<QString> aWebcams;
    AssertReturn(ptr(), aWebcams);
    com::SafeArray <BSTR> webcams;
    mRC = ptr()->COMGETTER(Webcams)(ComSafeArrayAsOutParam(webcams));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(webcams, aWebcams);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWebcams;
}

void CEmulatedUSB::WebcamAttach(const QString & aPath, const QString & aSettings)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->WebcamAttach(BSTRIn(aPath), BSTRIn(aSettings));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CEmulatedUSB::WebcamDetach(const QString & aPath)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->WebcamDetach(BSTRIn(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IVRDEServerInfo wrapper

BOOL CVRDEServerInfo::GetActive() const
{
    BOOL aActive = FALSE;
    AssertReturn(ptr(), aActive);
    mRC = ptr()->COMGETTER(Active)(&aActive);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aActive;
}

LONG CVRDEServerInfo::GetPort() const
{
    LONG aPort = 0;
    AssertReturn(ptr(), aPort);
    mRC = ptr()->COMGETTER(Port)(&aPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPort;
}

ULONG CVRDEServerInfo::GetNumberOfClients() const
{
    ULONG aNumberOfClients = 0;
    AssertReturn(ptr(), aNumberOfClients);
    mRC = ptr()->COMGETTER(NumberOfClients)(&aNumberOfClients);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNumberOfClients;
}

LONG64 CVRDEServerInfo::GetBeginTime() const
{
    LONG64 aBeginTime = 0;
    AssertReturn(ptr(), aBeginTime);
    mRC = ptr()->COMGETTER(BeginTime)(&aBeginTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBeginTime;
}

LONG64 CVRDEServerInfo::GetEndTime() const
{
    LONG64 aEndTime = 0;
    AssertReturn(ptr(), aEndTime);
    mRC = ptr()->COMGETTER(EndTime)(&aEndTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEndTime;
}

LONG64 CVRDEServerInfo::GetBytesSent() const
{
    LONG64 aBytesSent = 0;
    AssertReturn(ptr(), aBytesSent);
    mRC = ptr()->COMGETTER(BytesSent)(&aBytesSent);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBytesSent;
}

LONG64 CVRDEServerInfo::GetBytesSentTotal() const
{
    LONG64 aBytesSentTotal = 0;
    AssertReturn(ptr(), aBytesSentTotal);
    mRC = ptr()->COMGETTER(BytesSentTotal)(&aBytesSentTotal);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBytesSentTotal;
}

LONG64 CVRDEServerInfo::GetBytesReceived() const
{
    LONG64 aBytesReceived = 0;
    AssertReturn(ptr(), aBytesReceived);
    mRC = ptr()->COMGETTER(BytesReceived)(&aBytesReceived);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBytesReceived;
}

LONG64 CVRDEServerInfo::GetBytesReceivedTotal() const
{
    LONG64 aBytesReceivedTotal = 0;
    AssertReturn(ptr(), aBytesReceivedTotal);
    mRC = ptr()->COMGETTER(BytesReceivedTotal)(&aBytesReceivedTotal);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBytesReceivedTotal;
}

QString CVRDEServerInfo::GetUser() const
{
    QString aUser;
    AssertReturn(ptr(), aUser);
    mRC = ptr()->COMGETTER(User)(BSTROut(aUser));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUser;
}

QString CVRDEServerInfo::GetDomain() const
{
    QString aDomain;
    AssertReturn(ptr(), aDomain);
    mRC = ptr()->COMGETTER(Domain)(BSTROut(aDomain));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDomain;
}

QString CVRDEServerInfo::GetClientName() const
{
    QString aClientName;
    AssertReturn(ptr(), aClientName);
    mRC = ptr()->COMGETTER(ClientName)(BSTROut(aClientName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aClientName;
}

QString CVRDEServerInfo::GetClientIP() const
{
    QString aClientIP;
    AssertReturn(ptr(), aClientIP);
    mRC = ptr()->COMGETTER(ClientIP)(BSTROut(aClientIP));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aClientIP;
}

ULONG CVRDEServerInfo::GetClientVersion() const
{
    ULONG aClientVersion = 0;
    AssertReturn(ptr(), aClientVersion);
    mRC = ptr()->COMGETTER(ClientVersion)(&aClientVersion);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aClientVersion;
}

ULONG CVRDEServerInfo::GetEncryptionStyle() const
{
    ULONG aEncryptionStyle = 0;
    AssertReturn(ptr(), aEncryptionStyle);
    mRC = ptr()->COMGETTER(EncryptionStyle)(&aEncryptionStyle);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEncryptionStyle;
}

// IConsole wrapper

CMachine CConsole::GetMachine() const
{
    CMachine aMachine;
    AssertReturn(ptr(), aMachine);
    IMachine* machinePtr = NULL;
    mRC = ptr()->COMGETTER(Machine)(&machinePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMachine.setPtr(machinePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachine;
}

KMachineState CConsole::GetState() const
{
    KMachineState aState = (KMachineState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KMachineState, MachineState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

CGuest CConsole::GetGuest() const
{
    CGuest aGuest;
    AssertReturn(ptr(), aGuest);
    IGuest* guestPtr = NULL;
    mRC = ptr()->COMGETTER(Guest)(&guestPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aGuest.setPtr(guestPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuest;
}

CKeyboard CConsole::GetKeyboard() const
{
    CKeyboard aKeyboard;
    AssertReturn(ptr(), aKeyboard);
    IKeyboard* keyboardPtr = NULL;
    mRC = ptr()->COMGETTER(Keyboard)(&keyboardPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aKeyboard.setPtr(keyboardPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aKeyboard;
}

CMouse CConsole::GetMouse() const
{
    CMouse aMouse;
    AssertReturn(ptr(), aMouse);
    IMouse* mousePtr = NULL;
    mRC = ptr()->COMGETTER(Mouse)(&mousePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMouse.setPtr(mousePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMouse;
}

CDisplay CConsole::GetDisplay() const
{
    CDisplay aDisplay;
    AssertReturn(ptr(), aDisplay);
    IDisplay* displayPtr = NULL;
    mRC = ptr()->COMGETTER(Display)(&displayPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDisplay.setPtr(displayPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDisplay;
}

CMachineDebugger CConsole::GetDebugger() const
{
    CMachineDebugger aDebugger;
    AssertReturn(ptr(), aDebugger);
    IMachineDebugger* debuggerPtr = NULL;
    mRC = ptr()->COMGETTER(Debugger)(&debuggerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDebugger.setPtr(debuggerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDebugger;
}

QVector<CUSBDevice> CConsole::GetUSBDevices() const
{
    QVector<CUSBDevice> aUSBDevices;
    AssertReturn(ptr(), aUSBDevices);
    com::SafeIfaceArray <IUSBDevice> USBDevices;
    mRC = ptr()->COMGETTER(USBDevices)(ComSafeArrayAsOutParam(USBDevices));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(USBDevices, aUSBDevices);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUSBDevices;
}

QVector<CHostUSBDevice> CConsole::GetRemoteUSBDevices() const
{
    QVector<CHostUSBDevice> aRemoteUSBDevices;
    AssertReturn(ptr(), aRemoteUSBDevices);
    com::SafeIfaceArray <IHostUSBDevice> remoteUSBDevices;
    mRC = ptr()->COMGETTER(RemoteUSBDevices)(ComSafeArrayAsOutParam(remoteUSBDevices));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(remoteUSBDevices, aRemoteUSBDevices);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRemoteUSBDevices;
}

QVector<CSharedFolder> CConsole::GetSharedFolders() const
{
    QVector<CSharedFolder> aSharedFolders;
    AssertReturn(ptr(), aSharedFolders);
    com::SafeIfaceArray <ISharedFolder> sharedFolders;
    mRC = ptr()->COMGETTER(SharedFolders)(ComSafeArrayAsOutParam(sharedFolders));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(sharedFolders, aSharedFolders);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSharedFolders;
}

CVRDEServerInfo CConsole::GetVRDEServerInfo() const
{
    CVRDEServerInfo aVRDEServerInfo;
    AssertReturn(ptr(), aVRDEServerInfo);
    IVRDEServerInfo* VRDEServerInfoPtr = NULL;
    mRC = ptr()->COMGETTER(VRDEServerInfo)(&VRDEServerInfoPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aVRDEServerInfo.setPtr(VRDEServerInfoPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRDEServerInfo;
}

CEventSource CConsole::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

QVector<CPCIDeviceAttachment> CConsole::GetAttachedPCIDevices() const
{
    QVector<CPCIDeviceAttachment> aAttachedPCIDevices;
    AssertReturn(ptr(), aAttachedPCIDevices);
    com::SafeIfaceArray <IPCIDeviceAttachment> attachedPCIDevices;
    mRC = ptr()->COMGETTER(AttachedPCIDevices)(ComSafeArrayAsOutParam(attachedPCIDevices));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(attachedPCIDevices, aAttachedPCIDevices);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAttachedPCIDevices;
}

BOOL CConsole::GetUseHostClipboard() const
{
    BOOL aUseHostClipboard = FALSE;
    AssertReturn(ptr(), aUseHostClipboard);
    mRC = ptr()->COMGETTER(UseHostClipboard)(&aUseHostClipboard);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUseHostClipboard;
}
void CConsole::SetUseHostClipboard(BOOL aUseHostClipboard)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(UseHostClipboard)(aUseHostClipboard);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CEmulatedUSB CConsole::GetEmulatedUSB() const
{
    CEmulatedUSB aEmulatedUSB;
    AssertReturn(ptr(), aEmulatedUSB);
    IEmulatedUSB* emulatedUSBPtr = NULL;
    mRC = ptr()->COMGETTER(EmulatedUSB)(&emulatedUSBPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEmulatedUSB.setPtr(emulatedUSBPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEmulatedUSB;
}

CProgress CConsole::PowerUp()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->PowerUp(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CConsole::PowerUpPaused()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->PowerUpPaused(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CConsole::PowerDown()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->PowerDown(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

void CConsole::Reset()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Reset();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CConsole::Pause()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Pause();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CConsole::Resume()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Resume();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CConsole::PowerButton()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->PowerButton();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CConsole::SleepButton()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SleepButton();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CConsole::GetPowerButtonHandled()
{
    BOOL aHandled = FALSE;
    AssertReturn(ptr(), aHandled);
    mRC = ptr()->GetPowerButtonHandled(&aHandled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHandled;
}

BOOL CConsole::GetGuestEnteredACPIMode()
{
    BOOL aEntered = FALSE;
    AssertReturn(ptr(), aEntered);
    mRC = ptr()->GetGuestEnteredACPIMode(&aEntered);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEntered;
}

CProgress CConsole::SaveState()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->SaveState(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

void CConsole::AdoptSavedState(const QString & aSavedStateFile)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AdoptSavedState(BSTRIn(aSavedStateFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CConsole::DiscardSavedState(BOOL aFRemoveFile)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DiscardSavedState(aFRemoveFile);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KDeviceActivity CConsole::GetDeviceActivity(const KDeviceType & aType)
{
    KDeviceActivity aActivity = (KDeviceActivity) 0;
    AssertReturn(ptr(), aActivity);
    mRC = ptr()->GetDeviceActivity((DeviceType_T) aType, ENUMOut<KDeviceActivity, DeviceActivity_T>(aActivity));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aActivity;
}

void CConsole::AttachUSBDevice(QString aId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AttachUSBDevice(BSTRIn(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CUSBDevice CConsole::DetachUSBDevice(QString aId)
{
    CUSBDevice aDevice;
    AssertReturn(ptr(), aDevice);
    IUSBDevice* devicePtr = NULL;
    mRC = ptr()->DetachUSBDevice(BSTRIn(aId), &devicePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDevice.setPtr(devicePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}

CUSBDevice CConsole::FindUSBDeviceByAddress(const QString & aName)
{
    CUSBDevice aDevice;
    AssertReturn(ptr(), aDevice);
    IUSBDevice* devicePtr = NULL;
    mRC = ptr()->FindUSBDeviceByAddress(BSTRIn(aName), &devicePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDevice.setPtr(devicePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}

CUSBDevice CConsole::FindUSBDeviceById(QString aId)
{
    CUSBDevice aDevice;
    AssertReturn(ptr(), aDevice);
    IUSBDevice* devicePtr = NULL;
    mRC = ptr()->FindUSBDeviceById(BSTRIn(aId), &devicePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDevice.setPtr(devicePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}

void CConsole::CreateSharedFolder(const QString & aName, const QString & aHostPath, BOOL aWritable, BOOL aAutomount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->CreateSharedFolder(BSTRIn(aName), BSTRIn(aHostPath), aWritable, aAutomount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CConsole::RemoveSharedFolder(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveSharedFolder(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CProgress CConsole::TakeSnapshot(const QString & aName, const QString & aDescription)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->TakeSnapshot(BSTRIn(aName), BSTRIn(aDescription), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CConsole::DeleteSnapshot(QString aId)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->DeleteSnapshot(BSTRIn(aId), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CConsole::DeleteSnapshotAndAllChildren(QString aId)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->DeleteSnapshotAndAllChildren(BSTRIn(aId), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CConsole::DeleteSnapshotRange(QString aStartId, QString aEndId)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->DeleteSnapshotRange(BSTRIn(aStartId), BSTRIn(aEndId), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CConsole::RestoreSnapshot(const CSnapshot & aSnapshot)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->RestoreSnapshot(aSnapshot.ptr(), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CConsole::Teleport(const QString & aHostname, ULONG aTcpport, const QString & aPassword, ULONG aMaxDowntime)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Teleport(BSTRIn(aHostname), aTcpport, BSTRIn(aPassword), aMaxDowntime, &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

// IHostNetworkInterface wrapper

QString CHostNetworkInterface::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CHostNetworkInterface::GetShortName() const
{
    QString aShortName;
    AssertReturn(ptr(), aShortName);
    mRC = ptr()->COMGETTER(ShortName)(BSTROut(aShortName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aShortName;
}

QString CHostNetworkInterface::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

QString CHostNetworkInterface::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}

BOOL CHostNetworkInterface::GetDHCPEnabled() const
{
    BOOL aDHCPEnabled = FALSE;
    AssertReturn(ptr(), aDHCPEnabled);
    mRC = ptr()->COMGETTER(DHCPEnabled)(&aDHCPEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDHCPEnabled;
}

QString CHostNetworkInterface::GetIPAddress() const
{
    QString aIPAddress;
    AssertReturn(ptr(), aIPAddress);
    mRC = ptr()->COMGETTER(IPAddress)(BSTROut(aIPAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIPAddress;
}

QString CHostNetworkInterface::GetNetworkMask() const
{
    QString aNetworkMask;
    AssertReturn(ptr(), aNetworkMask);
    mRC = ptr()->COMGETTER(NetworkMask)(BSTROut(aNetworkMask));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkMask;
}

BOOL CHostNetworkInterface::GetIPV6Supported() const
{
    BOOL aIPV6Supported = FALSE;
    AssertReturn(ptr(), aIPV6Supported);
    mRC = ptr()->COMGETTER(IPV6Supported)(&aIPV6Supported);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIPV6Supported;
}

QString CHostNetworkInterface::GetIPV6Address() const
{
    QString aIPV6Address;
    AssertReturn(ptr(), aIPV6Address);
    mRC = ptr()->COMGETTER(IPV6Address)(BSTROut(aIPV6Address));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIPV6Address;
}

ULONG CHostNetworkInterface::GetIPV6NetworkMaskPrefixLength() const
{
    ULONG aIPV6NetworkMaskPrefixLength = 0;
    AssertReturn(ptr(), aIPV6NetworkMaskPrefixLength);
    mRC = ptr()->COMGETTER(IPV6NetworkMaskPrefixLength)(&aIPV6NetworkMaskPrefixLength);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIPV6NetworkMaskPrefixLength;
}

QString CHostNetworkInterface::GetHardwareAddress() const
{
    QString aHardwareAddress;
    AssertReturn(ptr(), aHardwareAddress);
    mRC = ptr()->COMGETTER(HardwareAddress)(BSTROut(aHardwareAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHardwareAddress;
}

KHostNetworkInterfaceMediumType CHostNetworkInterface::GetMediumType() const
{
    KHostNetworkInterfaceMediumType aMediumType = (KHostNetworkInterfaceMediumType) 0;
    AssertReturn(ptr(), aMediumType);
    mRC = ptr()->COMGETTER(MediumType)(ENUMOut<KHostNetworkInterfaceMediumType, HostNetworkInterfaceMediumType_T>(aMediumType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMediumType;
}

KHostNetworkInterfaceStatus CHostNetworkInterface::GetStatus() const
{
    KHostNetworkInterfaceStatus aStatus = (KHostNetworkInterfaceStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KHostNetworkInterfaceStatus, HostNetworkInterfaceStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

KHostNetworkInterfaceType CHostNetworkInterface::GetInterfaceType() const
{
    KHostNetworkInterfaceType aInterfaceType = (KHostNetworkInterfaceType) 0;
    AssertReturn(ptr(), aInterfaceType);
    mRC = ptr()->COMGETTER(InterfaceType)(ENUMOut<KHostNetworkInterfaceType, HostNetworkInterfaceType_T>(aInterfaceType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInterfaceType;
}

void CHostNetworkInterface::EnableStaticIPConfig(const QString & aIPAddress, const QString & aNetworkMask)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->EnableStaticIPConfig(BSTRIn(aIPAddress), BSTRIn(aNetworkMask));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CHostNetworkInterface::EnableStaticIPConfigV6(const QString & aIPV6Address, ULONG aIPV6NetworkMaskPrefixLength)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->EnableStaticIPConfigV6(BSTRIn(aIPV6Address), aIPV6NetworkMaskPrefixLength);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CHostNetworkInterface::EnableDynamicIPConfig()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->EnableDynamicIPConfig();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CHostNetworkInterface::DHCPRediscover()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DHCPRediscover();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IHostVideoInputDevice wrapper

QString CHostVideoInputDevice::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CHostVideoInputDevice::GetPath() const
{
    QString aPath;
    AssertReturn(ptr(), aPath);
    mRC = ptr()->COMGETTER(Path)(BSTROut(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPath;
}

QString CHostVideoInputDevice::GetAlias() const
{
    QString aAlias;
    AssertReturn(ptr(), aAlias);
    mRC = ptr()->COMGETTER(Alias)(BSTROut(aAlias));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAlias;
}

// IHost wrapper

QVector<CMedium> CHost::GetDVDDrives() const
{
    QVector<CMedium> aDVDDrives;
    AssertReturn(ptr(), aDVDDrives);
    com::SafeIfaceArray <IMedium> DVDDrives;
    mRC = ptr()->COMGETTER(DVDDrives)(ComSafeArrayAsOutParam(DVDDrives));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(DVDDrives, aDVDDrives);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDVDDrives;
}

QVector<CMedium> CHost::GetFloppyDrives() const
{
    QVector<CMedium> aFloppyDrives;
    AssertReturn(ptr(), aFloppyDrives);
    com::SafeIfaceArray <IMedium> floppyDrives;
    mRC = ptr()->COMGETTER(FloppyDrives)(ComSafeArrayAsOutParam(floppyDrives));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(floppyDrives, aFloppyDrives);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFloppyDrives;
}

QVector<CHostUSBDevice> CHost::GetUSBDevices() const
{
    QVector<CHostUSBDevice> aUSBDevices;
    AssertReturn(ptr(), aUSBDevices);
    com::SafeIfaceArray <IHostUSBDevice> USBDevices;
    mRC = ptr()->COMGETTER(USBDevices)(ComSafeArrayAsOutParam(USBDevices));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(USBDevices, aUSBDevices);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUSBDevices;
}

QVector<CHostUSBDeviceFilter> CHost::GetUSBDeviceFilters() const
{
    QVector<CHostUSBDeviceFilter> aUSBDeviceFilters;
    AssertReturn(ptr(), aUSBDeviceFilters);
    com::SafeIfaceArray <IHostUSBDeviceFilter> USBDeviceFilters;
    mRC = ptr()->COMGETTER(USBDeviceFilters)(ComSafeArrayAsOutParam(USBDeviceFilters));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(USBDeviceFilters, aUSBDeviceFilters);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUSBDeviceFilters;
}

QVector<CHostNetworkInterface> CHost::GetNetworkInterfaces() const
{
    QVector<CHostNetworkInterface> aNetworkInterfaces;
    AssertReturn(ptr(), aNetworkInterfaces);
    com::SafeIfaceArray <IHostNetworkInterface> networkInterfaces;
    mRC = ptr()->COMGETTER(NetworkInterfaces)(ComSafeArrayAsOutParam(networkInterfaces));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(networkInterfaces, aNetworkInterfaces);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkInterfaces;
}

QVector<QString> CHost::GetNameServers() const
{
    QVector<QString> aNameServers;
    AssertReturn(ptr(), aNameServers);
    com::SafeArray <BSTR> nameServers;
    mRC = ptr()->COMGETTER(NameServers)(ComSafeArrayAsOutParam(nameServers));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(nameServers, aNameServers);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNameServers;
}

QString CHost::GetDomainName() const
{
    QString aDomainName;
    AssertReturn(ptr(), aDomainName);
    mRC = ptr()->COMGETTER(DomainName)(BSTROut(aDomainName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDomainName;
}

QVector<QString> CHost::GetSearchStrings() const
{
    QVector<QString> aSearchStrings;
    AssertReturn(ptr(), aSearchStrings);
    com::SafeArray <BSTR> searchStrings;
    mRC = ptr()->COMGETTER(SearchStrings)(ComSafeArrayAsOutParam(searchStrings));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(searchStrings, aSearchStrings);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSearchStrings;
}

ULONG CHost::GetProcessorCount() const
{
    ULONG aProcessorCount = 0;
    AssertReturn(ptr(), aProcessorCount);
    mRC = ptr()->COMGETTER(ProcessorCount)(&aProcessorCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessorCount;
}

ULONG CHost::GetProcessorOnlineCount() const
{
    ULONG aProcessorOnlineCount = 0;
    AssertReturn(ptr(), aProcessorOnlineCount);
    mRC = ptr()->COMGETTER(ProcessorOnlineCount)(&aProcessorOnlineCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessorOnlineCount;
}

ULONG CHost::GetProcessorCoreCount() const
{
    ULONG aProcessorCoreCount = 0;
    AssertReturn(ptr(), aProcessorCoreCount);
    mRC = ptr()->COMGETTER(ProcessorCoreCount)(&aProcessorCoreCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessorCoreCount;
}

ULONG CHost::GetProcessorOnlineCoreCount() const
{
    ULONG aProcessorOnlineCoreCount = 0;
    AssertReturn(ptr(), aProcessorOnlineCoreCount);
    mRC = ptr()->COMGETTER(ProcessorOnlineCoreCount)(&aProcessorOnlineCoreCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessorOnlineCoreCount;
}

ULONG CHost::GetMemorySize() const
{
    ULONG aMemorySize = 0;
    AssertReturn(ptr(), aMemorySize);
    mRC = ptr()->COMGETTER(MemorySize)(&aMemorySize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMemorySize;
}

ULONG CHost::GetMemoryAvailable() const
{
    ULONG aMemoryAvailable = 0;
    AssertReturn(ptr(), aMemoryAvailable);
    mRC = ptr()->COMGETTER(MemoryAvailable)(&aMemoryAvailable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMemoryAvailable;
}

QString CHost::GetOperatingSystem() const
{
    QString aOperatingSystem;
    AssertReturn(ptr(), aOperatingSystem);
    mRC = ptr()->COMGETTER(OperatingSystem)(BSTROut(aOperatingSystem));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOperatingSystem;
}

QString CHost::GetOSVersion() const
{
    QString aOSVersion;
    AssertReturn(ptr(), aOSVersion);
    mRC = ptr()->COMGETTER(OSVersion)(BSTROut(aOSVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOSVersion;
}

LONG64 CHost::GetUTCTime() const
{
    LONG64 aUTCTime = 0;
    AssertReturn(ptr(), aUTCTime);
    mRC = ptr()->COMGETTER(UTCTime)(&aUTCTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUTCTime;
}

BOOL CHost::GetAcceleration3DAvailable() const
{
    BOOL aAcceleration3DAvailable = FALSE;
    AssertReturn(ptr(), aAcceleration3DAvailable);
    mRC = ptr()->COMGETTER(Acceleration3DAvailable)(&aAcceleration3DAvailable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAcceleration3DAvailable;
}

QVector<CHostVideoInputDevice> CHost::GetVideoInputDevices() const
{
    QVector<CHostVideoInputDevice> aVideoInputDevices;
    AssertReturn(ptr(), aVideoInputDevices);
    com::SafeIfaceArray <IHostVideoInputDevice> videoInputDevices;
    mRC = ptr()->COMGETTER(VideoInputDevices)(ComSafeArrayAsOutParam(videoInputDevices));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(videoInputDevices, aVideoInputDevices);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVideoInputDevices;
}

ULONG CHost::GetProcessorSpeed(ULONG aCpuId)
{
    ULONG aSpeed = 0;
    AssertReturn(ptr(), aSpeed);
    mRC = ptr()->GetProcessorSpeed(aCpuId, &aSpeed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSpeed;
}

BOOL CHost::GetProcessorFeature(const KProcessorFeature & aFeature)
{
    BOOL aSupported = FALSE;
    AssertReturn(ptr(), aSupported);
    mRC = ptr()->GetProcessorFeature((ProcessorFeature_T) aFeature, &aSupported);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSupported;
}

QString CHost::GetProcessorDescription(ULONG aCpuId)
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->GetProcessorDescription(aCpuId, BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

void CHost::GetProcessorCPUIDLeaf(ULONG aCpuId, ULONG aLeaf, ULONG aSubLeaf, ULONG & aValEax, ULONG & aValEbx, ULONG & aValEcx, ULONG & aValEdx)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->GetProcessorCPUIDLeaf(aCpuId, aLeaf, aSubLeaf, &aValEax, &aValEbx, &aValEcx, &aValEdx);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CProgress CHost::CreateHostOnlyNetworkInterface(CHostNetworkInterface & aHostInterface)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IHostNetworkInterface* hostInterfacePtr = NULL;
    IProgress* progressPtr = NULL;
    mRC = ptr()->CreateHostOnlyNetworkInterface(&hostInterfacePtr, &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aHostInterface.setPtr(hostInterfacePtr);
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CHost::RemoveHostOnlyNetworkInterface(QString aId)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->RemoveHostOnlyNetworkInterface(BSTRIn(aId), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CHostUSBDeviceFilter CHost::CreateUSBDeviceFilter(const QString & aName)
{
    CHostUSBDeviceFilter aFilter;
    AssertReturn(ptr(), aFilter);
    IHostUSBDeviceFilter* filterPtr = NULL;
    mRC = ptr()->CreateUSBDeviceFilter(BSTRIn(aName), &filterPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFilter.setPtr(filterPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFilter;
}

void CHost::InsertUSBDeviceFilter(ULONG aPosition, const CHostUSBDeviceFilter & aFilter)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->InsertUSBDeviceFilter(aPosition, aFilter.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CHost::RemoveUSBDeviceFilter(ULONG aPosition)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveUSBDeviceFilter(aPosition);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CMedium CHost::FindHostDVDDrive(const QString & aName)
{
    CMedium aDrive;
    AssertReturn(ptr(), aDrive);
    IMedium* drivePtr = NULL;
    mRC = ptr()->FindHostDVDDrive(BSTRIn(aName), &drivePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDrive.setPtr(drivePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDrive;
}

CMedium CHost::FindHostFloppyDrive(const QString & aName)
{
    CMedium aDrive;
    AssertReturn(ptr(), aDrive);
    IMedium* drivePtr = NULL;
    mRC = ptr()->FindHostFloppyDrive(BSTRIn(aName), &drivePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDrive.setPtr(drivePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDrive;
}

CHostNetworkInterface CHost::FindHostNetworkInterfaceByName(const QString & aName)
{
    CHostNetworkInterface aNetworkInterface;
    AssertReturn(ptr(), aNetworkInterface);
    IHostNetworkInterface* networkInterfacePtr = NULL;
    mRC = ptr()->FindHostNetworkInterfaceByName(BSTRIn(aName), &networkInterfacePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aNetworkInterface.setPtr(networkInterfacePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkInterface;
}

CHostNetworkInterface CHost::FindHostNetworkInterfaceById(QString aId)
{
    CHostNetworkInterface aNetworkInterface;
    AssertReturn(ptr(), aNetworkInterface);
    IHostNetworkInterface* networkInterfacePtr = NULL;
    mRC = ptr()->FindHostNetworkInterfaceById(BSTRIn(aId), &networkInterfacePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aNetworkInterface.setPtr(networkInterfacePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkInterface;
}

QVector<CHostNetworkInterface> CHost::FindHostNetworkInterfacesOfType(const KHostNetworkInterfaceType & aType)
{
    QVector<CHostNetworkInterface> aNetworkInterfaces;
    AssertReturn(ptr(), aNetworkInterfaces);
    com::SafeIfaceArray <IHostNetworkInterface> networkInterfaces;
    mRC = ptr()->FindHostNetworkInterfacesOfType((HostNetworkInterfaceType_T) aType, ComSafeArrayAsOutParam(networkInterfaces));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(networkInterfaces, aNetworkInterfaces);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkInterfaces;
}

CHostUSBDevice CHost::FindUSBDeviceById(QString aId)
{
    CHostUSBDevice aDevice;
    AssertReturn(ptr(), aDevice);
    IHostUSBDevice* devicePtr = NULL;
    mRC = ptr()->FindUSBDeviceById(BSTRIn(aId), &devicePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDevice.setPtr(devicePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}

CHostUSBDevice CHost::FindUSBDeviceByAddress(const QString & aName)
{
    CHostUSBDevice aDevice;
    AssertReturn(ptr(), aDevice);
    IHostUSBDevice* devicePtr = NULL;
    mRC = ptr()->FindUSBDeviceByAddress(BSTRIn(aName), &devicePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDevice.setPtr(devicePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}

QString CHost::GenerateMACAddress()
{
    QString aAddress;
    AssertReturn(ptr(), aAddress);
    mRC = ptr()->GenerateMACAddress(BSTROut(aAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAddress;
}

// ISystemProperties wrapper

ULONG CSystemProperties::GetMinGuestRAM() const
{
    ULONG aMinGuestRAM = 0;
    AssertReturn(ptr(), aMinGuestRAM);
    mRC = ptr()->COMGETTER(MinGuestRAM)(&aMinGuestRAM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMinGuestRAM;
}

ULONG CSystemProperties::GetMaxGuestRAM() const
{
    ULONG aMaxGuestRAM = 0;
    AssertReturn(ptr(), aMaxGuestRAM);
    mRC = ptr()->COMGETTER(MaxGuestRAM)(&aMaxGuestRAM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxGuestRAM;
}

ULONG CSystemProperties::GetMinGuestVRAM() const
{
    ULONG aMinGuestVRAM = 0;
    AssertReturn(ptr(), aMinGuestVRAM);
    mRC = ptr()->COMGETTER(MinGuestVRAM)(&aMinGuestVRAM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMinGuestVRAM;
}

ULONG CSystemProperties::GetMaxGuestVRAM() const
{
    ULONG aMaxGuestVRAM = 0;
    AssertReturn(ptr(), aMaxGuestVRAM);
    mRC = ptr()->COMGETTER(MaxGuestVRAM)(&aMaxGuestVRAM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxGuestVRAM;
}

ULONG CSystemProperties::GetMinGuestCPUCount() const
{
    ULONG aMinGuestCPUCount = 0;
    AssertReturn(ptr(), aMinGuestCPUCount);
    mRC = ptr()->COMGETTER(MinGuestCPUCount)(&aMinGuestCPUCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMinGuestCPUCount;
}

ULONG CSystemProperties::GetMaxGuestCPUCount() const
{
    ULONG aMaxGuestCPUCount = 0;
    AssertReturn(ptr(), aMaxGuestCPUCount);
    mRC = ptr()->COMGETTER(MaxGuestCPUCount)(&aMaxGuestCPUCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxGuestCPUCount;
}

ULONG CSystemProperties::GetMaxGuestMonitors() const
{
    ULONG aMaxGuestMonitors = 0;
    AssertReturn(ptr(), aMaxGuestMonitors);
    mRC = ptr()->COMGETTER(MaxGuestMonitors)(&aMaxGuestMonitors);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxGuestMonitors;
}

LONG64 CSystemProperties::GetInfoVDSize() const
{
    LONG64 aInfoVDSize = 0;
    AssertReturn(ptr(), aInfoVDSize);
    mRC = ptr()->COMGETTER(InfoVDSize)(&aInfoVDSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInfoVDSize;
}

ULONG CSystemProperties::GetSerialPortCount() const
{
    ULONG aSerialPortCount = 0;
    AssertReturn(ptr(), aSerialPortCount);
    mRC = ptr()->COMGETTER(SerialPortCount)(&aSerialPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSerialPortCount;
}

ULONG CSystemProperties::GetParallelPortCount() const
{
    ULONG aParallelPortCount = 0;
    AssertReturn(ptr(), aParallelPortCount);
    mRC = ptr()->COMGETTER(ParallelPortCount)(&aParallelPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aParallelPortCount;
}

ULONG CSystemProperties::GetMaxBootPosition() const
{
    ULONG aMaxBootPosition = 0;
    AssertReturn(ptr(), aMaxBootPosition);
    mRC = ptr()->COMGETTER(MaxBootPosition)(&aMaxBootPosition);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxBootPosition;
}

BOOL CSystemProperties::GetExclusiveHwVirt() const
{
    BOOL aExclusiveHwVirt = FALSE;
    AssertReturn(ptr(), aExclusiveHwVirt);
    mRC = ptr()->COMGETTER(ExclusiveHwVirt)(&aExclusiveHwVirt);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExclusiveHwVirt;
}
void CSystemProperties::SetExclusiveHwVirt(BOOL aExclusiveHwVirt)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ExclusiveHwVirt)(aExclusiveHwVirt);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSystemProperties::GetDefaultMachineFolder() const
{
    QString aDefaultMachineFolder;
    AssertReturn(ptr(), aDefaultMachineFolder);
    mRC = ptr()->COMGETTER(DefaultMachineFolder)(BSTROut(aDefaultMachineFolder));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDefaultMachineFolder;
}
void CSystemProperties::SetDefaultMachineFolder(const QString & aDefaultMachineFolder)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DefaultMachineFolder)(BSTRIn(aDefaultMachineFolder));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSystemProperties::GetLoggingLevel() const
{
    QString aLoggingLevel;
    AssertReturn(ptr(), aLoggingLevel);
    mRC = ptr()->COMGETTER(LoggingLevel)(BSTROut(aLoggingLevel));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLoggingLevel;
}
void CSystemProperties::SetLoggingLevel(const QString & aLoggingLevel)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LoggingLevel)(BSTRIn(aLoggingLevel));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<CMediumFormat> CSystemProperties::GetMediumFormats() const
{
    QVector<CMediumFormat> aMediumFormats;
    AssertReturn(ptr(), aMediumFormats);
    com::SafeIfaceArray <IMediumFormat> mediumFormats;
    mRC = ptr()->COMGETTER(MediumFormats)(ComSafeArrayAsOutParam(mediumFormats));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(mediumFormats, aMediumFormats);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMediumFormats;
}

QString CSystemProperties::GetDefaultHardDiskFormat() const
{
    QString aDefaultHardDiskFormat;
    AssertReturn(ptr(), aDefaultHardDiskFormat);
    mRC = ptr()->COMGETTER(DefaultHardDiskFormat)(BSTROut(aDefaultHardDiskFormat));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDefaultHardDiskFormat;
}
void CSystemProperties::SetDefaultHardDiskFormat(const QString & aDefaultHardDiskFormat)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DefaultHardDiskFormat)(BSTRIn(aDefaultHardDiskFormat));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

LONG64 CSystemProperties::GetFreeDiskSpaceWarning() const
{
    LONG64 aFreeDiskSpaceWarning = 0;
    AssertReturn(ptr(), aFreeDiskSpaceWarning);
    mRC = ptr()->COMGETTER(FreeDiskSpaceWarning)(&aFreeDiskSpaceWarning);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFreeDiskSpaceWarning;
}
void CSystemProperties::SetFreeDiskSpaceWarning(LONG64 aFreeDiskSpaceWarning)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FreeDiskSpaceWarning)(aFreeDiskSpaceWarning);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CSystemProperties::GetFreeDiskSpacePercentWarning() const
{
    ULONG aFreeDiskSpacePercentWarning = 0;
    AssertReturn(ptr(), aFreeDiskSpacePercentWarning);
    mRC = ptr()->COMGETTER(FreeDiskSpacePercentWarning)(&aFreeDiskSpacePercentWarning);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFreeDiskSpacePercentWarning;
}
void CSystemProperties::SetFreeDiskSpacePercentWarning(ULONG aFreeDiskSpacePercentWarning)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FreeDiskSpacePercentWarning)(aFreeDiskSpacePercentWarning);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

LONG64 CSystemProperties::GetFreeDiskSpaceError() const
{
    LONG64 aFreeDiskSpaceError = 0;
    AssertReturn(ptr(), aFreeDiskSpaceError);
    mRC = ptr()->COMGETTER(FreeDiskSpaceError)(&aFreeDiskSpaceError);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFreeDiskSpaceError;
}
void CSystemProperties::SetFreeDiskSpaceError(LONG64 aFreeDiskSpaceError)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FreeDiskSpaceError)(aFreeDiskSpaceError);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CSystemProperties::GetFreeDiskSpacePercentError() const
{
    ULONG aFreeDiskSpacePercentError = 0;
    AssertReturn(ptr(), aFreeDiskSpacePercentError);
    mRC = ptr()->COMGETTER(FreeDiskSpacePercentError)(&aFreeDiskSpacePercentError);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFreeDiskSpacePercentError;
}
void CSystemProperties::SetFreeDiskSpacePercentError(ULONG aFreeDiskSpacePercentError)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(FreeDiskSpacePercentError)(aFreeDiskSpacePercentError);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSystemProperties::GetVRDEAuthLibrary() const
{
    QString aVRDEAuthLibrary;
    AssertReturn(ptr(), aVRDEAuthLibrary);
    mRC = ptr()->COMGETTER(VRDEAuthLibrary)(BSTROut(aVRDEAuthLibrary));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRDEAuthLibrary;
}
void CSystemProperties::SetVRDEAuthLibrary(const QString & aVRDEAuthLibrary)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VRDEAuthLibrary)(BSTRIn(aVRDEAuthLibrary));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSystemProperties::GetWebServiceAuthLibrary() const
{
    QString aWebServiceAuthLibrary;
    AssertReturn(ptr(), aWebServiceAuthLibrary);
    mRC = ptr()->COMGETTER(WebServiceAuthLibrary)(BSTROut(aWebServiceAuthLibrary));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWebServiceAuthLibrary;
}
void CSystemProperties::SetWebServiceAuthLibrary(const QString & aWebServiceAuthLibrary)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(WebServiceAuthLibrary)(BSTRIn(aWebServiceAuthLibrary));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSystemProperties::GetDefaultVRDEExtPack() const
{
    QString aDefaultVRDEExtPack;
    AssertReturn(ptr(), aDefaultVRDEExtPack);
    mRC = ptr()->COMGETTER(DefaultVRDEExtPack)(BSTROut(aDefaultVRDEExtPack));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDefaultVRDEExtPack;
}
void CSystemProperties::SetDefaultVRDEExtPack(const QString & aDefaultVRDEExtPack)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DefaultVRDEExtPack)(BSTRIn(aDefaultVRDEExtPack));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CSystemProperties::GetLogHistoryCount() const
{
    ULONG aLogHistoryCount = 0;
    AssertReturn(ptr(), aLogHistoryCount);
    mRC = ptr()->COMGETTER(LogHistoryCount)(&aLogHistoryCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogHistoryCount;
}
void CSystemProperties::SetLogHistoryCount(ULONG aLogHistoryCount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LogHistoryCount)(aLogHistoryCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KAudioDriverType CSystemProperties::GetDefaultAudioDriver() const
{
    KAudioDriverType aDefaultAudioDriver = (KAudioDriverType) 0;
    AssertReturn(ptr(), aDefaultAudioDriver);
    mRC = ptr()->COMGETTER(DefaultAudioDriver)(ENUMOut<KAudioDriverType, AudioDriverType_T>(aDefaultAudioDriver));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDefaultAudioDriver;
}

QString CSystemProperties::GetAutostartDatabasePath() const
{
    QString aAutostartDatabasePath;
    AssertReturn(ptr(), aAutostartDatabasePath);
    mRC = ptr()->COMGETTER(AutostartDatabasePath)(BSTROut(aAutostartDatabasePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAutostartDatabasePath;
}
void CSystemProperties::SetAutostartDatabasePath(const QString & aAutostartDatabasePath)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AutostartDatabasePath)(BSTRIn(aAutostartDatabasePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSystemProperties::GetDefaultAdditionsISO() const
{
    QString aDefaultAdditionsISO;
    AssertReturn(ptr(), aDefaultAdditionsISO);
    mRC = ptr()->COMGETTER(DefaultAdditionsISO)(BSTROut(aDefaultAdditionsISO));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDefaultAdditionsISO;
}
void CSystemProperties::SetDefaultAdditionsISO(const QString & aDefaultAdditionsISO)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DefaultAdditionsISO)(BSTRIn(aDefaultAdditionsISO));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSystemProperties::GetDefaultFrontend() const
{
    QString aDefaultFrontend;
    AssertReturn(ptr(), aDefaultFrontend);
    mRC = ptr()->COMGETTER(DefaultFrontend)(BSTROut(aDefaultFrontend));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDefaultFrontend;
}
void CSystemProperties::SetDefaultFrontend(const QString & aDefaultFrontend)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DefaultFrontend)(BSTRIn(aDefaultFrontend));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CSystemProperties::GetMaxNetworkAdapters(const KChipsetType & aChipset)
{
    ULONG aMaxNetworkAdapters = 0;
    AssertReturn(ptr(), aMaxNetworkAdapters);
    mRC = ptr()->GetMaxNetworkAdapters((ChipsetType_T) aChipset, &aMaxNetworkAdapters);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxNetworkAdapters;
}

ULONG CSystemProperties::GetMaxNetworkAdaptersOfType(const KChipsetType & aChipset, const KNetworkAttachmentType & aType)
{
    ULONG aMaxNetworkAdapters = 0;
    AssertReturn(ptr(), aMaxNetworkAdapters);
    mRC = ptr()->GetMaxNetworkAdaptersOfType((ChipsetType_T) aChipset, (NetworkAttachmentType_T) aType, &aMaxNetworkAdapters);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxNetworkAdapters;
}

ULONG CSystemProperties::GetMaxDevicesPerPortForStorageBus(const KStorageBus & aBus)
{
    ULONG aMaxDevicesPerPort = 0;
    AssertReturn(ptr(), aMaxDevicesPerPort);
    mRC = ptr()->GetMaxDevicesPerPortForStorageBus((StorageBus_T) aBus, &aMaxDevicesPerPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxDevicesPerPort;
}

ULONG CSystemProperties::GetMinPortCountForStorageBus(const KStorageBus & aBus)
{
    ULONG aMinPortCount = 0;
    AssertReturn(ptr(), aMinPortCount);
    mRC = ptr()->GetMinPortCountForStorageBus((StorageBus_T) aBus, &aMinPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMinPortCount;
}

ULONG CSystemProperties::GetMaxPortCountForStorageBus(const KStorageBus & aBus)
{
    ULONG aMaxPortCount = 0;
    AssertReturn(ptr(), aMaxPortCount);
    mRC = ptr()->GetMaxPortCountForStorageBus((StorageBus_T) aBus, &aMaxPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxPortCount;
}

ULONG CSystemProperties::GetMaxInstancesOfStorageBus(const KChipsetType & aChipset, const KStorageBus & aBus)
{
    ULONG aMaxInstances = 0;
    AssertReturn(ptr(), aMaxInstances);
    mRC = ptr()->GetMaxInstancesOfStorageBus((ChipsetType_T) aChipset, (StorageBus_T) aBus, &aMaxInstances);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxInstances;
}

QVector<KDeviceType> CSystemProperties::GetDeviceTypesForStorageBus(const KStorageBus & aBus)
{
    QVector<KDeviceType> aDeviceTypes;
    AssertReturn(ptr(), aDeviceTypes);
    com::SafeArray <DeviceType_T> deviceTypes;
    mRC = ptr()->GetDeviceTypesForStorageBus((StorageBus_T) aBus, ComSafeArrayAsOutParam(deviceTypes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(deviceTypes, aDeviceTypes);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDeviceTypes;
}

BOOL CSystemProperties::GetDefaultIoCacheSettingForStorageController(const KStorageControllerType & aControllerType)
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->GetDefaultIoCacheSettingForStorageController((StorageControllerType_T) aControllerType, &aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}

ULONG CSystemProperties::GetMaxInstancesOfUSBControllerType(const KChipsetType & aChipset, const KUSBControllerType & aType)
{
    ULONG aMaxInstances = 0;
    AssertReturn(ptr(), aMaxInstances);
    mRC = ptr()->GetMaxInstancesOfUSBControllerType((ChipsetType_T) aChipset, (USBControllerType_T) aType, &aMaxInstances);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxInstances;
}

// IGuestOSType wrapper

QString CGuestOSType::GetFamilyId() const
{
    QString aFamilyId;
    AssertReturn(ptr(), aFamilyId);
    mRC = ptr()->COMGETTER(FamilyId)(BSTROut(aFamilyId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFamilyId;
}

QString CGuestOSType::GetFamilyDescription() const
{
    QString aFamilyDescription;
    AssertReturn(ptr(), aFamilyDescription);
    mRC = ptr()->COMGETTER(FamilyDescription)(BSTROut(aFamilyDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFamilyDescription;
}

QString CGuestOSType::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

QString CGuestOSType::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

BOOL CGuestOSType::GetIs64Bit() const
{
    BOOL aIs64Bit = FALSE;
    AssertReturn(ptr(), aIs64Bit);
    mRC = ptr()->COMGETTER(Is64Bit)(&aIs64Bit);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIs64Bit;
}

BOOL CGuestOSType::GetRecommendedIOAPIC() const
{
    BOOL aRecommendedIOAPIC = FALSE;
    AssertReturn(ptr(), aRecommendedIOAPIC);
    mRC = ptr()->COMGETTER(RecommendedIOAPIC)(&aRecommendedIOAPIC);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedIOAPIC;
}

BOOL CGuestOSType::GetRecommendedVirtEx() const
{
    BOOL aRecommendedVirtEx = FALSE;
    AssertReturn(ptr(), aRecommendedVirtEx);
    mRC = ptr()->COMGETTER(RecommendedVirtEx)(&aRecommendedVirtEx);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedVirtEx;
}

ULONG CGuestOSType::GetRecommendedRAM() const
{
    ULONG aRecommendedRAM = 0;
    AssertReturn(ptr(), aRecommendedRAM);
    mRC = ptr()->COMGETTER(RecommendedRAM)(&aRecommendedRAM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedRAM;
}

ULONG CGuestOSType::GetRecommendedVRAM() const
{
    ULONG aRecommendedVRAM = 0;
    AssertReturn(ptr(), aRecommendedVRAM);
    mRC = ptr()->COMGETTER(RecommendedVRAM)(&aRecommendedVRAM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedVRAM;
}

BOOL CGuestOSType::GetRecommended2DVideoAcceleration() const
{
    BOOL aRecommended2DVideoAcceleration = FALSE;
    AssertReturn(ptr(), aRecommended2DVideoAcceleration);
    mRC = ptr()->COMGETTER(Recommended2DVideoAcceleration)(&aRecommended2DVideoAcceleration);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommended2DVideoAcceleration;
}

BOOL CGuestOSType::GetRecommended3DAcceleration() const
{
    BOOL aRecommended3DAcceleration = FALSE;
    AssertReturn(ptr(), aRecommended3DAcceleration);
    mRC = ptr()->COMGETTER(Recommended3DAcceleration)(&aRecommended3DAcceleration);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommended3DAcceleration;
}

LONG64 CGuestOSType::GetRecommendedHDD() const
{
    LONG64 aRecommendedHDD = 0;
    AssertReturn(ptr(), aRecommendedHDD);
    mRC = ptr()->COMGETTER(RecommendedHDD)(&aRecommendedHDD);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedHDD;
}

KNetworkAdapterType CGuestOSType::GetAdapterType() const
{
    KNetworkAdapterType aAdapterType = (KNetworkAdapterType) 0;
    AssertReturn(ptr(), aAdapterType);
    mRC = ptr()->COMGETTER(AdapterType)(ENUMOut<KNetworkAdapterType, NetworkAdapterType_T>(aAdapterType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdapterType;
}

BOOL CGuestOSType::GetRecommendedPAE() const
{
    BOOL aRecommendedPAE = FALSE;
    AssertReturn(ptr(), aRecommendedPAE);
    mRC = ptr()->COMGETTER(RecommendedPAE)(&aRecommendedPAE);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedPAE;
}

KStorageControllerType CGuestOSType::GetRecommendedDVDStorageController() const
{
    KStorageControllerType aRecommendedDVDStorageController = (KStorageControllerType) 0;
    AssertReturn(ptr(), aRecommendedDVDStorageController);
    mRC = ptr()->COMGETTER(RecommendedDVDStorageController)(ENUMOut<KStorageControllerType, StorageControllerType_T>(aRecommendedDVDStorageController));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedDVDStorageController;
}

KStorageBus CGuestOSType::GetRecommendedDVDStorageBus() const
{
    KStorageBus aRecommendedDVDStorageBus = (KStorageBus) 0;
    AssertReturn(ptr(), aRecommendedDVDStorageBus);
    mRC = ptr()->COMGETTER(RecommendedDVDStorageBus)(ENUMOut<KStorageBus, StorageBus_T>(aRecommendedDVDStorageBus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedDVDStorageBus;
}

KStorageControllerType CGuestOSType::GetRecommendedHDStorageController() const
{
    KStorageControllerType aRecommendedHDStorageController = (KStorageControllerType) 0;
    AssertReturn(ptr(), aRecommendedHDStorageController);
    mRC = ptr()->COMGETTER(RecommendedHDStorageController)(ENUMOut<KStorageControllerType, StorageControllerType_T>(aRecommendedHDStorageController));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedHDStorageController;
}

KStorageBus CGuestOSType::GetRecommendedHDStorageBus() const
{
    KStorageBus aRecommendedHDStorageBus = (KStorageBus) 0;
    AssertReturn(ptr(), aRecommendedHDStorageBus);
    mRC = ptr()->COMGETTER(RecommendedHDStorageBus)(ENUMOut<KStorageBus, StorageBus_T>(aRecommendedHDStorageBus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedHDStorageBus;
}

KFirmwareType CGuestOSType::GetRecommendedFirmware() const
{
    KFirmwareType aRecommendedFirmware = (KFirmwareType) 0;
    AssertReturn(ptr(), aRecommendedFirmware);
    mRC = ptr()->COMGETTER(RecommendedFirmware)(ENUMOut<KFirmwareType, FirmwareType_T>(aRecommendedFirmware));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedFirmware;
}

BOOL CGuestOSType::GetRecommendedUSBHID() const
{
    BOOL aRecommendedUSBHID = FALSE;
    AssertReturn(ptr(), aRecommendedUSBHID);
    mRC = ptr()->COMGETTER(RecommendedUSBHID)(&aRecommendedUSBHID);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedUSBHID;
}

BOOL CGuestOSType::GetRecommendedHPET() const
{
    BOOL aRecommendedHPET = FALSE;
    AssertReturn(ptr(), aRecommendedHPET);
    mRC = ptr()->COMGETTER(RecommendedHPET)(&aRecommendedHPET);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedHPET;
}

BOOL CGuestOSType::GetRecommendedUSBTablet() const
{
    BOOL aRecommendedUSBTablet = FALSE;
    AssertReturn(ptr(), aRecommendedUSBTablet);
    mRC = ptr()->COMGETTER(RecommendedUSBTablet)(&aRecommendedUSBTablet);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedUSBTablet;
}

BOOL CGuestOSType::GetRecommendedRTCUseUTC() const
{
    BOOL aRecommendedRTCUseUTC = FALSE;
    AssertReturn(ptr(), aRecommendedRTCUseUTC);
    mRC = ptr()->COMGETTER(RecommendedRTCUseUTC)(&aRecommendedRTCUseUTC);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedRTCUseUTC;
}

KChipsetType CGuestOSType::GetRecommendedChipset() const
{
    KChipsetType aRecommendedChipset = (KChipsetType) 0;
    AssertReturn(ptr(), aRecommendedChipset);
    mRC = ptr()->COMGETTER(RecommendedChipset)(ENUMOut<KChipsetType, ChipsetType_T>(aRecommendedChipset));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedChipset;
}

KAudioControllerType CGuestOSType::GetRecommendedAudioController() const
{
    KAudioControllerType aRecommendedAudioController = (KAudioControllerType) 0;
    AssertReturn(ptr(), aRecommendedAudioController);
    mRC = ptr()->COMGETTER(RecommendedAudioController)(ENUMOut<KAudioControllerType, AudioControllerType_T>(aRecommendedAudioController));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedAudioController;
}

BOOL CGuestOSType::GetRecommendedFloppy() const
{
    BOOL aRecommendedFloppy = FALSE;
    AssertReturn(ptr(), aRecommendedFloppy);
    mRC = ptr()->COMGETTER(RecommendedFloppy)(&aRecommendedFloppy);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedFloppy;
}

BOOL CGuestOSType::GetRecommendedUSB() const
{
    BOOL aRecommendedUSB = FALSE;
    AssertReturn(ptr(), aRecommendedUSB);
    mRC = ptr()->COMGETTER(RecommendedUSB)(&aRecommendedUSB);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecommendedUSB;
}

// IAdditionsFacility wrapper

KAdditionsFacilityClass CAdditionsFacility::GetClassType() const
{
    KAdditionsFacilityClass aClassType = (KAdditionsFacilityClass) 0;
    AssertReturn(ptr(), aClassType);
    mRC = ptr()->COMGETTER(ClassType)(ENUMOut<KAdditionsFacilityClass, AdditionsFacilityClass_T>(aClassType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aClassType;
}

LONG64 CAdditionsFacility::GetLastUpdated() const
{
    LONG64 aLastUpdated = 0;
    AssertReturn(ptr(), aLastUpdated);
    mRC = ptr()->COMGETTER(LastUpdated)(&aLastUpdated);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLastUpdated;
}

QString CAdditionsFacility::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

KAdditionsFacilityStatus CAdditionsFacility::GetStatus() const
{
    KAdditionsFacilityStatus aStatus = (KAdditionsFacilityStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KAdditionsFacilityStatus, AdditionsFacilityStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

KAdditionsFacilityType CAdditionsFacility::GetType() const
{
    KAdditionsFacilityType aType = (KAdditionsFacilityType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KAdditionsFacilityType, AdditionsFacilityType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

// IGuestSession wrapper

QString CGuestSession::GetUser() const
{
    QString aUser;
    AssertReturn(ptr(), aUser);
    mRC = ptr()->COMGETTER(User)(BSTROut(aUser));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUser;
}

QString CGuestSession::GetDomain() const
{
    QString aDomain;
    AssertReturn(ptr(), aDomain);
    mRC = ptr()->COMGETTER(Domain)(BSTROut(aDomain));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDomain;
}

QString CGuestSession::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

ULONG CGuestSession::GetId() const
{
    ULONG aId = 0;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(&aId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

ULONG CGuestSession::GetTimeout() const
{
    ULONG aTimeout = 0;
    AssertReturn(ptr(), aTimeout);
    mRC = ptr()->COMGETTER(Timeout)(&aTimeout);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTimeout;
}
void CGuestSession::SetTimeout(ULONG aTimeout)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Timeout)(aTimeout);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CGuestSession::GetProtocolVersion() const
{
    ULONG aProtocolVersion = 0;
    AssertReturn(ptr(), aProtocolVersion);
    mRC = ptr()->COMGETTER(ProtocolVersion)(&aProtocolVersion);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProtocolVersion;
}

KGuestSessionStatus CGuestSession::GetStatus() const
{
    KGuestSessionStatus aStatus = (KGuestSessionStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KGuestSessionStatus, GuestSessionStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

QVector<QString> CGuestSession::GetEnvironment() const
{
    QVector<QString> aEnvironment;
    AssertReturn(ptr(), aEnvironment);
    com::SafeArray <BSTR> environment;
    mRC = ptr()->COMGETTER(Environment)(ComSafeArrayAsOutParam(environment));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(environment, aEnvironment);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnvironment;
}
void CGuestSession::SetEnvironment(const QVector<QString> & aEnvironment)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> environment;
    ToSafeArray(aEnvironment, environment);
    mRC = ptr()->COMSETTER(Environment)(ComSafeArrayAsInParam(environment));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<CGuestProcess> CGuestSession::GetProcesses() const
{
    QVector<CGuestProcess> aProcesses;
    AssertReturn(ptr(), aProcesses);
    com::SafeIfaceArray <IGuestProcess> processes;
    mRC = ptr()->COMGETTER(Processes)(ComSafeArrayAsOutParam(processes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(processes, aProcesses);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcesses;
}

QVector<CGuestDirectory> CGuestSession::GetDirectories() const
{
    QVector<CGuestDirectory> aDirectories;
    AssertReturn(ptr(), aDirectories);
    com::SafeIfaceArray <IGuestDirectory> directories;
    mRC = ptr()->COMGETTER(Directories)(ComSafeArrayAsOutParam(directories));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(directories, aDirectories);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDirectories;
}

QVector<CGuestFile> CGuestSession::GetFiles() const
{
    QVector<CGuestFile> aFiles;
    AssertReturn(ptr(), aFiles);
    com::SafeIfaceArray <IGuestFile> files;
    mRC = ptr()->COMGETTER(Files)(ComSafeArrayAsOutParam(files));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(files, aFiles);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFiles;
}

CEventSource CGuestSession::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

void CGuestSession::Close()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Close();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CProgress CGuestSession::CopyFrom(const QString & aSource, const QString & aDest, const QVector<KCopyFileFlag> & aFlags)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <CopyFileFlag_T> flags;
    ToSafeArray(aFlags, flags);
    IProgress* progressPtr = NULL;
    mRC = ptr()->CopyFrom(BSTRIn(aSource), BSTRIn(aDest), ComSafeArrayAsInParam(flags), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CGuestSession::CopyTo(const QString & aSource, const QString & aDest, const QVector<KCopyFileFlag> & aFlags)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <CopyFileFlag_T> flags;
    ToSafeArray(aFlags, flags);
    IProgress* progressPtr = NULL;
    mRC = ptr()->CopyTo(BSTRIn(aSource), BSTRIn(aDest), ComSafeArrayAsInParam(flags), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

void CGuestSession::DirectoryCreate(const QString & aPath, ULONG aMode, const QVector<KDirectoryCreateFlag> & aFlags)
{
    AssertReturnVoid(ptr());
    com::SafeArray <DirectoryCreateFlag_T> flags;
    ToSafeArray(aFlags, flags);
    mRC = ptr()->DirectoryCreate(BSTRIn(aPath), aMode, ComSafeArrayAsInParam(flags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CGuestSession::DirectoryCreateTemp(const QString & aTemplateName, ULONG aMode, const QString & aPath, BOOL aSecure)
{
    QString aDirectory;
    AssertReturn(ptr(), aDirectory);
    mRC = ptr()->DirectoryCreateTemp(BSTRIn(aTemplateName), aMode, BSTRIn(aPath), aSecure, BSTROut(aDirectory));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDirectory;
}

BOOL CGuestSession::DirectoryExists(const QString & aPath)
{
    BOOL aExists = FALSE;
    AssertReturn(ptr(), aExists);
    mRC = ptr()->DirectoryExists(BSTRIn(aPath), &aExists);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExists;
}

CGuestDirectory CGuestSession::DirectoryOpen(const QString & aPath, const QString & aFilter, const QVector<KDirectoryOpenFlag> & aFlags)
{
    CGuestDirectory aDirectory;
    AssertReturn(ptr(), aDirectory);
    com::SafeArray <DirectoryOpenFlag_T> flags;
    ToSafeArray(aFlags, flags);
    IGuestDirectory* directoryPtr = NULL;
    mRC = ptr()->DirectoryOpen(BSTRIn(aPath), BSTRIn(aFilter), ComSafeArrayAsInParam(flags), &directoryPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDirectory.setPtr(directoryPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDirectory;
}

CGuestFsObjInfo CGuestSession::DirectoryQueryInfo(const QString & aPath)
{
    CGuestFsObjInfo aInfo;
    AssertReturn(ptr(), aInfo);
    IGuestFsObjInfo* infoPtr = NULL;
    mRC = ptr()->DirectoryQueryInfo(BSTRIn(aPath), &infoPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aInfo.setPtr(infoPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInfo;
}

void CGuestSession::DirectoryRemove(const QString & aPath)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DirectoryRemove(BSTRIn(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CProgress CGuestSession::DirectoryRemoveRecursive(const QString & aPath, const QVector<KDirectoryRemoveRecFlag> & aFlags)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <DirectoryRemoveRecFlag_T> flags;
    ToSafeArray(aFlags, flags);
    IProgress* progressPtr = NULL;
    mRC = ptr()->DirectoryRemoveRecursive(BSTRIn(aPath), ComSafeArrayAsInParam(flags), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

void CGuestSession::DirectoryRename(const QString & aSource, const QString & aDest, const QVector<KPathRenameFlag> & aFlags)
{
    AssertReturnVoid(ptr());
    com::SafeArray <PathRenameFlag_T> flags;
    ToSafeArray(aFlags, flags);
    mRC = ptr()->DirectoryRename(BSTRIn(aSource), BSTRIn(aDest), ComSafeArrayAsInParam(flags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CGuestSession::DirectorySetACL(const QString & aPath, const QString & aAcl)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DirectorySetACL(BSTRIn(aPath), BSTRIn(aAcl));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CGuestSession::EnvironmentClear()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->EnvironmentClear();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CGuestSession::EnvironmentGet(const QString & aName)
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->EnvironmentGet(BSTRIn(aName), BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CGuestSession::EnvironmentSet(const QString & aName, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->EnvironmentSet(BSTRIn(aName), BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CGuestSession::EnvironmentUnset(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->EnvironmentUnset(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CGuestFile CGuestSession::FileCreateTemp(const QString & aTemplateName, ULONG aMode, const QString & aPath, BOOL aSecure)
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->FileCreateTemp(BSTRIn(aTemplateName), aMode, BSTRIn(aPath), aSecure, &filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

BOOL CGuestSession::FileExists(const QString & aPath)
{
    BOOL aExists = FALSE;
    AssertReturn(ptr(), aExists);
    mRC = ptr()->FileExists(BSTRIn(aPath), &aExists);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExists;
}

void CGuestSession::FileRemove(const QString & aPath)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->FileRemove(BSTRIn(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CGuestFile CGuestSession::FileOpen(const QString & aPath, const QString & aOpenMode, const QString & aDisposition, ULONG aCreationMode)
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->FileOpen(BSTRIn(aPath), BSTRIn(aOpenMode), BSTRIn(aDisposition), aCreationMode, &filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestFile CGuestSession::FileOpenEx(const QString & aPath, const QString & aOpenMode, const QString & aDisposition, const QString & aSharingMode, ULONG aCreationMode, LONG64 aOffset)
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->FileOpenEx(BSTRIn(aPath), BSTRIn(aOpenMode), BSTRIn(aDisposition), BSTRIn(aSharingMode), aCreationMode, aOffset, &filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestFsObjInfo CGuestSession::FileQueryInfo(const QString & aPath)
{
    CGuestFsObjInfo aInfo;
    AssertReturn(ptr(), aInfo);
    IGuestFsObjInfo* infoPtr = NULL;
    mRC = ptr()->FileQueryInfo(BSTRIn(aPath), &infoPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aInfo.setPtr(infoPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInfo;
}

LONG64 CGuestSession::FileQuerySize(const QString & aPath)
{
    LONG64 aSize = 0;
    AssertReturn(ptr(), aSize);
    mRC = ptr()->FileQuerySize(BSTRIn(aPath), &aSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSize;
}

void CGuestSession::FileRename(const QString & aSource, const QString & aDest, const QVector<KPathRenameFlag> & aFlags)
{
    AssertReturnVoid(ptr());
    com::SafeArray <PathRenameFlag_T> flags;
    ToSafeArray(aFlags, flags);
    mRC = ptr()->FileRename(BSTRIn(aSource), BSTRIn(aDest), ComSafeArrayAsInParam(flags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CGuestSession::FileSetACL(const QString & aFile, const QString & aAcl)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->FileSetACL(BSTRIn(aFile), BSTRIn(aAcl));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CGuestProcess CGuestSession::ProcessCreate(const QString & aCommand, const QVector<QString> & aArguments, const QVector<QString> & aEnvironment, const QVector<KProcessCreateFlag> & aFlags, ULONG aTimeoutMS)
{
    CGuestProcess aGuestProcess;
    AssertReturn(ptr(), aGuestProcess);
    com::SafeArray <BSTR> arguments;
    ToSafeArray(aArguments, arguments);
    com::SafeArray <BSTR> environment;
    ToSafeArray(aEnvironment, environment);
    com::SafeArray <ProcessCreateFlag_T> flags;
    ToSafeArray(aFlags, flags);
    IGuestProcess* guestProcessPtr = NULL;
    mRC = ptr()->ProcessCreate(BSTRIn(aCommand), ComSafeArrayAsInParam(arguments), ComSafeArrayAsInParam(environment), ComSafeArrayAsInParam(flags), aTimeoutMS, &guestProcessPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aGuestProcess.setPtr(guestProcessPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestProcess;
}

CGuestProcess CGuestSession::ProcessCreateEx(const QString & aCommand, const QVector<QString> & aArguments, const QVector<QString> & aEnvironment, const QVector<KProcessCreateFlag> & aFlags, ULONG aTimeoutMS, const KProcessPriority & aPriority, const QVector<LONG> & aAffinity)
{
    CGuestProcess aGuestProcess;
    AssertReturn(ptr(), aGuestProcess);
    com::SafeArray <BSTR> arguments;
    ToSafeArray(aArguments, arguments);
    com::SafeArray <BSTR> environment;
    ToSafeArray(aEnvironment, environment);
    com::SafeArray <ProcessCreateFlag_T> flags;
    ToSafeArray(aFlags, flags);
    com::SafeArray <LONG> affinity;
    ToSafeArray(aAffinity, affinity);
    IGuestProcess* guestProcessPtr = NULL;
    mRC = ptr()->ProcessCreateEx(BSTRIn(aCommand), ComSafeArrayAsInParam(arguments), ComSafeArrayAsInParam(environment), ComSafeArrayAsInParam(flags), aTimeoutMS, (ProcessPriority_T) aPriority, ComSafeArrayAsInParam(affinity), &guestProcessPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aGuestProcess.setPtr(guestProcessPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestProcess;
}

CGuestProcess CGuestSession::ProcessGet(ULONG aPid)
{
    CGuestProcess aGuestProcess;
    AssertReturn(ptr(), aGuestProcess);
    IGuestProcess* guestProcessPtr = NULL;
    mRC = ptr()->ProcessGet(aPid, &guestProcessPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aGuestProcess.setPtr(guestProcessPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestProcess;
}

void CGuestSession::SymlinkCreate(const QString & aSource, const QString & aTarget, const KSymlinkType & aType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SymlinkCreate(BSTRIn(aSource), BSTRIn(aTarget), (SymlinkType_T) aType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestSession::SymlinkExists(const QString & aSymlink)
{
    BOOL aExists = FALSE;
    AssertReturn(ptr(), aExists);
    mRC = ptr()->SymlinkExists(BSTRIn(aSymlink), &aExists);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExists;
}

QString CGuestSession::SymlinkRead(const QString & aSymlink, const QVector<KSymlinkReadFlag> & aFlags)
{
    QString aTarget;
    AssertReturn(ptr(), aTarget);
    com::SafeArray <SymlinkReadFlag_T> flags;
    ToSafeArray(aFlags, flags);
    mRC = ptr()->SymlinkRead(BSTRIn(aSymlink), ComSafeArrayAsInParam(flags), BSTROut(aTarget));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTarget;
}

void CGuestSession::SymlinkRemoveDirectory(const QString & aPath)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SymlinkRemoveDirectory(BSTRIn(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CGuestSession::SymlinkRemoveFile(const QString & aFile)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SymlinkRemoveFile(BSTRIn(aFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KGuestSessionWaitResult CGuestSession::WaitFor(ULONG aWaitFor, ULONG aTimeoutMS)
{
    KGuestSessionWaitResult aReason = (KGuestSessionWaitResult) 0;
    AssertReturn(ptr(), aReason);
    mRC = ptr()->WaitFor(aWaitFor, aTimeoutMS, ENUMOut<KGuestSessionWaitResult, GuestSessionWaitResult_T>(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReason;
}

KGuestSessionWaitResult CGuestSession::WaitForArray(const QVector<KGuestSessionWaitForFlag> & aWaitFor, ULONG aTimeoutMS)
{
    KGuestSessionWaitResult aReason = (KGuestSessionWaitResult) 0;
    AssertReturn(ptr(), aReason);
    com::SafeArray <GuestSessionWaitForFlag_T> waitFor;
    ToSafeArray(aWaitFor, waitFor);
    mRC = ptr()->WaitForArray(ComSafeArrayAsInParam(waitFor), aTimeoutMS, ENUMOut<KGuestSessionWaitResult, GuestSessionWaitResult_T>(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReason;
}

// IProcess wrapper

QVector<QString> CProcess::GetArguments() const
{
    QVector<QString> aArguments;
    AssertReturn(ptr(), aArguments);
    com::SafeArray <BSTR> arguments;
    mRC = ptr()->COMGETTER(Arguments)(ComSafeArrayAsOutParam(arguments));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(arguments, aArguments);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aArguments;
}

QVector<QString> CProcess::GetEnvironment() const
{
    QVector<QString> aEnvironment;
    AssertReturn(ptr(), aEnvironment);
    com::SafeArray <BSTR> environment;
    mRC = ptr()->COMGETTER(Environment)(ComSafeArrayAsOutParam(environment));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(environment, aEnvironment);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnvironment;
}

CEventSource CProcess::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

QString CProcess::GetExecutablePath() const
{
    QString aExecutablePath;
    AssertReturn(ptr(), aExecutablePath);
    mRC = ptr()->COMGETTER(ExecutablePath)(BSTROut(aExecutablePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExecutablePath;
}

LONG CProcess::GetExitCode() const
{
    LONG aExitCode = 0;
    AssertReturn(ptr(), aExitCode);
    mRC = ptr()->COMGETTER(ExitCode)(&aExitCode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExitCode;
}

QString CProcess::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

ULONG CProcess::GetPID() const
{
    ULONG aPID = 0;
    AssertReturn(ptr(), aPID);
    mRC = ptr()->COMGETTER(PID)(&aPID);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPID;
}

KProcessStatus CProcess::GetStatus() const
{
    KProcessStatus aStatus = (KProcessStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KProcessStatus, ProcessStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

KProcessWaitResult CProcess::WaitFor(ULONG aWaitFor, ULONG aTimeoutMS)
{
    KProcessWaitResult aReason = (KProcessWaitResult) 0;
    AssertReturn(ptr(), aReason);
    mRC = ptr()->WaitFor(aWaitFor, aTimeoutMS, ENUMOut<KProcessWaitResult, ProcessWaitResult_T>(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReason;
}

KProcessWaitResult CProcess::WaitForArray(const QVector<KProcessWaitForFlag> & aWaitFor, ULONG aTimeoutMS)
{
    KProcessWaitResult aReason = (KProcessWaitResult) 0;
    AssertReturn(ptr(), aReason);
    com::SafeArray <ProcessWaitForFlag_T> waitFor;
    ToSafeArray(aWaitFor, waitFor);
    mRC = ptr()->WaitForArray(ComSafeArrayAsInParam(waitFor), aTimeoutMS, ENUMOut<KProcessWaitResult, ProcessWaitResult_T>(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReason;
}

QVector<BYTE> CProcess::Read(ULONG aHandle, ULONG aToRead, ULONG aTimeoutMS)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->Read(aHandle, aToRead, aTimeoutMS, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

ULONG CProcess::Write(ULONG aHandle, ULONG aFlags, const QVector<BYTE> & aData, ULONG aTimeoutMS)
{
    ULONG aWritten = 0;
    AssertReturn(ptr(), aWritten);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    mRC = ptr()->Write(aHandle, aFlags, ComSafeArrayAsInParam(data), aTimeoutMS, &aWritten);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritten;
}

ULONG CProcess::WriteArray(ULONG aHandle, const QVector<KProcessInputFlag> & aFlags, const QVector<BYTE> & aData, ULONG aTimeoutMS)
{
    ULONG aWritten = 0;
    AssertReturn(ptr(), aWritten);
    com::SafeArray <ProcessInputFlag_T> flags;
    ToSafeArray(aFlags, flags);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    mRC = ptr()->WriteArray(aHandle, ComSafeArrayAsInParam(flags), ComSafeArrayAsInParam(data), aTimeoutMS, &aWritten);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritten;
}

void CProcess::Terminate()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Terminate();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IGuestProcess wrapper

QVector<QString> CGuestProcess::GetArguments() const
{
    QVector<QString> aArguments;
    AssertReturn(ptr(), aArguments);
    com::SafeArray <BSTR> arguments;
    mRC = ptr()->COMGETTER(Arguments)(ComSafeArrayAsOutParam(arguments));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(arguments, aArguments);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aArguments;
}

QVector<QString> CGuestProcess::GetEnvironment() const
{
    QVector<QString> aEnvironment;
    AssertReturn(ptr(), aEnvironment);
    com::SafeArray <BSTR> environment;
    mRC = ptr()->COMGETTER(Environment)(ComSafeArrayAsOutParam(environment));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(environment, aEnvironment);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnvironment;
}

CEventSource CGuestProcess::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

QString CGuestProcess::GetExecutablePath() const
{
    QString aExecutablePath;
    AssertReturn(ptr(), aExecutablePath);
    mRC = ptr()->COMGETTER(ExecutablePath)(BSTROut(aExecutablePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExecutablePath;
}

LONG CGuestProcess::GetExitCode() const
{
    LONG aExitCode = 0;
    AssertReturn(ptr(), aExitCode);
    mRC = ptr()->COMGETTER(ExitCode)(&aExitCode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExitCode;
}

QString CGuestProcess::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

ULONG CGuestProcess::GetPID() const
{
    ULONG aPID = 0;
    AssertReturn(ptr(), aPID);
    mRC = ptr()->COMGETTER(PID)(&aPID);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPID;
}

KProcessStatus CGuestProcess::GetStatus() const
{
    KProcessStatus aStatus = (KProcessStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KProcessStatus, ProcessStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

KProcessWaitResult CGuestProcess::WaitFor(ULONG aWaitFor, ULONG aTimeoutMS)
{
    KProcessWaitResult aReason = (KProcessWaitResult) 0;
    AssertReturn(ptr(), aReason);
    mRC = ptr()->WaitFor(aWaitFor, aTimeoutMS, ENUMOut<KProcessWaitResult, ProcessWaitResult_T>(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReason;
}

KProcessWaitResult CGuestProcess::WaitForArray(const QVector<KProcessWaitForFlag> & aWaitFor, ULONG aTimeoutMS)
{
    KProcessWaitResult aReason = (KProcessWaitResult) 0;
    AssertReturn(ptr(), aReason);
    com::SafeArray <ProcessWaitForFlag_T> waitFor;
    ToSafeArray(aWaitFor, waitFor);
    mRC = ptr()->WaitForArray(ComSafeArrayAsInParam(waitFor), aTimeoutMS, ENUMOut<KProcessWaitResult, ProcessWaitResult_T>(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReason;
}

QVector<BYTE> CGuestProcess::Read(ULONG aHandle, ULONG aToRead, ULONG aTimeoutMS)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->Read(aHandle, aToRead, aTimeoutMS, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

ULONG CGuestProcess::Write(ULONG aHandle, ULONG aFlags, const QVector<BYTE> & aData, ULONG aTimeoutMS)
{
    ULONG aWritten = 0;
    AssertReturn(ptr(), aWritten);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    mRC = ptr()->Write(aHandle, aFlags, ComSafeArrayAsInParam(data), aTimeoutMS, &aWritten);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritten;
}

ULONG CGuestProcess::WriteArray(ULONG aHandle, const QVector<KProcessInputFlag> & aFlags, const QVector<BYTE> & aData, ULONG aTimeoutMS)
{
    ULONG aWritten = 0;
    AssertReturn(ptr(), aWritten);
    com::SafeArray <ProcessInputFlag_T> flags;
    ToSafeArray(aFlags, flags);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    mRC = ptr()->WriteArray(aHandle, ComSafeArrayAsInParam(flags), ComSafeArrayAsInParam(data), aTimeoutMS, &aWritten);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritten;
}

void CGuestProcess::Terminate()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Terminate();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IDirectory wrapper

QString CDirectory::GetDirectoryName() const
{
    QString aDirectoryName;
    AssertReturn(ptr(), aDirectoryName);
    mRC = ptr()->COMGETTER(DirectoryName)(BSTROut(aDirectoryName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDirectoryName;
}

QString CDirectory::GetFilter() const
{
    QString aFilter;
    AssertReturn(ptr(), aFilter);
    mRC = ptr()->COMGETTER(Filter)(BSTROut(aFilter));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFilter;
}

void CDirectory::Close()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Close();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CFsObjInfo CDirectory::Read()
{
    CFsObjInfo aObjInfo;
    AssertReturn(ptr(), aObjInfo);
    IFsObjInfo* objInfoPtr = NULL;
    mRC = ptr()->Read(&objInfoPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aObjInfo.setPtr(objInfoPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aObjInfo;
}

// IGuestDirectory wrapper

QString CGuestDirectory::GetDirectoryName() const
{
    QString aDirectoryName;
    AssertReturn(ptr(), aDirectoryName);
    mRC = ptr()->COMGETTER(DirectoryName)(BSTROut(aDirectoryName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDirectoryName;
}

QString CGuestDirectory::GetFilter() const
{
    QString aFilter;
    AssertReturn(ptr(), aFilter);
    mRC = ptr()->COMGETTER(Filter)(BSTROut(aFilter));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFilter;
}

void CGuestDirectory::Close()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Close();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CFsObjInfo CGuestDirectory::Read()
{
    CFsObjInfo aObjInfo;
    AssertReturn(ptr(), aObjInfo);
    IFsObjInfo* objInfoPtr = NULL;
    mRC = ptr()->Read(&objInfoPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aObjInfo.setPtr(objInfoPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aObjInfo;
}

// IFile wrapper

ULONG CFile::GetCreationMode() const
{
    ULONG aCreationMode = 0;
    AssertReturn(ptr(), aCreationMode);
    mRC = ptr()->COMGETTER(CreationMode)(&aCreationMode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCreationMode;
}

QString CFile::GetDisposition() const
{
    QString aDisposition;
    AssertReturn(ptr(), aDisposition);
    mRC = ptr()->COMGETTER(Disposition)(BSTROut(aDisposition));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDisposition;
}

CEventSource CFile::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

QString CFile::GetFileName() const
{
    QString aFileName;
    AssertReturn(ptr(), aFileName);
    mRC = ptr()->COMGETTER(FileName)(BSTROut(aFileName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFileName;
}

ULONG CFile::GetId() const
{
    ULONG aId = 0;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(&aId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

LONG64 CFile::GetInitialSize() const
{
    LONG64 aInitialSize = 0;
    AssertReturn(ptr(), aInitialSize);
    mRC = ptr()->COMGETTER(InitialSize)(&aInitialSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInitialSize;
}

QString CFile::GetOpenMode() const
{
    QString aOpenMode;
    AssertReturn(ptr(), aOpenMode);
    mRC = ptr()->COMGETTER(OpenMode)(BSTROut(aOpenMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOpenMode;
}

LONG64 CFile::GetOffset() const
{
    LONG64 aOffset = 0;
    AssertReturn(ptr(), aOffset);
    mRC = ptr()->COMGETTER(Offset)(&aOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOffset;
}

KFileStatus CFile::GetStatus() const
{
    KFileStatus aStatus = (KFileStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KFileStatus, FileStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

void CFile::Close()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Close();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CFsObjInfo CFile::QueryInfo()
{
    CFsObjInfo aObjInfo;
    AssertReturn(ptr(), aObjInfo);
    IFsObjInfo* objInfoPtr = NULL;
    mRC = ptr()->QueryInfo(&objInfoPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aObjInfo.setPtr(objInfoPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aObjInfo;
}

QVector<BYTE> CFile::Read(ULONG aToRead, ULONG aTimeoutMS)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->Read(aToRead, aTimeoutMS, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

QVector<BYTE> CFile::ReadAt(LONG64 aOffset, ULONG aToRead, ULONG aTimeoutMS)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->ReadAt(aOffset, aToRead, aTimeoutMS, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

void CFile::Seek(LONG64 aOffset, const KFileSeekType & aWhence)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Seek(aOffset, (FileSeekType_T) aWhence);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFile::SetACL(const QString & aAcl)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetACL(BSTRIn(aAcl));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CFile::Write(const QVector<BYTE> & aData, ULONG aTimeoutMS)
{
    ULONG aWritten = 0;
    AssertReturn(ptr(), aWritten);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    mRC = ptr()->Write(ComSafeArrayAsInParam(data), aTimeoutMS, &aWritten);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritten;
}

ULONG CFile::WriteAt(LONG64 aOffset, const QVector<BYTE> & aData, ULONG aTimeoutMS)
{
    ULONG aWritten = 0;
    AssertReturn(ptr(), aWritten);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    mRC = ptr()->WriteAt(aOffset, ComSafeArrayAsInParam(data), aTimeoutMS, &aWritten);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritten;
}

// IGuestFile wrapper

ULONG CGuestFile::GetCreationMode() const
{
    ULONG aCreationMode = 0;
    AssertReturn(ptr(), aCreationMode);
    mRC = ptr()->COMGETTER(CreationMode)(&aCreationMode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCreationMode;
}

QString CGuestFile::GetDisposition() const
{
    QString aDisposition;
    AssertReturn(ptr(), aDisposition);
    mRC = ptr()->COMGETTER(Disposition)(BSTROut(aDisposition));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDisposition;
}

CEventSource CGuestFile::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

QString CGuestFile::GetFileName() const
{
    QString aFileName;
    AssertReturn(ptr(), aFileName);
    mRC = ptr()->COMGETTER(FileName)(BSTROut(aFileName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFileName;
}

ULONG CGuestFile::GetId() const
{
    ULONG aId = 0;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(&aId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

LONG64 CGuestFile::GetInitialSize() const
{
    LONG64 aInitialSize = 0;
    AssertReturn(ptr(), aInitialSize);
    mRC = ptr()->COMGETTER(InitialSize)(&aInitialSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInitialSize;
}

QString CGuestFile::GetOpenMode() const
{
    QString aOpenMode;
    AssertReturn(ptr(), aOpenMode);
    mRC = ptr()->COMGETTER(OpenMode)(BSTROut(aOpenMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOpenMode;
}

LONG64 CGuestFile::GetOffset() const
{
    LONG64 aOffset = 0;
    AssertReturn(ptr(), aOffset);
    mRC = ptr()->COMGETTER(Offset)(&aOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOffset;
}

KFileStatus CGuestFile::GetStatus() const
{
    KFileStatus aStatus = (KFileStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KFileStatus, FileStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

void CGuestFile::Close()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Close();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CFsObjInfo CGuestFile::QueryInfo()
{
    CFsObjInfo aObjInfo;
    AssertReturn(ptr(), aObjInfo);
    IFsObjInfo* objInfoPtr = NULL;
    mRC = ptr()->QueryInfo(&objInfoPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aObjInfo.setPtr(objInfoPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aObjInfo;
}

QVector<BYTE> CGuestFile::Read(ULONG aToRead, ULONG aTimeoutMS)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->Read(aToRead, aTimeoutMS, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

QVector<BYTE> CGuestFile::ReadAt(LONG64 aOffset, ULONG aToRead, ULONG aTimeoutMS)
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->ReadAt(aOffset, aToRead, aTimeoutMS, ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

void CGuestFile::Seek(LONG64 aOffset, const KFileSeekType & aWhence)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Seek(aOffset, (FileSeekType_T) aWhence);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CGuestFile::SetACL(const QString & aAcl)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetACL(BSTRIn(aAcl));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CGuestFile::Write(const QVector<BYTE> & aData, ULONG aTimeoutMS)
{
    ULONG aWritten = 0;
    AssertReturn(ptr(), aWritten);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    mRC = ptr()->Write(ComSafeArrayAsInParam(data), aTimeoutMS, &aWritten);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritten;
}

ULONG CGuestFile::WriteAt(LONG64 aOffset, const QVector<BYTE> & aData, ULONG aTimeoutMS)
{
    ULONG aWritten = 0;
    AssertReturn(ptr(), aWritten);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    mRC = ptr()->WriteAt(aOffset, ComSafeArrayAsInParam(data), aTimeoutMS, &aWritten);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritten;
}

// IFsObjInfo wrapper

LONG64 CFsObjInfo::GetAccessTime() const
{
    LONG64 aAccessTime = 0;
    AssertReturn(ptr(), aAccessTime);
    mRC = ptr()->COMGETTER(AccessTime)(&aAccessTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAccessTime;
}

LONG64 CFsObjInfo::GetAllocatedSize() const
{
    LONG64 aAllocatedSize = 0;
    AssertReturn(ptr(), aAllocatedSize);
    mRC = ptr()->COMGETTER(AllocatedSize)(&aAllocatedSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAllocatedSize;
}

LONG64 CFsObjInfo::GetBirthTime() const
{
    LONG64 aBirthTime = 0;
    AssertReturn(ptr(), aBirthTime);
    mRC = ptr()->COMGETTER(BirthTime)(&aBirthTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBirthTime;
}

LONG64 CFsObjInfo::GetChangeTime() const
{
    LONG64 aChangeTime = 0;
    AssertReturn(ptr(), aChangeTime);
    mRC = ptr()->COMGETTER(ChangeTime)(&aChangeTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aChangeTime;
}

ULONG CFsObjInfo::GetDeviceNumber() const
{
    ULONG aDeviceNumber = 0;
    AssertReturn(ptr(), aDeviceNumber);
    mRC = ptr()->COMGETTER(DeviceNumber)(&aDeviceNumber);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDeviceNumber;
}

QString CFsObjInfo::GetFileAttributes() const
{
    QString aFileAttributes;
    AssertReturn(ptr(), aFileAttributes);
    mRC = ptr()->COMGETTER(FileAttributes)(BSTROut(aFileAttributes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFileAttributes;
}

ULONG CFsObjInfo::GetGenerationId() const
{
    ULONG aGenerationId = 0;
    AssertReturn(ptr(), aGenerationId);
    mRC = ptr()->COMGETTER(GenerationId)(&aGenerationId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGenerationId;
}

ULONG CFsObjInfo::GetGID() const
{
    ULONG aGID = 0;
    AssertReturn(ptr(), aGID);
    mRC = ptr()->COMGETTER(GID)(&aGID);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGID;
}

QString CFsObjInfo::GetGroupName() const
{
    QString aGroupName;
    AssertReturn(ptr(), aGroupName);
    mRC = ptr()->COMGETTER(GroupName)(BSTROut(aGroupName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGroupName;
}

ULONG CFsObjInfo::GetHardLinks() const
{
    ULONG aHardLinks = 0;
    AssertReturn(ptr(), aHardLinks);
    mRC = ptr()->COMGETTER(HardLinks)(&aHardLinks);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHardLinks;
}

LONG64 CFsObjInfo::GetModificationTime() const
{
    LONG64 aModificationTime = 0;
    AssertReturn(ptr(), aModificationTime);
    mRC = ptr()->COMGETTER(ModificationTime)(&aModificationTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aModificationTime;
}

QString CFsObjInfo::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

LONG64 CFsObjInfo::GetNodeId() const
{
    LONG64 aNodeId = 0;
    AssertReturn(ptr(), aNodeId);
    mRC = ptr()->COMGETTER(NodeId)(&aNodeId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNodeId;
}

ULONG CFsObjInfo::GetNodeIdDevice() const
{
    ULONG aNodeIdDevice = 0;
    AssertReturn(ptr(), aNodeIdDevice);
    mRC = ptr()->COMGETTER(NodeIdDevice)(&aNodeIdDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNodeIdDevice;
}

LONG64 CFsObjInfo::GetObjectSize() const
{
    LONG64 aObjectSize = 0;
    AssertReturn(ptr(), aObjectSize);
    mRC = ptr()->COMGETTER(ObjectSize)(&aObjectSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aObjectSize;
}

KFsObjType CFsObjInfo::GetType() const
{
    KFsObjType aType = (KFsObjType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KFsObjType, FsObjType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

ULONG CFsObjInfo::GetUID() const
{
    ULONG aUID = 0;
    AssertReturn(ptr(), aUID);
    mRC = ptr()->COMGETTER(UID)(&aUID);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUID;
}

ULONG CFsObjInfo::GetUserFlags() const
{
    ULONG aUserFlags = 0;
    AssertReturn(ptr(), aUserFlags);
    mRC = ptr()->COMGETTER(UserFlags)(&aUserFlags);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUserFlags;
}

QString CFsObjInfo::GetUserName() const
{
    QString aUserName;
    AssertReturn(ptr(), aUserName);
    mRC = ptr()->COMGETTER(UserName)(BSTROut(aUserName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUserName;
}

// IGuestFsObjInfo wrapper

LONG64 CGuestFsObjInfo::GetAccessTime() const
{
    LONG64 aAccessTime = 0;
    AssertReturn(ptr(), aAccessTime);
    mRC = ptr()->COMGETTER(AccessTime)(&aAccessTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAccessTime;
}

LONG64 CGuestFsObjInfo::GetAllocatedSize() const
{
    LONG64 aAllocatedSize = 0;
    AssertReturn(ptr(), aAllocatedSize);
    mRC = ptr()->COMGETTER(AllocatedSize)(&aAllocatedSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAllocatedSize;
}

LONG64 CGuestFsObjInfo::GetBirthTime() const
{
    LONG64 aBirthTime = 0;
    AssertReturn(ptr(), aBirthTime);
    mRC = ptr()->COMGETTER(BirthTime)(&aBirthTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBirthTime;
}

LONG64 CGuestFsObjInfo::GetChangeTime() const
{
    LONG64 aChangeTime = 0;
    AssertReturn(ptr(), aChangeTime);
    mRC = ptr()->COMGETTER(ChangeTime)(&aChangeTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aChangeTime;
}

ULONG CGuestFsObjInfo::GetDeviceNumber() const
{
    ULONG aDeviceNumber = 0;
    AssertReturn(ptr(), aDeviceNumber);
    mRC = ptr()->COMGETTER(DeviceNumber)(&aDeviceNumber);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDeviceNumber;
}

QString CGuestFsObjInfo::GetFileAttributes() const
{
    QString aFileAttributes;
    AssertReturn(ptr(), aFileAttributes);
    mRC = ptr()->COMGETTER(FileAttributes)(BSTROut(aFileAttributes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFileAttributes;
}

ULONG CGuestFsObjInfo::GetGenerationId() const
{
    ULONG aGenerationId = 0;
    AssertReturn(ptr(), aGenerationId);
    mRC = ptr()->COMGETTER(GenerationId)(&aGenerationId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGenerationId;
}

ULONG CGuestFsObjInfo::GetGID() const
{
    ULONG aGID = 0;
    AssertReturn(ptr(), aGID);
    mRC = ptr()->COMGETTER(GID)(&aGID);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGID;
}

QString CGuestFsObjInfo::GetGroupName() const
{
    QString aGroupName;
    AssertReturn(ptr(), aGroupName);
    mRC = ptr()->COMGETTER(GroupName)(BSTROut(aGroupName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGroupName;
}

ULONG CGuestFsObjInfo::GetHardLinks() const
{
    ULONG aHardLinks = 0;
    AssertReturn(ptr(), aHardLinks);
    mRC = ptr()->COMGETTER(HardLinks)(&aHardLinks);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHardLinks;
}

LONG64 CGuestFsObjInfo::GetModificationTime() const
{
    LONG64 aModificationTime = 0;
    AssertReturn(ptr(), aModificationTime);
    mRC = ptr()->COMGETTER(ModificationTime)(&aModificationTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aModificationTime;
}

QString CGuestFsObjInfo::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

LONG64 CGuestFsObjInfo::GetNodeId() const
{
    LONG64 aNodeId = 0;
    AssertReturn(ptr(), aNodeId);
    mRC = ptr()->COMGETTER(NodeId)(&aNodeId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNodeId;
}

ULONG CGuestFsObjInfo::GetNodeIdDevice() const
{
    ULONG aNodeIdDevice = 0;
    AssertReturn(ptr(), aNodeIdDevice);
    mRC = ptr()->COMGETTER(NodeIdDevice)(&aNodeIdDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNodeIdDevice;
}

LONG64 CGuestFsObjInfo::GetObjectSize() const
{
    LONG64 aObjectSize = 0;
    AssertReturn(ptr(), aObjectSize);
    mRC = ptr()->COMGETTER(ObjectSize)(&aObjectSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aObjectSize;
}

KFsObjType CGuestFsObjInfo::GetType() const
{
    KFsObjType aType = (KFsObjType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KFsObjType, FsObjType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

ULONG CGuestFsObjInfo::GetUID() const
{
    ULONG aUID = 0;
    AssertReturn(ptr(), aUID);
    mRC = ptr()->COMGETTER(UID)(&aUID);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUID;
}

ULONG CGuestFsObjInfo::GetUserFlags() const
{
    ULONG aUserFlags = 0;
    AssertReturn(ptr(), aUserFlags);
    mRC = ptr()->COMGETTER(UserFlags)(&aUserFlags);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUserFlags;
}

QString CGuestFsObjInfo::GetUserName() const
{
    QString aUserName;
    AssertReturn(ptr(), aUserName);
    mRC = ptr()->COMGETTER(UserName)(BSTROut(aUserName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUserName;
}

// IGuest wrapper

QString CGuest::GetOSTypeId() const
{
    QString aOSTypeId;
    AssertReturn(ptr(), aOSTypeId);
    mRC = ptr()->COMGETTER(OSTypeId)(BSTROut(aOSTypeId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOSTypeId;
}

KAdditionsRunLevelType CGuest::GetAdditionsRunLevel() const
{
    KAdditionsRunLevelType aAdditionsRunLevel = (KAdditionsRunLevelType) 0;
    AssertReturn(ptr(), aAdditionsRunLevel);
    mRC = ptr()->COMGETTER(AdditionsRunLevel)(ENUMOut<KAdditionsRunLevelType, AdditionsRunLevelType_T>(aAdditionsRunLevel));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdditionsRunLevel;
}

QString CGuest::GetAdditionsVersion() const
{
    QString aAdditionsVersion;
    AssertReturn(ptr(), aAdditionsVersion);
    mRC = ptr()->COMGETTER(AdditionsVersion)(BSTROut(aAdditionsVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdditionsVersion;
}

ULONG CGuest::GetAdditionsRevision() const
{
    ULONG aAdditionsRevision = 0;
    AssertReturn(ptr(), aAdditionsRevision);
    mRC = ptr()->COMGETTER(AdditionsRevision)(&aAdditionsRevision);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdditionsRevision;
}

CEventSource CGuest::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

QVector<CAdditionsFacility> CGuest::GetFacilities() const
{
    QVector<CAdditionsFacility> aFacilities;
    AssertReturn(ptr(), aFacilities);
    com::SafeIfaceArray <IAdditionsFacility> facilities;
    mRC = ptr()->COMGETTER(Facilities)(ComSafeArrayAsOutParam(facilities));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(facilities, aFacilities);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFacilities;
}

QVector<CGuestSession> CGuest::GetSessions() const
{
    QVector<CGuestSession> aSessions;
    AssertReturn(ptr(), aSessions);
    com::SafeIfaceArray <IGuestSession> sessions;
    mRC = ptr()->COMGETTER(Sessions)(ComSafeArrayAsOutParam(sessions));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(sessions, aSessions);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSessions;
}

ULONG CGuest::GetMemoryBalloonSize() const
{
    ULONG aMemoryBalloonSize = 0;
    AssertReturn(ptr(), aMemoryBalloonSize);
    mRC = ptr()->COMGETTER(MemoryBalloonSize)(&aMemoryBalloonSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMemoryBalloonSize;
}
void CGuest::SetMemoryBalloonSize(ULONG aMemoryBalloonSize)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(MemoryBalloonSize)(aMemoryBalloonSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CGuest::GetStatisticsUpdateInterval() const
{
    ULONG aStatisticsUpdateInterval = 0;
    AssertReturn(ptr(), aStatisticsUpdateInterval);
    mRC = ptr()->COMGETTER(StatisticsUpdateInterval)(&aStatisticsUpdateInterval);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatisticsUpdateInterval;
}
void CGuest::SetStatisticsUpdateInterval(ULONG aStatisticsUpdateInterval)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(StatisticsUpdateInterval)(aStatisticsUpdateInterval);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CGuest::InternalGetStatistics(ULONG & aCpuUser, ULONG & aCpuKernel, ULONG & aCpuIdle, ULONG & aMemTotal, ULONG & aMemFree, ULONG & aMemBalloon, ULONG & aMemShared, ULONG & aMemCache, ULONG & aPagedTotal, ULONG & aMemAllocTotal, ULONG & aMemFreeTotal, ULONG & aMemBalloonTotal, ULONG & aMemSharedTotal)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->InternalGetStatistics(&aCpuUser, &aCpuKernel, &aCpuIdle, &aMemTotal, &aMemFree, &aMemBalloon, &aMemShared, &aMemCache, &aPagedTotal, &aMemAllocTotal, &aMemFreeTotal, &aMemBalloonTotal, &aMemSharedTotal);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KAdditionsFacilityStatus CGuest::GetFacilityStatus(const KAdditionsFacilityType & aFacility, LONG64 & aTimestamp)
{
    KAdditionsFacilityStatus aStatus = (KAdditionsFacilityStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->GetFacilityStatus((AdditionsFacilityType_T) aFacility, &aTimestamp, ENUMOut<KAdditionsFacilityStatus, AdditionsFacilityStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

BOOL CGuest::GetAdditionsStatus(const KAdditionsRunLevelType & aLevel)
{
    BOOL aActive = FALSE;
    AssertReturn(ptr(), aActive);
    mRC = ptr()->GetAdditionsStatus((AdditionsRunLevelType_T) aLevel, &aActive);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aActive;
}

void CGuest::SetCredentials(const QString & aUserName, const QString & aPassword, const QString & aDomain, BOOL aAllowInteractiveLogon)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetCredentials(BSTRIn(aUserName), BSTRIn(aPassword), BSTRIn(aDomain), aAllowInteractiveLogon);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KDragAndDropAction CGuest::DragHGEnter(ULONG aScreenId, ULONG aY, ULONG aX, const KDragAndDropAction & aDefaultAction, const QVector<KDragAndDropAction> & aAllowedActions, const QVector<QString> & aFormats)
{
    KDragAndDropAction aResultAction = (KDragAndDropAction) 0;
    AssertReturn(ptr(), aResultAction);
    com::SafeArray <DragAndDropAction_T> allowedActions;
    ToSafeArray(aAllowedActions, allowedActions);
    com::SafeArray <BSTR> formats;
    ToSafeArray(aFormats, formats);
    mRC = ptr()->DragHGEnter(aScreenId, aY, aX, (DragAndDropAction_T) aDefaultAction, ComSafeArrayAsInParam(allowedActions), ComSafeArrayAsInParam(formats), ENUMOut<KDragAndDropAction, DragAndDropAction_T>(aResultAction));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResultAction;
}

KDragAndDropAction CGuest::DragHGMove(ULONG aScreenId, ULONG aX, ULONG aY, const KDragAndDropAction & aDefaultAction, const QVector<KDragAndDropAction> & aAllowedActions, const QVector<QString> & aFormats)
{
    KDragAndDropAction aResultAction = (KDragAndDropAction) 0;
    AssertReturn(ptr(), aResultAction);
    com::SafeArray <DragAndDropAction_T> allowedActions;
    ToSafeArray(aAllowedActions, allowedActions);
    com::SafeArray <BSTR> formats;
    ToSafeArray(aFormats, formats);
    mRC = ptr()->DragHGMove(aScreenId, aX, aY, (DragAndDropAction_T) aDefaultAction, ComSafeArrayAsInParam(allowedActions), ComSafeArrayAsInParam(formats), ENUMOut<KDragAndDropAction, DragAndDropAction_T>(aResultAction));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResultAction;
}

void CGuest::DragHGLeave(ULONG aScreenId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DragHGLeave(aScreenId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KDragAndDropAction CGuest::DragHGDrop(ULONG aScreenId, ULONG aX, ULONG aY, const KDragAndDropAction & aDefaultAction, const QVector<KDragAndDropAction> & aAllowedActions, const QVector<QString> & aFormats, QString & aFormat)
{
    KDragAndDropAction aResultAction = (KDragAndDropAction) 0;
    AssertReturn(ptr(), aResultAction);
    com::SafeArray <DragAndDropAction_T> allowedActions;
    ToSafeArray(aAllowedActions, allowedActions);
    com::SafeArray <BSTR> formats;
    ToSafeArray(aFormats, formats);
    mRC = ptr()->DragHGDrop(aScreenId, aX, aY, (DragAndDropAction_T) aDefaultAction, ComSafeArrayAsInParam(allowedActions), ComSafeArrayAsInParam(formats), BSTROut(aFormat), ENUMOut<KDragAndDropAction, DragAndDropAction_T>(aResultAction));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResultAction;
}

CProgress CGuest::DragHGPutData(ULONG aScreenId, const QString & aFormat, const QVector<BYTE> & aData)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <BYTE> data;
    ToSafeArray(aData, data);
    IProgress* progressPtr = NULL;
    mRC = ptr()->DragHGPutData(aScreenId, BSTRIn(aFormat), ComSafeArrayAsInParam(data), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

KDragAndDropAction CGuest::DragGHPending(ULONG aScreenId, QVector<QString> & aFormats, QVector<KDragAndDropAction> & aAllowedActions)
{
    KDragAndDropAction aDefaultAction = (KDragAndDropAction) 0;
    AssertReturn(ptr(), aDefaultAction);
    com::SafeArray <BSTR> formats;
    com::SafeArray <DragAndDropAction_T> allowedActions;
    mRC = ptr()->DragGHPending(aScreenId, ComSafeArrayAsOutParam(formats), ComSafeArrayAsOutParam(allowedActions), ENUMOut<KDragAndDropAction, DragAndDropAction_T>(aDefaultAction));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(formats, aFormats);
    FromSafeArray(allowedActions, aAllowedActions);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDefaultAction;
}

CProgress CGuest::DragGHDropped(const QString & aFormat, const KDragAndDropAction & aAction)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->DragGHDropped(BSTRIn(aFormat), (DragAndDropAction_T) aAction, &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

QVector<BYTE> CGuest::DragGHGetData()
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->DragGHGetData(ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

CGuestSession CGuest::CreateSession(const QString & aUser, const QString & aPassword, const QString & aDomain, const QString & aSessionName)
{
    CGuestSession aGuestSession;
    AssertReturn(ptr(), aGuestSession);
    IGuestSession* guestSessionPtr = NULL;
    mRC = ptr()->CreateSession(BSTRIn(aUser), BSTRIn(aPassword), BSTRIn(aDomain), BSTRIn(aSessionName), &guestSessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aGuestSession.setPtr(guestSessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestSession;
}

QVector<CGuestSession> CGuest::FindSession(const QString & aSessionName)
{
    QVector<CGuestSession> aSessions;
    AssertReturn(ptr(), aSessions);
    com::SafeIfaceArray <IGuestSession> sessions;
    mRC = ptr()->FindSession(BSTRIn(aSessionName), ComSafeArrayAsOutParam(sessions));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(sessions, aSessions);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSessions;
}

CProgress CGuest::UpdateGuestAdditions(const QString & aSource, const QVector<QString> & aArguments, const QVector<KAdditionsUpdateFlag> & aFlags)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <BSTR> arguments;
    ToSafeArray(aArguments, arguments);
    com::SafeArray <AdditionsUpdateFlag_T> flags;
    ToSafeArray(aFlags, flags);
    IProgress* progressPtr = NULL;
    mRC = ptr()->UpdateGuestAdditions(BSTRIn(aSource), ComSafeArrayAsInParam(arguments), ComSafeArrayAsInParam(flags), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

// IProgress wrapper

QString CProgress::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

QString CProgress::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

CUnknown CProgress::GetInitiator() const
{
    CUnknown aInitiator;
    AssertReturn(ptr(), aInitiator);
    IUnknown* initiatorPtr = NULL;
    mRC = ptr()->COMGETTER(Initiator)(&initiatorPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aInitiator.setPtr(initiatorPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInitiator;
}

BOOL CProgress::GetCancelable() const
{
    BOOL aCancelable = FALSE;
    AssertReturn(ptr(), aCancelable);
    mRC = ptr()->COMGETTER(Cancelable)(&aCancelable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCancelable;
}

ULONG CProgress::GetPercent() const
{
    ULONG aPercent = 0;
    AssertReturn(ptr(), aPercent);
    mRC = ptr()->COMGETTER(Percent)(&aPercent);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPercent;
}

LONG CProgress::GetTimeRemaining() const
{
    LONG aTimeRemaining = 0;
    AssertReturn(ptr(), aTimeRemaining);
    mRC = ptr()->COMGETTER(TimeRemaining)(&aTimeRemaining);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTimeRemaining;
}

BOOL CProgress::GetCompleted() const
{
    BOOL aCompleted = FALSE;
    AssertReturn(ptr(), aCompleted);
    mRC = ptr()->COMGETTER(Completed)(&aCompleted);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCompleted;
}

BOOL CProgress::GetCanceled() const
{
    BOOL aCanceled = FALSE;
    AssertReturn(ptr(), aCanceled);
    mRC = ptr()->COMGETTER(Canceled)(&aCanceled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCanceled;
}

LONG CProgress::GetResultCode() const
{
    LONG aResultCode = 0;
    AssertReturn(ptr(), aResultCode);
    mRC = ptr()->COMGETTER(ResultCode)(&aResultCode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResultCode;
}

CVirtualBoxErrorInfo CProgress::GetErrorInfo() const
{
    CVirtualBoxErrorInfo aErrorInfo;
    AssertReturn(ptr(), aErrorInfo);
    IVirtualBoxErrorInfo* errorInfoPtr = NULL;
    mRC = ptr()->COMGETTER(ErrorInfo)(&errorInfoPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aErrorInfo.setPtr(errorInfoPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aErrorInfo;
}

ULONG CProgress::GetOperationCount() const
{
    ULONG aOperationCount = 0;
    AssertReturn(ptr(), aOperationCount);
    mRC = ptr()->COMGETTER(OperationCount)(&aOperationCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOperationCount;
}

ULONG CProgress::GetOperation() const
{
    ULONG aOperation = 0;
    AssertReturn(ptr(), aOperation);
    mRC = ptr()->COMGETTER(Operation)(&aOperation);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOperation;
}

QString CProgress::GetOperationDescription() const
{
    QString aOperationDescription;
    AssertReturn(ptr(), aOperationDescription);
    mRC = ptr()->COMGETTER(OperationDescription)(BSTROut(aOperationDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOperationDescription;
}

ULONG CProgress::GetOperationPercent() const
{
    ULONG aOperationPercent = 0;
    AssertReturn(ptr(), aOperationPercent);
    mRC = ptr()->COMGETTER(OperationPercent)(&aOperationPercent);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOperationPercent;
}

ULONG CProgress::GetOperationWeight() const
{
    ULONG aOperationWeight = 0;
    AssertReturn(ptr(), aOperationWeight);
    mRC = ptr()->COMGETTER(OperationWeight)(&aOperationWeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOperationWeight;
}

ULONG CProgress::GetTimeout() const
{
    ULONG aTimeout = 0;
    AssertReturn(ptr(), aTimeout);
    mRC = ptr()->COMGETTER(Timeout)(&aTimeout);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTimeout;
}
void CProgress::SetTimeout(ULONG aTimeout)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Timeout)(aTimeout);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CProgress::SetCurrentOperationProgress(ULONG aPercent)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetCurrentOperationProgress(aPercent);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CProgress::SetNextOperation(const QString & aNextOperationDescription, ULONG aNextOperationsWeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetNextOperation(BSTRIn(aNextOperationDescription), aNextOperationsWeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CProgress::WaitForCompletion(LONG aTimeout)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->WaitForCompletion(aTimeout);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CProgress::WaitForOperationCompletion(ULONG aOperation, LONG aTimeout)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->WaitForOperationCompletion(aOperation, aTimeout);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CProgress::WaitForAsyncProgressCompletion(const CProgress & aPProgressAsync)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->WaitForAsyncProgressCompletion(aPProgressAsync.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CProgress::Cancel()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Cancel();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// ISnapshot wrapper

QString CSnapshot::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

QString CSnapshot::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}
void CSnapshot::SetName(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Name)(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSnapshot::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}
void CSnapshot::SetDescription(const QString & aDescription)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Description)(BSTRIn(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

LONG64 CSnapshot::GetTimeStamp() const
{
    LONG64 aTimeStamp = 0;
    AssertReturn(ptr(), aTimeStamp);
    mRC = ptr()->COMGETTER(TimeStamp)(&aTimeStamp);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTimeStamp;
}

BOOL CSnapshot::GetOnline() const
{
    BOOL aOnline = FALSE;
    AssertReturn(ptr(), aOnline);
    mRC = ptr()->COMGETTER(Online)(&aOnline);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOnline;
}

CMachine CSnapshot::GetMachine() const
{
    CMachine aMachine;
    AssertReturn(ptr(), aMachine);
    IMachine* machinePtr = NULL;
    mRC = ptr()->COMGETTER(Machine)(&machinePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMachine.setPtr(machinePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachine;
}

CSnapshot CSnapshot::GetParent() const
{
    CSnapshot aParent;
    AssertReturn(ptr(), aParent);
    ISnapshot* parentPtr = NULL;
    mRC = ptr()->COMGETTER(Parent)(&parentPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aParent.setPtr(parentPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aParent;
}

QVector<CSnapshot> CSnapshot::GetChildren() const
{
    QVector<CSnapshot> aChildren;
    AssertReturn(ptr(), aChildren);
    com::SafeIfaceArray <ISnapshot> children;
    mRC = ptr()->COMGETTER(Children)(ComSafeArrayAsOutParam(children));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(children, aChildren);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aChildren;
}

ULONG CSnapshot::GetChildrenCount() const
{
    ULONG aChildrenCount = 0;
    AssertReturn(ptr(), aChildrenCount);
    mRC = ptr()->GetChildrenCount(&aChildrenCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aChildrenCount;
}

// IMediumAttachment wrapper

CMedium CMediumAttachment::GetMedium() const
{
    CMedium aMedium;
    AssertReturn(ptr(), aMedium);
    IMedium* mediumPtr = NULL;
    mRC = ptr()->COMGETTER(Medium)(&mediumPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMedium.setPtr(mediumPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMedium;
}

QString CMediumAttachment::GetController() const
{
    QString aController;
    AssertReturn(ptr(), aController);
    mRC = ptr()->COMGETTER(Controller)(BSTROut(aController));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aController;
}

LONG CMediumAttachment::GetPort() const
{
    LONG aPort = 0;
    AssertReturn(ptr(), aPort);
    mRC = ptr()->COMGETTER(Port)(&aPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPort;
}

LONG CMediumAttachment::GetDevice() const
{
    LONG aDevice = 0;
    AssertReturn(ptr(), aDevice);
    mRC = ptr()->COMGETTER(Device)(&aDevice);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}

KDeviceType CMediumAttachment::GetType() const
{
    KDeviceType aType = (KDeviceType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KDeviceType, DeviceType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

BOOL CMediumAttachment::GetPassthrough() const
{
    BOOL aPassthrough = FALSE;
    AssertReturn(ptr(), aPassthrough);
    mRC = ptr()->COMGETTER(Passthrough)(&aPassthrough);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPassthrough;
}

BOOL CMediumAttachment::GetTemporaryEject() const
{
    BOOL aTemporaryEject = FALSE;
    AssertReturn(ptr(), aTemporaryEject);
    mRC = ptr()->COMGETTER(TemporaryEject)(&aTemporaryEject);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTemporaryEject;
}

BOOL CMediumAttachment::GetIsEjected() const
{
    BOOL aIsEjected = FALSE;
    AssertReturn(ptr(), aIsEjected);
    mRC = ptr()->COMGETTER(IsEjected)(&aIsEjected);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIsEjected;
}

BOOL CMediumAttachment::GetNonRotational() const
{
    BOOL aNonRotational = FALSE;
    AssertReturn(ptr(), aNonRotational);
    mRC = ptr()->COMGETTER(NonRotational)(&aNonRotational);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNonRotational;
}

BOOL CMediumAttachment::GetDiscard() const
{
    BOOL aDiscard = FALSE;
    AssertReturn(ptr(), aDiscard);
    mRC = ptr()->COMGETTER(Discard)(&aDiscard);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDiscard;
}

BOOL CMediumAttachment::GetHotPluggable() const
{
    BOOL aHotPluggable = FALSE;
    AssertReturn(ptr(), aHotPluggable);
    mRC = ptr()->COMGETTER(HotPluggable)(&aHotPluggable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHotPluggable;
}

CBandwidthGroup CMediumAttachment::GetBandwidthGroup() const
{
    CBandwidthGroup aBandwidthGroup;
    AssertReturn(ptr(), aBandwidthGroup);
    IBandwidthGroup* bandwidthGroupPtr = NULL;
    mRC = ptr()->COMGETTER(BandwidthGroup)(&bandwidthGroupPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aBandwidthGroup.setPtr(bandwidthGroupPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBandwidthGroup;
}

// IMedium wrapper

QString CMedium::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

QString CMedium::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}
void CMedium::SetDescription(const QString & aDescription)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Description)(BSTRIn(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KMediumState CMedium::GetState() const
{
    KMediumState aState = (KMediumState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KMediumState, MediumState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

QVector<KMediumVariant> CMedium::GetVariant() const
{
    QVector<KMediumVariant> aVariant;
    AssertReturn(ptr(), aVariant);
    com::SafeArray <MediumVariant_T> variant;
    mRC = ptr()->COMGETTER(Variant)(ComSafeArrayAsOutParam(variant));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(variant, aVariant);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVariant;
}

QString CMedium::GetLocation() const
{
    QString aLocation;
    AssertReturn(ptr(), aLocation);
    mRC = ptr()->COMGETTER(Location)(BSTROut(aLocation));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLocation;
}

QString CMedium::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

KDeviceType CMedium::GetDeviceType() const
{
    KDeviceType aDeviceType = (KDeviceType) 0;
    AssertReturn(ptr(), aDeviceType);
    mRC = ptr()->COMGETTER(DeviceType)(ENUMOut<KDeviceType, DeviceType_T>(aDeviceType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDeviceType;
}

BOOL CMedium::GetHostDrive() const
{
    BOOL aHostDrive = FALSE;
    AssertReturn(ptr(), aHostDrive);
    mRC = ptr()->COMGETTER(HostDrive)(&aHostDrive);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostDrive;
}

LONG64 CMedium::GetSize() const
{
    LONG64 aSize = 0;
    AssertReturn(ptr(), aSize);
    mRC = ptr()->COMGETTER(Size)(&aSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSize;
}

QString CMedium::GetFormat() const
{
    QString aFormat;
    AssertReturn(ptr(), aFormat);
    mRC = ptr()->COMGETTER(Format)(BSTROut(aFormat));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFormat;
}

CMediumFormat CMedium::GetMediumFormat() const
{
    CMediumFormat aMediumFormat;
    AssertReturn(ptr(), aMediumFormat);
    IMediumFormat* mediumFormatPtr = NULL;
    mRC = ptr()->COMGETTER(MediumFormat)(&mediumFormatPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMediumFormat.setPtr(mediumFormatPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMediumFormat;
}

KMediumType CMedium::GetType() const
{
    KMediumType aType = (KMediumType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KMediumType, MediumType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}
void CMedium::SetType(const KMediumType & aType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Type)((MediumType_T) aType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<KMediumType> CMedium::GetAllowedTypes() const
{
    QVector<KMediumType> aAllowedTypes;
    AssertReturn(ptr(), aAllowedTypes);
    com::SafeArray <MediumType_T> allowedTypes;
    mRC = ptr()->COMGETTER(AllowedTypes)(ComSafeArrayAsOutParam(allowedTypes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(allowedTypes, aAllowedTypes);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAllowedTypes;
}

CMedium CMedium::GetParent() const
{
    CMedium aParent;
    AssertReturn(ptr(), aParent);
    IMedium* parentPtr = NULL;
    mRC = ptr()->COMGETTER(Parent)(&parentPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aParent.setPtr(parentPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aParent;
}

QVector<CMedium> CMedium::GetChildren() const
{
    QVector<CMedium> aChildren;
    AssertReturn(ptr(), aChildren);
    com::SafeIfaceArray <IMedium> children;
    mRC = ptr()->COMGETTER(Children)(ComSafeArrayAsOutParam(children));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(children, aChildren);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aChildren;
}

CMedium CMedium::GetBase() const
{
    CMedium aBase;
    AssertReturn(ptr(), aBase);
    IMedium* basePtr = NULL;
    mRC = ptr()->COMGETTER(Base)(&basePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aBase.setPtr(basePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBase;
}

BOOL CMedium::GetReadOnly() const
{
    BOOL aReadOnly = FALSE;
    AssertReturn(ptr(), aReadOnly);
    mRC = ptr()->COMGETTER(ReadOnly)(&aReadOnly);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReadOnly;
}

LONG64 CMedium::GetLogicalSize() const
{
    LONG64 aLogicalSize = 0;
    AssertReturn(ptr(), aLogicalSize);
    mRC = ptr()->COMGETTER(LogicalSize)(&aLogicalSize);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogicalSize;
}

BOOL CMedium::GetAutoReset() const
{
    BOOL aAutoReset = FALSE;
    AssertReturn(ptr(), aAutoReset);
    mRC = ptr()->COMGETTER(AutoReset)(&aAutoReset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAutoReset;
}
void CMedium::SetAutoReset(BOOL aAutoReset)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AutoReset)(aAutoReset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMedium::GetLastAccessError() const
{
    QString aLastAccessError;
    AssertReturn(ptr(), aLastAccessError);
    mRC = ptr()->COMGETTER(LastAccessError)(BSTROut(aLastAccessError));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLastAccessError;
}

QVector<QString> CMedium::GetMachineIds() const
{
    QVector<QString> aMachineIds;
    AssertReturn(ptr(), aMachineIds);
    com::SafeArray <BSTR> machineIds;
    mRC = ptr()->COMGETTER(MachineIds)(ComSafeArrayAsOutParam(machineIds));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(machineIds, aMachineIds);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineIds;
}

void CMedium::SetIds(BOOL aSetImageId, QString aImageId, BOOL aSetParentId, QString aParentId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetIds(aSetImageId, BSTRIn(aImageId), aSetParentId, BSTRIn(aParentId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KMediumState CMedium::RefreshState()
{
    KMediumState aState = (KMediumState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->RefreshState(ENUMOut<KMediumState, MediumState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

QVector<QString> CMedium::GetSnapshotIds(QString aMachineId)
{
    QVector<QString> aSnapshotIds;
    AssertReturn(ptr(), aSnapshotIds);
    com::SafeArray <BSTR> snapshotIds;
    mRC = ptr()->GetSnapshotIds(BSTRIn(aMachineId), ComSafeArrayAsOutParam(snapshotIds));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(snapshotIds, aSnapshotIds);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSnapshotIds;
}

CToken CMedium::LockRead()
{
    CToken aToken;
    AssertReturn(ptr(), aToken);
    IToken* tokenPtr = NULL;
    mRC = ptr()->LockRead(&tokenPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aToken.setPtr(tokenPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aToken;
}

CToken CMedium::LockWrite()
{
    CToken aToken;
    AssertReturn(ptr(), aToken);
    IToken* tokenPtr = NULL;
    mRC = ptr()->LockWrite(&tokenPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aToken.setPtr(tokenPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aToken;
}

void CMedium::Close()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Close();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMedium::GetProperty(const QString & aName) const
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetProperty(BSTRIn(aName), BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CMedium::SetProperty(const QString & aName, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProperty(BSTRIn(aName), BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CMedium::GetProperties(const QString & aNames, QVector<QString> & aReturnNames) const
{
    QVector<QString> aReturnValues;
    AssertReturn(ptr(), aReturnValues);
    com::SafeArray <BSTR> returnNames;
    com::SafeArray <BSTR> returnValues;
    mRC = ptr()->GetProperties(BSTRIn(aNames), ComSafeArrayAsOutParam(returnNames), ComSafeArrayAsOutParam(returnValues));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(returnNames, aReturnNames);
    FromSafeArray(returnValues, aReturnValues);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReturnValues;
}

void CMedium::SetProperties(const QVector<QString> & aNames, const QVector<QString> & aValues)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> names;
    ToSafeArray(aNames, names);
    com::SafeArray <BSTR> values;
    ToSafeArray(aValues, values);
    mRC = ptr()->SetProperties(ComSafeArrayAsInParam(names), ComSafeArrayAsInParam(values));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CProgress CMedium::CreateBaseStorage(LONG64 aLogicalSize, const QVector<KMediumVariant> & aVariant)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <MediumVariant_T> variant;
    ToSafeArray(aVariant, variant);
    IProgress* progressPtr = NULL;
    mRC = ptr()->CreateBaseStorage(aLogicalSize, ComSafeArrayAsInParam(variant), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::DeleteStorage()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->DeleteStorage(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::CreateDiffStorage(const CMedium & aTarget, const QVector<KMediumVariant> & aVariant)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <MediumVariant_T> variant;
    ToSafeArray(aVariant, variant);
    IProgress* progressPtr = NULL;
    mRC = ptr()->CreateDiffStorage(aTarget.ptr(), ComSafeArrayAsInParam(variant), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::MergeTo(const CMedium & aTarget)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->MergeTo(aTarget.ptr(), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::CloneTo(const CMedium & aTarget, const QVector<KMediumVariant> & aVariant, const CMedium & aParent)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <MediumVariant_T> variant;
    ToSafeArray(aVariant, variant);
    IProgress* progressPtr = NULL;
    mRC = ptr()->CloneTo(aTarget.ptr(), ComSafeArrayAsInParam(variant), aParent.ptr(), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::CloneToBase(const CMedium & aTarget, const QVector<KMediumVariant> & aVariant)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    com::SafeArray <MediumVariant_T> variant;
    ToSafeArray(aVariant, variant);
    IProgress* progressPtr = NULL;
    mRC = ptr()->CloneToBase(aTarget.ptr(), ComSafeArrayAsInParam(variant), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::SetLocation(const QString & aLocation)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->SetLocation(BSTRIn(aLocation), &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::Compact()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Compact(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::Resize(LONG64 aLogicalSize)
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Resize(aLogicalSize, &progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

CProgress CMedium::Reset()
{
    CProgress aProgress;
    AssertReturn(ptr(), aProgress);
    IProgress* progressPtr = NULL;
    mRC = ptr()->Reset(&progressPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgress.setPtr(progressPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgress;
}

// IMediumFormat wrapper

QString CMediumFormat::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

QString CMediumFormat::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QVector<KMediumFormatCapabilities> CMediumFormat::GetCapabilities() const
{
    QVector<KMediumFormatCapabilities> aCapabilities;
    AssertReturn(ptr(), aCapabilities);
    com::SafeArray <MediumFormatCapabilities_T> capabilities;
    mRC = ptr()->COMGETTER(Capabilities)(ComSafeArrayAsOutParam(capabilities));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(capabilities, aCapabilities);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCapabilities;
}

void CMediumFormat::DescribeFileExtensions(QVector<QString> & aExtensions, QVector<KDeviceType> & aTypes)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> extensions;
    com::SafeArray <DeviceType_T> types;
    mRC = ptr()->DescribeFileExtensions(ComSafeArrayAsOutParam(extensions), ComSafeArrayAsOutParam(types));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(extensions, aExtensions);
    FromSafeArray(types, aTypes);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMediumFormat::DescribeProperties(QVector<QString> & aNames, QVector<QString> & aDescriptions, QVector<KDataType> & aTypes, QVector<ULONG> & aFlags, QVector<QString> & aDefaults) const
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> names;
    com::SafeArray <BSTR> descriptions;
    com::SafeArray <DataType_T> types;
    com::SafeArray <ULONG> flags;
    com::SafeArray <BSTR> defaults;
    mRC = ptr()->DescribeProperties(ComSafeArrayAsOutParam(names), ComSafeArrayAsOutParam(descriptions), ComSafeArrayAsOutParam(types), ComSafeArrayAsOutParam(flags), ComSafeArrayAsOutParam(defaults));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(names, aNames);
    FromSafeArray(descriptions, aDescriptions);
    FromSafeArray(types, aTypes);
    FromSafeArray(flags, aFlags);
    FromSafeArray(defaults, aDefaults);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IToken wrapper

void CToken::Abandon()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Abandon();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CToken::Dummy()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Dummy();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IKeyboard wrapper

CEventSource CKeyboard::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

void CKeyboard::PutScancode(LONG aScancode)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->PutScancode(aScancode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CKeyboard::PutScancodes(const QVector<LONG> & aScancodes)
{
    ULONG aCodesStored = 0;
    AssertReturn(ptr(), aCodesStored);
    com::SafeArray <LONG> scancodes;
    ToSafeArray(aScancodes, scancodes);
    mRC = ptr()->PutScancodes(ComSafeArrayAsInParam(scancodes), &aCodesStored);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCodesStored;
}

void CKeyboard::PutCAD()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->PutCAD();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IMouse wrapper

BOOL CMouse::GetAbsoluteSupported() const
{
    BOOL aAbsoluteSupported = FALSE;
    AssertReturn(ptr(), aAbsoluteSupported);
    mRC = ptr()->COMGETTER(AbsoluteSupported)(&aAbsoluteSupported);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAbsoluteSupported;
}

BOOL CMouse::GetRelativeSupported() const
{
    BOOL aRelativeSupported = FALSE;
    AssertReturn(ptr(), aRelativeSupported);
    mRC = ptr()->COMGETTER(RelativeSupported)(&aRelativeSupported);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRelativeSupported;
}

BOOL CMouse::GetMultiTouchSupported() const
{
    BOOL aMultiTouchSupported = FALSE;
    AssertReturn(ptr(), aMultiTouchSupported);
    mRC = ptr()->COMGETTER(MultiTouchSupported)(&aMultiTouchSupported);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMultiTouchSupported;
}

BOOL CMouse::GetNeedsHostCursor() const
{
    BOOL aNeedsHostCursor = FALSE;
    AssertReturn(ptr(), aNeedsHostCursor);
    mRC = ptr()->COMGETTER(NeedsHostCursor)(&aNeedsHostCursor);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNeedsHostCursor;
}

CEventSource CMouse::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

void CMouse::PutMouseEvent(LONG aDx, LONG aDy, LONG aDz, LONG aDw, LONG aButtonState)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->PutMouseEvent(aDx, aDy, aDz, aDw, aButtonState);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMouse::PutMouseEventAbsolute(LONG aX, LONG aY, LONG aDz, LONG aDw, LONG aButtonState)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->PutMouseEventAbsolute(aX, aY, aDz, aDw, aButtonState);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMouse::PutEventMultiTouch(LONG aCount, const QVector<LONG64> & aContacts, ULONG aScanTime)
{
    AssertReturnVoid(ptr());
    com::SafeArray <LONG64> contacts;
    ToSafeArray(aContacts, contacts);
    mRC = ptr()->PutEventMultiTouch(aCount, ComSafeArrayAsInParam(contacts), aScanTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMouse::PutEventMultiTouchString(LONG aCount, const QString & aContacts, ULONG aScanTime)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->PutEventMultiTouchString(aCount, BSTRIn(aContacts), aScanTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IFramebuffer wrapper

BYTE * CFramebuffer::GetAddress() const
{
    BYTE * aAddress = NULL;
    AssertReturn(ptr(), aAddress);
    mRC = ptr()->COMGETTER(Address)(&aAddress);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAddress;
}

ULONG CFramebuffer::GetWidth() const
{
    ULONG aWidth = 0;
    AssertReturn(ptr(), aWidth);
    mRC = ptr()->COMGETTER(Width)(&aWidth);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWidth;
}

ULONG CFramebuffer::GetHeight() const
{
    ULONG aHeight = 0;
    AssertReturn(ptr(), aHeight);
    mRC = ptr()->COMGETTER(Height)(&aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHeight;
}

ULONG CFramebuffer::GetBitsPerPixel() const
{
    ULONG aBitsPerPixel = 0;
    AssertReturn(ptr(), aBitsPerPixel);
    mRC = ptr()->COMGETTER(BitsPerPixel)(&aBitsPerPixel);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBitsPerPixel;
}

ULONG CFramebuffer::GetBytesPerLine() const
{
    ULONG aBytesPerLine = 0;
    AssertReturn(ptr(), aBytesPerLine);
    mRC = ptr()->COMGETTER(BytesPerLine)(&aBytesPerLine);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBytesPerLine;
}

ULONG CFramebuffer::GetPixelFormat() const
{
    ULONG aPixelFormat = 0;
    AssertReturn(ptr(), aPixelFormat);
    mRC = ptr()->COMGETTER(PixelFormat)(&aPixelFormat);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPixelFormat;
}

BOOL CFramebuffer::GetUsesGuestVRAM() const
{
    BOOL aUsesGuestVRAM = FALSE;
    AssertReturn(ptr(), aUsesGuestVRAM);
    mRC = ptr()->COMGETTER(UsesGuestVRAM)(&aUsesGuestVRAM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUsesGuestVRAM;
}

ULONG CFramebuffer::GetHeightReduction() const
{
    ULONG aHeightReduction = 0;
    AssertReturn(ptr(), aHeightReduction);
    mRC = ptr()->COMGETTER(HeightReduction)(&aHeightReduction);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHeightReduction;
}

CFramebufferOverlay CFramebuffer::GetOverlay() const
{
    CFramebufferOverlay aOverlay;
    AssertReturn(ptr(), aOverlay);
    IFramebufferOverlay* overlayPtr = NULL;
    mRC = ptr()->COMGETTER(Overlay)(&overlayPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aOverlay.setPtr(overlayPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOverlay;
}

LONG64 CFramebuffer::GetWinId() const
{
    LONG64 aWinId = 0;
    AssertReturn(ptr(), aWinId);
    mRC = ptr()->COMGETTER(WinId)(&aWinId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWinId;
}

void CFramebuffer::Lock()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Lock();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebuffer::Unlock()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Unlock();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebuffer::NotifyUpdate(ULONG aX, ULONG aY, ULONG aWidth, ULONG aHeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->NotifyUpdate(aX, aY, aWidth, aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CFramebuffer::RequestResize(ULONG aScreenId, ULONG aPixelFormat, BYTE * aVRAM, ULONG aBitsPerPixel, ULONG aBytesPerLine, ULONG aWidth, ULONG aHeight)
{
    BOOL aFinished = FALSE;
    AssertReturn(ptr(), aFinished);
    mRC = ptr()->RequestResize(aScreenId, aPixelFormat, aVRAM, aBitsPerPixel, aBytesPerLine, aWidth, aHeight, &aFinished);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFinished;
}

BOOL CFramebuffer::VideoModeSupported(ULONG aWidth, ULONG aHeight, ULONG aBpp)
{
    BOOL aSupported = FALSE;
    AssertReturn(ptr(), aSupported);
    mRC = ptr()->VideoModeSupported(aWidth, aHeight, aBpp, &aSupported);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSupported;
}

ULONG CFramebuffer::GetVisibleRegion(BYTE * aRectangles, ULONG aCount)
{
    ULONG aCountCopied = 0;
    AssertReturn(ptr(), aCountCopied);
    mRC = ptr()->GetVisibleRegion(aRectangles, aCount, &aCountCopied);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCountCopied;
}

void CFramebuffer::SetVisibleRegion(BYTE * aRectangles, ULONG aCount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetVisibleRegion(aRectangles, aCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebuffer::ProcessVHWACommand(BYTE * aCommand)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->ProcessVHWACommand(aCommand);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebuffer::Notify3DEvent(ULONG aType, BYTE * aData)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Notify3DEvent(aType, aData);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IFramebufferOverlay wrapper

ULONG CFramebufferOverlay::GetX() const
{
    ULONG aX = 0;
    AssertReturn(ptr(), aX);
    mRC = ptr()->COMGETTER(X)(&aX);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aX;
}

ULONG CFramebufferOverlay::GetY() const
{
    ULONG aY = 0;
    AssertReturn(ptr(), aY);
    mRC = ptr()->COMGETTER(Y)(&aY);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aY;
}

BOOL CFramebufferOverlay::GetVisible() const
{
    BOOL aVisible = FALSE;
    AssertReturn(ptr(), aVisible);
    mRC = ptr()->COMGETTER(Visible)(&aVisible);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVisible;
}
void CFramebufferOverlay::SetVisible(BOOL aVisible)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Visible)(aVisible);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CFramebufferOverlay::GetAlpha() const
{
    ULONG aAlpha = 0;
    AssertReturn(ptr(), aAlpha);
    mRC = ptr()->COMGETTER(Alpha)(&aAlpha);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAlpha;
}
void CFramebufferOverlay::SetAlpha(ULONG aAlpha)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Alpha)(aAlpha);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BYTE * CFramebufferOverlay::GetAddress() const
{
    BYTE * aAddress = NULL;
    AssertReturn(ptr(), aAddress);
    mRC = ptr()->COMGETTER(Address)(&aAddress);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAddress;
}

ULONG CFramebufferOverlay::GetWidth() const
{
    ULONG aWidth = 0;
    AssertReturn(ptr(), aWidth);
    mRC = ptr()->COMGETTER(Width)(&aWidth);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWidth;
}

ULONG CFramebufferOverlay::GetHeight() const
{
    ULONG aHeight = 0;
    AssertReturn(ptr(), aHeight);
    mRC = ptr()->COMGETTER(Height)(&aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHeight;
}

ULONG CFramebufferOverlay::GetBitsPerPixel() const
{
    ULONG aBitsPerPixel = 0;
    AssertReturn(ptr(), aBitsPerPixel);
    mRC = ptr()->COMGETTER(BitsPerPixel)(&aBitsPerPixel);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBitsPerPixel;
}

ULONG CFramebufferOverlay::GetBytesPerLine() const
{
    ULONG aBytesPerLine = 0;
    AssertReturn(ptr(), aBytesPerLine);
    mRC = ptr()->COMGETTER(BytesPerLine)(&aBytesPerLine);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBytesPerLine;
}

ULONG CFramebufferOverlay::GetPixelFormat() const
{
    ULONG aPixelFormat = 0;
    AssertReturn(ptr(), aPixelFormat);
    mRC = ptr()->COMGETTER(PixelFormat)(&aPixelFormat);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPixelFormat;
}

BOOL CFramebufferOverlay::GetUsesGuestVRAM() const
{
    BOOL aUsesGuestVRAM = FALSE;
    AssertReturn(ptr(), aUsesGuestVRAM);
    mRC = ptr()->COMGETTER(UsesGuestVRAM)(&aUsesGuestVRAM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUsesGuestVRAM;
}

ULONG CFramebufferOverlay::GetHeightReduction() const
{
    ULONG aHeightReduction = 0;
    AssertReturn(ptr(), aHeightReduction);
    mRC = ptr()->COMGETTER(HeightReduction)(&aHeightReduction);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHeightReduction;
}

CFramebufferOverlay CFramebufferOverlay::GetOverlay() const
{
    CFramebufferOverlay aOverlay;
    AssertReturn(ptr(), aOverlay);
    IFramebufferOverlay* overlayPtr = NULL;
    mRC = ptr()->COMGETTER(Overlay)(&overlayPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aOverlay.setPtr(overlayPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOverlay;
}

LONG64 CFramebufferOverlay::GetWinId() const
{
    LONG64 aWinId = 0;
    AssertReturn(ptr(), aWinId);
    mRC = ptr()->COMGETTER(WinId)(&aWinId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWinId;
}

void CFramebufferOverlay::Move(ULONG aX, ULONG aY)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Move(aX, aY);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebufferOverlay::Lock()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Lock();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebufferOverlay::Unlock()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Unlock();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebufferOverlay::NotifyUpdate(ULONG aX, ULONG aY, ULONG aWidth, ULONG aHeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->NotifyUpdate(aX, aY, aWidth, aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CFramebufferOverlay::RequestResize(ULONG aScreenId, ULONG aPixelFormat, BYTE * aVRAM, ULONG aBitsPerPixel, ULONG aBytesPerLine, ULONG aWidth, ULONG aHeight)
{
    BOOL aFinished = FALSE;
    AssertReturn(ptr(), aFinished);
    mRC = ptr()->RequestResize(aScreenId, aPixelFormat, aVRAM, aBitsPerPixel, aBytesPerLine, aWidth, aHeight, &aFinished);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFinished;
}

BOOL CFramebufferOverlay::VideoModeSupported(ULONG aWidth, ULONG aHeight, ULONG aBpp)
{
    BOOL aSupported = FALSE;
    AssertReturn(ptr(), aSupported);
    mRC = ptr()->VideoModeSupported(aWidth, aHeight, aBpp, &aSupported);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSupported;
}

ULONG CFramebufferOverlay::GetVisibleRegion(BYTE * aRectangles, ULONG aCount)
{
    ULONG aCountCopied = 0;
    AssertReturn(ptr(), aCountCopied);
    mRC = ptr()->GetVisibleRegion(aRectangles, aCount, &aCountCopied);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCountCopied;
}

void CFramebufferOverlay::SetVisibleRegion(BYTE * aRectangles, ULONG aCount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetVisibleRegion(aRectangles, aCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebufferOverlay::ProcessVHWACommand(BYTE * aCommand)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->ProcessVHWACommand(aCommand);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CFramebufferOverlay::Notify3DEvent(ULONG aType, BYTE * aData)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Notify3DEvent(aType, aData);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IDisplay wrapper

void CDisplay::GetScreenResolution(ULONG aScreenId, ULONG & aWidth, ULONG & aHeight, ULONG & aBitsPerPixel, LONG & aXOrigin, LONG & aYOrigin)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->GetScreenResolution(aScreenId, &aWidth, &aHeight, &aBitsPerPixel, &aXOrigin, &aYOrigin);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::SetFramebuffer(ULONG aScreenId, const CFramebuffer & aFramebuffer)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetFramebuffer(aScreenId, aFramebuffer.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::GetFramebuffer(ULONG aScreenId, CFramebuffer & aFramebuffer, LONG & aXOrigin, LONG & aYOrigin)
{
    AssertReturnVoid(ptr());
    IFramebuffer* framebufferPtr = NULL;
    mRC = ptr()->GetFramebuffer(aScreenId, &framebufferPtr, &aXOrigin, &aYOrigin);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFramebuffer.setPtr(framebufferPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::SetVideoModeHint(ULONG aDisplay, BOOL aEnabled, BOOL aChangeOrigin, LONG aOriginX, LONG aOriginY, ULONG aWidth, ULONG aHeight, ULONG aBitsPerPixel)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetVideoModeHint(aDisplay, aEnabled, aChangeOrigin, aOriginX, aOriginY, aWidth, aHeight, aBitsPerPixel);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::SetSeamlessMode(BOOL aEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetSeamlessMode(aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::TakeScreenShot(ULONG aScreenId, BYTE * aAddress, ULONG aWidth, ULONG aHeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->TakeScreenShot(aScreenId, aAddress, aWidth, aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<BYTE> CDisplay::TakeScreenShotToArray(ULONG aScreenId, ULONG aWidth, ULONG aHeight)
{
    QVector<BYTE> aScreenData;
    AssertReturn(ptr(), aScreenData);
    com::SafeArray <BYTE> screenData;
    mRC = ptr()->TakeScreenShotToArray(aScreenId, aWidth, aHeight, ComSafeArrayAsOutParam(screenData));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(screenData, aScreenData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aScreenData;
}

QVector<BYTE> CDisplay::TakeScreenShotPNGToArray(ULONG aScreenId, ULONG aWidth, ULONG aHeight)
{
    QVector<BYTE> aScreenData;
    AssertReturn(ptr(), aScreenData);
    com::SafeArray <BYTE> screenData;
    mRC = ptr()->TakeScreenShotPNGToArray(aScreenId, aWidth, aHeight, ComSafeArrayAsOutParam(screenData));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(screenData, aScreenData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aScreenData;
}

void CDisplay::DrawToScreen(ULONG aScreenId, BYTE * aAddress, ULONG aX, ULONG aY, ULONG aWidth, ULONG aHeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DrawToScreen(aScreenId, aAddress, aX, aY, aWidth, aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::InvalidateAndUpdate()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->InvalidateAndUpdate();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::ResizeCompleted(ULONG aScreenId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->ResizeCompleted(aScreenId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::CompleteVHWACommand(BYTE * aCommand)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->CompleteVHWACommand(aCommand);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CDisplay::ViewportChanged(ULONG aScreenId, ULONG aX, ULONG aY, ULONG aWidth, ULONG aHeight)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->ViewportChanged(aScreenId, aX, aY, aWidth, aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// INetworkAdapter wrapper

KNetworkAdapterType CNetworkAdapter::GetAdapterType() const
{
    KNetworkAdapterType aAdapterType = (KNetworkAdapterType) 0;
    AssertReturn(ptr(), aAdapterType);
    mRC = ptr()->COMGETTER(AdapterType)(ENUMOut<KNetworkAdapterType, NetworkAdapterType_T>(aAdapterType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdapterType;
}
void CNetworkAdapter::SetAdapterType(const KNetworkAdapterType & aAdapterType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AdapterType)((NetworkAdapterType_T) aAdapterType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CNetworkAdapter::GetSlot() const
{
    ULONG aSlot = 0;
    AssertReturn(ptr(), aSlot);
    mRC = ptr()->COMGETTER(Slot)(&aSlot);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSlot;
}

BOOL CNetworkAdapter::GetEnabled() const
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->COMGETTER(Enabled)(&aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}
void CNetworkAdapter::SetEnabled(BOOL aEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Enabled)(aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNetworkAdapter::GetMACAddress() const
{
    QString aMACAddress;
    AssertReturn(ptr(), aMACAddress);
    mRC = ptr()->COMGETTER(MACAddress)(BSTROut(aMACAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMACAddress;
}
void CNetworkAdapter::SetMACAddress(const QString & aMACAddress)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(MACAddress)(BSTRIn(aMACAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KNetworkAttachmentType CNetworkAdapter::GetAttachmentType() const
{
    KNetworkAttachmentType aAttachmentType = (KNetworkAttachmentType) 0;
    AssertReturn(ptr(), aAttachmentType);
    mRC = ptr()->COMGETTER(AttachmentType)(ENUMOut<KNetworkAttachmentType, NetworkAttachmentType_T>(aAttachmentType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAttachmentType;
}
void CNetworkAdapter::SetAttachmentType(const KNetworkAttachmentType & aAttachmentType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AttachmentType)((NetworkAttachmentType_T) aAttachmentType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNetworkAdapter::GetBridgedInterface() const
{
    QString aBridgedInterface;
    AssertReturn(ptr(), aBridgedInterface);
    mRC = ptr()->COMGETTER(BridgedInterface)(BSTROut(aBridgedInterface));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBridgedInterface;
}
void CNetworkAdapter::SetBridgedInterface(const QString & aBridgedInterface)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(BridgedInterface)(BSTRIn(aBridgedInterface));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNetworkAdapter::GetHostOnlyInterface() const
{
    QString aHostOnlyInterface;
    AssertReturn(ptr(), aHostOnlyInterface);
    mRC = ptr()->COMGETTER(HostOnlyInterface)(BSTROut(aHostOnlyInterface));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostOnlyInterface;
}
void CNetworkAdapter::SetHostOnlyInterface(const QString & aHostOnlyInterface)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(HostOnlyInterface)(BSTRIn(aHostOnlyInterface));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNetworkAdapter::GetInternalNetwork() const
{
    QString aInternalNetwork;
    AssertReturn(ptr(), aInternalNetwork);
    mRC = ptr()->COMGETTER(InternalNetwork)(BSTROut(aInternalNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInternalNetwork;
}
void CNetworkAdapter::SetInternalNetwork(const QString & aInternalNetwork)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(InternalNetwork)(BSTRIn(aInternalNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNetworkAdapter::GetNATNetwork() const
{
    QString aNATNetwork;
    AssertReturn(ptr(), aNATNetwork);
    mRC = ptr()->COMGETTER(NATNetwork)(BSTROut(aNATNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNATNetwork;
}
void CNetworkAdapter::SetNATNetwork(const QString & aNATNetwork)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(NATNetwork)(BSTRIn(aNATNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNetworkAdapter::GetGenericDriver() const
{
    QString aGenericDriver;
    AssertReturn(ptr(), aGenericDriver);
    mRC = ptr()->COMGETTER(GenericDriver)(BSTROut(aGenericDriver));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGenericDriver;
}
void CNetworkAdapter::SetGenericDriver(const QString & aGenericDriver)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(GenericDriver)(BSTRIn(aGenericDriver));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNetworkAdapter::GetCableConnected() const
{
    BOOL aCableConnected = FALSE;
    AssertReturn(ptr(), aCableConnected);
    mRC = ptr()->COMGETTER(CableConnected)(&aCableConnected);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCableConnected;
}
void CNetworkAdapter::SetCableConnected(BOOL aCableConnected)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(CableConnected)(aCableConnected);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CNetworkAdapter::GetLineSpeed() const
{
    ULONG aLineSpeed = 0;
    AssertReturn(ptr(), aLineSpeed);
    mRC = ptr()->COMGETTER(LineSpeed)(&aLineSpeed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLineSpeed;
}
void CNetworkAdapter::SetLineSpeed(ULONG aLineSpeed)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LineSpeed)(aLineSpeed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KNetworkAdapterPromiscModePolicy CNetworkAdapter::GetPromiscModePolicy() const
{
    KNetworkAdapterPromiscModePolicy aPromiscModePolicy = (KNetworkAdapterPromiscModePolicy) 0;
    AssertReturn(ptr(), aPromiscModePolicy);
    mRC = ptr()->COMGETTER(PromiscModePolicy)(ENUMOut<KNetworkAdapterPromiscModePolicy, NetworkAdapterPromiscModePolicy_T>(aPromiscModePolicy));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPromiscModePolicy;
}
void CNetworkAdapter::SetPromiscModePolicy(const KNetworkAdapterPromiscModePolicy & aPromiscModePolicy)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(PromiscModePolicy)((NetworkAdapterPromiscModePolicy_T) aPromiscModePolicy);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNetworkAdapter::GetTraceEnabled() const
{
    BOOL aTraceEnabled = FALSE;
    AssertReturn(ptr(), aTraceEnabled);
    mRC = ptr()->COMGETTER(TraceEnabled)(&aTraceEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTraceEnabled;
}
void CNetworkAdapter::SetTraceEnabled(BOOL aTraceEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TraceEnabled)(aTraceEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNetworkAdapter::GetTraceFile() const
{
    QString aTraceFile;
    AssertReturn(ptr(), aTraceFile);
    mRC = ptr()->COMGETTER(TraceFile)(BSTROut(aTraceFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTraceFile;
}
void CNetworkAdapter::SetTraceFile(const QString & aTraceFile)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TraceFile)(BSTRIn(aTraceFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CNATEngine CNetworkAdapter::GetNATEngine() const
{
    CNATEngine aNATEngine;
    AssertReturn(ptr(), aNATEngine);
    INATEngine* NATEnginePtr = NULL;
    mRC = ptr()->COMGETTER(NATEngine)(&NATEnginePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aNATEngine.setPtr(NATEnginePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNATEngine;
}

ULONG CNetworkAdapter::GetBootPriority() const
{
    ULONG aBootPriority = 0;
    AssertReturn(ptr(), aBootPriority);
    mRC = ptr()->COMGETTER(BootPriority)(&aBootPriority);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBootPriority;
}
void CNetworkAdapter::SetBootPriority(ULONG aBootPriority)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(BootPriority)(aBootPriority);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CBandwidthGroup CNetworkAdapter::GetBandwidthGroup() const
{
    CBandwidthGroup aBandwidthGroup;
    AssertReturn(ptr(), aBandwidthGroup);
    IBandwidthGroup* bandwidthGroupPtr = NULL;
    mRC = ptr()->COMGETTER(BandwidthGroup)(&bandwidthGroupPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aBandwidthGroup.setPtr(bandwidthGroupPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBandwidthGroup;
}
void CNetworkAdapter::SetBandwidthGroup(const CBandwidthGroup & aBandwidthGroup)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(BandwidthGroup)(aBandwidthGroup.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNetworkAdapter::GetProperty(const QString & aKey) const
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetProperty(BSTRIn(aKey), BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CNetworkAdapter::SetProperty(const QString & aKey, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProperty(BSTRIn(aKey), BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CNetworkAdapter::GetProperties(const QString & aNames, QVector<QString> & aReturnNames) const
{
    QVector<QString> aReturnValues;
    AssertReturn(ptr(), aReturnValues);
    com::SafeArray <BSTR> returnNames;
    com::SafeArray <BSTR> returnValues;
    mRC = ptr()->GetProperties(BSTRIn(aNames), ComSafeArrayAsOutParam(returnNames), ComSafeArrayAsOutParam(returnValues));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(returnNames, aReturnNames);
    FromSafeArray(returnValues, aReturnValues);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReturnValues;
}

// ISerialPort wrapper

ULONG CSerialPort::GetSlot() const
{
    ULONG aSlot = 0;
    AssertReturn(ptr(), aSlot);
    mRC = ptr()->COMGETTER(Slot)(&aSlot);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSlot;
}

BOOL CSerialPort::GetEnabled() const
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->COMGETTER(Enabled)(&aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}
void CSerialPort::SetEnabled(BOOL aEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Enabled)(aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CSerialPort::GetIOBase() const
{
    ULONG aIOBase = 0;
    AssertReturn(ptr(), aIOBase);
    mRC = ptr()->COMGETTER(IOBase)(&aIOBase);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIOBase;
}
void CSerialPort::SetIOBase(ULONG aIOBase)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IOBase)(aIOBase);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CSerialPort::GetIRQ() const
{
    ULONG aIRQ = 0;
    AssertReturn(ptr(), aIRQ);
    mRC = ptr()->COMGETTER(IRQ)(&aIRQ);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIRQ;
}
void CSerialPort::SetIRQ(ULONG aIRQ)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IRQ)(aIRQ);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KPortMode CSerialPort::GetHostMode() const
{
    KPortMode aHostMode = (KPortMode) 0;
    AssertReturn(ptr(), aHostMode);
    mRC = ptr()->COMGETTER(HostMode)(ENUMOut<KPortMode, PortMode_T>(aHostMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostMode;
}
void CSerialPort::SetHostMode(const KPortMode & aHostMode)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(HostMode)((PortMode_T) aHostMode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CSerialPort::GetServer() const
{
    BOOL aServer = FALSE;
    AssertReturn(ptr(), aServer);
    mRC = ptr()->COMGETTER(Server)(&aServer);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aServer;
}
void CSerialPort::SetServer(BOOL aServer)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Server)(aServer);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CSerialPort::GetPath() const
{
    QString aPath;
    AssertReturn(ptr(), aPath);
    mRC = ptr()->COMGETTER(Path)(BSTROut(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPath;
}
void CSerialPort::SetPath(const QString & aPath)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Path)(BSTRIn(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IParallelPort wrapper

ULONG CParallelPort::GetSlot() const
{
    ULONG aSlot = 0;
    AssertReturn(ptr(), aSlot);
    mRC = ptr()->COMGETTER(Slot)(&aSlot);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSlot;
}

BOOL CParallelPort::GetEnabled() const
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->COMGETTER(Enabled)(&aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}
void CParallelPort::SetEnabled(BOOL aEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Enabled)(aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CParallelPort::GetIOBase() const
{
    ULONG aIOBase = 0;
    AssertReturn(ptr(), aIOBase);
    mRC = ptr()->COMGETTER(IOBase)(&aIOBase);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIOBase;
}
void CParallelPort::SetIOBase(ULONG aIOBase)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IOBase)(aIOBase);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CParallelPort::GetIRQ() const
{
    ULONG aIRQ = 0;
    AssertReturn(ptr(), aIRQ);
    mRC = ptr()->COMGETTER(IRQ)(&aIRQ);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIRQ;
}
void CParallelPort::SetIRQ(ULONG aIRQ)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(IRQ)(aIRQ);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CParallelPort::GetPath() const
{
    QString aPath;
    AssertReturn(ptr(), aPath);
    mRC = ptr()->COMGETTER(Path)(BSTROut(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPath;
}
void CParallelPort::SetPath(const QString & aPath)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Path)(BSTRIn(aPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IMachineDebugger wrapper

BOOL CMachineDebugger::GetSingleStep() const
{
    BOOL aSingleStep = FALSE;
    AssertReturn(ptr(), aSingleStep);
    mRC = ptr()->COMGETTER(SingleStep)(&aSingleStep);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSingleStep;
}
void CMachineDebugger::SetSingleStep(BOOL aSingleStep)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(SingleStep)(aSingleStep);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineDebugger::GetRecompileUser() const
{
    BOOL aRecompileUser = FALSE;
    AssertReturn(ptr(), aRecompileUser);
    mRC = ptr()->COMGETTER(RecompileUser)(&aRecompileUser);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecompileUser;
}
void CMachineDebugger::SetRecompileUser(BOOL aRecompileUser)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(RecompileUser)(aRecompileUser);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineDebugger::GetRecompileSupervisor() const
{
    BOOL aRecompileSupervisor = FALSE;
    AssertReturn(ptr(), aRecompileSupervisor);
    mRC = ptr()->COMGETTER(RecompileSupervisor)(&aRecompileSupervisor);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRecompileSupervisor;
}
void CMachineDebugger::SetRecompileSupervisor(BOOL aRecompileSupervisor)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(RecompileSupervisor)(aRecompileSupervisor);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineDebugger::GetExecuteAllInIEM() const
{
    BOOL aExecuteAllInIEM = FALSE;
    AssertReturn(ptr(), aExecuteAllInIEM);
    mRC = ptr()->COMGETTER(ExecuteAllInIEM)(&aExecuteAllInIEM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExecuteAllInIEM;
}
void CMachineDebugger::SetExecuteAllInIEM(BOOL aExecuteAllInIEM)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ExecuteAllInIEM)(aExecuteAllInIEM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineDebugger::GetPATMEnabled() const
{
    BOOL aPATMEnabled = FALSE;
    AssertReturn(ptr(), aPATMEnabled);
    mRC = ptr()->COMGETTER(PATMEnabled)(&aPATMEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPATMEnabled;
}
void CMachineDebugger::SetPATMEnabled(BOOL aPATMEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(PATMEnabled)(aPATMEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineDebugger::GetCSAMEnabled() const
{
    BOOL aCSAMEnabled = FALSE;
    AssertReturn(ptr(), aCSAMEnabled);
    mRC = ptr()->COMGETTER(CSAMEnabled)(&aCSAMEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCSAMEnabled;
}
void CMachineDebugger::SetCSAMEnabled(BOOL aCSAMEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(CSAMEnabled)(aCSAMEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineDebugger::GetLogEnabled() const
{
    BOOL aLogEnabled = FALSE;
    AssertReturn(ptr(), aLogEnabled);
    mRC = ptr()->COMGETTER(LogEnabled)(&aLogEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogEnabled;
}
void CMachineDebugger::SetLogEnabled(BOOL aLogEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(LogEnabled)(aLogEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachineDebugger::GetLogDbgFlags() const
{
    QString aLogDbgFlags;
    AssertReturn(ptr(), aLogDbgFlags);
    mRC = ptr()->COMGETTER(LogDbgFlags)(BSTROut(aLogDbgFlags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogDbgFlags;
}

QString CMachineDebugger::GetLogDbgGroups() const
{
    QString aLogDbgGroups;
    AssertReturn(ptr(), aLogDbgGroups);
    mRC = ptr()->COMGETTER(LogDbgGroups)(BSTROut(aLogDbgGroups));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogDbgGroups;
}

QString CMachineDebugger::GetLogDbgDestinations() const
{
    QString aLogDbgDestinations;
    AssertReturn(ptr(), aLogDbgDestinations);
    mRC = ptr()->COMGETTER(LogDbgDestinations)(BSTROut(aLogDbgDestinations));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogDbgDestinations;
}

QString CMachineDebugger::GetLogRelFlags() const
{
    QString aLogRelFlags;
    AssertReturn(ptr(), aLogRelFlags);
    mRC = ptr()->COMGETTER(LogRelFlags)(BSTROut(aLogRelFlags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogRelFlags;
}

QString CMachineDebugger::GetLogRelGroups() const
{
    QString aLogRelGroups;
    AssertReturn(ptr(), aLogRelGroups);
    mRC = ptr()->COMGETTER(LogRelGroups)(BSTROut(aLogRelGroups));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogRelGroups;
}

QString CMachineDebugger::GetLogRelDestinations() const
{
    QString aLogRelDestinations;
    AssertReturn(ptr(), aLogRelDestinations);
    mRC = ptr()->COMGETTER(LogRelDestinations)(BSTROut(aLogRelDestinations));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLogRelDestinations;
}

BOOL CMachineDebugger::GetHWVirtExEnabled() const
{
    BOOL aHWVirtExEnabled = FALSE;
    AssertReturn(ptr(), aHWVirtExEnabled);
    mRC = ptr()->COMGETTER(HWVirtExEnabled)(&aHWVirtExEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHWVirtExEnabled;
}

BOOL CMachineDebugger::GetHWVirtExNestedPagingEnabled() const
{
    BOOL aHWVirtExNestedPagingEnabled = FALSE;
    AssertReturn(ptr(), aHWVirtExNestedPagingEnabled);
    mRC = ptr()->COMGETTER(HWVirtExNestedPagingEnabled)(&aHWVirtExNestedPagingEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHWVirtExNestedPagingEnabled;
}

BOOL CMachineDebugger::GetHWVirtExVPIDEnabled() const
{
    BOOL aHWVirtExVPIDEnabled = FALSE;
    AssertReturn(ptr(), aHWVirtExVPIDEnabled);
    mRC = ptr()->COMGETTER(HWVirtExVPIDEnabled)(&aHWVirtExVPIDEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHWVirtExVPIDEnabled;
}

BOOL CMachineDebugger::GetHWVirtExUXEnabled() const
{
    BOOL aHWVirtExUXEnabled = FALSE;
    AssertReturn(ptr(), aHWVirtExUXEnabled);
    mRC = ptr()->COMGETTER(HWVirtExUXEnabled)(&aHWVirtExUXEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHWVirtExUXEnabled;
}

QString CMachineDebugger::GetOSName() const
{
    QString aOSName;
    AssertReturn(ptr(), aOSName);
    mRC = ptr()->COMGETTER(OSName)(BSTROut(aOSName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOSName;
}

QString CMachineDebugger::GetOSVersion() const
{
    QString aOSVersion;
    AssertReturn(ptr(), aOSVersion);
    mRC = ptr()->COMGETTER(OSVersion)(BSTROut(aOSVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOSVersion;
}

BOOL CMachineDebugger::GetPAEEnabled() const
{
    BOOL aPAEEnabled = FALSE;
    AssertReturn(ptr(), aPAEEnabled);
    mRC = ptr()->COMGETTER(PAEEnabled)(&aPAEEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPAEEnabled;
}

ULONG CMachineDebugger::GetVirtualTimeRate() const
{
    ULONG aVirtualTimeRate = 0;
    AssertReturn(ptr(), aVirtualTimeRate);
    mRC = ptr()->COMGETTER(VirtualTimeRate)(&aVirtualTimeRate);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVirtualTimeRate;
}
void CMachineDebugger::SetVirtualTimeRate(ULONG aVirtualTimeRate)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VirtualTimeRate)(aVirtualTimeRate);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

LONG64 CMachineDebugger::GetVM() const
{
    LONG64 aVM = 0;
    AssertReturn(ptr(), aVM);
    mRC = ptr()->COMGETTER(VM)(&aVM);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVM;
}

void CMachineDebugger::DumpGuestCore(const QString & aFilename, const QString & aCompression)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DumpGuestCore(BSTRIn(aFilename), BSTRIn(aCompression));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachineDebugger::DumpHostProcessCore(const QString & aFilename, const QString & aCompression)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DumpHostProcessCore(BSTRIn(aFilename), BSTRIn(aCompression));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachineDebugger::Info(const QString & aName, const QString & aArgs)
{
    QString aInfo;
    AssertReturn(ptr(), aInfo);
    mRC = ptr()->Info(BSTRIn(aName), BSTRIn(aArgs), BSTROut(aInfo));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInfo;
}

void CMachineDebugger::InjectNMI()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->InjectNMI();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachineDebugger::ModifyLogGroups(const QString & aSettings)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->ModifyLogGroups(BSTRIn(aSettings));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachineDebugger::ModifyLogFlags(const QString & aSettings)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->ModifyLogFlags(BSTRIn(aSettings));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachineDebugger::ModifyLogDestinations(const QString & aSettings)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->ModifyLogDestinations(BSTRIn(aSettings));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<BYTE> CMachineDebugger::ReadPhysicalMemory(LONG64 aAddress, ULONG aSize)
{
    QVector<BYTE> aBytes;
    AssertReturn(ptr(), aBytes);
    com::SafeArray <BYTE> bytes;
    mRC = ptr()->ReadPhysicalMemory(aAddress, aSize, ComSafeArrayAsOutParam(bytes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(bytes, aBytes);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBytes;
}

void CMachineDebugger::WritePhysicalMemory(LONG64 aAddress, ULONG aSize, const QVector<BYTE> & aBytes)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BYTE> bytes;
    ToSafeArray(aBytes, bytes);
    mRC = ptr()->WritePhysicalMemory(aAddress, aSize, ComSafeArrayAsInParam(bytes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<BYTE> CMachineDebugger::ReadVirtualMemory(ULONG aCpuId, LONG64 aAddress, ULONG aSize)
{
    QVector<BYTE> aBytes;
    AssertReturn(ptr(), aBytes);
    com::SafeArray <BYTE> bytes;
    mRC = ptr()->ReadVirtualMemory(aCpuId, aAddress, aSize, ComSafeArrayAsOutParam(bytes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(bytes, aBytes);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBytes;
}

void CMachineDebugger::WriteVirtualMemory(ULONG aCpuId, LONG64 aAddress, ULONG aSize, const QVector<BYTE> & aBytes)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BYTE> bytes;
    ToSafeArray(aBytes, bytes);
    mRC = ptr()->WriteVirtualMemory(aCpuId, aAddress, aSize, ComSafeArrayAsInParam(bytes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachineDebugger::DetectOS()
{
    QString aOs;
    AssertReturn(ptr(), aOs);
    mRC = ptr()->DetectOS(BSTROut(aOs));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOs;
}

QString CMachineDebugger::GetRegister(ULONG aCpuId, const QString & aName)
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetRegister(aCpuId, BSTRIn(aName), BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

void CMachineDebugger::GetRegisters(ULONG aCpuId, QVector<QString> & aNames, QVector<QString> & aValues)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> names;
    com::SafeArray <BSTR> values;
    mRC = ptr()->GetRegisters(aCpuId, ComSafeArrayAsOutParam(names), ComSafeArrayAsOutParam(values));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(names, aNames);
    FromSafeArray(values, aValues);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachineDebugger::SetRegister(ULONG aCpuId, const QString & aName, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetRegister(aCpuId, BSTRIn(aName), BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachineDebugger::SetRegisters(ULONG aCpuId, const QVector<QString> & aNames, const QVector<QString> & aValues)
{
    AssertReturnVoid(ptr());
    com::SafeArray <BSTR> names;
    ToSafeArray(aNames, names);
    com::SafeArray <BSTR> values;
    ToSafeArray(aValues, values);
    mRC = ptr()->SetRegisters(aCpuId, ComSafeArrayAsInParam(names), ComSafeArrayAsInParam(values));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachineDebugger::DumpGuestStack(ULONG aCpuId)
{
    QString aStack;
    AssertReturn(ptr(), aStack);
    mRC = ptr()->DumpGuestStack(aCpuId, BSTROut(aStack));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStack;
}

void CMachineDebugger::ResetStats(const QString & aPattern)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->ResetStats(BSTRIn(aPattern));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CMachineDebugger::DumpStats(const QString & aPattern)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DumpStats(BSTRIn(aPattern));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CMachineDebugger::GetStats(const QString & aPattern, BOOL aWithDescriptions)
{
    QString aStats;
    AssertReturn(ptr(), aStats);
    mRC = ptr()->GetStats(BSTRIn(aPattern), aWithDescriptions, BSTROut(aStats));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStats;
}

// IUSBDeviceFilters wrapper

QVector<CUSBDeviceFilter> CUSBDeviceFilters::GetDeviceFilters() const
{
    QVector<CUSBDeviceFilter> aDeviceFilters;
    AssertReturn(ptr(), aDeviceFilters);
    com::SafeIfaceArray <IUSBDeviceFilter> deviceFilters;
    mRC = ptr()->COMGETTER(DeviceFilters)(ComSafeArrayAsOutParam(deviceFilters));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(deviceFilters, aDeviceFilters);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDeviceFilters;
}

CUSBDeviceFilter CUSBDeviceFilters::CreateDeviceFilter(const QString & aName)
{
    CUSBDeviceFilter aFilter;
    AssertReturn(ptr(), aFilter);
    IUSBDeviceFilter* filterPtr = NULL;
    mRC = ptr()->CreateDeviceFilter(BSTRIn(aName), &filterPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFilter.setPtr(filterPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFilter;
}

void CUSBDeviceFilters::InsertDeviceFilter(ULONG aPosition, const CUSBDeviceFilter & aFilter)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->InsertDeviceFilter(aPosition, aFilter.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CUSBDeviceFilter CUSBDeviceFilters::RemoveDeviceFilter(ULONG aPosition)
{
    CUSBDeviceFilter aFilter;
    AssertReturn(ptr(), aFilter);
    IUSBDeviceFilter* filterPtr = NULL;
    mRC = ptr()->RemoveDeviceFilter(aPosition, &filterPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFilter.setPtr(filterPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFilter;
}

// IUSBController wrapper

QString CUSBController::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

KUSBControllerType CUSBController::GetType() const
{
    KUSBControllerType aType = (KUSBControllerType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KUSBControllerType, USBControllerType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

USHORT CUSBController::GetUSBStandard() const
{
    USHORT aUSBStandard = 0;
    AssertReturn(ptr(), aUSBStandard);
    mRC = ptr()->COMGETTER(USBStandard)(&aUSBStandard);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUSBStandard;
}

// IUSBDevice wrapper

QString CUSBDevice::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

USHORT CUSBDevice::GetVendorId() const
{
    USHORT aVendorId = 0;
    AssertReturn(ptr(), aVendorId);
    mRC = ptr()->COMGETTER(VendorId)(&aVendorId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVendorId;
}

USHORT CUSBDevice::GetProductId() const
{
    USHORT aProductId = 0;
    AssertReturn(ptr(), aProductId);
    mRC = ptr()->COMGETTER(ProductId)(&aProductId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProductId;
}

USHORT CUSBDevice::GetRevision() const
{
    USHORT aRevision = 0;
    AssertReturn(ptr(), aRevision);
    mRC = ptr()->COMGETTER(Revision)(&aRevision);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRevision;
}

QString CUSBDevice::GetManufacturer() const
{
    QString aManufacturer;
    AssertReturn(ptr(), aManufacturer);
    mRC = ptr()->COMGETTER(Manufacturer)(BSTROut(aManufacturer));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aManufacturer;
}

QString CUSBDevice::GetProduct() const
{
    QString aProduct;
    AssertReturn(ptr(), aProduct);
    mRC = ptr()->COMGETTER(Product)(BSTROut(aProduct));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProduct;
}

QString CUSBDevice::GetSerialNumber() const
{
    QString aSerialNumber;
    AssertReturn(ptr(), aSerialNumber);
    mRC = ptr()->COMGETTER(SerialNumber)(BSTROut(aSerialNumber));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSerialNumber;
}

QString CUSBDevice::GetAddress() const
{
    QString aAddress;
    AssertReturn(ptr(), aAddress);
    mRC = ptr()->COMGETTER(Address)(BSTROut(aAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAddress;
}

USHORT CUSBDevice::GetPort() const
{
    USHORT aPort = 0;
    AssertReturn(ptr(), aPort);
    mRC = ptr()->COMGETTER(Port)(&aPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPort;
}

USHORT CUSBDevice::GetVersion() const
{
    USHORT aVersion = 0;
    AssertReturn(ptr(), aVersion);
    mRC = ptr()->COMGETTER(Version)(&aVersion);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVersion;
}

USHORT CUSBDevice::GetPortVersion() const
{
    USHORT aPortVersion = 0;
    AssertReturn(ptr(), aPortVersion);
    mRC = ptr()->COMGETTER(PortVersion)(&aPortVersion);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPortVersion;
}

BOOL CUSBDevice::GetRemote() const
{
    BOOL aRemote = FALSE;
    AssertReturn(ptr(), aRemote);
    mRC = ptr()->COMGETTER(Remote)(&aRemote);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRemote;
}

// IUSBDeviceFilter wrapper

QString CUSBDeviceFilter::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}
void CUSBDeviceFilter::SetName(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Name)(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CUSBDeviceFilter::GetActive() const
{
    BOOL aActive = FALSE;
    AssertReturn(ptr(), aActive);
    mRC = ptr()->COMGETTER(Active)(&aActive);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aActive;
}
void CUSBDeviceFilter::SetActive(BOOL aActive)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Active)(aActive);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CUSBDeviceFilter::GetVendorId() const
{
    QString aVendorId;
    AssertReturn(ptr(), aVendorId);
    mRC = ptr()->COMGETTER(VendorId)(BSTROut(aVendorId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVendorId;
}
void CUSBDeviceFilter::SetVendorId(const QString & aVendorId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VendorId)(BSTRIn(aVendorId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CUSBDeviceFilter::GetProductId() const
{
    QString aProductId;
    AssertReturn(ptr(), aProductId);
    mRC = ptr()->COMGETTER(ProductId)(BSTROut(aProductId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProductId;
}
void CUSBDeviceFilter::SetProductId(const QString & aProductId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ProductId)(BSTRIn(aProductId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CUSBDeviceFilter::GetRevision() const
{
    QString aRevision;
    AssertReturn(ptr(), aRevision);
    mRC = ptr()->COMGETTER(Revision)(BSTROut(aRevision));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRevision;
}
void CUSBDeviceFilter::SetRevision(const QString & aRevision)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Revision)(BSTRIn(aRevision));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CUSBDeviceFilter::GetManufacturer() const
{
    QString aManufacturer;
    AssertReturn(ptr(), aManufacturer);
    mRC = ptr()->COMGETTER(Manufacturer)(BSTROut(aManufacturer));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aManufacturer;
}
void CUSBDeviceFilter::SetManufacturer(const QString & aManufacturer)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Manufacturer)(BSTRIn(aManufacturer));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CUSBDeviceFilter::GetProduct() const
{
    QString aProduct;
    AssertReturn(ptr(), aProduct);
    mRC = ptr()->COMGETTER(Product)(BSTROut(aProduct));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProduct;
}
void CUSBDeviceFilter::SetProduct(const QString & aProduct)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Product)(BSTRIn(aProduct));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CUSBDeviceFilter::GetSerialNumber() const
{
    QString aSerialNumber;
    AssertReturn(ptr(), aSerialNumber);
    mRC = ptr()->COMGETTER(SerialNumber)(BSTROut(aSerialNumber));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSerialNumber;
}
void CUSBDeviceFilter::SetSerialNumber(const QString & aSerialNumber)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(SerialNumber)(BSTRIn(aSerialNumber));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CUSBDeviceFilter::GetPort() const
{
    QString aPort;
    AssertReturn(ptr(), aPort);
    mRC = ptr()->COMGETTER(Port)(BSTROut(aPort));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPort;
}
void CUSBDeviceFilter::SetPort(const QString & aPort)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Port)(BSTRIn(aPort));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CUSBDeviceFilter::GetRemote() const
{
    QString aRemote;
    AssertReturn(ptr(), aRemote);
    mRC = ptr()->COMGETTER(Remote)(BSTROut(aRemote));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRemote;
}
void CUSBDeviceFilter::SetRemote(const QString & aRemote)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Remote)(BSTRIn(aRemote));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CUSBDeviceFilter::GetMaskedInterfaces() const
{
    ULONG aMaskedInterfaces = 0;
    AssertReturn(ptr(), aMaskedInterfaces);
    mRC = ptr()->COMGETTER(MaskedInterfaces)(&aMaskedInterfaces);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaskedInterfaces;
}
void CUSBDeviceFilter::SetMaskedInterfaces(ULONG aMaskedInterfaces)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(MaskedInterfaces)(aMaskedInterfaces);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IHostUSBDevice wrapper

KUSBDeviceState CHostUSBDevice::GetState() const
{
    KUSBDeviceState aState = (KUSBDeviceState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KUSBDeviceState, USBDeviceState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

QString CHostUSBDevice::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

USHORT CHostUSBDevice::GetVendorId() const
{
    USHORT aVendorId = 0;
    AssertReturn(ptr(), aVendorId);
    mRC = ptr()->COMGETTER(VendorId)(&aVendorId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVendorId;
}

USHORT CHostUSBDevice::GetProductId() const
{
    USHORT aProductId = 0;
    AssertReturn(ptr(), aProductId);
    mRC = ptr()->COMGETTER(ProductId)(&aProductId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProductId;
}

USHORT CHostUSBDevice::GetRevision() const
{
    USHORT aRevision = 0;
    AssertReturn(ptr(), aRevision);
    mRC = ptr()->COMGETTER(Revision)(&aRevision);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRevision;
}

QString CHostUSBDevice::GetManufacturer() const
{
    QString aManufacturer;
    AssertReturn(ptr(), aManufacturer);
    mRC = ptr()->COMGETTER(Manufacturer)(BSTROut(aManufacturer));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aManufacturer;
}

QString CHostUSBDevice::GetProduct() const
{
    QString aProduct;
    AssertReturn(ptr(), aProduct);
    mRC = ptr()->COMGETTER(Product)(BSTROut(aProduct));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProduct;
}

QString CHostUSBDevice::GetSerialNumber() const
{
    QString aSerialNumber;
    AssertReturn(ptr(), aSerialNumber);
    mRC = ptr()->COMGETTER(SerialNumber)(BSTROut(aSerialNumber));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSerialNumber;
}

QString CHostUSBDevice::GetAddress() const
{
    QString aAddress;
    AssertReturn(ptr(), aAddress);
    mRC = ptr()->COMGETTER(Address)(BSTROut(aAddress));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAddress;
}

USHORT CHostUSBDevice::GetPort() const
{
    USHORT aPort = 0;
    AssertReturn(ptr(), aPort);
    mRC = ptr()->COMGETTER(Port)(&aPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPort;
}

USHORT CHostUSBDevice::GetVersion() const
{
    USHORT aVersion = 0;
    AssertReturn(ptr(), aVersion);
    mRC = ptr()->COMGETTER(Version)(&aVersion);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVersion;
}

USHORT CHostUSBDevice::GetPortVersion() const
{
    USHORT aPortVersion = 0;
    AssertReturn(ptr(), aPortVersion);
    mRC = ptr()->COMGETTER(PortVersion)(&aPortVersion);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPortVersion;
}

BOOL CHostUSBDevice::GetRemote() const
{
    BOOL aRemote = FALSE;
    AssertReturn(ptr(), aRemote);
    mRC = ptr()->COMGETTER(Remote)(&aRemote);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRemote;
}

// IHostUSBDeviceFilter wrapper

KUSBDeviceFilterAction CHostUSBDeviceFilter::GetAction() const
{
    KUSBDeviceFilterAction aAction = (KUSBDeviceFilterAction) 0;
    AssertReturn(ptr(), aAction);
    mRC = ptr()->COMGETTER(Action)(ENUMOut<KUSBDeviceFilterAction, USBDeviceFilterAction_T>(aAction));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAction;
}
void CHostUSBDeviceFilter::SetAction(const KUSBDeviceFilterAction & aAction)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Action)((USBDeviceFilterAction_T) aAction);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}
void CHostUSBDeviceFilter::SetName(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Name)(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CHostUSBDeviceFilter::GetActive() const
{
    BOOL aActive = FALSE;
    AssertReturn(ptr(), aActive);
    mRC = ptr()->COMGETTER(Active)(&aActive);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aActive;
}
void CHostUSBDeviceFilter::SetActive(BOOL aActive)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Active)(aActive);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetVendorId() const
{
    QString aVendorId;
    AssertReturn(ptr(), aVendorId);
    mRC = ptr()->COMGETTER(VendorId)(BSTROut(aVendorId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVendorId;
}
void CHostUSBDeviceFilter::SetVendorId(const QString & aVendorId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VendorId)(BSTRIn(aVendorId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetProductId() const
{
    QString aProductId;
    AssertReturn(ptr(), aProductId);
    mRC = ptr()->COMGETTER(ProductId)(BSTROut(aProductId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProductId;
}
void CHostUSBDeviceFilter::SetProductId(const QString & aProductId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ProductId)(BSTRIn(aProductId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetRevision() const
{
    QString aRevision;
    AssertReturn(ptr(), aRevision);
    mRC = ptr()->COMGETTER(Revision)(BSTROut(aRevision));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRevision;
}
void CHostUSBDeviceFilter::SetRevision(const QString & aRevision)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Revision)(BSTRIn(aRevision));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetManufacturer() const
{
    QString aManufacturer;
    AssertReturn(ptr(), aManufacturer);
    mRC = ptr()->COMGETTER(Manufacturer)(BSTROut(aManufacturer));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aManufacturer;
}
void CHostUSBDeviceFilter::SetManufacturer(const QString & aManufacturer)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Manufacturer)(BSTRIn(aManufacturer));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetProduct() const
{
    QString aProduct;
    AssertReturn(ptr(), aProduct);
    mRC = ptr()->COMGETTER(Product)(BSTROut(aProduct));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProduct;
}
void CHostUSBDeviceFilter::SetProduct(const QString & aProduct)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Product)(BSTRIn(aProduct));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetSerialNumber() const
{
    QString aSerialNumber;
    AssertReturn(ptr(), aSerialNumber);
    mRC = ptr()->COMGETTER(SerialNumber)(BSTROut(aSerialNumber));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSerialNumber;
}
void CHostUSBDeviceFilter::SetSerialNumber(const QString & aSerialNumber)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(SerialNumber)(BSTRIn(aSerialNumber));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetPort() const
{
    QString aPort;
    AssertReturn(ptr(), aPort);
    mRC = ptr()->COMGETTER(Port)(BSTROut(aPort));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPort;
}
void CHostUSBDeviceFilter::SetPort(const QString & aPort)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Port)(BSTRIn(aPort));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CHostUSBDeviceFilter::GetRemote() const
{
    QString aRemote;
    AssertReturn(ptr(), aRemote);
    mRC = ptr()->COMGETTER(Remote)(BSTROut(aRemote));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRemote;
}
void CHostUSBDeviceFilter::SetRemote(const QString & aRemote)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Remote)(BSTRIn(aRemote));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CHostUSBDeviceFilter::GetMaskedInterfaces() const
{
    ULONG aMaskedInterfaces = 0;
    AssertReturn(ptr(), aMaskedInterfaces);
    mRC = ptr()->COMGETTER(MaskedInterfaces)(&aMaskedInterfaces);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaskedInterfaces;
}
void CHostUSBDeviceFilter::SetMaskedInterfaces(ULONG aMaskedInterfaces)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(MaskedInterfaces)(aMaskedInterfaces);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IAudioAdapter wrapper

BOOL CAudioAdapter::GetEnabled() const
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->COMGETTER(Enabled)(&aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}
void CAudioAdapter::SetEnabled(BOOL aEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Enabled)(aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KAudioControllerType CAudioAdapter::GetAudioController() const
{
    KAudioControllerType aAudioController = (KAudioControllerType) 0;
    AssertReturn(ptr(), aAudioController);
    mRC = ptr()->COMGETTER(AudioController)(ENUMOut<KAudioControllerType, AudioControllerType_T>(aAudioController));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAudioController;
}
void CAudioAdapter::SetAudioController(const KAudioControllerType & aAudioController)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AudioController)((AudioControllerType_T) aAudioController);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KAudioDriverType CAudioAdapter::GetAudioDriver() const
{
    KAudioDriverType aAudioDriver = (KAudioDriverType) 0;
    AssertReturn(ptr(), aAudioDriver);
    mRC = ptr()->COMGETTER(AudioDriver)(ENUMOut<KAudioDriverType, AudioDriverType_T>(aAudioDriver));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAudioDriver;
}
void CAudioAdapter::SetAudioDriver(const KAudioDriverType & aAudioDriver)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AudioDriver)((AudioDriverType_T) aAudioDriver);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IVRDEServer wrapper

BOOL CVRDEServer::GetEnabled() const
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->COMGETTER(Enabled)(&aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}
void CVRDEServer::SetEnabled(BOOL aEnabled)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Enabled)(aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KAuthType CVRDEServer::GetAuthType() const
{
    KAuthType aAuthType = (KAuthType) 0;
    AssertReturn(ptr(), aAuthType);
    mRC = ptr()->COMGETTER(AuthType)(ENUMOut<KAuthType, AuthType_T>(aAuthType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAuthType;
}
void CVRDEServer::SetAuthType(const KAuthType & aAuthType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AuthType)((AuthType_T) aAuthType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CVRDEServer::GetAuthTimeout() const
{
    ULONG aAuthTimeout = 0;
    AssertReturn(ptr(), aAuthTimeout);
    mRC = ptr()->COMGETTER(AuthTimeout)(&aAuthTimeout);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAuthTimeout;
}
void CVRDEServer::SetAuthTimeout(ULONG aAuthTimeout)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AuthTimeout)(aAuthTimeout);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVRDEServer::GetAllowMultiConnection() const
{
    BOOL aAllowMultiConnection = FALSE;
    AssertReturn(ptr(), aAllowMultiConnection);
    mRC = ptr()->COMGETTER(AllowMultiConnection)(&aAllowMultiConnection);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAllowMultiConnection;
}
void CVRDEServer::SetAllowMultiConnection(BOOL aAllowMultiConnection)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AllowMultiConnection)(aAllowMultiConnection);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVRDEServer::GetReuseSingleConnection() const
{
    BOOL aReuseSingleConnection = FALSE;
    AssertReturn(ptr(), aReuseSingleConnection);
    mRC = ptr()->COMGETTER(ReuseSingleConnection)(&aReuseSingleConnection);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReuseSingleConnection;
}
void CVRDEServer::SetReuseSingleConnection(BOOL aReuseSingleConnection)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ReuseSingleConnection)(aReuseSingleConnection);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CVRDEServer::GetVRDEExtPack() const
{
    QString aVRDEExtPack;
    AssertReturn(ptr(), aVRDEExtPack);
    mRC = ptr()->COMGETTER(VRDEExtPack)(BSTROut(aVRDEExtPack));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRDEExtPack;
}
void CVRDEServer::SetVRDEExtPack(const QString & aVRDEExtPack)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(VRDEExtPack)(BSTRIn(aVRDEExtPack));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CVRDEServer::GetAuthLibrary() const
{
    QString aAuthLibrary;
    AssertReturn(ptr(), aAuthLibrary);
    mRC = ptr()->COMGETTER(AuthLibrary)(BSTROut(aAuthLibrary));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAuthLibrary;
}
void CVRDEServer::SetAuthLibrary(const QString & aAuthLibrary)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AuthLibrary)(BSTRIn(aAuthLibrary));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CVRDEServer::GetVRDEProperties() const
{
    QVector<QString> aVRDEProperties;
    AssertReturn(ptr(), aVRDEProperties);
    com::SafeArray <BSTR> VRDEProperties;
    mRC = ptr()->COMGETTER(VRDEProperties)(ComSafeArrayAsOutParam(VRDEProperties));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(VRDEProperties, aVRDEProperties);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRDEProperties;
}

void CVRDEServer::SetVRDEProperty(const QString & aKey, const QString & aValue)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetVRDEProperty(BSTRIn(aKey), BSTRIn(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CVRDEServer::GetVRDEProperty(const QString & aKey) const
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->GetVRDEProperty(BSTRIn(aKey), BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

// ISharedFolder wrapper

QString CSharedFolder::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CSharedFolder::GetHostPath() const
{
    QString aHostPath;
    AssertReturn(ptr(), aHostPath);
    mRC = ptr()->COMGETTER(HostPath)(BSTROut(aHostPath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostPath;
}

BOOL CSharedFolder::GetAccessible() const
{
    BOOL aAccessible = FALSE;
    AssertReturn(ptr(), aAccessible);
    mRC = ptr()->COMGETTER(Accessible)(&aAccessible);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAccessible;
}

BOOL CSharedFolder::GetWritable() const
{
    BOOL aWritable = FALSE;
    AssertReturn(ptr(), aWritable);
    mRC = ptr()->COMGETTER(Writable)(&aWritable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWritable;
}

BOOL CSharedFolder::GetAutoMount() const
{
    BOOL aAutoMount = FALSE;
    AssertReturn(ptr(), aAutoMount);
    mRC = ptr()->COMGETTER(AutoMount)(&aAutoMount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAutoMount;
}

QString CSharedFolder::GetLastAccessError() const
{
    QString aLastAccessError;
    AssertReturn(ptr(), aLastAccessError);
    mRC = ptr()->COMGETTER(LastAccessError)(BSTROut(aLastAccessError));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLastAccessError;
}

// ISession wrapper

KSessionState CSession::GetState() const
{
    KSessionState aState = (KSessionState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KSessionState, SessionState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

KSessionType CSession::GetType() const
{
    KSessionType aType = (KSessionType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KSessionType, SessionType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CMachine CSession::GetMachine() const
{
    CMachine aMachine;
    AssertReturn(ptr(), aMachine);
    IMachine* machinePtr = NULL;
    mRC = ptr()->COMGETTER(Machine)(&machinePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMachine.setPtr(machinePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachine;
}

CConsole CSession::GetConsole() const
{
    CConsole aConsole;
    AssertReturn(ptr(), aConsole);
    IConsole* consolePtr = NULL;
    mRC = ptr()->COMGETTER(Console)(&consolePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aConsole.setPtr(consolePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aConsole;
}

void CSession::UnlockMachine()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->UnlockMachine();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IStorageController wrapper

QString CStorageController::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

ULONG CStorageController::GetMaxDevicesPerPortCount() const
{
    ULONG aMaxDevicesPerPortCount = 0;
    AssertReturn(ptr(), aMaxDevicesPerPortCount);
    mRC = ptr()->COMGETTER(MaxDevicesPerPortCount)(&aMaxDevicesPerPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxDevicesPerPortCount;
}

ULONG CStorageController::GetMinPortCount() const
{
    ULONG aMinPortCount = 0;
    AssertReturn(ptr(), aMinPortCount);
    mRC = ptr()->COMGETTER(MinPortCount)(&aMinPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMinPortCount;
}

ULONG CStorageController::GetMaxPortCount() const
{
    ULONG aMaxPortCount = 0;
    AssertReturn(ptr(), aMaxPortCount);
    mRC = ptr()->COMGETTER(MaxPortCount)(&aMaxPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxPortCount;
}

ULONG CStorageController::GetInstance() const
{
    ULONG aInstance = 0;
    AssertReturn(ptr(), aInstance);
    mRC = ptr()->COMGETTER(Instance)(&aInstance);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInstance;
}
void CStorageController::SetInstance(ULONG aInstance)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Instance)(aInstance);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CStorageController::GetPortCount() const
{
    ULONG aPortCount = 0;
    AssertReturn(ptr(), aPortCount);
    mRC = ptr()->COMGETTER(PortCount)(&aPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPortCount;
}
void CStorageController::SetPortCount(ULONG aPortCount)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(PortCount)(aPortCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KStorageBus CStorageController::GetBus() const
{
    KStorageBus aBus = (KStorageBus) 0;
    AssertReturn(ptr(), aBus);
    mRC = ptr()->COMGETTER(Bus)(ENUMOut<KStorageBus, StorageBus_T>(aBus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBus;
}

KStorageControllerType CStorageController::GetControllerType() const
{
    KStorageControllerType aControllerType = (KStorageControllerType) 0;
    AssertReturn(ptr(), aControllerType);
    mRC = ptr()->COMGETTER(ControllerType)(ENUMOut<KStorageControllerType, StorageControllerType_T>(aControllerType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aControllerType;
}
void CStorageController::SetControllerType(const KStorageControllerType & aControllerType)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(ControllerType)((StorageControllerType_T) aControllerType);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CStorageController::GetUseHostIOCache() const
{
    BOOL aUseHostIOCache = FALSE;
    AssertReturn(ptr(), aUseHostIOCache);
    mRC = ptr()->COMGETTER(UseHostIOCache)(&aUseHostIOCache);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUseHostIOCache;
}
void CStorageController::SetUseHostIOCache(BOOL aUseHostIOCache)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(UseHostIOCache)(aUseHostIOCache);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CStorageController::GetBootable() const
{
    BOOL aBootable = FALSE;
    AssertReturn(ptr(), aBootable);
    mRC = ptr()->COMGETTER(Bootable)(&aBootable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBootable;
}

// IPerformanceMetric wrapper

QString CPerformanceMetric::GetMetricName() const
{
    QString aMetricName;
    AssertReturn(ptr(), aMetricName);
    mRC = ptr()->COMGETTER(MetricName)(BSTROut(aMetricName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMetricName;
}

CUnknown CPerformanceMetric::GetObject() const
{
    CUnknown aObject;
    AssertReturn(ptr(), aObject);
    IUnknown* objectPtr = NULL;
    mRC = ptr()->COMGETTER(Object)(&objectPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aObject.setPtr(objectPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aObject;
}

QString CPerformanceMetric::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

ULONG CPerformanceMetric::GetPeriod() const
{
    ULONG aPeriod = 0;
    AssertReturn(ptr(), aPeriod);
    mRC = ptr()->COMGETTER(Period)(&aPeriod);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPeriod;
}

ULONG CPerformanceMetric::GetCount() const
{
    ULONG aCount = 0;
    AssertReturn(ptr(), aCount);
    mRC = ptr()->COMGETTER(Count)(&aCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCount;
}

QString CPerformanceMetric::GetUnit() const
{
    QString aUnit;
    AssertReturn(ptr(), aUnit);
    mRC = ptr()->COMGETTER(Unit)(BSTROut(aUnit));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUnit;
}

LONG CPerformanceMetric::GetMinimumValue() const
{
    LONG aMinimumValue = 0;
    AssertReturn(ptr(), aMinimumValue);
    mRC = ptr()->COMGETTER(MinimumValue)(&aMinimumValue);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMinimumValue;
}

LONG CPerformanceMetric::GetMaximumValue() const
{
    LONG aMaximumValue = 0;
    AssertReturn(ptr(), aMaximumValue);
    mRC = ptr()->COMGETTER(MaximumValue)(&aMaximumValue);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaximumValue;
}

// IPerformanceCollector wrapper

QVector<QString> CPerformanceCollector::GetMetricNames() const
{
    QVector<QString> aMetricNames;
    AssertReturn(ptr(), aMetricNames);
    com::SafeArray <BSTR> metricNames;
    mRC = ptr()->COMGETTER(MetricNames)(ComSafeArrayAsOutParam(metricNames));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(metricNames, aMetricNames);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMetricNames;
}

QVector<CPerformanceMetric> CPerformanceCollector::GetMetrics(const QVector<QString> & aMetricNames, const QVector<CUnknown> & aObjects)
{
    QVector<CPerformanceMetric> aMetrics;
    AssertReturn(ptr(), aMetrics);
    com::SafeArray <BSTR> metricNames;
    ToSafeArray(aMetricNames, metricNames);
    com::SafeIfaceArray <IUnknown> objects;
    ToSafeIfaceArray(aObjects, objects);
    com::SafeIfaceArray <IPerformanceMetric> metrics;
    mRC = ptr()->GetMetrics(ComSafeArrayAsInParam(metricNames), ComSafeArrayAsInParam(objects), ComSafeArrayAsOutParam(metrics));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(metrics, aMetrics);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMetrics;
}

QVector<CPerformanceMetric> CPerformanceCollector::SetupMetrics(const QVector<QString> & aMetricNames, const QVector<CUnknown> & aObjects, ULONG aPeriod, ULONG aCount)
{
    QVector<CPerformanceMetric> aAffectedMetrics;
    AssertReturn(ptr(), aAffectedMetrics);
    com::SafeArray <BSTR> metricNames;
    ToSafeArray(aMetricNames, metricNames);
    com::SafeIfaceArray <IUnknown> objects;
    ToSafeIfaceArray(aObjects, objects);
    com::SafeIfaceArray <IPerformanceMetric> affectedMetrics;
    mRC = ptr()->SetupMetrics(ComSafeArrayAsInParam(metricNames), ComSafeArrayAsInParam(objects), aPeriod, aCount, ComSafeArrayAsOutParam(affectedMetrics));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(affectedMetrics, aAffectedMetrics);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAffectedMetrics;
}

QVector<CPerformanceMetric> CPerformanceCollector::EnableMetrics(const QVector<QString> & aMetricNames, const QVector<CUnknown> & aObjects)
{
    QVector<CPerformanceMetric> aAffectedMetrics;
    AssertReturn(ptr(), aAffectedMetrics);
    com::SafeArray <BSTR> metricNames;
    ToSafeArray(aMetricNames, metricNames);
    com::SafeIfaceArray <IUnknown> objects;
    ToSafeIfaceArray(aObjects, objects);
    com::SafeIfaceArray <IPerformanceMetric> affectedMetrics;
    mRC = ptr()->EnableMetrics(ComSafeArrayAsInParam(metricNames), ComSafeArrayAsInParam(objects), ComSafeArrayAsOutParam(affectedMetrics));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(affectedMetrics, aAffectedMetrics);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAffectedMetrics;
}

QVector<CPerformanceMetric> CPerformanceCollector::DisableMetrics(const QVector<QString> & aMetricNames, const QVector<CUnknown> & aObjects)
{
    QVector<CPerformanceMetric> aAffectedMetrics;
    AssertReturn(ptr(), aAffectedMetrics);
    com::SafeArray <BSTR> metricNames;
    ToSafeArray(aMetricNames, metricNames);
    com::SafeIfaceArray <IUnknown> objects;
    ToSafeIfaceArray(aObjects, objects);
    com::SafeIfaceArray <IPerformanceMetric> affectedMetrics;
    mRC = ptr()->DisableMetrics(ComSafeArrayAsInParam(metricNames), ComSafeArrayAsInParam(objects), ComSafeArrayAsOutParam(affectedMetrics));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(affectedMetrics, aAffectedMetrics);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAffectedMetrics;
}

QVector<LONG> CPerformanceCollector::QueryMetricsData(const QVector<QString> & aMetricNames, const QVector<CUnknown> & aObjects, QVector<QString> & aReturnMetricNames, QVector<CUnknown> & aReturnObjects, QVector<QString> & aReturnUnits, QVector<ULONG> & aReturnScales, QVector<ULONG> & aReturnSequenceNumbers, QVector<ULONG> & aReturnDataIndices, QVector<ULONG> & aReturnDataLengths)
{
    QVector<LONG> aReturnData;
    AssertReturn(ptr(), aReturnData);
    com::SafeArray <BSTR> metricNames;
    ToSafeArray(aMetricNames, metricNames);
    com::SafeIfaceArray <IUnknown> objects;
    ToSafeIfaceArray(aObjects, objects);
    com::SafeArray <BSTR> returnMetricNames;
    com::SafeIfaceArray <IUnknown> returnObjects;
    com::SafeArray <BSTR> returnUnits;
    com::SafeArray <ULONG> returnScales;
    com::SafeArray <ULONG> returnSequenceNumbers;
    com::SafeArray <ULONG> returnDataIndices;
    com::SafeArray <ULONG> returnDataLengths;
    com::SafeArray <LONG> returnData;
    mRC = ptr()->QueryMetricsData(ComSafeArrayAsInParam(metricNames), ComSafeArrayAsInParam(objects), ComSafeArrayAsOutParam(returnMetricNames), ComSafeArrayAsOutParam(returnObjects), ComSafeArrayAsOutParam(returnUnits), ComSafeArrayAsOutParam(returnScales), ComSafeArrayAsOutParam(returnSequenceNumbers), ComSafeArrayAsOutParam(returnDataIndices), ComSafeArrayAsOutParam(returnDataLengths), ComSafeArrayAsOutParam(returnData));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(returnMetricNames, aReturnMetricNames);
    FromSafeIfaceArray(returnObjects, aReturnObjects);
    FromSafeArray(returnUnits, aReturnUnits);
    FromSafeArray(returnScales, aReturnScales);
    FromSafeArray(returnSequenceNumbers, aReturnSequenceNumbers);
    FromSafeArray(returnDataIndices, aReturnDataIndices);
    FromSafeArray(returnDataLengths, aReturnDataLengths);
    FromSafeArray(returnData, aReturnData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReturnData;
}

// INATEngine wrapper

QString CNATEngine::GetNetwork() const
{
    QString aNetwork;
    AssertReturn(ptr(), aNetwork);
    mRC = ptr()->COMGETTER(Network)(BSTROut(aNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetwork;
}
void CNATEngine::SetNetwork(const QString & aNetwork)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(Network)(BSTRIn(aNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNATEngine::GetHostIP() const
{
    QString aHostIP;
    AssertReturn(ptr(), aHostIP);
    mRC = ptr()->COMGETTER(HostIP)(BSTROut(aHostIP));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostIP;
}
void CNATEngine::SetHostIP(const QString & aHostIP)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(HostIP)(BSTRIn(aHostIP));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNATEngine::GetTFTPPrefix() const
{
    QString aTFTPPrefix;
    AssertReturn(ptr(), aTFTPPrefix);
    mRC = ptr()->COMGETTER(TFTPPrefix)(BSTROut(aTFTPPrefix));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTFTPPrefix;
}
void CNATEngine::SetTFTPPrefix(const QString & aTFTPPrefix)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TFTPPrefix)(BSTRIn(aTFTPPrefix));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNATEngine::GetTFTPBootFile() const
{
    QString aTFTPBootFile;
    AssertReturn(ptr(), aTFTPBootFile);
    mRC = ptr()->COMGETTER(TFTPBootFile)(BSTROut(aTFTPBootFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTFTPBootFile;
}
void CNATEngine::SetTFTPBootFile(const QString & aTFTPBootFile)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TFTPBootFile)(BSTRIn(aTFTPBootFile));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QString CNATEngine::GetTFTPNextServer() const
{
    QString aTFTPNextServer;
    AssertReturn(ptr(), aTFTPNextServer);
    mRC = ptr()->COMGETTER(TFTPNextServer)(BSTROut(aTFTPNextServer));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTFTPNextServer;
}
void CNATEngine::SetTFTPNextServer(const QString & aTFTPNextServer)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(TFTPNextServer)(BSTRIn(aTFTPNextServer));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

ULONG CNATEngine::GetAliasMode() const
{
    ULONG aAliasMode = 0;
    AssertReturn(ptr(), aAliasMode);
    mRC = ptr()->COMGETTER(AliasMode)(&aAliasMode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAliasMode;
}
void CNATEngine::SetAliasMode(ULONG aAliasMode)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(AliasMode)(aAliasMode);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATEngine::GetDNSPassDomain() const
{
    BOOL aDNSPassDomain = FALSE;
    AssertReturn(ptr(), aDNSPassDomain);
    mRC = ptr()->COMGETTER(DNSPassDomain)(&aDNSPassDomain);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDNSPassDomain;
}
void CNATEngine::SetDNSPassDomain(BOOL aDNSPassDomain)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DNSPassDomain)(aDNSPassDomain);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATEngine::GetDNSProxy() const
{
    BOOL aDNSProxy = FALSE;
    AssertReturn(ptr(), aDNSProxy);
    mRC = ptr()->COMGETTER(DNSProxy)(&aDNSProxy);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDNSProxy;
}
void CNATEngine::SetDNSProxy(BOOL aDNSProxy)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DNSProxy)(aDNSProxy);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATEngine::GetDNSUseHostResolver() const
{
    BOOL aDNSUseHostResolver = FALSE;
    AssertReturn(ptr(), aDNSUseHostResolver);
    mRC = ptr()->COMGETTER(DNSUseHostResolver)(&aDNSUseHostResolver);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDNSUseHostResolver;
}
void CNATEngine::SetDNSUseHostResolver(BOOL aDNSUseHostResolver)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(DNSUseHostResolver)(aDNSUseHostResolver);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CNATEngine::GetRedirects() const
{
    QVector<QString> aRedirects;
    AssertReturn(ptr(), aRedirects);
    com::SafeArray <BSTR> redirects;
    mRC = ptr()->COMGETTER(Redirects)(ComSafeArrayAsOutParam(redirects));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(redirects, aRedirects);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRedirects;
}

void CNATEngine::SetNetworkSettings(ULONG aMtu, ULONG aSockSnd, ULONG aSockRcv, ULONG aTcpWndSnd, ULONG aTcpWndRcv)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetNetworkSettings(aMtu, aSockSnd, aSockRcv, aTcpWndSnd, aTcpWndRcv);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CNATEngine::GetNetworkSettings(ULONG & aMtu, ULONG & aSockSnd, ULONG & aSockRcv, ULONG & aTcpWndSnd, ULONG & aTcpWndRcv)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->GetNetworkSettings(&aMtu, &aSockSnd, &aSockRcv, &aTcpWndSnd, &aTcpWndRcv);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CNATEngine::AddRedirect(const QString & aName, const KNATProtocol & aProto, const QString & aHostIP, USHORT aHostPort, const QString & aGuestIP, USHORT aGuestPort)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddRedirect(BSTRIn(aName), (NATProtocol_T) aProto, BSTRIn(aHostIP), aHostPort, BSTRIn(aGuestIP), aGuestPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CNATEngine::RemoveRedirect(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->RemoveRedirect(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IExtPackPlugIn wrapper

QString CExtPackPlugIn::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CExtPackPlugIn::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

QString CExtPackPlugIn::GetFrontend() const
{
    QString aFrontend;
    AssertReturn(ptr(), aFrontend);
    mRC = ptr()->COMGETTER(Frontend)(BSTROut(aFrontend));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFrontend;
}

QString CExtPackPlugIn::GetModulePath() const
{
    QString aModulePath;
    AssertReturn(ptr(), aModulePath);
    mRC = ptr()->COMGETTER(ModulePath)(BSTROut(aModulePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aModulePath;
}

// IExtPackBase wrapper

QString CExtPackBase::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CExtPackBase::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

QString CExtPackBase::GetVersion() const
{
    QString aVersion;
    AssertReturn(ptr(), aVersion);
    mRC = ptr()->COMGETTER(Version)(BSTROut(aVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVersion;
}

ULONG CExtPackBase::GetRevision() const
{
    ULONG aRevision = 0;
    AssertReturn(ptr(), aRevision);
    mRC = ptr()->COMGETTER(Revision)(&aRevision);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRevision;
}

QString CExtPackBase::GetEdition() const
{
    QString aEdition;
    AssertReturn(ptr(), aEdition);
    mRC = ptr()->COMGETTER(Edition)(BSTROut(aEdition));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEdition;
}

QString CExtPackBase::GetVRDEModule() const
{
    QString aVRDEModule;
    AssertReturn(ptr(), aVRDEModule);
    mRC = ptr()->COMGETTER(VRDEModule)(BSTROut(aVRDEModule));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRDEModule;
}

QVector<CExtPackPlugIn> CExtPackBase::GetPlugIns() const
{
    QVector<CExtPackPlugIn> aPlugIns;
    AssertReturn(ptr(), aPlugIns);
    com::SafeIfaceArray <IExtPackPlugIn> plugIns;
    mRC = ptr()->COMGETTER(PlugIns)(ComSafeArrayAsOutParam(plugIns));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(plugIns, aPlugIns);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPlugIns;
}

BOOL CExtPackBase::GetUsable() const
{
    BOOL aUsable = FALSE;
    AssertReturn(ptr(), aUsable);
    mRC = ptr()->COMGETTER(Usable)(&aUsable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUsable;
}

QString CExtPackBase::GetWhyUnusable() const
{
    QString aWhyUnusable;
    AssertReturn(ptr(), aWhyUnusable);
    mRC = ptr()->COMGETTER(WhyUnusable)(BSTROut(aWhyUnusable));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWhyUnusable;
}

BOOL CExtPackBase::GetShowLicense() const
{
    BOOL aShowLicense = FALSE;
    AssertReturn(ptr(), aShowLicense);
    mRC = ptr()->COMGETTER(ShowLicense)(&aShowLicense);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aShowLicense;
}

QString CExtPackBase::GetLicense() const
{
    QString aLicense;
    AssertReturn(ptr(), aLicense);
    mRC = ptr()->COMGETTER(License)(BSTROut(aLicense));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLicense;
}

QString CExtPackBase::QueryLicense(const QString & aPreferredLocale, const QString & aPreferredLanguage, const QString & aFormat)
{
    QString aLicenseText;
    AssertReturn(ptr(), aLicenseText);
    mRC = ptr()->QueryLicense(BSTRIn(aPreferredLocale), BSTRIn(aPreferredLanguage), BSTRIn(aFormat), BSTROut(aLicenseText));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLicenseText;
}

// IExtPack wrapper

QString CExtPack::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CExtPack::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

QString CExtPack::GetVersion() const
{
    QString aVersion;
    AssertReturn(ptr(), aVersion);
    mRC = ptr()->COMGETTER(Version)(BSTROut(aVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVersion;
}

ULONG CExtPack::GetRevision() const
{
    ULONG aRevision = 0;
    AssertReturn(ptr(), aRevision);
    mRC = ptr()->COMGETTER(Revision)(&aRevision);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRevision;
}

QString CExtPack::GetEdition() const
{
    QString aEdition;
    AssertReturn(ptr(), aEdition);
    mRC = ptr()->COMGETTER(Edition)(BSTROut(aEdition));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEdition;
}

QString CExtPack::GetVRDEModule() const
{
    QString aVRDEModule;
    AssertReturn(ptr(), aVRDEModule);
    mRC = ptr()->COMGETTER(VRDEModule)(BSTROut(aVRDEModule));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRDEModule;
}

QVector<CExtPackPlugIn> CExtPack::GetPlugIns() const
{
    QVector<CExtPackPlugIn> aPlugIns;
    AssertReturn(ptr(), aPlugIns);
    com::SafeIfaceArray <IExtPackPlugIn> plugIns;
    mRC = ptr()->COMGETTER(PlugIns)(ComSafeArrayAsOutParam(plugIns));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(plugIns, aPlugIns);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPlugIns;
}

BOOL CExtPack::GetUsable() const
{
    BOOL aUsable = FALSE;
    AssertReturn(ptr(), aUsable);
    mRC = ptr()->COMGETTER(Usable)(&aUsable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUsable;
}

QString CExtPack::GetWhyUnusable() const
{
    QString aWhyUnusable;
    AssertReturn(ptr(), aWhyUnusable);
    mRC = ptr()->COMGETTER(WhyUnusable)(BSTROut(aWhyUnusable));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWhyUnusable;
}

BOOL CExtPack::GetShowLicense() const
{
    BOOL aShowLicense = FALSE;
    AssertReturn(ptr(), aShowLicense);
    mRC = ptr()->COMGETTER(ShowLicense)(&aShowLicense);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aShowLicense;
}

QString CExtPack::GetLicense() const
{
    QString aLicense;
    AssertReturn(ptr(), aLicense);
    mRC = ptr()->COMGETTER(License)(BSTROut(aLicense));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLicense;
}

CUnknown CExtPack::QueryObject(const QString & aObjUuid)
{
    CUnknown aReturnInterface;
    AssertReturn(ptr(), aReturnInterface);
    IUnknown* returnInterfacePtr = NULL;
    mRC = ptr()->QueryObject(BSTRIn(aObjUuid), &returnInterfacePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aReturnInterface.setPtr(returnInterfacePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReturnInterface;
}

QString CExtPack::QueryLicense(const QString & aPreferredLocale, const QString & aPreferredLanguage, const QString & aFormat)
{
    QString aLicenseText;
    AssertReturn(ptr(), aLicenseText);
    mRC = ptr()->QueryLicense(BSTRIn(aPreferredLocale), BSTRIn(aPreferredLanguage), BSTRIn(aFormat), BSTROut(aLicenseText));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLicenseText;
}

// IExtPackFile wrapper

QString CExtPackFile::GetFilePath() const
{
    QString aFilePath;
    AssertReturn(ptr(), aFilePath);
    mRC = ptr()->COMGETTER(FilePath)(BSTROut(aFilePath));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFilePath;
}

QString CExtPackFile::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CExtPackFile::GetDescription() const
{
    QString aDescription;
    AssertReturn(ptr(), aDescription);
    mRC = ptr()->COMGETTER(Description)(BSTROut(aDescription));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDescription;
}

QString CExtPackFile::GetVersion() const
{
    QString aVersion;
    AssertReturn(ptr(), aVersion);
    mRC = ptr()->COMGETTER(Version)(BSTROut(aVersion));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVersion;
}

ULONG CExtPackFile::GetRevision() const
{
    ULONG aRevision = 0;
    AssertReturn(ptr(), aRevision);
    mRC = ptr()->COMGETTER(Revision)(&aRevision);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRevision;
}

QString CExtPackFile::GetEdition() const
{
    QString aEdition;
    AssertReturn(ptr(), aEdition);
    mRC = ptr()->COMGETTER(Edition)(BSTROut(aEdition));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEdition;
}

QString CExtPackFile::GetVRDEModule() const
{
    QString aVRDEModule;
    AssertReturn(ptr(), aVRDEModule);
    mRC = ptr()->COMGETTER(VRDEModule)(BSTROut(aVRDEModule));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVRDEModule;
}

QVector<CExtPackPlugIn> CExtPackFile::GetPlugIns() const
{
    QVector<CExtPackPlugIn> aPlugIns;
    AssertReturn(ptr(), aPlugIns);
    com::SafeIfaceArray <IExtPackPlugIn> plugIns;
    mRC = ptr()->COMGETTER(PlugIns)(ComSafeArrayAsOutParam(plugIns));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(plugIns, aPlugIns);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPlugIns;
}

BOOL CExtPackFile::GetUsable() const
{
    BOOL aUsable = FALSE;
    AssertReturn(ptr(), aUsable);
    mRC = ptr()->COMGETTER(Usable)(&aUsable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUsable;
}

QString CExtPackFile::GetWhyUnusable() const
{
    QString aWhyUnusable;
    AssertReturn(ptr(), aWhyUnusable);
    mRC = ptr()->COMGETTER(WhyUnusable)(BSTROut(aWhyUnusable));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWhyUnusable;
}

BOOL CExtPackFile::GetShowLicense() const
{
    BOOL aShowLicense = FALSE;
    AssertReturn(ptr(), aShowLicense);
    mRC = ptr()->COMGETTER(ShowLicense)(&aShowLicense);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aShowLicense;
}

QString CExtPackFile::GetLicense() const
{
    QString aLicense;
    AssertReturn(ptr(), aLicense);
    mRC = ptr()->COMGETTER(License)(BSTROut(aLicense));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLicense;
}

CProgress CExtPackFile::Install(BOOL aReplace, const QString & aDisplayInfo)
{
    CProgress aProgess;
    AssertReturn(ptr(), aProgess);
    IProgress* progessPtr = NULL;
    mRC = ptr()->Install(aReplace, BSTRIn(aDisplayInfo), &progessPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgess.setPtr(progessPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgess;
}

QString CExtPackFile::QueryLicense(const QString & aPreferredLocale, const QString & aPreferredLanguage, const QString & aFormat)
{
    QString aLicenseText;
    AssertReturn(ptr(), aLicenseText);
    mRC = ptr()->QueryLicense(BSTRIn(aPreferredLocale), BSTRIn(aPreferredLanguage), BSTRIn(aFormat), BSTROut(aLicenseText));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aLicenseText;
}

// IExtPackManager wrapper

QVector<CExtPack> CExtPackManager::GetInstalledExtPacks() const
{
    QVector<CExtPack> aInstalledExtPacks;
    AssertReturn(ptr(), aInstalledExtPacks);
    com::SafeIfaceArray <IExtPack> installedExtPacks;
    mRC = ptr()->COMGETTER(InstalledExtPacks)(ComSafeArrayAsOutParam(installedExtPacks));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(installedExtPacks, aInstalledExtPacks);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aInstalledExtPacks;
}

CExtPack CExtPackManager::Find(const QString & aName)
{
    CExtPack aReturnData;
    AssertReturn(ptr(), aReturnData);
    IExtPack* returnDataPtr = NULL;
    mRC = ptr()->Find(BSTRIn(aName), &returnDataPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aReturnData.setPtr(returnDataPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReturnData;
}

CExtPackFile CExtPackManager::OpenExtPackFile(const QString & aPath)
{
    CExtPackFile aFile;
    AssertReturn(ptr(), aFile);
    IExtPackFile* filePtr = NULL;
    mRC = ptr()->OpenExtPackFile(BSTRIn(aPath), &filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CProgress CExtPackManager::Uninstall(const QString & aName, BOOL aForcedRemoval, const QString & aDisplayInfo)
{
    CProgress aProgess;
    AssertReturn(ptr(), aProgess);
    IProgress* progessPtr = NULL;
    mRC = ptr()->Uninstall(BSTRIn(aName), aForcedRemoval, BSTRIn(aDisplayInfo), &progessPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProgess.setPtr(progessPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProgess;
}

void CExtPackManager::Cleanup()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Cleanup();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

QVector<QString> CExtPackManager::QueryAllPlugInsForFrontend(const QString & aFrontendName)
{
    QVector<QString> aPlugInModules;
    AssertReturn(ptr(), aPlugInModules);
    com::SafeArray <BSTR> plugInModules;
    mRC = ptr()->QueryAllPlugInsForFrontend(BSTRIn(aFrontendName), ComSafeArrayAsOutParam(plugInModules));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(plugInModules, aPlugInModules);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPlugInModules;
}

BOOL CExtPackManager::IsExtPackUsable(const QString & aName)
{
    BOOL aUsable = FALSE;
    AssertReturn(ptr(), aUsable);
    mRC = ptr()->IsExtPackUsable(BSTRIn(aName), &aUsable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aUsable;
}

// IBandwidthGroup wrapper

QString CBandwidthGroup::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

KBandwidthGroupType CBandwidthGroup::GetType() const
{
    KBandwidthGroupType aType = (KBandwidthGroupType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KBandwidthGroupType, BandwidthGroupType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

ULONG CBandwidthGroup::GetReference() const
{
    ULONG aReference = 0;
    AssertReturn(ptr(), aReference);
    mRC = ptr()->COMGETTER(Reference)(&aReference);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aReference;
}

LONG64 CBandwidthGroup::GetMaxBytesPerSec() const
{
    LONG64 aMaxBytesPerSec = 0;
    AssertReturn(ptr(), aMaxBytesPerSec);
    mRC = ptr()->COMGETTER(MaxBytesPerSec)(&aMaxBytesPerSec);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMaxBytesPerSec;
}
void CBandwidthGroup::SetMaxBytesPerSec(LONG64 aMaxBytesPerSec)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(MaxBytesPerSec)(aMaxBytesPerSec);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IBandwidthControl wrapper

ULONG CBandwidthControl::GetNumGroups() const
{
    ULONG aNumGroups = 0;
    AssertReturn(ptr(), aNumGroups);
    mRC = ptr()->COMGETTER(NumGroups)(&aNumGroups);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNumGroups;
}

void CBandwidthControl::CreateBandwidthGroup(const QString & aName, const KBandwidthGroupType & aType, LONG64 aMaxBytesPerSec)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->CreateBandwidthGroup(BSTRIn(aName), (BandwidthGroupType_T) aType, aMaxBytesPerSec);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CBandwidthControl::DeleteBandwidthGroup(const QString & aName)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->DeleteBandwidthGroup(BSTRIn(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

CBandwidthGroup CBandwidthControl::GetBandwidthGroup(const QString & aName) const
{
    CBandwidthGroup aBandwidthGroup;
    AssertReturn(ptr(), aBandwidthGroup);
    IBandwidthGroup* bandwidthGroupPtr = NULL;
    mRC = ptr()->GetBandwidthGroup(BSTRIn(aName), &bandwidthGroupPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aBandwidthGroup.setPtr(bandwidthGroupPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBandwidthGroup;
}

QVector<CBandwidthGroup> CBandwidthControl::GetAllBandwidthGroups() const
{
    QVector<CBandwidthGroup> aBandwidthGroups;
    AssertReturn(ptr(), aBandwidthGroups);
    com::SafeIfaceArray <IBandwidthGroup> bandwidthGroups;
    mRC = ptr()->GetAllBandwidthGroups(ComSafeArrayAsOutParam(bandwidthGroups));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeIfaceArray(bandwidthGroups, aBandwidthGroups);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBandwidthGroups;
}

// IVirtualBoxClient wrapper

CVirtualBox CVirtualBoxClient::GetVirtualBox() const
{
    CVirtualBox aVirtualBox;
    AssertReturn(ptr(), aVirtualBox);
    IVirtualBox* virtualBoxPtr = NULL;
    mRC = ptr()->COMGETTER(VirtualBox)(&virtualBoxPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aVirtualBox.setPtr(virtualBoxPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVirtualBox;
}

CSession CVirtualBoxClient::GetSession() const
{
    CSession aSession;
    AssertReturn(ptr(), aSession);
    ISession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

CEventSource CVirtualBoxClient::GetEventSource() const
{
    CEventSource aEventSource;
    AssertReturn(ptr(), aEventSource);
    IEventSource* eventSourcePtr = NULL;
    mRC = ptr()->COMGETTER(EventSource)(&eventSourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEventSource.setPtr(eventSourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEventSource;
}

void CVirtualBoxClient::CheckMachineError(const CMachine & aMachine)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->CheckMachineError(aMachine.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IEventSource wrapper

CEventListener CEventSource::CreateListener()
{
    CEventListener aListener;
    AssertReturn(ptr(), aListener);
    IEventListener* listenerPtr = NULL;
    mRC = ptr()->CreateListener(&listenerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aListener.setPtr(listenerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aListener;
}

CEventSource CEventSource::CreateAggregator(const QVector<CEventSource> & aSubordinates)
{
    CEventSource aResult;
    AssertReturn(ptr(), aResult);
    com::SafeIfaceArray <IEventSource> subordinates;
    ToSafeIfaceArray(aSubordinates, subordinates);
    IEventSource* resultPtr = NULL;
    mRC = ptr()->CreateAggregator(ComSafeArrayAsInParam(subordinates), &resultPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aResult.setPtr(resultPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

void CEventSource::RegisterListener(const CEventListener & aListener, const QVector<KVBoxEventType> & aInteresting, BOOL aActive)
{
    AssertReturnVoid(ptr());
    com::SafeArray <VBoxEventType_T> interesting;
    ToSafeArray(aInteresting, interesting);
    mRC = ptr()->RegisterListener(aListener.ptr(), ComSafeArrayAsInParam(interesting), aActive);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CEventSource::UnregisterListener(const CEventListener & aListener)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->UnregisterListener(aListener.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CEventSource::FireEvent(const CEvent & aEvent, LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->FireEvent(aEvent.ptr(), aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

CEvent CEventSource::GetEvent(const CEventListener & aListener, LONG aTimeout)
{
    CEvent aEvent;
    AssertReturn(ptr(), aEvent);
    IEvent* eventPtr = NULL;
    mRC = ptr()->GetEvent(aListener.ptr(), aTimeout, &eventPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aEvent.setPtr(eventPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEvent;
}

void CEventSource::EventProcessed(const CEventListener & aListener, const CEvent & aEvent)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->EventProcessed(aListener.ptr(), aEvent.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IEventListener wrapper

void CEventListener::HandleEvent(const CEvent & aEvent)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->HandleEvent(aEvent.ptr());
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

// IEvent wrapper

KVBoxEventType CEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IReusableEvent wrapper

ULONG CReusableEvent::GetGeneration() const
{
    ULONG aGeneration = 0;
    AssertReturn(ptr(), aGeneration);
    mRC = ptr()->COMGETTER(Generation)(&aGeneration);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGeneration;
}

KVBoxEventType CReusableEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CReusableEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CReusableEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CReusableEvent::Reuse()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Reuse();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CReusableEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CReusableEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IMachineEvent wrapper

QString CMachineEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CMachineEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CMachineEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CMachineEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CMachineEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IMachineStateChangedEvent wrapper

KMachineState CMachineStateChangedEvent::GetState() const
{
    KMachineState aState = (KMachineState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KMachineState, MachineState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

QString CMachineStateChangedEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CMachineStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CMachineStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CMachineStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CMachineStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IMachineDataChangedEvent wrapper

BOOL CMachineDataChangedEvent::GetTemporary() const
{
    BOOL aTemporary = FALSE;
    AssertReturn(ptr(), aTemporary);
    mRC = ptr()->COMGETTER(Temporary)(&aTemporary);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aTemporary;
}

QString CMachineDataChangedEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CMachineDataChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CMachineDataChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CMachineDataChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CMachineDataChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineDataChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IMediumRegisteredEvent wrapper

QString CMediumRegisteredEvent::GetMediumId() const
{
    QString aMediumId;
    AssertReturn(ptr(), aMediumId);
    mRC = ptr()->COMGETTER(MediumId)(BSTROut(aMediumId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMediumId;
}

KDeviceType CMediumRegisteredEvent::GetMediumType() const
{
    KDeviceType aMediumType = (KDeviceType) 0;
    AssertReturn(ptr(), aMediumType);
    mRC = ptr()->COMGETTER(MediumType)(ENUMOut<KDeviceType, DeviceType_T>(aMediumType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMediumType;
}

BOOL CMediumRegisteredEvent::GetRegistered() const
{
    BOOL aRegistered = FALSE;
    AssertReturn(ptr(), aRegistered);
    mRC = ptr()->COMGETTER(Registered)(&aRegistered);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRegistered;
}

KVBoxEventType CMediumRegisteredEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CMediumRegisteredEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CMediumRegisteredEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CMediumRegisteredEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMediumRegisteredEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IMachineRegisteredEvent wrapper

BOOL CMachineRegisteredEvent::GetRegistered() const
{
    BOOL aRegistered = FALSE;
    AssertReturn(ptr(), aRegistered);
    mRC = ptr()->COMGETTER(Registered)(&aRegistered);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRegistered;
}

QString CMachineRegisteredEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CMachineRegisteredEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CMachineRegisteredEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CMachineRegisteredEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CMachineRegisteredEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMachineRegisteredEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ISessionStateChangedEvent wrapper

KSessionState CSessionStateChangedEvent::GetState() const
{
    KSessionState aState = (KSessionState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KSessionState, SessionState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

QString CSessionStateChangedEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CSessionStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CSessionStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CSessionStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CSessionStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CSessionStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestPropertyChangedEvent wrapper

QString CGuestPropertyChangedEvent::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CGuestPropertyChangedEvent::GetValue() const
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->COMGETTER(Value)(BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

QString CGuestPropertyChangedEvent::GetFlags() const
{
    QString aFlags;
    AssertReturn(ptr(), aFlags);
    mRC = ptr()->COMGETTER(Flags)(BSTROut(aFlags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFlags;
}

QString CGuestPropertyChangedEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CGuestPropertyChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestPropertyChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestPropertyChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestPropertyChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestPropertyChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ISnapshotEvent wrapper

QString CSnapshotEvent::GetSnapshotId() const
{
    QString aSnapshotId;
    AssertReturn(ptr(), aSnapshotId);
    mRC = ptr()->COMGETTER(SnapshotId)(BSTROut(aSnapshotId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSnapshotId;
}

QString CSnapshotEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CSnapshotEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CSnapshotEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CSnapshotEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CSnapshotEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CSnapshotEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ISnapshotTakenEvent wrapper

QString CSnapshotTakenEvent::GetSnapshotId() const
{
    QString aSnapshotId;
    AssertReturn(ptr(), aSnapshotId);
    mRC = ptr()->COMGETTER(SnapshotId)(BSTROut(aSnapshotId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSnapshotId;
}

QString CSnapshotTakenEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CSnapshotTakenEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CSnapshotTakenEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CSnapshotTakenEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CSnapshotTakenEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CSnapshotTakenEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ISnapshotDeletedEvent wrapper

QString CSnapshotDeletedEvent::GetSnapshotId() const
{
    QString aSnapshotId;
    AssertReturn(ptr(), aSnapshotId);
    mRC = ptr()->COMGETTER(SnapshotId)(BSTROut(aSnapshotId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSnapshotId;
}

QString CSnapshotDeletedEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CSnapshotDeletedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CSnapshotDeletedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CSnapshotDeletedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CSnapshotDeletedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CSnapshotDeletedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ISnapshotChangedEvent wrapper

QString CSnapshotChangedEvent::GetSnapshotId() const
{
    QString aSnapshotId;
    AssertReturn(ptr(), aSnapshotId);
    mRC = ptr()->COMGETTER(SnapshotId)(BSTROut(aSnapshotId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSnapshotId;
}

QString CSnapshotChangedEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CSnapshotChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CSnapshotChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CSnapshotChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CSnapshotChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CSnapshotChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IMousePointerShapeChangedEvent wrapper

BOOL CMousePointerShapeChangedEvent::GetVisible() const
{
    BOOL aVisible = FALSE;
    AssertReturn(ptr(), aVisible);
    mRC = ptr()->COMGETTER(Visible)(&aVisible);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aVisible;
}

BOOL CMousePointerShapeChangedEvent::GetAlpha() const
{
    BOOL aAlpha = FALSE;
    AssertReturn(ptr(), aAlpha);
    mRC = ptr()->COMGETTER(Alpha)(&aAlpha);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAlpha;
}

ULONG CMousePointerShapeChangedEvent::GetXhot() const
{
    ULONG aXhot = 0;
    AssertReturn(ptr(), aXhot);
    mRC = ptr()->COMGETTER(Xhot)(&aXhot);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aXhot;
}

ULONG CMousePointerShapeChangedEvent::GetYhot() const
{
    ULONG aYhot = 0;
    AssertReturn(ptr(), aYhot);
    mRC = ptr()->COMGETTER(Yhot)(&aYhot);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aYhot;
}

ULONG CMousePointerShapeChangedEvent::GetWidth() const
{
    ULONG aWidth = 0;
    AssertReturn(ptr(), aWidth);
    mRC = ptr()->COMGETTER(Width)(&aWidth);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWidth;
}

ULONG CMousePointerShapeChangedEvent::GetHeight() const
{
    ULONG aHeight = 0;
    AssertReturn(ptr(), aHeight);
    mRC = ptr()->COMGETTER(Height)(&aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHeight;
}

QVector<BYTE> CMousePointerShapeChangedEvent::GetShape() const
{
    QVector<BYTE> aShape;
    AssertReturn(ptr(), aShape);
    com::SafeArray <BYTE> shape;
    mRC = ptr()->COMGETTER(Shape)(ComSafeArrayAsOutParam(shape));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(shape, aShape);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aShape;
}

KVBoxEventType CMousePointerShapeChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CMousePointerShapeChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CMousePointerShapeChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CMousePointerShapeChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMousePointerShapeChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IMouseCapabilityChangedEvent wrapper

BOOL CMouseCapabilityChangedEvent::GetSupportsAbsolute() const
{
    BOOL aSupportsAbsolute = FALSE;
    AssertReturn(ptr(), aSupportsAbsolute);
    mRC = ptr()->COMGETTER(SupportsAbsolute)(&aSupportsAbsolute);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSupportsAbsolute;
}

BOOL CMouseCapabilityChangedEvent::GetSupportsRelative() const
{
    BOOL aSupportsRelative = FALSE;
    AssertReturn(ptr(), aSupportsRelative);
    mRC = ptr()->COMGETTER(SupportsRelative)(&aSupportsRelative);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSupportsRelative;
}

BOOL CMouseCapabilityChangedEvent::GetSupportsMultiTouch() const
{
    BOOL aSupportsMultiTouch = FALSE;
    AssertReturn(ptr(), aSupportsMultiTouch);
    mRC = ptr()->COMGETTER(SupportsMultiTouch)(&aSupportsMultiTouch);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSupportsMultiTouch;
}

BOOL CMouseCapabilityChangedEvent::GetNeedsHostCursor() const
{
    BOOL aNeedsHostCursor = FALSE;
    AssertReturn(ptr(), aNeedsHostCursor);
    mRC = ptr()->COMGETTER(NeedsHostCursor)(&aNeedsHostCursor);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNeedsHostCursor;
}

KVBoxEventType CMouseCapabilityChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CMouseCapabilityChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CMouseCapabilityChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CMouseCapabilityChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMouseCapabilityChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IKeyboardLedsChangedEvent wrapper

BOOL CKeyboardLedsChangedEvent::GetNumLock() const
{
    BOOL aNumLock = FALSE;
    AssertReturn(ptr(), aNumLock);
    mRC = ptr()->COMGETTER(NumLock)(&aNumLock);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNumLock;
}

BOOL CKeyboardLedsChangedEvent::GetCapsLock() const
{
    BOOL aCapsLock = FALSE;
    AssertReturn(ptr(), aCapsLock);
    mRC = ptr()->COMGETTER(CapsLock)(&aCapsLock);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCapsLock;
}

BOOL CKeyboardLedsChangedEvent::GetScrollLock() const
{
    BOOL aScrollLock = FALSE;
    AssertReturn(ptr(), aScrollLock);
    mRC = ptr()->COMGETTER(ScrollLock)(&aScrollLock);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aScrollLock;
}

KVBoxEventType CKeyboardLedsChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CKeyboardLedsChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CKeyboardLedsChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CKeyboardLedsChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CKeyboardLedsChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IStateChangedEvent wrapper

KMachineState CStateChangedEvent::GetState() const
{
    KMachineState aState = (KMachineState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KMachineState, MachineState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

KVBoxEventType CStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IAdditionsStateChangedEvent wrapper

KVBoxEventType CAdditionsStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CAdditionsStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CAdditionsStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CAdditionsStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CAdditionsStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// INetworkAdapterChangedEvent wrapper

CNetworkAdapter CNetworkAdapterChangedEvent::GetNetworkAdapter() const
{
    CNetworkAdapter aNetworkAdapter;
    AssertReturn(ptr(), aNetworkAdapter);
    INetworkAdapter* networkAdapterPtr = NULL;
    mRC = ptr()->COMGETTER(NetworkAdapter)(&networkAdapterPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aNetworkAdapter.setPtr(networkAdapterPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkAdapter;
}

KVBoxEventType CNetworkAdapterChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CNetworkAdapterChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CNetworkAdapterChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CNetworkAdapterChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNetworkAdapterChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ISerialPortChangedEvent wrapper

CSerialPort CSerialPortChangedEvent::GetSerialPort() const
{
    CSerialPort aSerialPort;
    AssertReturn(ptr(), aSerialPort);
    ISerialPort* serialPortPtr = NULL;
    mRC = ptr()->COMGETTER(SerialPort)(&serialPortPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSerialPort.setPtr(serialPortPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSerialPort;
}

KVBoxEventType CSerialPortChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CSerialPortChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CSerialPortChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CSerialPortChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CSerialPortChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IParallelPortChangedEvent wrapper

CParallelPort CParallelPortChangedEvent::GetParallelPort() const
{
    CParallelPort aParallelPort;
    AssertReturn(ptr(), aParallelPort);
    IParallelPort* parallelPortPtr = NULL;
    mRC = ptr()->COMGETTER(ParallelPort)(&parallelPortPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aParallelPort.setPtr(parallelPortPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aParallelPort;
}

KVBoxEventType CParallelPortChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CParallelPortChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CParallelPortChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CParallelPortChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CParallelPortChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IStorageControllerChangedEvent wrapper

KVBoxEventType CStorageControllerChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CStorageControllerChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CStorageControllerChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CStorageControllerChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CStorageControllerChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IMediumChangedEvent wrapper

CMediumAttachment CMediumChangedEvent::GetMediumAttachment() const
{
    CMediumAttachment aMediumAttachment;
    AssertReturn(ptr(), aMediumAttachment);
    IMediumAttachment* mediumAttachmentPtr = NULL;
    mRC = ptr()->COMGETTER(MediumAttachment)(&mediumAttachmentPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aMediumAttachment.setPtr(mediumAttachmentPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMediumAttachment;
}

KVBoxEventType CMediumChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CMediumChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CMediumChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CMediumChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CMediumChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IClipboardModeChangedEvent wrapper

KClipboardMode CClipboardModeChangedEvent::GetClipboardMode() const
{
    KClipboardMode aClipboardMode = (KClipboardMode) 0;
    AssertReturn(ptr(), aClipboardMode);
    mRC = ptr()->COMGETTER(ClipboardMode)(ENUMOut<KClipboardMode, ClipboardMode_T>(aClipboardMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aClipboardMode;
}

KVBoxEventType CClipboardModeChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CClipboardModeChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CClipboardModeChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CClipboardModeChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CClipboardModeChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IDragAndDropModeChangedEvent wrapper

KDragAndDropMode CDragAndDropModeChangedEvent::GetDragAndDropMode() const
{
    KDragAndDropMode aDragAndDropMode = (KDragAndDropMode) 0;
    AssertReturn(ptr(), aDragAndDropMode);
    mRC = ptr()->COMGETTER(DragAndDropMode)(ENUMOut<KDragAndDropMode, DragAndDropMode_T>(aDragAndDropMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDragAndDropMode;
}

KVBoxEventType CDragAndDropModeChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CDragAndDropModeChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CDragAndDropModeChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CDragAndDropModeChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CDragAndDropModeChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ICPUChangedEvent wrapper

ULONG CCPUChangedEvent::GetCPU() const
{
    ULONG aCPU = 0;
    AssertReturn(ptr(), aCPU);
    mRC = ptr()->COMGETTER(CPU)(&aCPU);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCPU;
}

BOOL CCPUChangedEvent::GetAdd() const
{
    BOOL aAdd = FALSE;
    AssertReturn(ptr(), aAdd);
    mRC = ptr()->COMGETTER(Add)(&aAdd);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdd;
}

KVBoxEventType CCPUChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CCPUChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CCPUChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CCPUChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CCPUChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ICPUExecutionCapChangedEvent wrapper

ULONG CCPUExecutionCapChangedEvent::GetExecutionCap() const
{
    ULONG aExecutionCap = 0;
    AssertReturn(ptr(), aExecutionCap);
    mRC = ptr()->COMGETTER(ExecutionCap)(&aExecutionCap);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aExecutionCap;
}

KVBoxEventType CCPUExecutionCapChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CCPUExecutionCapChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CCPUExecutionCapChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CCPUExecutionCapChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CCPUExecutionCapChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestKeyboardEvent wrapper

QVector<LONG> CGuestKeyboardEvent::GetScancodes() const
{
    QVector<LONG> aScancodes;
    AssertReturn(ptr(), aScancodes);
    com::SafeArray <LONG> scancodes;
    mRC = ptr()->COMGETTER(Scancodes)(ComSafeArrayAsOutParam(scancodes));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(scancodes, aScancodes);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aScancodes;
}

KVBoxEventType CGuestKeyboardEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestKeyboardEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestKeyboardEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestKeyboardEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestKeyboardEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestMouseEvent wrapper

KGuestMouseEventMode CGuestMouseEvent::GetMode() const
{
    KGuestMouseEventMode aMode = (KGuestMouseEventMode) 0;
    AssertReturn(ptr(), aMode);
    mRC = ptr()->COMGETTER(Mode)(ENUMOut<KGuestMouseEventMode, GuestMouseEventMode_T>(aMode));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMode;
}

LONG CGuestMouseEvent::GetX() const
{
    LONG aX = 0;
    AssertReturn(ptr(), aX);
    mRC = ptr()->COMGETTER(X)(&aX);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aX;
}

LONG CGuestMouseEvent::GetY() const
{
    LONG aY = 0;
    AssertReturn(ptr(), aY);
    mRC = ptr()->COMGETTER(Y)(&aY);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aY;
}

LONG CGuestMouseEvent::GetZ() const
{
    LONG aZ = 0;
    AssertReturn(ptr(), aZ);
    mRC = ptr()->COMGETTER(Z)(&aZ);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aZ;
}

LONG CGuestMouseEvent::GetW() const
{
    LONG aW = 0;
    AssertReturn(ptr(), aW);
    mRC = ptr()->COMGETTER(W)(&aW);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aW;
}

LONG CGuestMouseEvent::GetButtons() const
{
    LONG aButtons = 0;
    AssertReturn(ptr(), aButtons);
    mRC = ptr()->COMGETTER(Buttons)(&aButtons);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aButtons;
}

ULONG CGuestMouseEvent::GetGeneration() const
{
    ULONG aGeneration = 0;
    AssertReturn(ptr(), aGeneration);
    mRC = ptr()->COMGETTER(Generation)(&aGeneration);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGeneration;
}

KVBoxEventType CGuestMouseEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestMouseEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestMouseEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestMouseEvent::Reuse()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->Reuse();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

void CGuestMouseEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestMouseEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestMultiTouchEvent wrapper

LONG CGuestMultiTouchEvent::GetContactCount() const
{
    LONG aContactCount = 0;
    AssertReturn(ptr(), aContactCount);
    mRC = ptr()->COMGETTER(ContactCount)(&aContactCount);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aContactCount;
}

QVector<SHORT> CGuestMultiTouchEvent::GetXPositions() const
{
    QVector<SHORT> aXPositions;
    AssertReturn(ptr(), aXPositions);
    com::SafeArray <SHORT> xPositions;
    mRC = ptr()->COMGETTER(XPositions)(ComSafeArrayAsOutParam(xPositions));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(xPositions, aXPositions);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aXPositions;
}

QVector<SHORT> CGuestMultiTouchEvent::GetYPositions() const
{
    QVector<SHORT> aYPositions;
    AssertReturn(ptr(), aYPositions);
    com::SafeArray <SHORT> yPositions;
    mRC = ptr()->COMGETTER(YPositions)(ComSafeArrayAsOutParam(yPositions));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(yPositions, aYPositions);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aYPositions;
}

QVector<USHORT> CGuestMultiTouchEvent::GetContactIds() const
{
    QVector<USHORT> aContactIds;
    AssertReturn(ptr(), aContactIds);
    com::SafeArray <USHORT> contactIds;
    mRC = ptr()->COMGETTER(ContactIds)(ComSafeArrayAsOutParam(contactIds));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(contactIds, aContactIds);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aContactIds;
}

QVector<USHORT> CGuestMultiTouchEvent::GetContactFlags() const
{
    QVector<USHORT> aContactFlags;
    AssertReturn(ptr(), aContactFlags);
    com::SafeArray <USHORT> contactFlags;
    mRC = ptr()->COMGETTER(ContactFlags)(ComSafeArrayAsOutParam(contactFlags));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(contactFlags, aContactFlags);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aContactFlags;
}

ULONG CGuestMultiTouchEvent::GetScanTime() const
{
    ULONG aScanTime = 0;
    AssertReturn(ptr(), aScanTime);
    mRC = ptr()->COMGETTER(ScanTime)(&aScanTime);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aScanTime;
}

KVBoxEventType CGuestMultiTouchEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestMultiTouchEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestMultiTouchEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestMultiTouchEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestMultiTouchEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestSessionEvent wrapper

CGuestSession CGuestSessionEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestSessionEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestSessionEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestSessionEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestSessionEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestSessionEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestSessionStateChangedEvent wrapper

ULONG CGuestSessionStateChangedEvent::GetId() const
{
    ULONG aId = 0;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(&aId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

KGuestSessionStatus CGuestSessionStateChangedEvent::GetStatus() const
{
    KGuestSessionStatus aStatus = (KGuestSessionStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KGuestSessionStatus, GuestSessionStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

CVirtualBoxErrorInfo CGuestSessionStateChangedEvent::GetError() const
{
    CVirtualBoxErrorInfo aError;
    AssertReturn(ptr(), aError);
    IVirtualBoxErrorInfo* errorPtr = NULL;
    mRC = ptr()->COMGETTER(Error)(&errorPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aError.setPtr(errorPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aError;
}

CGuestSession CGuestSessionStateChangedEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestSessionStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestSessionStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestSessionStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestSessionStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestSessionStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestSessionRegisteredEvent wrapper

BOOL CGuestSessionRegisteredEvent::GetRegistered() const
{
    BOOL aRegistered = FALSE;
    AssertReturn(ptr(), aRegistered);
    mRC = ptr()->COMGETTER(Registered)(&aRegistered);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRegistered;
}

CGuestSession CGuestSessionRegisteredEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestSessionRegisteredEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestSessionRegisteredEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestSessionRegisteredEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestSessionRegisteredEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestSessionRegisteredEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestProcessEvent wrapper

CGuestProcess CGuestProcessEvent::GetProcess() const
{
    CGuestProcess aProcess;
    AssertReturn(ptr(), aProcess);
    IGuestProcess* processPtr = NULL;
    mRC = ptr()->COMGETTER(Process)(&processPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProcess.setPtr(processPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcess;
}

ULONG CGuestProcessEvent::GetPid() const
{
    ULONG aPid = 0;
    AssertReturn(ptr(), aPid);
    mRC = ptr()->COMGETTER(Pid)(&aPid);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPid;
}

CGuestSession CGuestProcessEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestProcessEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestProcessEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestProcessEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestProcessEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestProcessEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestProcessRegisteredEvent wrapper

BOOL CGuestProcessRegisteredEvent::GetRegistered() const
{
    BOOL aRegistered = FALSE;
    AssertReturn(ptr(), aRegistered);
    mRC = ptr()->COMGETTER(Registered)(&aRegistered);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRegistered;
}

CGuestProcess CGuestProcessRegisteredEvent::GetProcess() const
{
    CGuestProcess aProcess;
    AssertReturn(ptr(), aProcess);
    IGuestProcess* processPtr = NULL;
    mRC = ptr()->COMGETTER(Process)(&processPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProcess.setPtr(processPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcess;
}

ULONG CGuestProcessRegisteredEvent::GetPid() const
{
    ULONG aPid = 0;
    AssertReturn(ptr(), aPid);
    mRC = ptr()->COMGETTER(Pid)(&aPid);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPid;
}

CGuestSession CGuestProcessRegisteredEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestProcessRegisteredEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestProcessRegisteredEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestProcessRegisteredEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestProcessRegisteredEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestProcessRegisteredEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestProcessStateChangedEvent wrapper

KProcessStatus CGuestProcessStateChangedEvent::GetStatus() const
{
    KProcessStatus aStatus = (KProcessStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KProcessStatus, ProcessStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

CVirtualBoxErrorInfo CGuestProcessStateChangedEvent::GetError() const
{
    CVirtualBoxErrorInfo aError;
    AssertReturn(ptr(), aError);
    IVirtualBoxErrorInfo* errorPtr = NULL;
    mRC = ptr()->COMGETTER(Error)(&errorPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aError.setPtr(errorPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aError;
}

CGuestProcess CGuestProcessStateChangedEvent::GetProcess() const
{
    CGuestProcess aProcess;
    AssertReturn(ptr(), aProcess);
    IGuestProcess* processPtr = NULL;
    mRC = ptr()->COMGETTER(Process)(&processPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProcess.setPtr(processPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcess;
}

ULONG CGuestProcessStateChangedEvent::GetPid() const
{
    ULONG aPid = 0;
    AssertReturn(ptr(), aPid);
    mRC = ptr()->COMGETTER(Pid)(&aPid);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPid;
}

CGuestSession CGuestProcessStateChangedEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestProcessStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestProcessStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestProcessStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestProcessStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestProcessStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestProcessIOEvent wrapper

ULONG CGuestProcessIOEvent::GetHandle() const
{
    ULONG aHandle = 0;
    AssertReturn(ptr(), aHandle);
    mRC = ptr()->COMGETTER(Handle)(&aHandle);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHandle;
}

ULONG CGuestProcessIOEvent::GetProcessed() const
{
    ULONG aProcessed = 0;
    AssertReturn(ptr(), aProcessed);
    mRC = ptr()->COMGETTER(Processed)(&aProcessed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessed;
}

CGuestProcess CGuestProcessIOEvent::GetProcess() const
{
    CGuestProcess aProcess;
    AssertReturn(ptr(), aProcess);
    IGuestProcess* processPtr = NULL;
    mRC = ptr()->COMGETTER(Process)(&processPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProcess.setPtr(processPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcess;
}

ULONG CGuestProcessIOEvent::GetPid() const
{
    ULONG aPid = 0;
    AssertReturn(ptr(), aPid);
    mRC = ptr()->COMGETTER(Pid)(&aPid);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPid;
}

CGuestSession CGuestProcessIOEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestProcessIOEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestProcessIOEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestProcessIOEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestProcessIOEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestProcessIOEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestProcessInputNotifyEvent wrapper

KProcessInputStatus CGuestProcessInputNotifyEvent::GetStatus() const
{
    KProcessInputStatus aStatus = (KProcessInputStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KProcessInputStatus, ProcessInputStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

ULONG CGuestProcessInputNotifyEvent::GetHandle() const
{
    ULONG aHandle = 0;
    AssertReturn(ptr(), aHandle);
    mRC = ptr()->COMGETTER(Handle)(&aHandle);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHandle;
}

ULONG CGuestProcessInputNotifyEvent::GetProcessed() const
{
    ULONG aProcessed = 0;
    AssertReturn(ptr(), aProcessed);
    mRC = ptr()->COMGETTER(Processed)(&aProcessed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessed;
}

CGuestProcess CGuestProcessInputNotifyEvent::GetProcess() const
{
    CGuestProcess aProcess;
    AssertReturn(ptr(), aProcess);
    IGuestProcess* processPtr = NULL;
    mRC = ptr()->COMGETTER(Process)(&processPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProcess.setPtr(processPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcess;
}

ULONG CGuestProcessInputNotifyEvent::GetPid() const
{
    ULONG aPid = 0;
    AssertReturn(ptr(), aPid);
    mRC = ptr()->COMGETTER(Pid)(&aPid);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPid;
}

CGuestSession CGuestProcessInputNotifyEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestProcessInputNotifyEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestProcessInputNotifyEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestProcessInputNotifyEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestProcessInputNotifyEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestProcessInputNotifyEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestProcessOutputEvent wrapper

QVector<BYTE> CGuestProcessOutputEvent::GetData() const
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->COMGETTER(Data)(ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

ULONG CGuestProcessOutputEvent::GetHandle() const
{
    ULONG aHandle = 0;
    AssertReturn(ptr(), aHandle);
    mRC = ptr()->COMGETTER(Handle)(&aHandle);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHandle;
}

ULONG CGuestProcessOutputEvent::GetProcessed() const
{
    ULONG aProcessed = 0;
    AssertReturn(ptr(), aProcessed);
    mRC = ptr()->COMGETTER(Processed)(&aProcessed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessed;
}

CGuestProcess CGuestProcessOutputEvent::GetProcess() const
{
    CGuestProcess aProcess;
    AssertReturn(ptr(), aProcess);
    IGuestProcess* processPtr = NULL;
    mRC = ptr()->COMGETTER(Process)(&processPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aProcess.setPtr(processPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcess;
}

ULONG CGuestProcessOutputEvent::GetPid() const
{
    ULONG aPid = 0;
    AssertReturn(ptr(), aPid);
    mRC = ptr()->COMGETTER(Pid)(&aPid);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPid;
}

CGuestSession CGuestProcessOutputEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestProcessOutputEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestProcessOutputEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestProcessOutputEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestProcessOutputEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestProcessOutputEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestFileEvent wrapper

CGuestFile CGuestFileEvent::GetFile() const
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->COMGETTER(File)(&filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestSession CGuestFileEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestFileEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestFileEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestFileEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestFileEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestFileEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestFileRegisteredEvent wrapper

BOOL CGuestFileRegisteredEvent::GetRegistered() const
{
    BOOL aRegistered = FALSE;
    AssertReturn(ptr(), aRegistered);
    mRC = ptr()->COMGETTER(Registered)(&aRegistered);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRegistered;
}

CGuestFile CGuestFileRegisteredEvent::GetFile() const
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->COMGETTER(File)(&filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestSession CGuestFileRegisteredEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestFileRegisteredEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestFileRegisteredEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestFileRegisteredEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestFileRegisteredEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestFileRegisteredEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestFileStateChangedEvent wrapper

KFileStatus CGuestFileStateChangedEvent::GetStatus() const
{
    KFileStatus aStatus = (KFileStatus) 0;
    AssertReturn(ptr(), aStatus);
    mRC = ptr()->COMGETTER(Status)(ENUMOut<KFileStatus, FileStatus_T>(aStatus));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStatus;
}

CVirtualBoxErrorInfo CGuestFileStateChangedEvent::GetError() const
{
    CVirtualBoxErrorInfo aError;
    AssertReturn(ptr(), aError);
    IVirtualBoxErrorInfo* errorPtr = NULL;
    mRC = ptr()->COMGETTER(Error)(&errorPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aError.setPtr(errorPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aError;
}

CGuestFile CGuestFileStateChangedEvent::GetFile() const
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->COMGETTER(File)(&filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestSession CGuestFileStateChangedEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestFileStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestFileStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestFileStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestFileStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestFileStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestFileIOEvent wrapper

LONG64 CGuestFileIOEvent::GetOffset() const
{
    LONG64 aOffset = 0;
    AssertReturn(ptr(), aOffset);
    mRC = ptr()->COMGETTER(Offset)(&aOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOffset;
}

ULONG CGuestFileIOEvent::GetProcessed() const
{
    ULONG aProcessed = 0;
    AssertReturn(ptr(), aProcessed);
    mRC = ptr()->COMGETTER(Processed)(&aProcessed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessed;
}

CGuestFile CGuestFileIOEvent::GetFile() const
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->COMGETTER(File)(&filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestSession CGuestFileIOEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestFileIOEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestFileIOEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestFileIOEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestFileIOEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestFileIOEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestFileOffsetChangedEvent wrapper

LONG64 CGuestFileOffsetChangedEvent::GetOffset() const
{
    LONG64 aOffset = 0;
    AssertReturn(ptr(), aOffset);
    mRC = ptr()->COMGETTER(Offset)(&aOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOffset;
}

ULONG CGuestFileOffsetChangedEvent::GetProcessed() const
{
    ULONG aProcessed = 0;
    AssertReturn(ptr(), aProcessed);
    mRC = ptr()->COMGETTER(Processed)(&aProcessed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessed;
}

CGuestFile CGuestFileOffsetChangedEvent::GetFile() const
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->COMGETTER(File)(&filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestSession CGuestFileOffsetChangedEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestFileOffsetChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestFileOffsetChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestFileOffsetChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestFileOffsetChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestFileOffsetChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestFileReadEvent wrapper

QVector<BYTE> CGuestFileReadEvent::GetData() const
{
    QVector<BYTE> aData;
    AssertReturn(ptr(), aData);
    com::SafeArray <BYTE> data;
    mRC = ptr()->COMGETTER(Data)(ComSafeArrayAsOutParam(data));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(data, aData);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aData;
}

LONG64 CGuestFileReadEvent::GetOffset() const
{
    LONG64 aOffset = 0;
    AssertReturn(ptr(), aOffset);
    mRC = ptr()->COMGETTER(Offset)(&aOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOffset;
}

ULONG CGuestFileReadEvent::GetProcessed() const
{
    ULONG aProcessed = 0;
    AssertReturn(ptr(), aProcessed);
    mRC = ptr()->COMGETTER(Processed)(&aProcessed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessed;
}

CGuestFile CGuestFileReadEvent::GetFile() const
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->COMGETTER(File)(&filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestSession CGuestFileReadEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestFileReadEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestFileReadEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestFileReadEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestFileReadEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestFileReadEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestFileWriteEvent wrapper

LONG64 CGuestFileWriteEvent::GetOffset() const
{
    LONG64 aOffset = 0;
    AssertReturn(ptr(), aOffset);
    mRC = ptr()->COMGETTER(Offset)(&aOffset);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOffset;
}

ULONG CGuestFileWriteEvent::GetProcessed() const
{
    ULONG aProcessed = 0;
    AssertReturn(ptr(), aProcessed);
    mRC = ptr()->COMGETTER(Processed)(&aProcessed);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProcessed;
}

CGuestFile CGuestFileWriteEvent::GetFile() const
{
    CGuestFile aFile;
    AssertReturn(ptr(), aFile);
    IGuestFile* filePtr = NULL;
    mRC = ptr()->COMGETTER(File)(&filePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aFile.setPtr(filePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFile;
}

CGuestSession CGuestFileWriteEvent::GetSession() const
{
    CGuestSession aSession;
    AssertReturn(ptr(), aSession);
    IGuestSession* sessionPtr = NULL;
    mRC = ptr()->COMGETTER(Session)(&sessionPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSession.setPtr(sessionPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSession;
}

KVBoxEventType CGuestFileWriteEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestFileWriteEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestFileWriteEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestFileWriteEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestFileWriteEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IVRDEServerChangedEvent wrapper

KVBoxEventType CVRDEServerChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CVRDEServerChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CVRDEServerChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CVRDEServerChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVRDEServerChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IVRDEServerInfoChangedEvent wrapper

KVBoxEventType CVRDEServerInfoChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CVRDEServerInfoChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CVRDEServerInfoChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CVRDEServerInfoChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVRDEServerInfoChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IVideoCaptureChangedEvent wrapper

KVBoxEventType CVideoCaptureChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CVideoCaptureChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CVideoCaptureChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CVideoCaptureChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVideoCaptureChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IUSBControllerChangedEvent wrapper

KVBoxEventType CUSBControllerChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CUSBControllerChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CUSBControllerChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CUSBControllerChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CUSBControllerChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IUSBDeviceStateChangedEvent wrapper

CUSBDevice CUSBDeviceStateChangedEvent::GetDevice() const
{
    CUSBDevice aDevice;
    AssertReturn(ptr(), aDevice);
    IUSBDevice* devicePtr = NULL;
    mRC = ptr()->COMGETTER(Device)(&devicePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aDevice.setPtr(devicePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDevice;
}

BOOL CUSBDeviceStateChangedEvent::GetAttached() const
{
    BOOL aAttached = FALSE;
    AssertReturn(ptr(), aAttached);
    mRC = ptr()->COMGETTER(Attached)(&aAttached);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAttached;
}

CVirtualBoxErrorInfo CUSBDeviceStateChangedEvent::GetError() const
{
    CVirtualBoxErrorInfo aError;
    AssertReturn(ptr(), aError);
    IVirtualBoxErrorInfo* errorPtr = NULL;
    mRC = ptr()->COMGETTER(Error)(&errorPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aError.setPtr(errorPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aError;
}

KVBoxEventType CUSBDeviceStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CUSBDeviceStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CUSBDeviceStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CUSBDeviceStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CUSBDeviceStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ISharedFolderChangedEvent wrapper

KScope CSharedFolderChangedEvent::GetScope() const
{
    KScope aScope = (KScope) 0;
    AssertReturn(ptr(), aScope);
    mRC = ptr()->COMGETTER(Scope)(ENUMOut<KScope, Scope_T>(aScope));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aScope;
}

KVBoxEventType CSharedFolderChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CSharedFolderChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CSharedFolderChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CSharedFolderChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CSharedFolderChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IRuntimeErrorEvent wrapper

BOOL CRuntimeErrorEvent::GetFatal() const
{
    BOOL aFatal = FALSE;
    AssertReturn(ptr(), aFatal);
    mRC = ptr()->COMGETTER(Fatal)(&aFatal);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aFatal;
}

QString CRuntimeErrorEvent::GetId() const
{
    QString aId;
    AssertReturn(ptr(), aId);
    mRC = ptr()->COMGETTER(Id)(BSTROut(aId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aId;
}

QString CRuntimeErrorEvent::GetMessage() const
{
    QString aMessage;
    AssertReturn(ptr(), aMessage);
    mRC = ptr()->COMGETTER(Message)(BSTROut(aMessage));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMessage;
}

KVBoxEventType CRuntimeErrorEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CRuntimeErrorEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CRuntimeErrorEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CRuntimeErrorEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CRuntimeErrorEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IEventSourceChangedEvent wrapper

CEventListener CEventSourceChangedEvent::GetListener() const
{
    CEventListener aListener;
    AssertReturn(ptr(), aListener);
    IEventListener* listenerPtr = NULL;
    mRC = ptr()->COMGETTER(Listener)(&listenerPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aListener.setPtr(listenerPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aListener;
}

BOOL CEventSourceChangedEvent::GetAdd() const
{
    BOOL aAdd = FALSE;
    AssertReturn(ptr(), aAdd);
    mRC = ptr()->COMGETTER(Add)(&aAdd);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdd;
}

KVBoxEventType CEventSourceChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CEventSourceChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CEventSourceChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CEventSourceChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CEventSourceChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IExtraDataChangedEvent wrapper

QString CExtraDataChangedEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

QString CExtraDataChangedEvent::GetKey() const
{
    QString aKey;
    AssertReturn(ptr(), aKey);
    mRC = ptr()->COMGETTER(Key)(BSTROut(aKey));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aKey;
}

QString CExtraDataChangedEvent::GetValue() const
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->COMGETTER(Value)(BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

KVBoxEventType CExtraDataChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CExtraDataChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CExtraDataChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CExtraDataChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CExtraDataChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IVetoEvent wrapper

KVBoxEventType CVetoEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CVetoEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CVetoEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CVetoEvent::AddVeto(const QString & aReason)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddVeto(BSTRIn(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVetoEvent::IsVetoed()
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->IsVetoed(&aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

QVector<QString> CVetoEvent::GetVetos()
{
    QVector<QString> aResult;
    AssertReturn(ptr(), aResult);
    com::SafeArray <BSTR> result;
    mRC = ptr()->GetVetos(ComSafeArrayAsOutParam(result));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(result, aResult);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

void CVetoEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVetoEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IExtraDataCanChangeEvent wrapper

QString CExtraDataCanChangeEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

QString CExtraDataCanChangeEvent::GetKey() const
{
    QString aKey;
    AssertReturn(ptr(), aKey);
    mRC = ptr()->COMGETTER(Key)(BSTROut(aKey));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aKey;
}

QString CExtraDataCanChangeEvent::GetValue() const
{
    QString aValue;
    AssertReturn(ptr(), aValue);
    mRC = ptr()->COMGETTER(Value)(BSTROut(aValue));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aValue;
}

KVBoxEventType CExtraDataCanChangeEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CExtraDataCanChangeEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CExtraDataCanChangeEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CExtraDataCanChangeEvent::AddVeto(const QString & aReason)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddVeto(BSTRIn(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CExtraDataCanChangeEvent::IsVetoed()
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->IsVetoed(&aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

QVector<QString> CExtraDataCanChangeEvent::GetVetos()
{
    QVector<QString> aResult;
    AssertReturn(ptr(), aResult);
    com::SafeArray <BSTR> result;
    mRC = ptr()->GetVetos(ComSafeArrayAsOutParam(result));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(result, aResult);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

void CExtraDataCanChangeEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CExtraDataCanChangeEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// ICanShowWindowEvent wrapper

KVBoxEventType CCanShowWindowEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CCanShowWindowEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CCanShowWindowEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CCanShowWindowEvent::AddVeto(const QString & aReason)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->AddVeto(BSTRIn(aReason));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CCanShowWindowEvent::IsVetoed()
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->IsVetoed(&aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

QVector<QString> CCanShowWindowEvent::GetVetos()
{
    QVector<QString> aResult;
    AssertReturn(ptr(), aResult);
    com::SafeArray <BSTR> result;
    mRC = ptr()->GetVetos(ComSafeArrayAsOutParam(result));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    FromSafeArray(result, aResult);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

void CCanShowWindowEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CCanShowWindowEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IShowWindowEvent wrapper

LONG64 CShowWindowEvent::GetWinId() const
{
    LONG64 aWinId = 0;
    AssertReturn(ptr(), aWinId);
    mRC = ptr()->COMGETTER(WinId)(&aWinId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWinId;
}
void CShowWindowEvent::SetWinId(LONG64 aWinId)
{
    AssertReturnVoid(ptr());
    mRC = ptr()->COMSETTER(WinId)(aWinId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

KVBoxEventType CShowWindowEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CShowWindowEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CShowWindowEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CShowWindowEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CShowWindowEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// INATRedirectEvent wrapper

ULONG CNATRedirectEvent::GetSlot() const
{
    ULONG aSlot = 0;
    AssertReturn(ptr(), aSlot);
    mRC = ptr()->COMGETTER(Slot)(&aSlot);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSlot;
}

BOOL CNATRedirectEvent::GetRemove() const
{
    BOOL aRemove = FALSE;
    AssertReturn(ptr(), aRemove);
    mRC = ptr()->COMGETTER(Remove)(&aRemove);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRemove;
}

QString CNATRedirectEvent::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

KNATProtocol CNATRedirectEvent::GetProto() const
{
    KNATProtocol aProto = (KNATProtocol) 0;
    AssertReturn(ptr(), aProto);
    mRC = ptr()->COMGETTER(Proto)(ENUMOut<KNATProtocol, NATProtocol_T>(aProto));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProto;
}

QString CNATRedirectEvent::GetHostIP() const
{
    QString aHostIP;
    AssertReturn(ptr(), aHostIP);
    mRC = ptr()->COMGETTER(HostIP)(BSTROut(aHostIP));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostIP;
}

LONG CNATRedirectEvent::GetHostPort() const
{
    LONG aHostPort = 0;
    AssertReturn(ptr(), aHostPort);
    mRC = ptr()->COMGETTER(HostPort)(&aHostPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostPort;
}

QString CNATRedirectEvent::GetGuestIP() const
{
    QString aGuestIP;
    AssertReturn(ptr(), aGuestIP);
    mRC = ptr()->COMGETTER(GuestIP)(BSTROut(aGuestIP));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestIP;
}

LONG CNATRedirectEvent::GetGuestPort() const
{
    LONG aGuestPort = 0;
    AssertReturn(ptr(), aGuestPort);
    mRC = ptr()->COMGETTER(GuestPort)(&aGuestPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestPort;
}

QString CNATRedirectEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CNATRedirectEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CNATRedirectEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CNATRedirectEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CNATRedirectEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATRedirectEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IHostPCIDevicePlugEvent wrapper

BOOL CHostPCIDevicePlugEvent::GetPlugged() const
{
    BOOL aPlugged = FALSE;
    AssertReturn(ptr(), aPlugged);
    mRC = ptr()->COMGETTER(Plugged)(&aPlugged);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aPlugged;
}

BOOL CHostPCIDevicePlugEvent::GetSuccess() const
{
    BOOL aSuccess = FALSE;
    AssertReturn(ptr(), aSuccess);
    mRC = ptr()->COMGETTER(Success)(&aSuccess);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSuccess;
}

CPCIDeviceAttachment CHostPCIDevicePlugEvent::GetAttachment() const
{
    CPCIDeviceAttachment aAttachment;
    AssertReturn(ptr(), aAttachment);
    IPCIDeviceAttachment* attachmentPtr = NULL;
    mRC = ptr()->COMGETTER(Attachment)(&attachmentPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aAttachment.setPtr(attachmentPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAttachment;
}

QString CHostPCIDevicePlugEvent::GetMessage() const
{
    QString aMessage;
    AssertReturn(ptr(), aMessage);
    mRC = ptr()->COMGETTER(Message)(BSTROut(aMessage));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMessage;
}

QString CHostPCIDevicePlugEvent::GetMachineId() const
{
    QString aMachineId;
    AssertReturn(ptr(), aMachineId);
    mRC = ptr()->COMGETTER(MachineId)(BSTROut(aMachineId));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aMachineId;
}

KVBoxEventType CHostPCIDevicePlugEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CHostPCIDevicePlugEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CHostPCIDevicePlugEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CHostPCIDevicePlugEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CHostPCIDevicePlugEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IVBoxSVCAvailabilityChangedEvent wrapper

BOOL CVBoxSVCAvailabilityChangedEvent::GetAvailable() const
{
    BOOL aAvailable = FALSE;
    AssertReturn(ptr(), aAvailable);
    mRC = ptr()->COMGETTER(Available)(&aAvailable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAvailable;
}

KVBoxEventType CVBoxSVCAvailabilityChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CVBoxSVCAvailabilityChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CVBoxSVCAvailabilityChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CVBoxSVCAvailabilityChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CVBoxSVCAvailabilityChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IBandwidthGroupChangedEvent wrapper

CBandwidthGroup CBandwidthGroupChangedEvent::GetBandwidthGroup() const
{
    CBandwidthGroup aBandwidthGroup;
    AssertReturn(ptr(), aBandwidthGroup);
    IBandwidthGroup* bandwidthGroupPtr = NULL;
    mRC = ptr()->COMGETTER(BandwidthGroup)(&bandwidthGroupPtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aBandwidthGroup.setPtr(bandwidthGroupPtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aBandwidthGroup;
}

KVBoxEventType CBandwidthGroupChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CBandwidthGroupChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CBandwidthGroupChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CBandwidthGroupChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CBandwidthGroupChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestMonitorChangedEvent wrapper

KGuestMonitorChangedEventType CGuestMonitorChangedEvent::GetChangeType() const
{
    KGuestMonitorChangedEventType aChangeType = (KGuestMonitorChangedEventType) 0;
    AssertReturn(ptr(), aChangeType);
    mRC = ptr()->COMGETTER(ChangeType)(ENUMOut<KGuestMonitorChangedEventType, GuestMonitorChangedEventType_T>(aChangeType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aChangeType;
}

ULONG CGuestMonitorChangedEvent::GetScreenId() const
{
    ULONG aScreenId = 0;
    AssertReturn(ptr(), aScreenId);
    mRC = ptr()->COMGETTER(ScreenId)(&aScreenId);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aScreenId;
}

ULONG CGuestMonitorChangedEvent::GetOriginX() const
{
    ULONG aOriginX = 0;
    AssertReturn(ptr(), aOriginX);
    mRC = ptr()->COMGETTER(OriginX)(&aOriginX);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOriginX;
}

ULONG CGuestMonitorChangedEvent::GetOriginY() const
{
    ULONG aOriginY = 0;
    AssertReturn(ptr(), aOriginY);
    mRC = ptr()->COMGETTER(OriginY)(&aOriginY);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aOriginY;
}

ULONG CGuestMonitorChangedEvent::GetWidth() const
{
    ULONG aWidth = 0;
    AssertReturn(ptr(), aWidth);
    mRC = ptr()->COMGETTER(Width)(&aWidth);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWidth;
}

ULONG CGuestMonitorChangedEvent::GetHeight() const
{
    ULONG aHeight = 0;
    AssertReturn(ptr(), aHeight);
    mRC = ptr()->COMGETTER(Height)(&aHeight);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHeight;
}

KVBoxEventType CGuestMonitorChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestMonitorChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestMonitorChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestMonitorChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestMonitorChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IGuestUserStateChangedEvent wrapper

QString CGuestUserStateChangedEvent::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

QString CGuestUserStateChangedEvent::GetDomain() const
{
    QString aDomain;
    AssertReturn(ptr(), aDomain);
    mRC = ptr()->COMGETTER(Domain)(BSTROut(aDomain));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aDomain;
}

KGuestUserState CGuestUserStateChangedEvent::GetState() const
{
    KGuestUserState aState = (KGuestUserState) 0;
    AssertReturn(ptr(), aState);
    mRC = ptr()->COMGETTER(State)(ENUMOut<KGuestUserState, GuestUserState_T>(aState));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aState;
}

QString CGuestUserStateChangedEvent::GetStateDetails() const
{
    QString aStateDetails;
    AssertReturn(ptr(), aStateDetails);
    mRC = ptr()->COMGETTER(StateDetails)(BSTROut(aStateDetails));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStateDetails;
}

KVBoxEventType CGuestUserStateChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CGuestUserStateChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CGuestUserStateChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CGuestUserStateChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CGuestUserStateChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IStorageDeviceChangedEvent wrapper

CMediumAttachment CStorageDeviceChangedEvent::GetStorageDevice() const
{
    CMediumAttachment aStorageDevice;
    AssertReturn(ptr(), aStorageDevice);
    IMediumAttachment* storageDevicePtr = NULL;
    mRC = ptr()->COMGETTER(StorageDevice)(&storageDevicePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aStorageDevice.setPtr(storageDevicePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStorageDevice;
}

BOOL CStorageDeviceChangedEvent::GetRemoved() const
{
    BOOL aRemoved = FALSE;
    AssertReturn(ptr(), aRemoved);
    mRC = ptr()->COMGETTER(Removed)(&aRemoved);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aRemoved;
}

BOOL CStorageDeviceChangedEvent::GetSilent() const
{
    BOOL aSilent = FALSE;
    AssertReturn(ptr(), aSilent);
    mRC = ptr()->COMGETTER(Silent)(&aSilent);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSilent;
}

KVBoxEventType CStorageDeviceChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CStorageDeviceChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CStorageDeviceChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CStorageDeviceChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CStorageDeviceChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// INATNetworkChangedEvent wrapper

QString CNATNetworkChangedEvent::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}

KVBoxEventType CNATNetworkChangedEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CNATNetworkChangedEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CNATNetworkChangedEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CNATNetworkChangedEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetworkChangedEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// INATNetworkStartStopEvent wrapper

BOOL CNATNetworkStartStopEvent::GetStartEvent() const
{
    BOOL aStartEvent = FALSE;
    AssertReturn(ptr(), aStartEvent);
    mRC = ptr()->COMGETTER(StartEvent)(&aStartEvent);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aStartEvent;
}

QString CNATNetworkStartStopEvent::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}

KVBoxEventType CNATNetworkStartStopEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CNATNetworkStartStopEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CNATNetworkStartStopEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CNATNetworkStartStopEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetworkStartStopEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// INATNetworkAlterEvent wrapper

QString CNATNetworkAlterEvent::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}

KVBoxEventType CNATNetworkAlterEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CNATNetworkAlterEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CNATNetworkAlterEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CNATNetworkAlterEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetworkAlterEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// INATNetworkCreationDeletionEvent wrapper

BOOL CNATNetworkCreationDeletionEvent::GetCreationEvent() const
{
    BOOL aCreationEvent = FALSE;
    AssertReturn(ptr(), aCreationEvent);
    mRC = ptr()->COMGETTER(CreationEvent)(&aCreationEvent);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCreationEvent;
}

QString CNATNetworkCreationDeletionEvent::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}

KVBoxEventType CNATNetworkCreationDeletionEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CNATNetworkCreationDeletionEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CNATNetworkCreationDeletionEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CNATNetworkCreationDeletionEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetworkCreationDeletionEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// INATNetworkSettingEvent wrapper

BOOL CNATNetworkSettingEvent::GetEnabled() const
{
    BOOL aEnabled = FALSE;
    AssertReturn(ptr(), aEnabled);
    mRC = ptr()->COMGETTER(Enabled)(&aEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aEnabled;
}

QString CNATNetworkSettingEvent::GetNetwork() const
{
    QString aNetwork;
    AssertReturn(ptr(), aNetwork);
    mRC = ptr()->COMGETTER(Network)(BSTROut(aNetwork));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetwork;
}

QString CNATNetworkSettingEvent::GetGateway() const
{
    QString aGateway;
    AssertReturn(ptr(), aGateway);
    mRC = ptr()->COMGETTER(Gateway)(BSTROut(aGateway));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGateway;
}

BOOL CNATNetworkSettingEvent::GetAdvertiseDefaultIPv6RouteEnabled() const
{
    BOOL aAdvertiseDefaultIPv6RouteEnabled = FALSE;
    AssertReturn(ptr(), aAdvertiseDefaultIPv6RouteEnabled);
    mRC = ptr()->COMGETTER(AdvertiseDefaultIPv6RouteEnabled)(&aAdvertiseDefaultIPv6RouteEnabled);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aAdvertiseDefaultIPv6RouteEnabled;
}

BOOL CNATNetworkSettingEvent::GetNeedDhcpServer() const
{
    BOOL aNeedDhcpServer = FALSE;
    AssertReturn(ptr(), aNeedDhcpServer);
    mRC = ptr()->COMGETTER(NeedDhcpServer)(&aNeedDhcpServer);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNeedDhcpServer;
}

QString CNATNetworkSettingEvent::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}

KVBoxEventType CNATNetworkSettingEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CNATNetworkSettingEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CNATNetworkSettingEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CNATNetworkSettingEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetworkSettingEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// INATNetworkPortForwardEvent wrapper

BOOL CNATNetworkPortForwardEvent::GetCreate() const
{
    BOOL aCreate = FALSE;
    AssertReturn(ptr(), aCreate);
    mRC = ptr()->COMGETTER(Create)(&aCreate);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aCreate;
}

BOOL CNATNetworkPortForwardEvent::GetIpv6() const
{
    BOOL aIpv6 = FALSE;
    AssertReturn(ptr(), aIpv6);
    mRC = ptr()->COMGETTER(Ipv6)(&aIpv6);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aIpv6;
}

QString CNATNetworkPortForwardEvent::GetName() const
{
    QString aName;
    AssertReturn(ptr(), aName);
    mRC = ptr()->COMGETTER(Name)(BSTROut(aName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aName;
}

KNATProtocol CNATNetworkPortForwardEvent::GetProto() const
{
    KNATProtocol aProto = (KNATProtocol) 0;
    AssertReturn(ptr(), aProto);
    mRC = ptr()->COMGETTER(Proto)(ENUMOut<KNATProtocol, NATProtocol_T>(aProto));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aProto;
}

QString CNATNetworkPortForwardEvent::GetHostIp() const
{
    QString aHostIp;
    AssertReturn(ptr(), aHostIp);
    mRC = ptr()->COMGETTER(HostIp)(BSTROut(aHostIp));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostIp;
}

LONG CNATNetworkPortForwardEvent::GetHostPort() const
{
    LONG aHostPort = 0;
    AssertReturn(ptr(), aHostPort);
    mRC = ptr()->COMGETTER(HostPort)(&aHostPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aHostPort;
}

QString CNATNetworkPortForwardEvent::GetGuestIp() const
{
    QString aGuestIp;
    AssertReturn(ptr(), aGuestIp);
    mRC = ptr()->COMGETTER(GuestIp)(BSTROut(aGuestIp));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestIp;
}

LONG CNATNetworkPortForwardEvent::GetGuestPort() const
{
    LONG aGuestPort = 0;
    AssertReturn(ptr(), aGuestPort);
    mRC = ptr()->COMGETTER(GuestPort)(&aGuestPort);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aGuestPort;
}

QString CNATNetworkPortForwardEvent::GetNetworkName() const
{
    QString aNetworkName;
    AssertReturn(ptr(), aNetworkName);
    mRC = ptr()->COMGETTER(NetworkName)(BSTROut(aNetworkName));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aNetworkName;
}

KVBoxEventType CNATNetworkPortForwardEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CNATNetworkPortForwardEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CNATNetworkPortForwardEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CNATNetworkPortForwardEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CNATNetworkPortForwardEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

// IHostNameResolutionConfigurationChangeEvent wrapper

KVBoxEventType CHostNameResolutionConfigurationChangeEvent::GetType() const
{
    KVBoxEventType aType = (KVBoxEventType) 0;
    AssertReturn(ptr(), aType);
    mRC = ptr()->COMGETTER(Type)(ENUMOut<KVBoxEventType, VBoxEventType_T>(aType));
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aType;
}

CEventSource CHostNameResolutionConfigurationChangeEvent::GetSource() const
{
    CEventSource aSource;
    AssertReturn(ptr(), aSource);
    IEventSource* sourcePtr = NULL;
    mRC = ptr()->COMGETTER(Source)(&sourcePtr);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    aSource.setPtr(sourcePtr);
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aSource;
}

BOOL CHostNameResolutionConfigurationChangeEvent::GetWaitable() const
{
    BOOL aWaitable = FALSE;
    AssertReturn(ptr(), aWaitable);
    mRC = ptr()->COMGETTER(Waitable)(&aWaitable);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aWaitable;
}

void CHostNameResolutionConfigurationChangeEvent::SetProcessed()
{
    AssertReturnVoid(ptr());
    mRC = ptr()->SetProcessed();
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
}

BOOL CHostNameResolutionConfigurationChangeEvent::WaitProcessed(LONG aTimeout)
{
    BOOL aResult = FALSE;
    AssertReturn(ptr(), aResult);
    mRC = ptr()->WaitProcessed(aTimeout, &aResult);
#ifdef RT_OS_WINDOWS
    Assert(mRC != RPC_E_WRONG_THREAD);
    Assert(mRC != CO_E_NOTINITIALIZED);
#endif
    if (RT_UNLIKELY(mRC != S_OK))
    {
        fetchErrorInfo(ptr(), &COM_IIDOF(Base::Iface));
    }
    return aResult;
}

