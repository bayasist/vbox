/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CMedium_h__
#define __CMedium_h__

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
class CMedium : public CInterface<IMedium, COMBaseWithEI>
{
public:

    typedef CInterface<IMedium, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CMedium() {}

    template<class OI, class OB> explicit CMedium(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CMedium(const CMedium & that) : Base(that) {}

    template<class OI> explicit CMedium(OI * aIface) { attach(aIface); }

    explicit CMedium(IMedium * aIface) : Base(aIface) {}

    template<class OI, class OB> CMedium & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CMedium & operator=(const CMedium & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CMedium & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CMedium & operator=(IMedium * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    QString GetId() const;
    QString GetDescription() const;
    void SetDescription(const QString & aDescription);
    KMediumState GetState() const;
    QVector<KMediumVariant> GetVariant() const;
    QString GetLocation() const;
    QString GetName() const;
    KDeviceType GetDeviceType() const;
    BOOL GetHostDrive() const;
    LONG64 GetSize() const;
    QString GetFormat() const;
    CMediumFormat GetMediumFormat() const;
    KMediumType GetType() const;
    void SetType(const KMediumType & aType);
    QVector<KMediumType> GetAllowedTypes() const;
    CMedium GetParent() const;
    QVector<CMedium> GetChildren() const;
    CMedium GetBase() const;
    BOOL GetReadOnly() const;
    LONG64 GetLogicalSize() const;
    BOOL GetAutoReset() const;
    void SetAutoReset(BOOL aAutoReset);
    QString GetLastAccessError() const;
    QVector<QString> GetMachineIds() const;

    /* Methods: */
    void SetIds(BOOL aSetImageId, QString aImageId, BOOL aSetParentId, QString aParentId);
    KMediumState RefreshState();
    QVector<QString> GetSnapshotIds(QString aMachineId);
    CToken LockRead();
    CToken LockWrite();
    void Close();
    QString GetProperty(const QString & aName) const;
    void SetProperty(const QString & aName, const QString & aValue);
    QVector<QString> GetProperties(const QString & aNames, QVector<QString> & aReturnNames) const;
    void SetProperties(const QVector<QString> & aNames, const QVector<QString> & aValues);
    CProgress CreateBaseStorage(LONG64 aLogicalSize, const QVector<KMediumVariant> & aVariant);
    CProgress DeleteStorage();
    CProgress CreateDiffStorage(const CMedium & aTarget, const QVector<KMediumVariant> & aVariant);
    CProgress MergeTo(const CMedium & aTarget);
    CProgress CloneTo(const CMedium & aTarget, const QVector<KMediumVariant> & aVariant, const CMedium & aParent);
    CProgress CloneToBase(const CMedium & aTarget, const QVector<KMediumVariant> & aVariant);
    CProgress SetLocation(const QString & aLocation);
    CProgress Compact();
    CProgress Resize(LONG64 aLogicalSize);
    CProgress Reset();

    /* Friend wrappers: */
    friend class CUnknown;
    friend class CVirtualBox;
    friend class CMachine;
    friend class CHost;
    friend class CMediumAttachment;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CMedium)

/* Declare safe-array: */
typedef QVector<CMedium> CMediumVector;

#endif /* __CMedium_h__ */

