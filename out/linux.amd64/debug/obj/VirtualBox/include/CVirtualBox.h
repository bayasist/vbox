/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CVirtualBox_h__
#define __CVirtualBox_h__

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
class CVirtualBox : public CInterface<IVirtualBox, COMBaseWithEI>
{
public:

    typedef CInterface<IVirtualBox, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CVirtualBox() {}

    template<class OI, class OB> explicit CVirtualBox(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CVirtualBox(const CVirtualBox & that) : Base(that) {}

    template<class OI> explicit CVirtualBox(OI * aIface) { attach(aIface); }

    explicit CVirtualBox(IVirtualBox * aIface) : Base(aIface) {}

    template<class OI, class OB> CVirtualBox & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CVirtualBox & operator=(const CVirtualBox & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CVirtualBox & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CVirtualBox & operator=(IVirtualBox * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    QString GetVersion() const;
    QString GetVersionNormalized() const;
    ULONG GetRevision() const;
    QString GetPackageType() const;
    QString GetAPIVersion() const;
    QString GetHomeFolder() const;
    QString GetSettingsFilePath() const;
    CHost GetHost() const;
    CSystemProperties GetSystemProperties() const;
    QVector<CMachine> GetMachines() const;
    QVector<QString> GetMachineGroups() const;
    QVector<CMedium> GetHardDisks() const;
    QVector<CMedium> GetDVDImages() const;
    QVector<CMedium> GetFloppyImages() const;
    QVector<CProgress> GetProgressOperations() const;
    QVector<CGuestOSType> GetGuestOSTypes() const;
    QVector<CSharedFolder> GetSharedFolders() const;
    CPerformanceCollector GetPerformanceCollector() const;
    QVector<CDHCPServer> GetDHCPServers() const;
    QVector<CNATNetwork> GetNATNetworks() const;
    CEventSource GetEventSource() const;
    CExtPackManager GetExtensionPackManager() const;
    QVector<QString> GetInternalNetworks() const;
    QVector<QString> GetGenericNetworkDrivers() const;

    /* Methods: */
    QString ComposeMachineFilename(const QString & aName, const QString & aGroup, const QString & aCreateFlags, const QString & aBaseFolder);
    CMachine CreateMachine(const QString & aSettingsFile, const QString & aName, const QVector<QString> & aGroups, const QString & aOsTypeId, const QString & aFlags);
    CMachine OpenMachine(const QString & aSettingsFile);
    void RegisterMachine(const CMachine & aMachine);
    CMachine FindMachine(const QString & aNameOrId);
    QVector<CMachine> GetMachinesByGroups(const QVector<QString> & aGroups);
    QVector<KMachineState> GetMachineStates(const QVector<CMachine> & aMachines);
    CAppliance CreateAppliance();
    CMedium CreateHardDisk(const QString & aFormat, const QString & aLocation);
    CMedium OpenMedium(const QString & aLocation, const KDeviceType & aDeviceType, const KAccessMode & aAccessMode, BOOL aForceNewUuid);
    CGuestOSType GetGuestOSType(QString aId);
    void CreateSharedFolder(const QString & aName, const QString & aHostPath, BOOL aWritable, BOOL aAutomount);
    void RemoveSharedFolder(const QString & aName);
    QVector<QString> GetExtraDataKeys();
    QString GetExtraData(const QString & aKey);
    void SetExtraData(const QString & aKey, const QString & aValue);
    void SetSettingsSecret(const QString & aPassword);
    CDHCPServer CreateDHCPServer(const QString & aName);
    CDHCPServer FindDHCPServerByNetworkName(const QString & aName);
    void RemoveDHCPServer(const CDHCPServer & aServer);
    CNATNetwork CreateNATNetwork(const QString & aNetworkName);
    CNATNetwork FindNATNetworkByName(const QString & aNetworkName);
    void RemoveNATNetwork(const CNATNetwork & aNetwork);
    BOOL CheckFirmwarePresent(const KFirmwareType & aFirmwareType, const QString & aVersion, QString & aUrl, QString & aFile);

    /* ExtraData helpers: */
    void SetExtraDataBool(const QString &strKey, bool fValue);
    bool GetExtraDataBool(const QString &strKey, bool fDef = true);
    void SetExtraDataInt(const QString &strKey, int value);
    int GetExtraDataInt(const QString &strKey, int def = 0);
    void SetExtraDataRect(const QString &strKey, const QRect &value);
    QRect GetExtraDataRect(const QString &strKey, const QRect &def = QRect());
    void SetExtraDataStringList(const QString &strKey, const QStringList &value);
    QStringList GetExtraDataStringList(const QString &strKey, QStringList def = QStringList());
    void SetExtraDataIntList(const QString &strKey, const QList<int> &value);
    QList<int> GetExtraDataIntList(const QString &strKey, QList<int> def = QList<int>());

    /* Friend wrappers: */
    friend class CUnknown;
    friend class CMachine;
    friend class CWebsessionManager;
    friend class CVirtualBoxClient;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CVirtualBox)

#endif /* __CVirtualBox_h__ */

