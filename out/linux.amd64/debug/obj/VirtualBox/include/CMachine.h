/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CMachine_h__
#define __CMachine_h__

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
class CMachine : public CInterface<IMachine, COMBaseWithEI>
{
public:

    typedef CInterface<IMachine, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CMachine() {}

    template<class OI, class OB> explicit CMachine(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CMachine(const CMachine & that) : Base(that) {}

    template<class OI> explicit CMachine(OI * aIface) { attach(aIface); }

    explicit CMachine(IMachine * aIface) : Base(aIface) {}

    template<class OI, class OB> CMachine & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CMachine & operator=(const CMachine & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CMachine & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CMachine & operator=(IMachine * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    CVirtualBox GetParent() const;
    QVector<BYTE> GetIcon() const;
    void SetIcon(const QVector<BYTE> & aIcon);
    BOOL GetAccessible() const;
    CVirtualBoxErrorInfo GetAccessError() const;
    QString GetName() const;
    void SetName(const QString & aName);
    QString GetDescription() const;
    void SetDescription(const QString & aDescription);
    QString GetId() const;
    QVector<QString> GetGroups() const;
    void SetGroups(const QVector<QString> & aGroups);
    QString GetOSTypeId() const;
    void SetOSTypeId(const QString & aOSTypeId);
    QString GetHardwareVersion() const;
    void SetHardwareVersion(const QString & aHardwareVersion);
    QString GetHardwareUUID() const;
    void SetHardwareUUID(QString aHardwareUUID);
    ULONG GetCPUCount() const;
    void SetCPUCount(ULONG aCPUCount);
    BOOL GetCPUHotPlugEnabled() const;
    void SetCPUHotPlugEnabled(BOOL aCPUHotPlugEnabled);
    ULONG GetCPUExecutionCap() const;
    void SetCPUExecutionCap(ULONG aCPUExecutionCap);
    ULONG GetMemorySize() const;
    void SetMemorySize(ULONG aMemorySize);
    ULONG GetMemoryBalloonSize() const;
    void SetMemoryBalloonSize(ULONG aMemoryBalloonSize);
    BOOL GetPageFusionEnabled() const;
    void SetPageFusionEnabled(BOOL aPageFusionEnabled);
    KGraphicsControllerType GetGraphicsControllerType() const;
    void SetGraphicsControllerType(const KGraphicsControllerType & aGraphicsControllerType);
    ULONG GetVRAMSize() const;
    void SetVRAMSize(ULONG aVRAMSize);
    BOOL GetAccelerate3DEnabled() const;
    void SetAccelerate3DEnabled(BOOL aAccelerate3DEnabled);
    BOOL GetAccelerate2DVideoEnabled() const;
    void SetAccelerate2DVideoEnabled(BOOL aAccelerate2DVideoEnabled);
    ULONG GetMonitorCount() const;
    void SetMonitorCount(ULONG aMonitorCount);
    BOOL GetVideoCaptureEnabled() const;
    void SetVideoCaptureEnabled(BOOL aVideoCaptureEnabled);
    QVector<BOOL> GetVideoCaptureScreens() const;
    void SetVideoCaptureScreens(const QVector<BOOL> & aVideoCaptureScreens);
    QString GetVideoCaptureFile() const;
    void SetVideoCaptureFile(const QString & aVideoCaptureFile);
    ULONG GetVideoCaptureWidth() const;
    void SetVideoCaptureWidth(ULONG aVideoCaptureWidth);
    ULONG GetVideoCaptureHeight() const;
    void SetVideoCaptureHeight(ULONG aVideoCaptureHeight);
    ULONG GetVideoCaptureRate() const;
    void SetVideoCaptureRate(ULONG aVideoCaptureRate);
    ULONG GetVideoCaptureFPS() const;
    void SetVideoCaptureFPS(ULONG aVideoCaptureFPS);
    CBIOSSettings GetBIOSSettings() const;
    KFirmwareType GetFirmwareType() const;
    void SetFirmwareType(const KFirmwareType & aFirmwareType);
    KPointingHIDType GetPointingHIDType() const;
    void SetPointingHIDType(const KPointingHIDType & aPointingHIDType);
    KKeyboardHIDType GetKeyboardHIDType() const;
    void SetKeyboardHIDType(const KKeyboardHIDType & aKeyboardHIDType);
    BOOL GetHPETEnabled() const;
    void SetHPETEnabled(BOOL aHPETEnabled);
    KChipsetType GetChipsetType() const;
    void SetChipsetType(const KChipsetType & aChipsetType);
    QString GetSnapshotFolder() const;
    void SetSnapshotFolder(const QString & aSnapshotFolder);
    CVRDEServer GetVRDEServer() const;
    BOOL GetEmulatedUSBCardReaderEnabled() const;
    void SetEmulatedUSBCardReaderEnabled(BOOL aEmulatedUSBCardReaderEnabled);
    QVector<CMediumAttachment> GetMediumAttachments() const;
    QVector<CUSBController> GetUSBControllers() const;
    CUSBDeviceFilters GetUSBDeviceFilters() const;
    CAudioAdapter GetAudioAdapter() const;
    QVector<CStorageController> GetStorageControllers() const;
    QString GetSettingsFilePath() const;
    BOOL GetSettingsModified() const;
    KSessionState GetSessionState() const;
    QString GetSessionType() const;
    ULONG GetSessionPID() const;
    KMachineState GetState() const;
    LONG64 GetLastStateChange() const;
    QString GetStateFilePath() const;
    QString GetLogFolder() const;
    CSnapshot GetCurrentSnapshot() const;
    ULONG GetSnapshotCount() const;
    BOOL GetCurrentStateModified() const;
    QVector<CSharedFolder> GetSharedFolders() const;
    KClipboardMode GetClipboardMode() const;
    void SetClipboardMode(const KClipboardMode & aClipboardMode);
    KDragAndDropMode GetDragAndDropMode() const;
    void SetDragAndDropMode(const KDragAndDropMode & aDragAndDropMode);
    QString GetGuestPropertyNotificationPatterns() const;
    void SetGuestPropertyNotificationPatterns(const QString & aGuestPropertyNotificationPatterns);
    BOOL GetTeleporterEnabled() const;
    void SetTeleporterEnabled(BOOL aTeleporterEnabled);
    ULONG GetTeleporterPort() const;
    void SetTeleporterPort(ULONG aTeleporterPort);
    QString GetTeleporterAddress() const;
    void SetTeleporterAddress(const QString & aTeleporterAddress);
    QString GetTeleporterPassword() const;
    void SetTeleporterPassword(const QString & aTeleporterPassword);
    KFaultToleranceState GetFaultToleranceState() const;
    void SetFaultToleranceState(const KFaultToleranceState & aFaultToleranceState);
    ULONG GetFaultTolerancePort() const;
    void SetFaultTolerancePort(ULONG aFaultTolerancePort);
    QString GetFaultToleranceAddress() const;
    void SetFaultToleranceAddress(const QString & aFaultToleranceAddress);
    QString GetFaultTolerancePassword() const;
    void SetFaultTolerancePassword(const QString & aFaultTolerancePassword);
    ULONG GetFaultToleranceSyncInterval() const;
    void SetFaultToleranceSyncInterval(ULONG aFaultToleranceSyncInterval);
    BOOL GetRTCUseUTC() const;
    void SetRTCUseUTC(BOOL aRTCUseUTC);
    BOOL GetIOCacheEnabled() const;
    void SetIOCacheEnabled(BOOL aIOCacheEnabled);
    ULONG GetIOCacheSize() const;
    void SetIOCacheSize(ULONG aIOCacheSize);
    QVector<CPCIDeviceAttachment> GetPCIDeviceAssignments() const;
    CBandwidthControl GetBandwidthControl() const;
    BOOL GetTracingEnabled() const;
    void SetTracingEnabled(BOOL aTracingEnabled);
    QString GetTracingConfig() const;
    void SetTracingConfig(const QString & aTracingConfig);
    BOOL GetAllowTracingToAccessVM() const;
    void SetAllowTracingToAccessVM(BOOL aAllowTracingToAccessVM);
    BOOL GetAutostartEnabled() const;
    void SetAutostartEnabled(BOOL aAutostartEnabled);
    ULONG GetAutostartDelay() const;
    void SetAutostartDelay(ULONG aAutostartDelay);
    KAutostopType GetAutostopType() const;
    void SetAutostopType(const KAutostopType & aAutostopType);
    QString GetDefaultFrontend() const;
    void SetDefaultFrontend(const QString & aDefaultFrontend);
    BOOL GetUSBProxyAvailable() const;

    /* Methods: */
    void LockMachine(const CSession & aSession, const KLockType & aLockType);
    CProgress LaunchVMProcess(const CSession & aSession, const QString & aType, const QString & aEnvironment);
    void SetBootOrder(ULONG aPosition, const KDeviceType & aDevice);
    KDeviceType GetBootOrder(ULONG aPosition) const;
    void AttachDevice(const QString & aName, LONG aControllerPort, LONG aDevice, const KDeviceType & aType, const CMedium & aMedium);
    void AttachDeviceWithoutMedium(const QString & aName, LONG aControllerPort, LONG aDevice, const KDeviceType & aType);
    void DetachDevice(const QString & aName, LONG aControllerPort, LONG aDevice);
    void PassthroughDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aPassthrough);
    void TemporaryEjectDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aTemporaryEject);
    void NonRotationalDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aNonRotational);
    void SetAutoDiscardForDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aDiscard);
    void SetHotPluggableForDevice(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aHotPluggable);
    void SetBandwidthGroupForDevice(const QString & aName, LONG aControllerPort, LONG aDevice, const CBandwidthGroup & aBandwidthGroup);
    void SetNoBandwidthGroupForDevice(const QString & aName, LONG aControllerPort, LONG aDevice);
    void UnmountMedium(const QString & aName, LONG aControllerPort, LONG aDevice, BOOL aForce);
    void MountMedium(const QString & aName, LONG aControllerPort, LONG aDevice, const CMedium & aMedium, BOOL aForce);
    CMedium GetMedium(const QString & aName, LONG aControllerPort, LONG aDevice) const;
    QVector<CMediumAttachment> GetMediumAttachmentsOfController(const QString & aName) const;
    CMediumAttachment GetMediumAttachment(const QString & aName, LONG aControllerPort, LONG aDevice) const;
    void AttachHostPCIDevice(LONG aHostAddress, LONG aDesiredGuestAddress, BOOL aTryToUnbind);
    void DetachHostPCIDevice(LONG aHostAddress);
    CNetworkAdapter GetNetworkAdapter(ULONG aSlot) const;
    CStorageController AddStorageController(const QString & aName, const KStorageBus & aConnectionType);
    CStorageController GetStorageControllerByName(const QString & aName) const;
    CStorageController GetStorageControllerByInstance(ULONG aInstance) const;
    void RemoveStorageController(const QString & aName);
    void SetStorageControllerBootable(const QString & aName, BOOL aBootable);
    CUSBController AddUSBController(const QString & aName, const KUSBControllerType & aType);
    void RemoveUSBController(const QString & aName);
    CUSBController GetUSBControllerByName(const QString & aName) const;
    ULONG GetUSBControllerCountByType(const KUSBControllerType & aType) const;
    CSerialPort GetSerialPort(ULONG aSlot) const;
    CParallelPort GetParallelPort(ULONG aSlot) const;
    QVector<QString> GetExtraDataKeys();
    QString GetExtraData(const QString & aKey);
    void SetExtraData(const QString & aKey, const QString & aValue);
    BOOL GetCPUProperty(const KCPUPropertyType & aProperty) const;
    void SetCPUProperty(const KCPUPropertyType & aProperty, BOOL aValue);
    void GetCPUIDLeaf(ULONG aId, ULONG & aValEax, ULONG & aValEbx, ULONG & aValEcx, ULONG & aValEdx) const;
    void SetCPUIDLeaf(ULONG aId, ULONG aValEax, ULONG aValEbx, ULONG aValEcx, ULONG aValEdx);
    void RemoveCPUIDLeaf(ULONG aId);
    void RemoveAllCPUIDLeaves();
    BOOL GetHWVirtExProperty(const KHWVirtExPropertyType & aProperty) const;
    void SetHWVirtExProperty(const KHWVirtExPropertyType & aProperty, BOOL aValue);
    CProgress SetSettingsFilePath(const QString & aSettingsFilePath);
    void SaveSettings();
    void DiscardSettings();
    QVector<CMedium> Unregister(const KCleanupMode & aCleanupMode);
    CProgress DeleteConfig(const QVector<CMedium> & aMedia);
    CVirtualSystemDescription ExportTo(const CAppliance & aAppliance, const QString & aLocation);
    CSnapshot FindSnapshot(const QString & aNameOrId);
    void CreateSharedFolder(const QString & aName, const QString & aHostPath, BOOL aWritable, BOOL aAutomount);
    void RemoveSharedFolder(const QString & aName);
    BOOL CanShowConsoleWindow();
    LONG64 ShowConsoleWindow();
    void GetGuestProperty(const QString & aName, QString & aValue, LONG64 & aTimestamp, QString & aFlags) const;
    QString GetGuestPropertyValue(const QString & aProperty) const;
    LONG64 GetGuestPropertyTimestamp(const QString & aProperty) const;
    void SetGuestProperty(const QString & aProperty, const QString & aValue, const QString & aFlags);
    void SetGuestPropertyValue(const QString & aProperty, const QString & aValue);
    void DeleteGuestProperty(const QString & aName) const;
    void EnumerateGuestProperties(const QString & aPatterns, QVector<QString> & aNames, QVector<QString> & aValues, QVector<LONG64> & aTimestamps, QVector<QString> & aFlags) const;
    void QuerySavedGuestScreenInfo(ULONG aScreenId, ULONG & aOriginX, ULONG & aOriginY, ULONG & aWidth, ULONG & aHeight, BOOL & aEnabled) const;
    void QuerySavedThumbnailSize(ULONG aScreenId, ULONG & aSize, ULONG & aWidth, ULONG & aHeight);
    QVector<BYTE> ReadSavedThumbnailToArray(ULONG aScreenId, BOOL aBGR, ULONG & aWidth, ULONG & aHeight);
    QVector<BYTE> ReadSavedThumbnailPNGToArray(ULONG aScreenId, ULONG & aWidth, ULONG & aHeight);
    void QuerySavedScreenshotPNGSize(ULONG aScreenId, ULONG & aSize, ULONG & aWidth, ULONG & aHeight);
    QVector<BYTE> ReadSavedScreenshotPNGToArray(ULONG aScreenId, ULONG & aWidth, ULONG & aHeight);
    void HotPlugCPU(ULONG aCpu);
    void HotUnplugCPU(ULONG aCpu);
    BOOL GetCPUStatus(ULONG aCpu);
    QString QueryLogFilename(ULONG aIdx);
    QVector<BYTE> ReadLog(ULONG aIdx, LONG64 aOffset, LONG64 aSize);
    CProgress CloneTo(const CMachine & aTarget, const KCloneMode & aMode, const QVector<KCloneOptions> & aOptions);

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
    friend class CVirtualBox;
    friend class CConsole;
    friend class CSnapshot;
    friend class CInternalSessionControl;
    friend class CSession;
    friend class CVirtualBoxClient;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CMachine)

/* Declare safe-array: */
typedef QVector<CMachine> CMachineVector;

#endif /* __CMachine_h__ */

