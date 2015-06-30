/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CGuestSession_h__
#define __CGuestSession_h__

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
class CGuestSession : public CInterface<IGuestSession, COMBaseWithEI>
{
public:

    typedef CInterface<IGuestSession, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CGuestSession() {}

    template<class OI, class OB> explicit CGuestSession(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CGuestSession(const CGuestSession & that) : Base(that) {}

    template<class OI> explicit CGuestSession(OI * aIface) { attach(aIface); }

    explicit CGuestSession(IGuestSession * aIface) : Base(aIface) {}

    template<class OI, class OB> CGuestSession & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CGuestSession & operator=(const CGuestSession & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CGuestSession & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CGuestSession & operator=(IGuestSession * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    QString GetUser() const;
    QString GetDomain() const;
    QString GetName() const;
    ULONG GetId() const;
    ULONG GetTimeout() const;
    void SetTimeout(ULONG aTimeout);
    ULONG GetProtocolVersion() const;
    KGuestSessionStatus GetStatus() const;
    QVector<QString> GetEnvironment() const;
    void SetEnvironment(const QVector<QString> & aEnvironment);
    QVector<CGuestProcess> GetProcesses() const;
    QVector<CGuestDirectory> GetDirectories() const;
    QVector<CGuestFile> GetFiles() const;
    CEventSource GetEventSource() const;

    /* Methods: */
    void Close();
    CProgress CopyFrom(const QString & aSource, const QString & aDest, const QVector<KCopyFileFlag> & aFlags);
    CProgress CopyTo(const QString & aSource, const QString & aDest, const QVector<KCopyFileFlag> & aFlags);
    void DirectoryCreate(const QString & aPath, ULONG aMode, const QVector<KDirectoryCreateFlag> & aFlags);
    QString DirectoryCreateTemp(const QString & aTemplateName, ULONG aMode, const QString & aPath, BOOL aSecure);
    BOOL DirectoryExists(const QString & aPath);
    CGuestDirectory DirectoryOpen(const QString & aPath, const QString & aFilter, const QVector<KDirectoryOpenFlag> & aFlags);
    CGuestFsObjInfo DirectoryQueryInfo(const QString & aPath);
    void DirectoryRemove(const QString & aPath);
    CProgress DirectoryRemoveRecursive(const QString & aPath, const QVector<KDirectoryRemoveRecFlag> & aFlags);
    void DirectoryRename(const QString & aSource, const QString & aDest, const QVector<KPathRenameFlag> & aFlags);
    void DirectorySetACL(const QString & aPath, const QString & aAcl);
    void EnvironmentClear();
    QString EnvironmentGet(const QString & aName);
    void EnvironmentSet(const QString & aName, const QString & aValue);
    void EnvironmentUnset(const QString & aName);
    CGuestFile FileCreateTemp(const QString & aTemplateName, ULONG aMode, const QString & aPath, BOOL aSecure);
    BOOL FileExists(const QString & aPath);
    void FileRemove(const QString & aPath);
    CGuestFile FileOpen(const QString & aPath, const QString & aOpenMode, const QString & aDisposition, ULONG aCreationMode);
    CGuestFile FileOpenEx(const QString & aPath, const QString & aOpenMode, const QString & aDisposition, const QString & aSharingMode, ULONG aCreationMode, LONG64 aOffset);
    CGuestFsObjInfo FileQueryInfo(const QString & aPath);
    LONG64 FileQuerySize(const QString & aPath);
    void FileRename(const QString & aSource, const QString & aDest, const QVector<KPathRenameFlag> & aFlags);
    void FileSetACL(const QString & aFile, const QString & aAcl);
    CGuestProcess ProcessCreate(const QString & aCommand, const QVector<QString> & aArguments, const QVector<QString> & aEnvironment, const QVector<KProcessCreateFlag> & aFlags, ULONG aTimeoutMS);
    CGuestProcess ProcessCreateEx(const QString & aCommand, const QVector<QString> & aArguments, const QVector<QString> & aEnvironment, const QVector<KProcessCreateFlag> & aFlags, ULONG aTimeoutMS, const KProcessPriority & aPriority, const QVector<LONG> & aAffinity);
    CGuestProcess ProcessGet(ULONG aPid);
    void SymlinkCreate(const QString & aSource, const QString & aTarget, const KSymlinkType & aType);
    BOOL SymlinkExists(const QString & aSymlink);
    QString SymlinkRead(const QString & aSymlink, const QVector<KSymlinkReadFlag> & aFlags);
    void SymlinkRemoveDirectory(const QString & aPath);
    void SymlinkRemoveFile(const QString & aFile);
    KGuestSessionWaitResult WaitFor(ULONG aWaitFor, ULONG aTimeoutMS);
    KGuestSessionWaitResult WaitForArray(const QVector<KGuestSessionWaitForFlag> & aWaitFor, ULONG aTimeoutMS);

    /* Friend wrappers: */
    friend class CUnknown;
    friend class CGuest;
    friend class CGuestSessionEvent;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CGuestSession)

/* Declare safe-array: */
typedef QVector<CGuestSession> CGuestSessionVector;

#endif /* __CGuestSession_h__ */

