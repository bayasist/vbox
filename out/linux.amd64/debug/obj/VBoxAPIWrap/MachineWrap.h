/** @file
 *
 * VirtualBox API class wrapper header for IMachine.
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl
 * Generator: src/VBox/Main/idl/apiwrap-server.xsl
 */

/**
 * Copyright (C) 2010-2014 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifndef MachineWrap_H_
#define MachineWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MachineWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IMachine)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MachineWrap, IMachine)
    DECLARE_NOT_AGGREGATABLE(MachineWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MachineWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMachine)
        COM_INTERFACE_ENTRY2(IDispatch, IMachine)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(MachineWrap)

    // public IMachine properties
    STDMETHOD(COMGETTER(Parent))(IVirtualBox **aParent);
    STDMETHOD(COMGETTER(Icon))(ComSafeArrayOut(BYTE, aIcon));
    STDMETHOD(COMSETTER(Icon))(ComSafeArrayIn(BYTE, aIcon));
    STDMETHOD(COMGETTER(Accessible))(BOOL *aAccessible);
    STDMETHOD(COMGETTER(AccessError))(IVirtualBoxErrorInfo **aAccessError);
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName);
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription);
    STDMETHOD(COMSETTER(Description))(IN_BSTR aDescription);
    STDMETHOD(COMGETTER(Id))(BSTR *aId);
    STDMETHOD(COMGETTER(Groups))(ComSafeArrayOut(BSTR, aGroups));
    STDMETHOD(COMSETTER(Groups))(ComSafeArrayIn(IN_BSTR, aGroups));
    STDMETHOD(COMGETTER(OSTypeId))(BSTR *aOSTypeId);
    STDMETHOD(COMSETTER(OSTypeId))(IN_BSTR aOSTypeId);
    STDMETHOD(COMGETTER(HardwareVersion))(BSTR *aHardwareVersion);
    STDMETHOD(COMSETTER(HardwareVersion))(IN_BSTR aHardwareVersion);
    STDMETHOD(COMGETTER(HardwareUUID))(BSTR *aHardwareUUID);
    STDMETHOD(COMSETTER(HardwareUUID))(IN_BSTR aHardwareUUID);
    STDMETHOD(COMGETTER(CPUCount))(ULONG *aCPUCount);
    STDMETHOD(COMSETTER(CPUCount))(ULONG aCPUCount);
    STDMETHOD(COMGETTER(CPUHotPlugEnabled))(BOOL *aCPUHotPlugEnabled);
    STDMETHOD(COMSETTER(CPUHotPlugEnabled))(BOOL aCPUHotPlugEnabled);
    STDMETHOD(COMGETTER(CPUExecutionCap))(ULONG *aCPUExecutionCap);
    STDMETHOD(COMSETTER(CPUExecutionCap))(ULONG aCPUExecutionCap);
    STDMETHOD(COMGETTER(MemorySize))(ULONG *aMemorySize);
    STDMETHOD(COMSETTER(MemorySize))(ULONG aMemorySize);
    STDMETHOD(COMGETTER(MemoryBalloonSize))(ULONG *aMemoryBalloonSize);
    STDMETHOD(COMSETTER(MemoryBalloonSize))(ULONG aMemoryBalloonSize);
    STDMETHOD(COMGETTER(PageFusionEnabled))(BOOL *aPageFusionEnabled);
    STDMETHOD(COMSETTER(PageFusionEnabled))(BOOL aPageFusionEnabled);
    STDMETHOD(COMGETTER(GraphicsControllerType))(GraphicsControllerType_T *aGraphicsControllerType);
    STDMETHOD(COMSETTER(GraphicsControllerType))(GraphicsControllerType_T aGraphicsControllerType);
    STDMETHOD(COMGETTER(VRAMSize))(ULONG *aVRAMSize);
    STDMETHOD(COMSETTER(VRAMSize))(ULONG aVRAMSize);
    STDMETHOD(COMGETTER(Accelerate3DEnabled))(BOOL *aAccelerate3DEnabled);
    STDMETHOD(COMSETTER(Accelerate3DEnabled))(BOOL aAccelerate3DEnabled);
    STDMETHOD(COMGETTER(Accelerate2DVideoEnabled))(BOOL *aAccelerate2DVideoEnabled);
    STDMETHOD(COMSETTER(Accelerate2DVideoEnabled))(BOOL aAccelerate2DVideoEnabled);
    STDMETHOD(COMGETTER(MonitorCount))(ULONG *aMonitorCount);
    STDMETHOD(COMSETTER(MonitorCount))(ULONG aMonitorCount);
    STDMETHOD(COMGETTER(VideoCaptureEnabled))(BOOL *aVideoCaptureEnabled);
    STDMETHOD(COMSETTER(VideoCaptureEnabled))(BOOL aVideoCaptureEnabled);
    STDMETHOD(COMGETTER(VideoCaptureScreens))(ComSafeArrayOut(BOOL, aVideoCaptureScreens));
    STDMETHOD(COMSETTER(VideoCaptureScreens))(ComSafeArrayIn(BOOL, aVideoCaptureScreens));
    STDMETHOD(COMGETTER(VideoCaptureFile))(BSTR *aVideoCaptureFile);
    STDMETHOD(COMSETTER(VideoCaptureFile))(IN_BSTR aVideoCaptureFile);
    STDMETHOD(COMGETTER(VideoCaptureWidth))(ULONG *aVideoCaptureWidth);
    STDMETHOD(COMSETTER(VideoCaptureWidth))(ULONG aVideoCaptureWidth);
    STDMETHOD(COMGETTER(VideoCaptureHeight))(ULONG *aVideoCaptureHeight);
    STDMETHOD(COMSETTER(VideoCaptureHeight))(ULONG aVideoCaptureHeight);
    STDMETHOD(COMGETTER(VideoCaptureRate))(ULONG *aVideoCaptureRate);
    STDMETHOD(COMSETTER(VideoCaptureRate))(ULONG aVideoCaptureRate);
    STDMETHOD(COMGETTER(VideoCaptureFPS))(ULONG *aVideoCaptureFPS);
    STDMETHOD(COMSETTER(VideoCaptureFPS))(ULONG aVideoCaptureFPS);
    STDMETHOD(COMGETTER(BIOSSettings))(IBIOSSettings **aBIOSSettings);
    STDMETHOD(COMGETTER(FirmwareType))(FirmwareType_T *aFirmwareType);
    STDMETHOD(COMSETTER(FirmwareType))(FirmwareType_T aFirmwareType);
    STDMETHOD(COMGETTER(PointingHIDType))(PointingHIDType_T *aPointingHIDType);
    STDMETHOD(COMSETTER(PointingHIDType))(PointingHIDType_T aPointingHIDType);
    STDMETHOD(COMGETTER(KeyboardHIDType))(KeyboardHIDType_T *aKeyboardHIDType);
    STDMETHOD(COMSETTER(KeyboardHIDType))(KeyboardHIDType_T aKeyboardHIDType);
    STDMETHOD(COMGETTER(HPETEnabled))(BOOL *aHPETEnabled);
    STDMETHOD(COMSETTER(HPETEnabled))(BOOL aHPETEnabled);
    STDMETHOD(COMGETTER(ChipsetType))(ChipsetType_T *aChipsetType);
    STDMETHOD(COMSETTER(ChipsetType))(ChipsetType_T aChipsetType);
    STDMETHOD(COMGETTER(SnapshotFolder))(BSTR *aSnapshotFolder);
    STDMETHOD(COMSETTER(SnapshotFolder))(IN_BSTR aSnapshotFolder);
    STDMETHOD(COMGETTER(VRDEServer))(IVRDEServer **aVRDEServer);
    STDMETHOD(COMGETTER(EmulatedUSBCardReaderEnabled))(BOOL *aEmulatedUSBCardReaderEnabled);
    STDMETHOD(COMSETTER(EmulatedUSBCardReaderEnabled))(BOOL aEmulatedUSBCardReaderEnabled);
    STDMETHOD(COMGETTER(MediumAttachments))(ComSafeArrayOut(IMediumAttachment *, aMediumAttachments));
    STDMETHOD(COMGETTER(USBControllers))(ComSafeArrayOut(IUSBController *, aUSBControllers));
    STDMETHOD(COMGETTER(USBDeviceFilters))(IUSBDeviceFilters **aUSBDeviceFilters);
    STDMETHOD(COMGETTER(AudioAdapter))(IAudioAdapter **aAudioAdapter);
    STDMETHOD(COMGETTER(StorageControllers))(ComSafeArrayOut(IStorageController *, aStorageControllers));
    STDMETHOD(COMGETTER(SettingsFilePath))(BSTR *aSettingsFilePath);
    STDMETHOD(COMGETTER(SettingsModified))(BOOL *aSettingsModified);
    STDMETHOD(COMGETTER(SessionState))(SessionState_T *aSessionState);
    STDMETHOD(COMGETTER(SessionType))(BSTR *aSessionType);
    STDMETHOD(COMGETTER(SessionPID))(ULONG *aSessionPID);
    STDMETHOD(COMGETTER(State))(MachineState_T *aState);
    STDMETHOD(COMGETTER(LastStateChange))(LONG64 *aLastStateChange);
    STDMETHOD(COMGETTER(StateFilePath))(BSTR *aStateFilePath);
    STDMETHOD(COMGETTER(LogFolder))(BSTR *aLogFolder);
    STDMETHOD(COMGETTER(CurrentSnapshot))(ISnapshot **aCurrentSnapshot);
    STDMETHOD(COMGETTER(SnapshotCount))(ULONG *aSnapshotCount);
    STDMETHOD(COMGETTER(CurrentStateModified))(BOOL *aCurrentStateModified);
    STDMETHOD(COMGETTER(SharedFolders))(ComSafeArrayOut(ISharedFolder *, aSharedFolders));
    STDMETHOD(COMGETTER(ClipboardMode))(ClipboardMode_T *aClipboardMode);
    STDMETHOD(COMSETTER(ClipboardMode))(ClipboardMode_T aClipboardMode);
    STDMETHOD(COMGETTER(DragAndDropMode))(DragAndDropMode_T *aDragAndDropMode);
    STDMETHOD(COMSETTER(DragAndDropMode))(DragAndDropMode_T aDragAndDropMode);
    STDMETHOD(COMGETTER(GuestPropertyNotificationPatterns))(BSTR *aGuestPropertyNotificationPatterns);
    STDMETHOD(COMSETTER(GuestPropertyNotificationPatterns))(IN_BSTR aGuestPropertyNotificationPatterns);
    STDMETHOD(COMGETTER(TeleporterEnabled))(BOOL *aTeleporterEnabled);
    STDMETHOD(COMSETTER(TeleporterEnabled))(BOOL aTeleporterEnabled);
    STDMETHOD(COMGETTER(TeleporterPort))(ULONG *aTeleporterPort);
    STDMETHOD(COMSETTER(TeleporterPort))(ULONG aTeleporterPort);
    STDMETHOD(COMGETTER(TeleporterAddress))(BSTR *aTeleporterAddress);
    STDMETHOD(COMSETTER(TeleporterAddress))(IN_BSTR aTeleporterAddress);
    STDMETHOD(COMGETTER(TeleporterPassword))(BSTR *aTeleporterPassword);
    STDMETHOD(COMSETTER(TeleporterPassword))(IN_BSTR aTeleporterPassword);
    STDMETHOD(COMGETTER(FaultToleranceState))(FaultToleranceState_T *aFaultToleranceState);
    STDMETHOD(COMSETTER(FaultToleranceState))(FaultToleranceState_T aFaultToleranceState);
    STDMETHOD(COMGETTER(FaultTolerancePort))(ULONG *aFaultTolerancePort);
    STDMETHOD(COMSETTER(FaultTolerancePort))(ULONG aFaultTolerancePort);
    STDMETHOD(COMGETTER(FaultToleranceAddress))(BSTR *aFaultToleranceAddress);
    STDMETHOD(COMSETTER(FaultToleranceAddress))(IN_BSTR aFaultToleranceAddress);
    STDMETHOD(COMGETTER(FaultTolerancePassword))(BSTR *aFaultTolerancePassword);
    STDMETHOD(COMSETTER(FaultTolerancePassword))(IN_BSTR aFaultTolerancePassword);
    STDMETHOD(COMGETTER(FaultToleranceSyncInterval))(ULONG *aFaultToleranceSyncInterval);
    STDMETHOD(COMSETTER(FaultToleranceSyncInterval))(ULONG aFaultToleranceSyncInterval);
    STDMETHOD(COMGETTER(RTCUseUTC))(BOOL *aRTCUseUTC);
    STDMETHOD(COMSETTER(RTCUseUTC))(BOOL aRTCUseUTC);
    STDMETHOD(COMGETTER(IOCacheEnabled))(BOOL *aIOCacheEnabled);
    STDMETHOD(COMSETTER(IOCacheEnabled))(BOOL aIOCacheEnabled);
    STDMETHOD(COMGETTER(IOCacheSize))(ULONG *aIOCacheSize);
    STDMETHOD(COMSETTER(IOCacheSize))(ULONG aIOCacheSize);
    STDMETHOD(COMGETTER(PCIDeviceAssignments))(ComSafeArrayOut(IPCIDeviceAttachment *, aPCIDeviceAssignments));
    STDMETHOD(COMGETTER(BandwidthControl))(IBandwidthControl **aBandwidthControl);
    STDMETHOD(COMGETTER(TracingEnabled))(BOOL *aTracingEnabled);
    STDMETHOD(COMSETTER(TracingEnabled))(BOOL aTracingEnabled);
    STDMETHOD(COMGETTER(TracingConfig))(BSTR *aTracingConfig);
    STDMETHOD(COMSETTER(TracingConfig))(IN_BSTR aTracingConfig);
    STDMETHOD(COMGETTER(AllowTracingToAccessVM))(BOOL *aAllowTracingToAccessVM);
    STDMETHOD(COMSETTER(AllowTracingToAccessVM))(BOOL aAllowTracingToAccessVM);
    STDMETHOD(COMGETTER(AutostartEnabled))(BOOL *aAutostartEnabled);
    STDMETHOD(COMSETTER(AutostartEnabled))(BOOL aAutostartEnabled);
    STDMETHOD(COMGETTER(AutostartDelay))(ULONG *aAutostartDelay);
    STDMETHOD(COMSETTER(AutostartDelay))(ULONG aAutostartDelay);
    STDMETHOD(COMGETTER(AutostopType))(AutostopType_T *aAutostopType);
    STDMETHOD(COMSETTER(AutostopType))(AutostopType_T aAutostopType);
    STDMETHOD(COMGETTER(DefaultFrontend))(BSTR *aDefaultFrontend);
    STDMETHOD(COMSETTER(DefaultFrontend))(IN_BSTR aDefaultFrontend);
    STDMETHOD(COMGETTER(USBProxyAvailable))(BOOL *aUSBProxyAvailable);

    // public IMachine methods
    STDMETHOD(LockMachine)(ISession *aSession,
                           LockType_T aLockType);
    STDMETHOD(LaunchVMProcess)(ISession *aSession,
                               IN_BSTR aType,
                               IN_BSTR aEnvironment,
                               IProgress **aProgress);
    STDMETHOD(SetBootOrder)(ULONG aPosition,
                            DeviceType_T aDevice);
    STDMETHOD(GetBootOrder)(ULONG aPosition,
                            DeviceType_T *aDevice);
    STDMETHOD(AttachDevice)(IN_BSTR aName,
                            LONG aControllerPort,
                            LONG aDevice,
                            DeviceType_T aType,
                            IMedium *aMedium);
    STDMETHOD(AttachDeviceWithoutMedium)(IN_BSTR aName,
                                         LONG aControllerPort,
                                         LONG aDevice,
                                         DeviceType_T aType);
    STDMETHOD(DetachDevice)(IN_BSTR aName,
                            LONG aControllerPort,
                            LONG aDevice);
    STDMETHOD(PassthroughDevice)(IN_BSTR aName,
                                 LONG aControllerPort,
                                 LONG aDevice,
                                 BOOL aPassthrough);
    STDMETHOD(TemporaryEjectDevice)(IN_BSTR aName,
                                    LONG aControllerPort,
                                    LONG aDevice,
                                    BOOL aTemporaryEject);
    STDMETHOD(NonRotationalDevice)(IN_BSTR aName,
                                   LONG aControllerPort,
                                   LONG aDevice,
                                   BOOL aNonRotational);
    STDMETHOD(SetAutoDiscardForDevice)(IN_BSTR aName,
                                       LONG aControllerPort,
                                       LONG aDevice,
                                       BOOL aDiscard);
    STDMETHOD(SetHotPluggableForDevice)(IN_BSTR aName,
                                        LONG aControllerPort,
                                        LONG aDevice,
                                        BOOL aHotPluggable);
    STDMETHOD(SetBandwidthGroupForDevice)(IN_BSTR aName,
                                          LONG aControllerPort,
                                          LONG aDevice,
                                          IBandwidthGroup *aBandwidthGroup);
    STDMETHOD(SetNoBandwidthGroupForDevice)(IN_BSTR aName,
                                            LONG aControllerPort,
                                            LONG aDevice);
    STDMETHOD(UnmountMedium)(IN_BSTR aName,
                             LONG aControllerPort,
                             LONG aDevice,
                             BOOL aForce);
    STDMETHOD(MountMedium)(IN_BSTR aName,
                           LONG aControllerPort,
                           LONG aDevice,
                           IMedium *aMedium,
                           BOOL aForce);
    STDMETHOD(GetMedium)(IN_BSTR aName,
                         LONG aControllerPort,
                         LONG aDevice,
                         IMedium **aMedium);
    STDMETHOD(GetMediumAttachmentsOfController)(IN_BSTR aName,
                                                ComSafeArrayOut(IMediumAttachment *, aMediumAttachments));
    STDMETHOD(GetMediumAttachment)(IN_BSTR aName,
                                   LONG aControllerPort,
                                   LONG aDevice,
                                   IMediumAttachment **aAttachment);
    STDMETHOD(AttachHostPCIDevice)(LONG aHostAddress,
                                   LONG aDesiredGuestAddress,
                                   BOOL aTryToUnbind);
    STDMETHOD(DetachHostPCIDevice)(LONG aHostAddress);
    STDMETHOD(GetNetworkAdapter)(ULONG aSlot,
                                 INetworkAdapter **aAdapter);
    STDMETHOD(AddStorageController)(IN_BSTR aName,
                                    StorageBus_T aConnectionType,
                                    IStorageController **aController);
    STDMETHOD(GetStorageControllerByName)(IN_BSTR aName,
                                          IStorageController **aStorageController);
    STDMETHOD(GetStorageControllerByInstance)(ULONG aInstance,
                                              IStorageController **aStorageController);
    STDMETHOD(RemoveStorageController)(IN_BSTR aName);
    STDMETHOD(SetStorageControllerBootable)(IN_BSTR aName,
                                            BOOL aBootable);
    STDMETHOD(AddUSBController)(IN_BSTR aName,
                                USBControllerType_T aType,
                                IUSBController **aController);
    STDMETHOD(RemoveUSBController)(IN_BSTR aName);
    STDMETHOD(GetUSBControllerByName)(IN_BSTR aName,
                                      IUSBController **aController);
    STDMETHOD(GetUSBControllerCountByType)(USBControllerType_T aType,
                                           ULONG *aControllers);
    STDMETHOD(GetSerialPort)(ULONG aSlot,
                             ISerialPort **aPort);
    STDMETHOD(GetParallelPort)(ULONG aSlot,
                               IParallelPort **aPort);
    STDMETHOD(GetExtraDataKeys)(ComSafeArrayOut(BSTR, aKeys));
    STDMETHOD(GetExtraData)(IN_BSTR aKey,
                            BSTR *aValue);
    STDMETHOD(SetExtraData)(IN_BSTR aKey,
                            IN_BSTR aValue);
    STDMETHOD(GetCPUProperty)(CPUPropertyType_T aProperty,
                              BOOL *aValue);
    STDMETHOD(SetCPUProperty)(CPUPropertyType_T aProperty,
                              BOOL aValue);
    STDMETHOD(GetCPUIDLeaf)(ULONG aId,
                            ULONG *aValEax,
                            ULONG *aValEbx,
                            ULONG *aValEcx,
                            ULONG *aValEdx);
    STDMETHOD(SetCPUIDLeaf)(ULONG aId,
                            ULONG aValEax,
                            ULONG aValEbx,
                            ULONG aValEcx,
                            ULONG aValEdx);
    STDMETHOD(RemoveCPUIDLeaf)(ULONG aId);
    STDMETHOD(RemoveAllCPUIDLeaves)();
    STDMETHOD(GetHWVirtExProperty)(HWVirtExPropertyType_T aProperty,
                                   BOOL *aValue);
    STDMETHOD(SetHWVirtExProperty)(HWVirtExPropertyType_T aProperty,
                                   BOOL aValue);
    STDMETHOD(SetSettingsFilePath)(IN_BSTR aSettingsFilePath,
                                   IProgress **aProgress);
    STDMETHOD(SaveSettings)();
    STDMETHOD(DiscardSettings)();
    STDMETHOD(Unregister)(CleanupMode_T aCleanupMode,
                          ComSafeArrayOut(IMedium *, aMedia));
    STDMETHOD(DeleteConfig)(ComSafeArrayIn(IMedium *, aMedia),
                            IProgress **aProgress);
    STDMETHOD(ExportTo)(IAppliance *aAppliance,
                        IN_BSTR aLocation,
                        IVirtualSystemDescription **aDescription);
    STDMETHOD(FindSnapshot)(IN_BSTR aNameOrId,
                            ISnapshot **aSnapshot);
    STDMETHOD(CreateSharedFolder)(IN_BSTR aName,
                                  IN_BSTR aHostPath,
                                  BOOL aWritable,
                                  BOOL aAutomount);
    STDMETHOD(RemoveSharedFolder)(IN_BSTR aName);
    STDMETHOD(CanShowConsoleWindow)(BOOL *aCanShow);
    STDMETHOD(ShowConsoleWindow)(LONG64 *aWinId);
    STDMETHOD(GetGuestProperty)(IN_BSTR aName,
                                BSTR *aValue,
                                LONG64 *aTimestamp,
                                BSTR *aFlags);
    STDMETHOD(GetGuestPropertyValue)(IN_BSTR aProperty,
                                     BSTR *aValue);
    STDMETHOD(GetGuestPropertyTimestamp)(IN_BSTR aProperty,
                                         LONG64 *aValue);
    STDMETHOD(SetGuestProperty)(IN_BSTR aProperty,
                                IN_BSTR aValue,
                                IN_BSTR aFlags);
    STDMETHOD(SetGuestPropertyValue)(IN_BSTR aProperty,
                                     IN_BSTR aValue);
    STDMETHOD(DeleteGuestProperty)(IN_BSTR aName);
    STDMETHOD(EnumerateGuestProperties)(IN_BSTR aPatterns,
                                        ComSafeArrayOut(BSTR, aNames),
                                        ComSafeArrayOut(BSTR, aValues),
                                        ComSafeArrayOut(LONG64, aTimestamps),
                                        ComSafeArrayOut(BSTR, aFlags));
    STDMETHOD(QuerySavedGuestScreenInfo)(ULONG aScreenId,
                                         ULONG *aOriginX,
                                         ULONG *aOriginY,
                                         ULONG *aWidth,
                                         ULONG *aHeight,
                                         BOOL *aEnabled);
    STDMETHOD(QuerySavedThumbnailSize)(ULONG aScreenId,
                                       ULONG *aSize,
                                       ULONG *aWidth,
                                       ULONG *aHeight);
    STDMETHOD(ReadSavedThumbnailToArray)(ULONG aScreenId,
                                         BOOL aBGR,
                                         ULONG *aWidth,
                                         ULONG *aHeight,
                                         ComSafeArrayOut(BYTE, aData));
    STDMETHOD(ReadSavedThumbnailPNGToArray)(ULONG aScreenId,
                                            ULONG *aWidth,
                                            ULONG *aHeight,
                                            ComSafeArrayOut(BYTE, aData));
    STDMETHOD(QuerySavedScreenshotPNGSize)(ULONG aScreenId,
                                           ULONG *aSize,
                                           ULONG *aWidth,
                                           ULONG *aHeight);
    STDMETHOD(ReadSavedScreenshotPNGToArray)(ULONG aScreenId,
                                             ULONG *aWidth,
                                             ULONG *aHeight,
                                             ComSafeArrayOut(BYTE, aData));
    STDMETHOD(HotPlugCPU)(ULONG aCpu);
    STDMETHOD(HotUnplugCPU)(ULONG aCpu);
    STDMETHOD(GetCPUStatus)(ULONG aCpu,
                            BOOL *aAttached);
    STDMETHOD(QueryLogFilename)(ULONG aIdx,
                                BSTR *aFilename);
    STDMETHOD(ReadLog)(ULONG aIdx,
                       LONG64 aOffset,
                       LONG64 aSize,
                       ComSafeArrayOut(BYTE, aData));
    STDMETHOD(CloneTo)(IMachine *aTarget,
                       CloneMode_T aMode,
                       ComSafeArrayIn(CloneOptions_T, aOptions),
                       IProgress **aProgress);

private:
    // wrapped IMachine properties
    virtual HRESULT getParent(ComPtr<IVirtualBox> &aParent) = 0;
    virtual HRESULT getIcon(std::vector<BYTE> &aIcon) = 0;
    virtual HRESULT setIcon(const std::vector<BYTE> &aIcon) = 0;
    virtual HRESULT getAccessible(BOOL *aAccessible) = 0;
    virtual HRESULT getAccessError(ComPtr<IVirtualBoxErrorInfo> &aAccessError) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT setDescription(const com::Utf8Str &aDescription) = 0;
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getGroups(std::vector<com::Utf8Str> &aGroups) = 0;
    virtual HRESULT setGroups(const std::vector<com::Utf8Str> &aGroups) = 0;
    virtual HRESULT getOSTypeId(com::Utf8Str &aOSTypeId) = 0;
    virtual HRESULT setOSTypeId(const com::Utf8Str &aOSTypeId) = 0;
    virtual HRESULT getHardwareVersion(com::Utf8Str &aHardwareVersion) = 0;
    virtual HRESULT setHardwareVersion(const com::Utf8Str &aHardwareVersion) = 0;
    virtual HRESULT getHardwareUUID(com::Guid &aHardwareUUID) = 0;
    virtual HRESULT setHardwareUUID(const com::Guid &aHardwareUUID) = 0;
    virtual HRESULT getCPUCount(ULONG *aCPUCount) = 0;
    virtual HRESULT setCPUCount(ULONG aCPUCount) = 0;
    virtual HRESULT getCPUHotPlugEnabled(BOOL *aCPUHotPlugEnabled) = 0;
    virtual HRESULT setCPUHotPlugEnabled(BOOL aCPUHotPlugEnabled) = 0;
    virtual HRESULT getCPUExecutionCap(ULONG *aCPUExecutionCap) = 0;
    virtual HRESULT setCPUExecutionCap(ULONG aCPUExecutionCap) = 0;
    virtual HRESULT getMemorySize(ULONG *aMemorySize) = 0;
    virtual HRESULT setMemorySize(ULONG aMemorySize) = 0;
    virtual HRESULT getMemoryBalloonSize(ULONG *aMemoryBalloonSize) = 0;
    virtual HRESULT setMemoryBalloonSize(ULONG aMemoryBalloonSize) = 0;
    virtual HRESULT getPageFusionEnabled(BOOL *aPageFusionEnabled) = 0;
    virtual HRESULT setPageFusionEnabled(BOOL aPageFusionEnabled) = 0;
    virtual HRESULT getGraphicsControllerType(GraphicsControllerType_T *aGraphicsControllerType) = 0;
    virtual HRESULT setGraphicsControllerType(GraphicsControllerType_T aGraphicsControllerType) = 0;
    virtual HRESULT getVRAMSize(ULONG *aVRAMSize) = 0;
    virtual HRESULT setVRAMSize(ULONG aVRAMSize) = 0;
    virtual HRESULT getAccelerate3DEnabled(BOOL *aAccelerate3DEnabled) = 0;
    virtual HRESULT setAccelerate3DEnabled(BOOL aAccelerate3DEnabled) = 0;
    virtual HRESULT getAccelerate2DVideoEnabled(BOOL *aAccelerate2DVideoEnabled) = 0;
    virtual HRESULT setAccelerate2DVideoEnabled(BOOL aAccelerate2DVideoEnabled) = 0;
    virtual HRESULT getMonitorCount(ULONG *aMonitorCount) = 0;
    virtual HRESULT setMonitorCount(ULONG aMonitorCount) = 0;
    virtual HRESULT getVideoCaptureEnabled(BOOL *aVideoCaptureEnabled) = 0;
    virtual HRESULT setVideoCaptureEnabled(BOOL aVideoCaptureEnabled) = 0;
    virtual HRESULT getVideoCaptureScreens(std::vector<BOOL> &aVideoCaptureScreens) = 0;
    virtual HRESULT setVideoCaptureScreens(const std::vector<BOOL> &aVideoCaptureScreens) = 0;
    virtual HRESULT getVideoCaptureFile(com::Utf8Str &aVideoCaptureFile) = 0;
    virtual HRESULT setVideoCaptureFile(const com::Utf8Str &aVideoCaptureFile) = 0;
    virtual HRESULT getVideoCaptureWidth(ULONG *aVideoCaptureWidth) = 0;
    virtual HRESULT setVideoCaptureWidth(ULONG aVideoCaptureWidth) = 0;
    virtual HRESULT getVideoCaptureHeight(ULONG *aVideoCaptureHeight) = 0;
    virtual HRESULT setVideoCaptureHeight(ULONG aVideoCaptureHeight) = 0;
    virtual HRESULT getVideoCaptureRate(ULONG *aVideoCaptureRate) = 0;
    virtual HRESULT setVideoCaptureRate(ULONG aVideoCaptureRate) = 0;
    virtual HRESULT getVideoCaptureFPS(ULONG *aVideoCaptureFPS) = 0;
    virtual HRESULT setVideoCaptureFPS(ULONG aVideoCaptureFPS) = 0;
    virtual HRESULT getBIOSSettings(ComPtr<IBIOSSettings> &aBIOSSettings) = 0;
    virtual HRESULT getFirmwareType(FirmwareType_T *aFirmwareType) = 0;
    virtual HRESULT setFirmwareType(FirmwareType_T aFirmwareType) = 0;
    virtual HRESULT getPointingHIDType(PointingHIDType_T *aPointingHIDType) = 0;
    virtual HRESULT setPointingHIDType(PointingHIDType_T aPointingHIDType) = 0;
    virtual HRESULT getKeyboardHIDType(KeyboardHIDType_T *aKeyboardHIDType) = 0;
    virtual HRESULT setKeyboardHIDType(KeyboardHIDType_T aKeyboardHIDType) = 0;
    virtual HRESULT getHPETEnabled(BOOL *aHPETEnabled) = 0;
    virtual HRESULT setHPETEnabled(BOOL aHPETEnabled) = 0;
    virtual HRESULT getChipsetType(ChipsetType_T *aChipsetType) = 0;
    virtual HRESULT setChipsetType(ChipsetType_T aChipsetType) = 0;
    virtual HRESULT getSnapshotFolder(com::Utf8Str &aSnapshotFolder) = 0;
    virtual HRESULT setSnapshotFolder(const com::Utf8Str &aSnapshotFolder) = 0;
    virtual HRESULT getVRDEServer(ComPtr<IVRDEServer> &aVRDEServer) = 0;
    virtual HRESULT getEmulatedUSBCardReaderEnabled(BOOL *aEmulatedUSBCardReaderEnabled) = 0;
    virtual HRESULT setEmulatedUSBCardReaderEnabled(BOOL aEmulatedUSBCardReaderEnabled) = 0;
    virtual HRESULT getMediumAttachments(std::vector<ComPtr<IMediumAttachment> > &aMediumAttachments) = 0;
    virtual HRESULT getUSBControllers(std::vector<ComPtr<IUSBController> > &aUSBControllers) = 0;
    virtual HRESULT getUSBDeviceFilters(ComPtr<IUSBDeviceFilters> &aUSBDeviceFilters) = 0;
    virtual HRESULT getAudioAdapter(ComPtr<IAudioAdapter> &aAudioAdapter) = 0;
    virtual HRESULT getStorageControllers(std::vector<ComPtr<IStorageController> > &aStorageControllers) = 0;
    virtual HRESULT getSettingsFilePath(com::Utf8Str &aSettingsFilePath) = 0;
    virtual HRESULT getSettingsModified(BOOL *aSettingsModified) = 0;
    virtual HRESULT getSessionState(SessionState_T *aSessionState) = 0;
    virtual HRESULT getSessionType(com::Utf8Str &aSessionType) = 0;
    virtual HRESULT getSessionPID(ULONG *aSessionPID) = 0;
    virtual HRESULT getState(MachineState_T *aState) = 0;
    virtual HRESULT getLastStateChange(LONG64 *aLastStateChange) = 0;
    virtual HRESULT getStateFilePath(com::Utf8Str &aStateFilePath) = 0;
    virtual HRESULT getLogFolder(com::Utf8Str &aLogFolder) = 0;
    virtual HRESULT getCurrentSnapshot(ComPtr<ISnapshot> &aCurrentSnapshot) = 0;
    virtual HRESULT getSnapshotCount(ULONG *aSnapshotCount) = 0;
    virtual HRESULT getCurrentStateModified(BOOL *aCurrentStateModified) = 0;
    virtual HRESULT getSharedFolders(std::vector<ComPtr<ISharedFolder> > &aSharedFolders) = 0;
    virtual HRESULT getClipboardMode(ClipboardMode_T *aClipboardMode) = 0;
    virtual HRESULT setClipboardMode(ClipboardMode_T aClipboardMode) = 0;
    virtual HRESULT getDragAndDropMode(DragAndDropMode_T *aDragAndDropMode) = 0;
    virtual HRESULT setDragAndDropMode(DragAndDropMode_T aDragAndDropMode) = 0;
    virtual HRESULT getGuestPropertyNotificationPatterns(com::Utf8Str &aGuestPropertyNotificationPatterns) = 0;
    virtual HRESULT setGuestPropertyNotificationPatterns(const com::Utf8Str &aGuestPropertyNotificationPatterns) = 0;
    virtual HRESULT getTeleporterEnabled(BOOL *aTeleporterEnabled) = 0;
    virtual HRESULT setTeleporterEnabled(BOOL aTeleporterEnabled) = 0;
    virtual HRESULT getTeleporterPort(ULONG *aTeleporterPort) = 0;
    virtual HRESULT setTeleporterPort(ULONG aTeleporterPort) = 0;
    virtual HRESULT getTeleporterAddress(com::Utf8Str &aTeleporterAddress) = 0;
    virtual HRESULT setTeleporterAddress(const com::Utf8Str &aTeleporterAddress) = 0;
    virtual HRESULT getTeleporterPassword(com::Utf8Str &aTeleporterPassword) = 0;
    virtual HRESULT setTeleporterPassword(const com::Utf8Str &aTeleporterPassword) = 0;
    virtual HRESULT getFaultToleranceState(FaultToleranceState_T *aFaultToleranceState) = 0;
    virtual HRESULT setFaultToleranceState(FaultToleranceState_T aFaultToleranceState) = 0;
    virtual HRESULT getFaultTolerancePort(ULONG *aFaultTolerancePort) = 0;
    virtual HRESULT setFaultTolerancePort(ULONG aFaultTolerancePort) = 0;
    virtual HRESULT getFaultToleranceAddress(com::Utf8Str &aFaultToleranceAddress) = 0;
    virtual HRESULT setFaultToleranceAddress(const com::Utf8Str &aFaultToleranceAddress) = 0;
    virtual HRESULT getFaultTolerancePassword(com::Utf8Str &aFaultTolerancePassword) = 0;
    virtual HRESULT setFaultTolerancePassword(const com::Utf8Str &aFaultTolerancePassword) = 0;
    virtual HRESULT getFaultToleranceSyncInterval(ULONG *aFaultToleranceSyncInterval) = 0;
    virtual HRESULT setFaultToleranceSyncInterval(ULONG aFaultToleranceSyncInterval) = 0;
    virtual HRESULT getRTCUseUTC(BOOL *aRTCUseUTC) = 0;
    virtual HRESULT setRTCUseUTC(BOOL aRTCUseUTC) = 0;
    virtual HRESULT getIOCacheEnabled(BOOL *aIOCacheEnabled) = 0;
    virtual HRESULT setIOCacheEnabled(BOOL aIOCacheEnabled) = 0;
    virtual HRESULT getIOCacheSize(ULONG *aIOCacheSize) = 0;
    virtual HRESULT setIOCacheSize(ULONG aIOCacheSize) = 0;
    virtual HRESULT getPCIDeviceAssignments(std::vector<ComPtr<IPCIDeviceAttachment> > &aPCIDeviceAssignments) = 0;
    virtual HRESULT getBandwidthControl(ComPtr<IBandwidthControl> &aBandwidthControl) = 0;
    virtual HRESULT getTracingEnabled(BOOL *aTracingEnabled) = 0;
    virtual HRESULT setTracingEnabled(BOOL aTracingEnabled) = 0;
    virtual HRESULT getTracingConfig(com::Utf8Str &aTracingConfig) = 0;
    virtual HRESULT setTracingConfig(const com::Utf8Str &aTracingConfig) = 0;
    virtual HRESULT getAllowTracingToAccessVM(BOOL *aAllowTracingToAccessVM) = 0;
    virtual HRESULT setAllowTracingToAccessVM(BOOL aAllowTracingToAccessVM) = 0;
    virtual HRESULT getAutostartEnabled(BOOL *aAutostartEnabled) = 0;
    virtual HRESULT setAutostartEnabled(BOOL aAutostartEnabled) = 0;
    virtual HRESULT getAutostartDelay(ULONG *aAutostartDelay) = 0;
    virtual HRESULT setAutostartDelay(ULONG aAutostartDelay) = 0;
    virtual HRESULT getAutostopType(AutostopType_T *aAutostopType) = 0;
    virtual HRESULT setAutostopType(AutostopType_T aAutostopType) = 0;
    virtual HRESULT getDefaultFrontend(com::Utf8Str &aDefaultFrontend) = 0;
    virtual HRESULT setDefaultFrontend(const com::Utf8Str &aDefaultFrontend) = 0;
    virtual HRESULT getUSBProxyAvailable(BOOL *aUSBProxyAvailable) = 0;

    // wrapped IMachine methods
    virtual HRESULT lockMachine(const ComPtr<ISession> &aSession,
                                LockType_T aLockType) = 0;
    virtual HRESULT launchVMProcess(const ComPtr<ISession> &aSession,
                                    const com::Utf8Str &aType,
                                    const com::Utf8Str &aEnvironment,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT setBootOrder(ULONG aPosition,
                                 DeviceType_T aDevice) = 0;
    virtual HRESULT getBootOrder(ULONG aPosition,
                                 DeviceType_T *aDevice) = 0;
    virtual HRESULT attachDevice(const com::Utf8Str &aName,
                                 LONG aControllerPort,
                                 LONG aDevice,
                                 DeviceType_T aType,
                                 const ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT attachDeviceWithoutMedium(const com::Utf8Str &aName,
                                              LONG aControllerPort,
                                              LONG aDevice,
                                              DeviceType_T aType) = 0;
    virtual HRESULT detachDevice(const com::Utf8Str &aName,
                                 LONG aControllerPort,
                                 LONG aDevice) = 0;
    virtual HRESULT passthroughDevice(const com::Utf8Str &aName,
                                      LONG aControllerPort,
                                      LONG aDevice,
                                      BOOL aPassthrough) = 0;
    virtual HRESULT temporaryEjectDevice(const com::Utf8Str &aName,
                                         LONG aControllerPort,
                                         LONG aDevice,
                                         BOOL aTemporaryEject) = 0;
    virtual HRESULT nonRotationalDevice(const com::Utf8Str &aName,
                                        LONG aControllerPort,
                                        LONG aDevice,
                                        BOOL aNonRotational) = 0;
    virtual HRESULT setAutoDiscardForDevice(const com::Utf8Str &aName,
                                            LONG aControllerPort,
                                            LONG aDevice,
                                            BOOL aDiscard) = 0;
    virtual HRESULT setHotPluggableForDevice(const com::Utf8Str &aName,
                                             LONG aControllerPort,
                                             LONG aDevice,
                                             BOOL aHotPluggable) = 0;
    virtual HRESULT setBandwidthGroupForDevice(const com::Utf8Str &aName,
                                               LONG aControllerPort,
                                               LONG aDevice,
                                               const ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    virtual HRESULT setNoBandwidthGroupForDevice(const com::Utf8Str &aName,
                                                 LONG aControllerPort,
                                                 LONG aDevice) = 0;
    virtual HRESULT unmountMedium(const com::Utf8Str &aName,
                                  LONG aControllerPort,
                                  LONG aDevice,
                                  BOOL aForce) = 0;
    virtual HRESULT mountMedium(const com::Utf8Str &aName,
                                LONG aControllerPort,
                                LONG aDevice,
                                const ComPtr<IMedium> &aMedium,
                                BOOL aForce) = 0;
    virtual HRESULT getMedium(const com::Utf8Str &aName,
                              LONG aControllerPort,
                              LONG aDevice,
                              ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT getMediumAttachmentsOfController(const com::Utf8Str &aName,
                                                     std::vector<ComPtr<IMediumAttachment> > &aMediumAttachments) = 0;
    virtual HRESULT getMediumAttachment(const com::Utf8Str &aName,
                                        LONG aControllerPort,
                                        LONG aDevice,
                                        ComPtr<IMediumAttachment> &aAttachment) = 0;
    virtual HRESULT attachHostPCIDevice(LONG aHostAddress,
                                        LONG aDesiredGuestAddress,
                                        BOOL aTryToUnbind) = 0;
    virtual HRESULT detachHostPCIDevice(LONG aHostAddress) = 0;
    virtual HRESULT getNetworkAdapter(ULONG aSlot,
                                      ComPtr<INetworkAdapter> &aAdapter) = 0;
    virtual HRESULT addStorageController(const com::Utf8Str &aName,
                                         StorageBus_T aConnectionType,
                                         ComPtr<IStorageController> &aController) = 0;
    virtual HRESULT getStorageControllerByName(const com::Utf8Str &aName,
                                               ComPtr<IStorageController> &aStorageController) = 0;
    virtual HRESULT getStorageControllerByInstance(ULONG aInstance,
                                                   ComPtr<IStorageController> &aStorageController) = 0;
    virtual HRESULT removeStorageController(const com::Utf8Str &aName) = 0;
    virtual HRESULT setStorageControllerBootable(const com::Utf8Str &aName,
                                                 BOOL aBootable) = 0;
    virtual HRESULT addUSBController(const com::Utf8Str &aName,
                                     USBControllerType_T aType,
                                     ComPtr<IUSBController> &aController) = 0;
    virtual HRESULT removeUSBController(const com::Utf8Str &aName) = 0;
    virtual HRESULT getUSBControllerByName(const com::Utf8Str &aName,
                                           ComPtr<IUSBController> &aController) = 0;
    virtual HRESULT getUSBControllerCountByType(USBControllerType_T aType,
                                                ULONG *aControllers) = 0;
    virtual HRESULT getSerialPort(ULONG aSlot,
                                  ComPtr<ISerialPort> &aPort) = 0;
    virtual HRESULT getParallelPort(ULONG aSlot,
                                    ComPtr<IParallelPort> &aPort) = 0;
    virtual HRESULT getExtraDataKeys(std::vector<com::Utf8Str> &aKeys) = 0;
    virtual HRESULT getExtraData(const com::Utf8Str &aKey,
                                 com::Utf8Str &aValue) = 0;
    virtual HRESULT setExtraData(const com::Utf8Str &aKey,
                                 const com::Utf8Str &aValue) = 0;
    virtual HRESULT getCPUProperty(CPUPropertyType_T aProperty,
                                   BOOL *aValue) = 0;
    virtual HRESULT setCPUProperty(CPUPropertyType_T aProperty,
                                   BOOL aValue) = 0;
    virtual HRESULT getCPUIDLeaf(ULONG aId,
                                 ULONG *aValEax,
                                 ULONG *aValEbx,
                                 ULONG *aValEcx,
                                 ULONG *aValEdx) = 0;
    virtual HRESULT setCPUIDLeaf(ULONG aId,
                                 ULONG aValEax,
                                 ULONG aValEbx,
                                 ULONG aValEcx,
                                 ULONG aValEdx) = 0;
    virtual HRESULT removeCPUIDLeaf(ULONG aId) = 0;
    virtual HRESULT removeAllCPUIDLeaves() = 0;
    virtual HRESULT getHWVirtExProperty(HWVirtExPropertyType_T aProperty,
                                        BOOL *aValue) = 0;
    virtual HRESULT setHWVirtExProperty(HWVirtExPropertyType_T aProperty,
                                        BOOL aValue) = 0;
    virtual HRESULT setSettingsFilePath(const com::Utf8Str &aSettingsFilePath,
                                        ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT saveSettings() = 0;
    virtual HRESULT discardSettings() = 0;
    virtual HRESULT unregister(CleanupMode_T aCleanupMode,
                               std::vector<ComPtr<IMedium> > &aMedia) = 0;
    virtual HRESULT deleteConfig(const std::vector<ComPtr<IMedium> > &aMedia,
                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT exportTo(const ComPtr<IAppliance> &aAppliance,
                             const com::Utf8Str &aLocation,
                             ComPtr<IVirtualSystemDescription> &aDescription) = 0;
    virtual HRESULT findSnapshot(const com::Utf8Str &aNameOrId,
                                 ComPtr<ISnapshot> &aSnapshot) = 0;
    virtual HRESULT createSharedFolder(const com::Utf8Str &aName,
                                       const com::Utf8Str &aHostPath,
                                       BOOL aWritable,
                                       BOOL aAutomount) = 0;
    virtual HRESULT removeSharedFolder(const com::Utf8Str &aName) = 0;
    virtual HRESULT canShowConsoleWindow(BOOL *aCanShow) = 0;
    virtual HRESULT showConsoleWindow(LONG64 *aWinId) = 0;
    virtual HRESULT getGuestProperty(const com::Utf8Str &aName,
                                     com::Utf8Str &aValue,
                                     LONG64 *aTimestamp,
                                     com::Utf8Str &aFlags) = 0;
    virtual HRESULT getGuestPropertyValue(const com::Utf8Str &aProperty,
                                          com::Utf8Str &aValue) = 0;
    virtual HRESULT getGuestPropertyTimestamp(const com::Utf8Str &aProperty,
                                              LONG64 *aValue) = 0;
    virtual HRESULT setGuestProperty(const com::Utf8Str &aProperty,
                                     const com::Utf8Str &aValue,
                                     const com::Utf8Str &aFlags) = 0;
    virtual HRESULT setGuestPropertyValue(const com::Utf8Str &aProperty,
                                          const com::Utf8Str &aValue) = 0;
    virtual HRESULT deleteGuestProperty(const com::Utf8Str &aName) = 0;
    virtual HRESULT enumerateGuestProperties(const com::Utf8Str &aPatterns,
                                             std::vector<com::Utf8Str> &aNames,
                                             std::vector<com::Utf8Str> &aValues,
                                             std::vector<LONG64> &aTimestamps,
                                             std::vector<com::Utf8Str> &aFlags) = 0;
    virtual HRESULT querySavedGuestScreenInfo(ULONG aScreenId,
                                              ULONG *aOriginX,
                                              ULONG *aOriginY,
                                              ULONG *aWidth,
                                              ULONG *aHeight,
                                              BOOL *aEnabled) = 0;
    virtual HRESULT querySavedThumbnailSize(ULONG aScreenId,
                                            ULONG *aSize,
                                            ULONG *aWidth,
                                            ULONG *aHeight) = 0;
    virtual HRESULT readSavedThumbnailToArray(ULONG aScreenId,
                                              BOOL aBGR,
                                              ULONG *aWidth,
                                              ULONG *aHeight,
                                              std::vector<BYTE> &aData) = 0;
    virtual HRESULT readSavedThumbnailPNGToArray(ULONG aScreenId,
                                                 ULONG *aWidth,
                                                 ULONG *aHeight,
                                                 std::vector<BYTE> &aData) = 0;
    virtual HRESULT querySavedScreenshotPNGSize(ULONG aScreenId,
                                                ULONG *aSize,
                                                ULONG *aWidth,
                                                ULONG *aHeight) = 0;
    virtual HRESULT readSavedScreenshotPNGToArray(ULONG aScreenId,
                                                  ULONG *aWidth,
                                                  ULONG *aHeight,
                                                  std::vector<BYTE> &aData) = 0;
    virtual HRESULT hotPlugCPU(ULONG aCpu) = 0;
    virtual HRESULT hotUnplugCPU(ULONG aCpu) = 0;
    virtual HRESULT getCPUStatus(ULONG aCpu,
                                 BOOL *aAttached) = 0;
    virtual HRESULT queryLogFilename(ULONG aIdx,
                                     com::Utf8Str &aFilename) = 0;
    virtual HRESULT readLog(ULONG aIdx,
                            LONG64 aOffset,
                            LONG64 aSize,
                            std::vector<BYTE> &aData) = 0;
    virtual HRESULT cloneTo(const ComPtr<IMachine> &aTarget,
                            CloneMode_T aMode,
                            const std::vector<CloneOptions_T> &aOptions,
                            ComPtr<IProgress> &aProgress) = 0;
};

#endif // !MachineWrap_H_
