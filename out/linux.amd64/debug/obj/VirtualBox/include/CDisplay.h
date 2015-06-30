/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrapper declaration for VirtualBox Main API (COM) interface.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/include/COMWrappers.xsl
 */

#ifndef __CDisplay_h__
#define __CDisplay_h__

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
class CDisplay : public CInterface<IDisplay, COMBaseWithEI>
{
public:

    typedef CInterface<IDisplay, COMBaseWithEI> Base;

    /* Constructors and assignments taking CUnknown and raw iface pointer: */

    CDisplay() {}

    template<class OI, class OB> explicit CDisplay(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
    }

    CDisplay(const CDisplay & that) : Base(that) {}

    template<class OI> explicit CDisplay(OI * aIface) { attach(aIface); }

    explicit CDisplay(IDisplay * aIface) : Base(aIface) {}

    template<class OI, class OB> CDisplay & operator=(const CInterface<OI, OB> & that)
    {
        attach(that.raw());
        if (SUCCEEDED(mRC))
        {
            mRC = that.lastRC();
            setErrorInfo(that.errorInfo());
        }
        return *this;
    }

    CDisplay & operator=(const CDisplay & that)
    {
        Base::operator=(that);
        return *this;
    }

    template<class OI> CDisplay & operator=(OI * aIface)
    {
        attach(aIface);
        return *this;
    }

    CDisplay & operator=(IDisplay * aIface)
    {
        Base::operator=(aIface);
        return *this;
    }

    /* Attributes (properties): */
    /* Methods: */
    void GetScreenResolution(ULONG aScreenId, ULONG & aWidth, ULONG & aHeight, ULONG & aBitsPerPixel, LONG & aXOrigin, LONG & aYOrigin);
    void SetFramebuffer(ULONG aScreenId, const CFramebuffer & aFramebuffer);
    void GetFramebuffer(ULONG aScreenId, CFramebuffer & aFramebuffer, LONG & aXOrigin, LONG & aYOrigin);
    void SetVideoModeHint(ULONG aDisplay, BOOL aEnabled, BOOL aChangeOrigin, LONG aOriginX, LONG aOriginY, ULONG aWidth, ULONG aHeight, ULONG aBitsPerPixel);
    void SetSeamlessMode(BOOL aEnabled);
    void TakeScreenShot(ULONG aScreenId, BYTE * aAddress, ULONG aWidth, ULONG aHeight);
    QVector<BYTE> TakeScreenShotToArray(ULONG aScreenId, ULONG aWidth, ULONG aHeight);
    QVector<BYTE> TakeScreenShotPNGToArray(ULONG aScreenId, ULONG aWidth, ULONG aHeight);
    void DrawToScreen(ULONG aScreenId, BYTE * aAddress, ULONG aX, ULONG aY, ULONG aWidth, ULONG aHeight);
    void InvalidateAndUpdate();
    void ResizeCompleted(ULONG aScreenId);
    void CompleteVHWACommand(BYTE * aCommand);
    void ViewportChanged(ULONG aScreenId, ULONG aX, ULONG aY, ULONG aWidth, ULONG aHeight);

    /* Friend wrappers: */
    friend class CUnknown;
    friend class CConsole;
};

/* Let QMetaType know about generated interface: */
Q_DECLARE_METATYPE(CDisplay)

#endif /* __CDisplay_h__ */

