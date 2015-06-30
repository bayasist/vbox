/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CGuest_h__
#define __CGuest_h__

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
class CGuest : public CInterface<IGuest, COMBaseWithEI>
{
public:

    typedef CInterface<IGuest, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CGuest() {}

    template<class OI, class OB> explicit CGuest(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CGuest(const CGuest & that) : Base(that) {}

    template<class OI> explicit CGuest(OI * aIface) { attach(aIface); }

    explicit CGuest(IGuest * aIface) : Base(aIface) {}

    template<class OI, class OB> CGuest & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CGuest & operator=(const CGuest & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CGuest & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CGuest & operator=(IGuest * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    QString GetOSTypeId() const;
    KAdditionsRunLevelType GetAdditionsRunLevel() const;
    QString GetAdditionsVersion() const;
    ULONG GetAdditionsRevision() const;
    CEventSource GetEventSource() const;
    QVector<CAdditionsFacility> GetFacilities() const;
    QVector<CGuestSession> GetSessions() const;
    ULONG GetMemoryBalloonSize() const;
    void SetMemoryBalloonSize(ULONG aMemoryBalloonSize);
    ULONG GetStatisticsUpdateInterval() const;
    void SetStatisticsUpdateInterval(ULONG aStatisticsUpdateInterval);

    /* Methods: */
    void InternalGetStatistics(ULONG & aCpuUser, ULONG & aCpuKernel, ULONG & aCpuIdle, ULONG & aMemTotal, ULONG & aMemFree, ULONG & aMemBalloon, ULONG & aMemShared, ULONG & aMemCache, ULONG & aPagedTotal, ULONG & aMemAllocTotal, ULONG & aMemFreeTotal, ULONG & aMemBalloonTotal, ULONG & aMemSharedTotal);
    KAdditionsFacilityStatus GetFacilityStatus(const KAdditionsFacilityType & aFacility, LONG64 & aTimestamp);
    BOOL GetAdditionsStatus(const KAdditionsRunLevelType & aLevel);
    void SetCredentials(const QString & aUserName, const QString & aPassword, const QString & aDomain, BOOL aAllowInteractiveLogon);
    KDragAndDropAction DragHGEnter(ULONG aScreenId, ULONG aY, ULONG aX, const KDragAndDropAction & aDefaultAction, const QVector<KDragAndDropAction> & aAllowedActions, const QVector<QString> & aFormats);
    KDragAndDropAction DragHGMove(ULONG aScreenId, ULONG aX, ULONG aY, const KDragAndDropAction & aDefaultAction, const QVector<KDragAndDropAction> & aAllowedActions, const QVector<QString> & aFormats);
    void DragHGLeave(ULONG aScreenId);
    KDragAndDropAction DragHGDrop(ULONG aScreenId, ULONG aX, ULONG aY, const KDragAndDropAction & aDefaultAction, const QVector<KDragAndDropAction> & aAllowedActions, const QVector<QString> & aFormats, QString & aFormat);
    CProgress DragHGPutData(ULONG aScreenId, const QString & aFormat, const QVector<BYTE> & aData);
    KDragAndDropAction DragGHPending(ULONG aScreenId, QVector<QString> & aFormats, QVector<KDragAndDropAction> & aAllowedActions);
    CProgress DragGHDropped(const QString & aFormat, const KDragAndDropAction & aAction);
    QVector<BYTE> DragGHGetData();
    CGuestSession CreateSession(const QString & aUser, const QString & aPassword, const QString & aDomain, const QString & aSessionName);
    QVector<CGuestSession> FindSession(const QString & aSessionName);
    CProgress UpdateGuestAdditions(const QString & aSource, const QVector<QString> & aArguments, const QVector<KAdditionsUpdateFlag> & aFlags);

    /* Friend wrappers: */
    friend class CUnknown;
    friend class CConsole;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CGuest)

#endif /* __CGuest_h__ */

