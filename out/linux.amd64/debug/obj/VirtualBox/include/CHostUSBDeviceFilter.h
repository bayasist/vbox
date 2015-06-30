/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CHostUSBDeviceFilter_h__
#define __CHostUSBDeviceFilter_h__

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
class CHostUSBDeviceFilter : public CInterface<IHostUSBDeviceFilter, COMBaseWithEI>
{
public:

    typedef CInterface<IHostUSBDeviceFilter, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CHostUSBDeviceFilter() {}

    template<class OI, class OB> explicit CHostUSBDeviceFilter(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CHostUSBDeviceFilter(const CHostUSBDeviceFilter & that) : Base(that) {}

    template<class OI> explicit CHostUSBDeviceFilter(OI * aIface) { attach(aIface); }

    explicit CHostUSBDeviceFilter(IHostUSBDeviceFilter * aIface) : Base(aIface) {}

    template<class OI, class OB> CHostUSBDeviceFilter & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CHostUSBDeviceFilter & operator=(const CHostUSBDeviceFilter & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CHostUSBDeviceFilter & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CHostUSBDeviceFilter & operator=(IHostUSBDeviceFilter * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    KUSBDeviceFilterAction GetAction() const;
    void SetAction(const KUSBDeviceFilterAction & aAction);

    QString GetName() const;
    void SetName(const QString & aName);
    BOOL GetActive() const;
    void SetActive(BOOL aActive);
    QString GetVendorId() const;
    void SetVendorId(const QString & aVendorId);
    QString GetProductId() const;
    void SetProductId(const QString & aProductId);
    QString GetRevision() const;
    void SetRevision(const QString & aRevision);
    QString GetManufacturer() const;
    void SetManufacturer(const QString & aManufacturer);
    QString GetProduct() const;
    void SetProduct(const QString & aProduct);
    QString GetSerialNumber() const;
    void SetSerialNumber(const QString & aSerialNumber);
    QString GetPort() const;
    void SetPort(const QString & aPort);
    QString GetRemote() const;
    void SetRemote(const QString & aRemote);
    ULONG GetMaskedInterfaces() const;
    void SetMaskedInterfaces(ULONG aMaskedInterfaces);

    /* Methods: */
    /* Friend wrappers: */
    friend class CUnknown;
    friend class CHost;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CHostUSBDeviceFilter)

/* Declare safe-array: */
typedef QVector<CHostUSBDeviceFilter> CHostUSBDeviceFilterVector;

#endif /* __CHostUSBDeviceFilter_h__ */

