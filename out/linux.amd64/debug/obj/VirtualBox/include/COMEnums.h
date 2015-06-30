/*
 * DO NOT EDIT! This is a generated file.
 *
 * Qt-based wrappers for VirtualBox Main API (COM) enums.
 * Generated from XIDL (XML interface definition).
 *
 * Source    : src/VBox/Main/idl/VirtualBox.xidl
 * Generator : src/VBox/Frontends/VirtualBox/src/globals/COMWrappers.xsl
 */

#ifndef ___COMEnums_h___
#define ___COMEnums_h___

/* GUI includes: */
#include "COMDefs.h"

/* KSettingsVersion enum: */
enum KSettingsVersion
{
    KSettingsVersion_Null = ::SettingsVersion_Null,
    KSettingsVersion_v1_0 = ::SettingsVersion_v1_0,
    KSettingsVersion_v1_1 = ::SettingsVersion_v1_1,
    KSettingsVersion_v1_2 = ::SettingsVersion_v1_2,
    KSettingsVersion_v1_3pre = ::SettingsVersion_v1_3pre,
    KSettingsVersion_v1_3 = ::SettingsVersion_v1_3,
    KSettingsVersion_v1_4 = ::SettingsVersion_v1_4,
    KSettingsVersion_v1_5 = ::SettingsVersion_v1_5,
    KSettingsVersion_v1_6 = ::SettingsVersion_v1_6,
    KSettingsVersion_v1_7 = ::SettingsVersion_v1_7,
    KSettingsVersion_v1_8 = ::SettingsVersion_v1_8,
    KSettingsVersion_v1_9 = ::SettingsVersion_v1_9,
    KSettingsVersion_v1_10 = ::SettingsVersion_v1_10,
    KSettingsVersion_v1_11 = ::SettingsVersion_v1_11,
    KSettingsVersion_v1_12 = ::SettingsVersion_v1_12,
    KSettingsVersion_v1_13 = ::SettingsVersion_v1_13,
    KSettingsVersion_v1_14 = ::SettingsVersion_v1_14,
    KSettingsVersion_Future = ::SettingsVersion_Future,
    KSettingsVersion_Max
};

/* KAccessMode enum: */
enum KAccessMode
{
    KAccessMode_ReadOnly = ::AccessMode_ReadOnly,
    KAccessMode_ReadWrite = ::AccessMode_ReadWrite,
    KAccessMode_Max
};

/* KMachineState enum: */
enum KMachineState
{
    KMachineState_Null = ::MachineState_Null,
    KMachineState_PoweredOff = ::MachineState_PoweredOff,
    KMachineState_Saved = ::MachineState_Saved,
    KMachineState_Teleported = ::MachineState_Teleported,
    KMachineState_Aborted = ::MachineState_Aborted,
    KMachineState_Running = ::MachineState_Running,
    KMachineState_Paused = ::MachineState_Paused,
    KMachineState_Stuck = ::MachineState_Stuck,
    KMachineState_Teleporting = ::MachineState_Teleporting,
    KMachineState_LiveSnapshotting = ::MachineState_LiveSnapshotting,
    KMachineState_Starting = ::MachineState_Starting,
    KMachineState_Stopping = ::MachineState_Stopping,
    KMachineState_Saving = ::MachineState_Saving,
    KMachineState_Restoring = ::MachineState_Restoring,
    KMachineState_TeleportingPausedVM = ::MachineState_TeleportingPausedVM,
    KMachineState_TeleportingIn = ::MachineState_TeleportingIn,
    KMachineState_FaultTolerantSyncing = ::MachineState_FaultTolerantSyncing,
    KMachineState_DeletingSnapshotOnline = ::MachineState_DeletingSnapshotOnline,
    KMachineState_DeletingSnapshotPaused = ::MachineState_DeletingSnapshotPaused,
    KMachineState_RestoringSnapshot = ::MachineState_RestoringSnapshot,
    KMachineState_DeletingSnapshot = ::MachineState_DeletingSnapshot,
    KMachineState_SettingUp = ::MachineState_SettingUp,
    KMachineState_FirstOnline = ::MachineState_FirstOnline,
    KMachineState_LastOnline = ::MachineState_LastOnline,
    KMachineState_FirstTransient = ::MachineState_FirstTransient,
    KMachineState_LastTransient = ::MachineState_LastTransient,
    KMachineState_Max
};

/* KSessionState enum: */
enum KSessionState
{
    KSessionState_Null = ::SessionState_Null,
    KSessionState_Unlocked = ::SessionState_Unlocked,
    KSessionState_Locked = ::SessionState_Locked,
    KSessionState_Spawning = ::SessionState_Spawning,
    KSessionState_Unlocking = ::SessionState_Unlocking,
    KSessionState_Max
};

/* KCPUPropertyType enum: */
enum KCPUPropertyType
{
    KCPUPropertyType_Null = ::CPUPropertyType_Null,
    KCPUPropertyType_PAE = ::CPUPropertyType_PAE,
    KCPUPropertyType_Synthetic = ::CPUPropertyType_Synthetic,
    KCPUPropertyType_LongMode = ::CPUPropertyType_LongMode,
    KCPUPropertyType_TripleFaultReset = ::CPUPropertyType_TripleFaultReset,
    KCPUPropertyType_Max
};

/* KHWVirtExPropertyType enum: */
enum KHWVirtExPropertyType
{
    KHWVirtExPropertyType_Null = ::HWVirtExPropertyType_Null,
    KHWVirtExPropertyType_Enabled = ::HWVirtExPropertyType_Enabled,
    KHWVirtExPropertyType_VPID = ::HWVirtExPropertyType_VPID,
    KHWVirtExPropertyType_NestedPaging = ::HWVirtExPropertyType_NestedPaging,
    KHWVirtExPropertyType_UnrestrictedExecution = ::HWVirtExPropertyType_UnrestrictedExecution,
    KHWVirtExPropertyType_LargePages = ::HWVirtExPropertyType_LargePages,
    KHWVirtExPropertyType_Force = ::HWVirtExPropertyType_Force,
    KHWVirtExPropertyType_Max
};

/* KFaultToleranceState enum: */
enum KFaultToleranceState
{
    KFaultToleranceState_Inactive = ::FaultToleranceState_Inactive,
    KFaultToleranceState_Master = ::FaultToleranceState_Master,
    KFaultToleranceState_Standby = ::FaultToleranceState_Standby,
    KFaultToleranceState_Max
};

/* KLockType enum: */
enum KLockType
{
    KLockType_Write = ::LockType_Write,
    KLockType_Shared = ::LockType_Shared,
    KLockType_VM = ::LockType_VM,
    KLockType_Max
};

/* KSessionType enum: */
enum KSessionType
{
    KSessionType_Null = ::SessionType_Null,
    KSessionType_WriteLock = ::SessionType_WriteLock,
    KSessionType_Remote = ::SessionType_Remote,
    KSessionType_Shared = ::SessionType_Shared,
    KSessionType_Max
};

/* KDeviceType enum: */
enum KDeviceType
{
    KDeviceType_Null = ::DeviceType_Null,
    KDeviceType_Floppy = ::DeviceType_Floppy,
    KDeviceType_DVD = ::DeviceType_DVD,
    KDeviceType_HardDisk = ::DeviceType_HardDisk,
    KDeviceType_Network = ::DeviceType_Network,
    KDeviceType_USB = ::DeviceType_USB,
    KDeviceType_SharedFolder = ::DeviceType_SharedFolder,
    KDeviceType_Max
};

/* KDeviceActivity enum: */
enum KDeviceActivity
{
    KDeviceActivity_Null = ::DeviceActivity_Null,
    KDeviceActivity_Idle = ::DeviceActivity_Idle,
    KDeviceActivity_Reading = ::DeviceActivity_Reading,
    KDeviceActivity_Writing = ::DeviceActivity_Writing,
    KDeviceActivity_Max
};

/* KClipboardMode enum: */
enum KClipboardMode
{
    KClipboardMode_Disabled = ::ClipboardMode_Disabled,
    KClipboardMode_HostToGuest = ::ClipboardMode_HostToGuest,
    KClipboardMode_GuestToHost = ::ClipboardMode_GuestToHost,
    KClipboardMode_Bidirectional = ::ClipboardMode_Bidirectional,
    KClipboardMode_Max
};

/* KDragAndDropMode enum: */
enum KDragAndDropMode
{
    KDragAndDropMode_Disabled = ::DragAndDropMode_Disabled,
    KDragAndDropMode_HostToGuest = ::DragAndDropMode_HostToGuest,
    KDragAndDropMode_GuestToHost = ::DragAndDropMode_GuestToHost,
    KDragAndDropMode_Bidirectional = ::DragAndDropMode_Bidirectional,
    KDragAndDropMode_Max
};

/* KScope enum: */
enum KScope
{
    KScope_Global = ::Scope_Global,
    KScope_Machine = ::Scope_Machine,
    KScope_Session = ::Scope_Session,
    KScope_Max
};

/* KBIOSBootMenuMode enum: */
enum KBIOSBootMenuMode
{
    KBIOSBootMenuMode_Disabled = ::BIOSBootMenuMode_Disabled,
    KBIOSBootMenuMode_MenuOnly = ::BIOSBootMenuMode_MenuOnly,
    KBIOSBootMenuMode_MessageAndMenu = ::BIOSBootMenuMode_MessageAndMenu,
    KBIOSBootMenuMode_Max
};

/* KProcessorFeature enum: */
enum KProcessorFeature
{
    KProcessorFeature_HWVirtEx = ::ProcessorFeature_HWVirtEx,
    KProcessorFeature_PAE = ::ProcessorFeature_PAE,
    KProcessorFeature_LongMode = ::ProcessorFeature_LongMode,
    KProcessorFeature_NestedPaging = ::ProcessorFeature_NestedPaging,
    KProcessorFeature_Max
};

/* KFirmwareType enum: */
enum KFirmwareType
{
    KFirmwareType_BIOS = ::FirmwareType_BIOS,
    KFirmwareType_EFI = ::FirmwareType_EFI,
    KFirmwareType_EFI32 = ::FirmwareType_EFI32,
    KFirmwareType_EFI64 = ::FirmwareType_EFI64,
    KFirmwareType_EFIDUAL = ::FirmwareType_EFIDUAL,
    KFirmwareType_Max
};

/* KPointingHIDType enum: */
enum KPointingHIDType
{
    KPointingHIDType_None = ::PointingHIDType_None,
    KPointingHIDType_PS2Mouse = ::PointingHIDType_PS2Mouse,
    KPointingHIDType_USBMouse = ::PointingHIDType_USBMouse,
    KPointingHIDType_USBTablet = ::PointingHIDType_USBTablet,
    KPointingHIDType_ComboMouse = ::PointingHIDType_ComboMouse,
    KPointingHIDType_USBMultiTouch = ::PointingHIDType_USBMultiTouch,
    KPointingHIDType_Max
};

/* KKeyboardHIDType enum: */
enum KKeyboardHIDType
{
    KKeyboardHIDType_None = ::KeyboardHIDType_None,
    KKeyboardHIDType_PS2Keyboard = ::KeyboardHIDType_PS2Keyboard,
    KKeyboardHIDType_USBKeyboard = ::KeyboardHIDType_USBKeyboard,
    KKeyboardHIDType_ComboKeyboard = ::KeyboardHIDType_ComboKeyboard,
    KKeyboardHIDType_Max
};

/* KDhcpOpt enum: */
enum KDhcpOpt
{
    KDhcpOpt_SubnetMask = ::DhcpOpt_SubnetMask,
    KDhcpOpt_TimeOffset = ::DhcpOpt_TimeOffset,
    KDhcpOpt_Router = ::DhcpOpt_Router,
    KDhcpOpt_TimeServer = ::DhcpOpt_TimeServer,
    KDhcpOpt_NameServer = ::DhcpOpt_NameServer,
    KDhcpOpt_DomainNameServer = ::DhcpOpt_DomainNameServer,
    KDhcpOpt_LogServer = ::DhcpOpt_LogServer,
    KDhcpOpt_Cookie = ::DhcpOpt_Cookie,
    KDhcpOpt_LPRServer = ::DhcpOpt_LPRServer,
    KDhcpOpt_ImpressServer = ::DhcpOpt_ImpressServer,
    KDhcpOpt_ResourseLocationServer = ::DhcpOpt_ResourseLocationServer,
    KDhcpOpt_HostName = ::DhcpOpt_HostName,
    KDhcpOpt_BootFileSize = ::DhcpOpt_BootFileSize,
    KDhcpOpt_MeritDumpFile = ::DhcpOpt_MeritDumpFile,
    KDhcpOpt_DomainName = ::DhcpOpt_DomainName,
    KDhcpOpt_SwapServer = ::DhcpOpt_SwapServer,
    KDhcpOpt_RootPath = ::DhcpOpt_RootPath,
    KDhcpOpt_ExtensionPath = ::DhcpOpt_ExtensionPath,
    KDhcpOpt_IPForwardingEnableDisable = ::DhcpOpt_IPForwardingEnableDisable,
    KDhcpOpt_NonLocalSourceRoutingEnableDisable = ::DhcpOpt_NonLocalSourceRoutingEnableDisable,
    KDhcpOpt_PolicyFilter = ::DhcpOpt_PolicyFilter,
    KDhcpOpt_MaximumDatagramReassemblySize = ::DhcpOpt_MaximumDatagramReassemblySize,
    KDhcpOpt_DefaultIPTime2Live = ::DhcpOpt_DefaultIPTime2Live,
    KDhcpOpt_PathMTUAgingTimeout = ::DhcpOpt_PathMTUAgingTimeout,
    KDhcpOpt_IPLayerParametersPerInterface = ::DhcpOpt_IPLayerParametersPerInterface,
    KDhcpOpt_InterfaceMTU = ::DhcpOpt_InterfaceMTU,
    KDhcpOpt_AllSubnetsAreLocal = ::DhcpOpt_AllSubnetsAreLocal,
    KDhcpOpt_BroadcastAddress = ::DhcpOpt_BroadcastAddress,
    KDhcpOpt_PerformMaskDiscovery = ::DhcpOpt_PerformMaskDiscovery,
    KDhcpOpt_MaskSupplier = ::DhcpOpt_MaskSupplier,
    KDhcpOpt_PerformRouteDiscovery = ::DhcpOpt_PerformRouteDiscovery,
    KDhcpOpt_RouterSolicitationAddress = ::DhcpOpt_RouterSolicitationAddress,
    KDhcpOpt_StaticRoute = ::DhcpOpt_StaticRoute,
    KDhcpOpt_TrailerEncapsulation = ::DhcpOpt_TrailerEncapsulation,
    KDhcpOpt_ARPCacheTimeout = ::DhcpOpt_ARPCacheTimeout,
    KDhcpOpt_EthernetEncapsulation = ::DhcpOpt_EthernetEncapsulation,
    KDhcpOpt_TCPDefaultTTL = ::DhcpOpt_TCPDefaultTTL,
    KDhcpOpt_TCPKeepAliveInterval = ::DhcpOpt_TCPKeepAliveInterval,
    KDhcpOpt_TCPKeepAliveGarbage = ::DhcpOpt_TCPKeepAliveGarbage,
    KDhcpOpt_NetworkInformationServiceDomain = ::DhcpOpt_NetworkInformationServiceDomain,
    KDhcpOpt_NetworkInformationServiceServers = ::DhcpOpt_NetworkInformationServiceServers,
    KDhcpOpt_NetworkTimeProtocolServers = ::DhcpOpt_NetworkTimeProtocolServers,
    KDhcpOpt_VendorSpecificInformation = ::DhcpOpt_VendorSpecificInformation,
    KDhcpOpt_Option_44 = ::DhcpOpt_Option_44,
    KDhcpOpt_Option_45 = ::DhcpOpt_Option_45,
    KDhcpOpt_Option_46 = ::DhcpOpt_Option_46,
    KDhcpOpt_Option_47 = ::DhcpOpt_Option_47,
    KDhcpOpt_Option_48 = ::DhcpOpt_Option_48,
    KDhcpOpt_Option_49 = ::DhcpOpt_Option_49,
    KDhcpOpt_IPAddressLeaseTime = ::DhcpOpt_IPAddressLeaseTime,
    KDhcpOpt_Option_64 = ::DhcpOpt_Option_64,
    KDhcpOpt_Option_65 = ::DhcpOpt_Option_65,
    KDhcpOpt_TFTPServerName = ::DhcpOpt_TFTPServerName,
    KDhcpOpt_BootfileName = ::DhcpOpt_BootfileName,
    KDhcpOpt_Option_68 = ::DhcpOpt_Option_68,
    KDhcpOpt_Option_69 = ::DhcpOpt_Option_69,
    KDhcpOpt_Option_70 = ::DhcpOpt_Option_70,
    KDhcpOpt_Option_71 = ::DhcpOpt_Option_71,
    KDhcpOpt_Option_72 = ::DhcpOpt_Option_72,
    KDhcpOpt_Option_73 = ::DhcpOpt_Option_73,
    KDhcpOpt_Option_74 = ::DhcpOpt_Option_74,
    KDhcpOpt_Option_75 = ::DhcpOpt_Option_75,
    KDhcpOpt_Option_119 = ::DhcpOpt_Option_119,
    KDhcpOpt_Max
};

/* KVFSType enum: */
enum KVFSType
{
    KVFSType_File = ::VFSType_File,
    KVFSType_Cloud = ::VFSType_Cloud,
    KVFSType_S3 = ::VFSType_S3,
    KVFSType_WebDav = ::VFSType_WebDav,
    KVFSType_Max
};

/* KVFSFileType enum: */
enum KVFSFileType
{
    KVFSFileType_Unknown = ::VFSFileType_Unknown,
    KVFSFileType_Fifo = ::VFSFileType_Fifo,
    KVFSFileType_DevChar = ::VFSFileType_DevChar,
    KVFSFileType_Directory = ::VFSFileType_Directory,
    KVFSFileType_DevBlock = ::VFSFileType_DevBlock,
    KVFSFileType_File = ::VFSFileType_File,
    KVFSFileType_SymLink = ::VFSFileType_SymLink,
    KVFSFileType_Socket = ::VFSFileType_Socket,
    KVFSFileType_WhiteOut = ::VFSFileType_WhiteOut,
    KVFSFileType_Max
};

/* KImportOptions enum: */
enum KImportOptions
{
    KImportOptions_KeepAllMACs = ::ImportOptions_KeepAllMACs,
    KImportOptions_KeepNATMACs = ::ImportOptions_KeepNATMACs,
    KImportOptions_Max
};

/* KExportOptions enum: */
enum KExportOptions
{
    KExportOptions_CreateManifest = ::ExportOptions_CreateManifest,
    KExportOptions_ExportDVDImages = ::ExportOptions_ExportDVDImages,
    KExportOptions_StripAllMACs = ::ExportOptions_StripAllMACs,
    KExportOptions_StripAllNonNATMACs = ::ExportOptions_StripAllNonNATMACs,
    KExportOptions_Max
};

/* KVirtualSystemDescriptionType enum: */
enum KVirtualSystemDescriptionType
{
    KVirtualSystemDescriptionType_Ignore = ::VirtualSystemDescriptionType_Ignore,
    KVirtualSystemDescriptionType_OS = ::VirtualSystemDescriptionType_OS,
    KVirtualSystemDescriptionType_Name = ::VirtualSystemDescriptionType_Name,
    KVirtualSystemDescriptionType_Product = ::VirtualSystemDescriptionType_Product,
    KVirtualSystemDescriptionType_Vendor = ::VirtualSystemDescriptionType_Vendor,
    KVirtualSystemDescriptionType_Version = ::VirtualSystemDescriptionType_Version,
    KVirtualSystemDescriptionType_ProductUrl = ::VirtualSystemDescriptionType_ProductUrl,
    KVirtualSystemDescriptionType_VendorUrl = ::VirtualSystemDescriptionType_VendorUrl,
    KVirtualSystemDescriptionType_Description = ::VirtualSystemDescriptionType_Description,
    KVirtualSystemDescriptionType_License = ::VirtualSystemDescriptionType_License,
    KVirtualSystemDescriptionType_Miscellaneous = ::VirtualSystemDescriptionType_Miscellaneous,
    KVirtualSystemDescriptionType_CPU = ::VirtualSystemDescriptionType_CPU,
    KVirtualSystemDescriptionType_Memory = ::VirtualSystemDescriptionType_Memory,
    KVirtualSystemDescriptionType_HardDiskControllerIDE = ::VirtualSystemDescriptionType_HardDiskControllerIDE,
    KVirtualSystemDescriptionType_HardDiskControllerSATA = ::VirtualSystemDescriptionType_HardDiskControllerSATA,
    KVirtualSystemDescriptionType_HardDiskControllerSCSI = ::VirtualSystemDescriptionType_HardDiskControllerSCSI,
    KVirtualSystemDescriptionType_HardDiskControllerSAS = ::VirtualSystemDescriptionType_HardDiskControllerSAS,
    KVirtualSystemDescriptionType_HardDiskImage = ::VirtualSystemDescriptionType_HardDiskImage,
    KVirtualSystemDescriptionType_Floppy = ::VirtualSystemDescriptionType_Floppy,
    KVirtualSystemDescriptionType_CDROM = ::VirtualSystemDescriptionType_CDROM,
    KVirtualSystemDescriptionType_NetworkAdapter = ::VirtualSystemDescriptionType_NetworkAdapter,
    KVirtualSystemDescriptionType_USBController = ::VirtualSystemDescriptionType_USBController,
    KVirtualSystemDescriptionType_SoundCard = ::VirtualSystemDescriptionType_SoundCard,
    KVirtualSystemDescriptionType_SettingsFile = ::VirtualSystemDescriptionType_SettingsFile,
    KVirtualSystemDescriptionType_Max
};

/* KVirtualSystemDescriptionValueType enum: */
enum KVirtualSystemDescriptionValueType
{
    KVirtualSystemDescriptionValueType_Reference = ::VirtualSystemDescriptionValueType_Reference,
    KVirtualSystemDescriptionValueType_Original = ::VirtualSystemDescriptionValueType_Original,
    KVirtualSystemDescriptionValueType_Auto = ::VirtualSystemDescriptionValueType_Auto,
    KVirtualSystemDescriptionValueType_ExtraConfig = ::VirtualSystemDescriptionValueType_ExtraConfig,
    KVirtualSystemDescriptionValueType_Max
};

/* KGraphicsControllerType enum: */
enum KGraphicsControllerType
{
    KGraphicsControllerType_Null = ::GraphicsControllerType_Null,
    KGraphicsControllerType_VBoxVGA = ::GraphicsControllerType_VBoxVGA,
    KGraphicsControllerType_VMSVGA = ::GraphicsControllerType_VMSVGA,
    KGraphicsControllerType_Max
};

/* KCleanupMode enum: */
enum KCleanupMode
{
    KCleanupMode_UnregisterOnly = ::CleanupMode_UnregisterOnly,
    KCleanupMode_DetachAllReturnNone = ::CleanupMode_DetachAllReturnNone,
    KCleanupMode_DetachAllReturnHardDisksOnly = ::CleanupMode_DetachAllReturnHardDisksOnly,
    KCleanupMode_Full = ::CleanupMode_Full,
    KCleanupMode_Max
};

/* KCloneMode enum: */
enum KCloneMode
{
    KCloneMode_MachineState = ::CloneMode_MachineState,
    KCloneMode_MachineAndChildStates = ::CloneMode_MachineAndChildStates,
    KCloneMode_AllStates = ::CloneMode_AllStates,
    KCloneMode_Max
};

/* KCloneOptions enum: */
enum KCloneOptions
{
    KCloneOptions_Link = ::CloneOptions_Link,
    KCloneOptions_KeepAllMACs = ::CloneOptions_KeepAllMACs,
    KCloneOptions_KeepNATMACs = ::CloneOptions_KeepNATMACs,
    KCloneOptions_KeepDiskNames = ::CloneOptions_KeepDiskNames,
    KCloneOptions_Max
};

/* KAutostopType enum: */
enum KAutostopType
{
    KAutostopType_Disabled = ::AutostopType_Disabled,
    KAutostopType_SaveState = ::AutostopType_SaveState,
    KAutostopType_PowerOff = ::AutostopType_PowerOff,
    KAutostopType_AcpiShutdown = ::AutostopType_AcpiShutdown,
    KAutostopType_Max
};

/* KHostNetworkInterfaceMediumType enum: */
enum KHostNetworkInterfaceMediumType
{
    KHostNetworkInterfaceMediumType_Unknown = ::HostNetworkInterfaceMediumType_Unknown,
    KHostNetworkInterfaceMediumType_Ethernet = ::HostNetworkInterfaceMediumType_Ethernet,
    KHostNetworkInterfaceMediumType_PPP = ::HostNetworkInterfaceMediumType_PPP,
    KHostNetworkInterfaceMediumType_SLIP = ::HostNetworkInterfaceMediumType_SLIP,
    KHostNetworkInterfaceMediumType_Max
};

/* KHostNetworkInterfaceStatus enum: */
enum KHostNetworkInterfaceStatus
{
    KHostNetworkInterfaceStatus_Unknown = ::HostNetworkInterfaceStatus_Unknown,
    KHostNetworkInterfaceStatus_Up = ::HostNetworkInterfaceStatus_Up,
    KHostNetworkInterfaceStatus_Down = ::HostNetworkInterfaceStatus_Down,
    KHostNetworkInterfaceStatus_Max
};

/* KHostNetworkInterfaceType enum: */
enum KHostNetworkInterfaceType
{
    KHostNetworkInterfaceType_Bridged = ::HostNetworkInterfaceType_Bridged,
    KHostNetworkInterfaceType_HostOnly = ::HostNetworkInterfaceType_HostOnly,
    KHostNetworkInterfaceType_Max
};

/* KAdditionsFacilityType enum: */
enum KAdditionsFacilityType
{
    KAdditionsFacilityType_None = ::AdditionsFacilityType_None,
    KAdditionsFacilityType_VBoxGuestDriver = ::AdditionsFacilityType_VBoxGuestDriver,
    KAdditionsFacilityType_AutoLogon = ::AdditionsFacilityType_AutoLogon,
    KAdditionsFacilityType_VBoxService = ::AdditionsFacilityType_VBoxService,
    KAdditionsFacilityType_VBoxTrayClient = ::AdditionsFacilityType_VBoxTrayClient,
    KAdditionsFacilityType_Seamless = ::AdditionsFacilityType_Seamless,
    KAdditionsFacilityType_Graphics = ::AdditionsFacilityType_Graphics,
    KAdditionsFacilityType_All = ::AdditionsFacilityType_All,
    KAdditionsFacilityType_Max
};

/* KAdditionsFacilityClass enum: */
enum KAdditionsFacilityClass
{
    KAdditionsFacilityClass_None = ::AdditionsFacilityClass_None,
    KAdditionsFacilityClass_Driver = ::AdditionsFacilityClass_Driver,
    KAdditionsFacilityClass_Service = ::AdditionsFacilityClass_Service,
    KAdditionsFacilityClass_Program = ::AdditionsFacilityClass_Program,
    KAdditionsFacilityClass_Feature = ::AdditionsFacilityClass_Feature,
    KAdditionsFacilityClass_ThirdParty = ::AdditionsFacilityClass_ThirdParty,
    KAdditionsFacilityClass_All = ::AdditionsFacilityClass_All,
    KAdditionsFacilityClass_Max
};

/* KAdditionsFacilityStatus enum: */
enum KAdditionsFacilityStatus
{
    KAdditionsFacilityStatus_Inactive = ::AdditionsFacilityStatus_Inactive,
    KAdditionsFacilityStatus_Paused = ::AdditionsFacilityStatus_Paused,
    KAdditionsFacilityStatus_PreInit = ::AdditionsFacilityStatus_PreInit,
    KAdditionsFacilityStatus_Init = ::AdditionsFacilityStatus_Init,
    KAdditionsFacilityStatus_Active = ::AdditionsFacilityStatus_Active,
    KAdditionsFacilityStatus_Terminating = ::AdditionsFacilityStatus_Terminating,
    KAdditionsFacilityStatus_Terminated = ::AdditionsFacilityStatus_Terminated,
    KAdditionsFacilityStatus_Failed = ::AdditionsFacilityStatus_Failed,
    KAdditionsFacilityStatus_Unknown = ::AdditionsFacilityStatus_Unknown,
    KAdditionsFacilityStatus_Max
};

/* KAdditionsRunLevelType enum: */
enum KAdditionsRunLevelType
{
    KAdditionsRunLevelType_None = ::AdditionsRunLevelType_None,
    KAdditionsRunLevelType_System = ::AdditionsRunLevelType_System,
    KAdditionsRunLevelType_Userland = ::AdditionsRunLevelType_Userland,
    KAdditionsRunLevelType_Desktop = ::AdditionsRunLevelType_Desktop,
    KAdditionsRunLevelType_Max
};

/* KAdditionsUpdateFlag enum: */
enum KAdditionsUpdateFlag
{
    KAdditionsUpdateFlag_None = ::AdditionsUpdateFlag_None,
    KAdditionsUpdateFlag_WaitForUpdateStartOnly = ::AdditionsUpdateFlag_WaitForUpdateStartOnly,
    KAdditionsUpdateFlag_Max
};

/* KGuestSessionStatus enum: */
enum KGuestSessionStatus
{
    KGuestSessionStatus_Undefined = ::GuestSessionStatus_Undefined,
    KGuestSessionStatus_Starting = ::GuestSessionStatus_Starting,
    KGuestSessionStatus_Started = ::GuestSessionStatus_Started,
    KGuestSessionStatus_Terminating = ::GuestSessionStatus_Terminating,
    KGuestSessionStatus_Terminated = ::GuestSessionStatus_Terminated,
    KGuestSessionStatus_TimedOutKilled = ::GuestSessionStatus_TimedOutKilled,
    KGuestSessionStatus_TimedOutAbnormally = ::GuestSessionStatus_TimedOutAbnormally,
    KGuestSessionStatus_Down = ::GuestSessionStatus_Down,
    KGuestSessionStatus_Error = ::GuestSessionStatus_Error,
    KGuestSessionStatus_Max
};

/* KGuestSessionWaitForFlag enum: */
enum KGuestSessionWaitForFlag
{
    KGuestSessionWaitForFlag_None = ::GuestSessionWaitForFlag_None,
    KGuestSessionWaitForFlag_Start = ::GuestSessionWaitForFlag_Start,
    KGuestSessionWaitForFlag_Terminate = ::GuestSessionWaitForFlag_Terminate,
    KGuestSessionWaitForFlag_Status = ::GuestSessionWaitForFlag_Status,
    KGuestSessionWaitForFlag_Max
};

/* KGuestSessionWaitResult enum: */
enum KGuestSessionWaitResult
{
    KGuestSessionWaitResult_None = ::GuestSessionWaitResult_None,
    KGuestSessionWaitResult_Start = ::GuestSessionWaitResult_Start,
    KGuestSessionWaitResult_Terminate = ::GuestSessionWaitResult_Terminate,
    KGuestSessionWaitResult_Status = ::GuestSessionWaitResult_Status,
    KGuestSessionWaitResult_Error = ::GuestSessionWaitResult_Error,
    KGuestSessionWaitResult_Timeout = ::GuestSessionWaitResult_Timeout,
    KGuestSessionWaitResult_WaitFlagNotSupported = ::GuestSessionWaitResult_WaitFlagNotSupported,
    KGuestSessionWaitResult_Max
};

/* KGuestUserState enum: */
enum KGuestUserState
{
    KGuestUserState_Unknown = ::GuestUserState_Unknown,
    KGuestUserState_LoggedIn = ::GuestUserState_LoggedIn,
    KGuestUserState_LoggedOut = ::GuestUserState_LoggedOut,
    KGuestUserState_Locked = ::GuestUserState_Locked,
    KGuestUserState_Unlocked = ::GuestUserState_Unlocked,
    KGuestUserState_Disabled = ::GuestUserState_Disabled,
    KGuestUserState_Idle = ::GuestUserState_Idle,
    KGuestUserState_InUse = ::GuestUserState_InUse,
    KGuestUserState_Created = ::GuestUserState_Created,
    KGuestUserState_Deleted = ::GuestUserState_Deleted,
    KGuestUserState_SessionChanged = ::GuestUserState_SessionChanged,
    KGuestUserState_CredentialsChanged = ::GuestUserState_CredentialsChanged,
    KGuestUserState_RoleChanged = ::GuestUserState_RoleChanged,
    KGuestUserState_GroupAdded = ::GuestUserState_GroupAdded,
    KGuestUserState_GroupRemoved = ::GuestUserState_GroupRemoved,
    KGuestUserState_Elevated = ::GuestUserState_Elevated,
    KGuestUserState_Max
};

/* KFileSeekType enum: */
enum KFileSeekType
{
    KFileSeekType_Set = ::FileSeekType_Set,
    KFileSeekType_Current = ::FileSeekType_Current,
    KFileSeekType_Max
};

/* KProcessInputFlag enum: */
enum KProcessInputFlag
{
    KProcessInputFlag_None = ::ProcessInputFlag_None,
    KProcessInputFlag_EndOfFile = ::ProcessInputFlag_EndOfFile,
    KProcessInputFlag_Max
};

/* KProcessOutputFlag enum: */
enum KProcessOutputFlag
{
    KProcessOutputFlag_None = ::ProcessOutputFlag_None,
    KProcessOutputFlag_StdErr = ::ProcessOutputFlag_StdErr,
    KProcessOutputFlag_Max
};

/* KProcessWaitForFlag enum: */
enum KProcessWaitForFlag
{
    KProcessWaitForFlag_None = ::ProcessWaitForFlag_None,
    KProcessWaitForFlag_Start = ::ProcessWaitForFlag_Start,
    KProcessWaitForFlag_Terminate = ::ProcessWaitForFlag_Terminate,
    KProcessWaitForFlag_StdIn = ::ProcessWaitForFlag_StdIn,
    KProcessWaitForFlag_StdOut = ::ProcessWaitForFlag_StdOut,
    KProcessWaitForFlag_StdErr = ::ProcessWaitForFlag_StdErr,
    KProcessWaitForFlag_Max
};

/* KProcessWaitResult enum: */
enum KProcessWaitResult
{
    KProcessWaitResult_None = ::ProcessWaitResult_None,
    KProcessWaitResult_Start = ::ProcessWaitResult_Start,
    KProcessWaitResult_Terminate = ::ProcessWaitResult_Terminate,
    KProcessWaitResult_Status = ::ProcessWaitResult_Status,
    KProcessWaitResult_Error = ::ProcessWaitResult_Error,
    KProcessWaitResult_Timeout = ::ProcessWaitResult_Timeout,
    KProcessWaitResult_StdIn = ::ProcessWaitResult_StdIn,
    KProcessWaitResult_StdOut = ::ProcessWaitResult_StdOut,
    KProcessWaitResult_StdErr = ::ProcessWaitResult_StdErr,
    KProcessWaitResult_WaitFlagNotSupported = ::ProcessWaitResult_WaitFlagNotSupported,
    KProcessWaitResult_Max
};

/* KCopyFileFlag enum: */
enum KCopyFileFlag
{
    KCopyFileFlag_None = ::CopyFileFlag_None,
    KCopyFileFlag_Recursive = ::CopyFileFlag_Recursive,
    KCopyFileFlag_Update = ::CopyFileFlag_Update,
    KCopyFileFlag_FollowLinks = ::CopyFileFlag_FollowLinks,
    KCopyFileFlag_Max
};

/* KDirectoryCreateFlag enum: */
enum KDirectoryCreateFlag
{
    KDirectoryCreateFlag_None = ::DirectoryCreateFlag_None,
    KDirectoryCreateFlag_Parents = ::DirectoryCreateFlag_Parents,
    KDirectoryCreateFlag_Max
};

/* KDirectoryRemoveRecFlag enum: */
enum KDirectoryRemoveRecFlag
{
    KDirectoryRemoveRecFlag_None = ::DirectoryRemoveRecFlag_None,
    KDirectoryRemoveRecFlag_ContentAndDir = ::DirectoryRemoveRecFlag_ContentAndDir,
    KDirectoryRemoveRecFlag_ContentOnly = ::DirectoryRemoveRecFlag_ContentOnly,
    KDirectoryRemoveRecFlag_Max
};

/* KPathRenameFlag enum: */
enum KPathRenameFlag
{
    KPathRenameFlag_None = ::PathRenameFlag_None,
    KPathRenameFlag_NoReplace = ::PathRenameFlag_NoReplace,
    KPathRenameFlag_Replace = ::PathRenameFlag_Replace,
    KPathRenameFlag_NoSymlinks = ::PathRenameFlag_NoSymlinks,
    KPathRenameFlag_Max
};

/* KProcessCreateFlag enum: */
enum KProcessCreateFlag
{
    KProcessCreateFlag_None = ::ProcessCreateFlag_None,
    KProcessCreateFlag_WaitForProcessStartOnly = ::ProcessCreateFlag_WaitForProcessStartOnly,
    KProcessCreateFlag_IgnoreOrphanedProcesses = ::ProcessCreateFlag_IgnoreOrphanedProcesses,
    KProcessCreateFlag_Hidden = ::ProcessCreateFlag_Hidden,
    KProcessCreateFlag_NoProfile = ::ProcessCreateFlag_NoProfile,
    KProcessCreateFlag_WaitForStdOut = ::ProcessCreateFlag_WaitForStdOut,
    KProcessCreateFlag_WaitForStdErr = ::ProcessCreateFlag_WaitForStdErr,
    KProcessCreateFlag_ExpandArguments = ::ProcessCreateFlag_ExpandArguments,
    KProcessCreateFlag_UnquotedArguments = ::ProcessCreateFlag_UnquotedArguments,
    KProcessCreateFlag_Max
};

/* KProcessPriority enum: */
enum KProcessPriority
{
    KProcessPriority_Invalid = ::ProcessPriority_Invalid,
    KProcessPriority_Default = ::ProcessPriority_Default,
    KProcessPriority_Max
};

/* KSymlinkType enum: */
enum KSymlinkType
{
    KSymlinkType_Unknown = ::SymlinkType_Unknown,
    KSymlinkType_Directory = ::SymlinkType_Directory,
    KSymlinkType_File = ::SymlinkType_File,
    KSymlinkType_Max
};

/* KSymlinkReadFlag enum: */
enum KSymlinkReadFlag
{
    KSymlinkReadFlag_None = ::SymlinkReadFlag_None,
    KSymlinkReadFlag_NoSymlinks = ::SymlinkReadFlag_NoSymlinks,
    KSymlinkReadFlag_Max
};

/* KProcessStatus enum: */
enum KProcessStatus
{
    KProcessStatus_Undefined = ::ProcessStatus_Undefined,
    KProcessStatus_Starting = ::ProcessStatus_Starting,
    KProcessStatus_Started = ::ProcessStatus_Started,
    KProcessStatus_Paused = ::ProcessStatus_Paused,
    KProcessStatus_Terminating = ::ProcessStatus_Terminating,
    KProcessStatus_TerminatedNormally = ::ProcessStatus_TerminatedNormally,
    KProcessStatus_TerminatedSignal = ::ProcessStatus_TerminatedSignal,
    KProcessStatus_TerminatedAbnormally = ::ProcessStatus_TerminatedAbnormally,
    KProcessStatus_TimedOutKilled = ::ProcessStatus_TimedOutKilled,
    KProcessStatus_TimedOutAbnormally = ::ProcessStatus_TimedOutAbnormally,
    KProcessStatus_Down = ::ProcessStatus_Down,
    KProcessStatus_Error = ::ProcessStatus_Error,
    KProcessStatus_Max
};

/* KProcessInputStatus enum: */
enum KProcessInputStatus
{
    KProcessInputStatus_Undefined = ::ProcessInputStatus_Undefined,
    KProcessInputStatus_Broken = ::ProcessInputStatus_Broken,
    KProcessInputStatus_Available = ::ProcessInputStatus_Available,
    KProcessInputStatus_Written = ::ProcessInputStatus_Written,
    KProcessInputStatus_Overflow = ::ProcessInputStatus_Overflow,
    KProcessInputStatus_Max
};

/* KFileStatus enum: */
enum KFileStatus
{
    KFileStatus_Undefined = ::FileStatus_Undefined,
    KFileStatus_Opening = ::FileStatus_Opening,
    KFileStatus_Open = ::FileStatus_Open,
    KFileStatus_Closing = ::FileStatus_Closing,
    KFileStatus_Closed = ::FileStatus_Closed,
    KFileStatus_Down = ::FileStatus_Down,
    KFileStatus_Error = ::FileStatus_Error,
    KFileStatus_Max
};

/* KFsObjType enum: */
enum KFsObjType
{
    KFsObjType_Undefined = ::FsObjType_Undefined,
    KFsObjType_FIFO = ::FsObjType_FIFO,
    KFsObjType_DevChar = ::FsObjType_DevChar,
    KFsObjType_DevBlock = ::FsObjType_DevBlock,
    KFsObjType_Directory = ::FsObjType_Directory,
    KFsObjType_File = ::FsObjType_File,
    KFsObjType_Symlink = ::FsObjType_Symlink,
    KFsObjType_Socket = ::FsObjType_Socket,
    KFsObjType_Whiteout = ::FsObjType_Whiteout,
    KFsObjType_Max
};

/* KDragAndDropAction enum: */
enum KDragAndDropAction
{
    KDragAndDropAction_Ignore = ::DragAndDropAction_Ignore,
    KDragAndDropAction_Copy = ::DragAndDropAction_Copy,
    KDragAndDropAction_Move = ::DragAndDropAction_Move,
    KDragAndDropAction_Link = ::DragAndDropAction_Link,
    KDragAndDropAction_Max
};

/* KDirectoryOpenFlag enum: */
enum KDirectoryOpenFlag
{
    KDirectoryOpenFlag_None = ::DirectoryOpenFlag_None,
    KDirectoryOpenFlag_NoSymlinks = ::DirectoryOpenFlag_NoSymlinks,
    KDirectoryOpenFlag_Max
};

/* KMediumState enum: */
enum KMediumState
{
    KMediumState_NotCreated = ::MediumState_NotCreated,
    KMediumState_Created = ::MediumState_Created,
    KMediumState_LockedRead = ::MediumState_LockedRead,
    KMediumState_LockedWrite = ::MediumState_LockedWrite,
    KMediumState_Inaccessible = ::MediumState_Inaccessible,
    KMediumState_Creating = ::MediumState_Creating,
    KMediumState_Deleting = ::MediumState_Deleting,
    KMediumState_Max
};

/* KMediumType enum: */
enum KMediumType
{
    KMediumType_Normal = ::MediumType_Normal,
    KMediumType_Immutable = ::MediumType_Immutable,
    KMediumType_Writethrough = ::MediumType_Writethrough,
    KMediumType_Shareable = ::MediumType_Shareable,
    KMediumType_Readonly = ::MediumType_Readonly,
    KMediumType_MultiAttach = ::MediumType_MultiAttach,
    KMediumType_Max
};

/* KMediumVariant enum: */
enum KMediumVariant
{
    KMediumVariant_Standard = ::MediumVariant_Standard,
    KMediumVariant_VmdkSplit2G = ::MediumVariant_VmdkSplit2G,
    KMediumVariant_VmdkRawDisk = ::MediumVariant_VmdkRawDisk,
    KMediumVariant_VmdkStreamOptimized = ::MediumVariant_VmdkStreamOptimized,
    KMediumVariant_VmdkESX = ::MediumVariant_VmdkESX,
    KMediumVariant_Fixed = ::MediumVariant_Fixed,
    KMediumVariant_Diff = ::MediumVariant_Diff,
    KMediumVariant_NoCreateDir = ::MediumVariant_NoCreateDir,
    KMediumVariant_Max
};

/* KDataType enum: */
enum KDataType
{
    KDataType_Int32 = ::DataType_Int32,
    KDataType_Int8 = ::DataType_Int8,
    KDataType_String = ::DataType_String,
    KDataType_Max
};

/* KDataFlags enum: */
enum KDataFlags
{
    KDataFlags_None = ::DataFlags_None,
    KDataFlags_Mandatory = ::DataFlags_Mandatory,
    KDataFlags_Expert = ::DataFlags_Expert,
    KDataFlags_Array = ::DataFlags_Array,
    KDataFlags_FlagMask = ::DataFlags_FlagMask,
    KDataFlags_Max
};

/* KMediumFormatCapabilities enum: */
enum KMediumFormatCapabilities
{
    KMediumFormatCapabilities_Uuid = ::MediumFormatCapabilities_Uuid,
    KMediumFormatCapabilities_CreateFixed = ::MediumFormatCapabilities_CreateFixed,
    KMediumFormatCapabilities_CreateDynamic = ::MediumFormatCapabilities_CreateDynamic,
    KMediumFormatCapabilities_CreateSplit2G = ::MediumFormatCapabilities_CreateSplit2G,
    KMediumFormatCapabilities_Differencing = ::MediumFormatCapabilities_Differencing,
    KMediumFormatCapabilities_Asynchronous = ::MediumFormatCapabilities_Asynchronous,
    KMediumFormatCapabilities_File = ::MediumFormatCapabilities_File,
    KMediumFormatCapabilities_Properties = ::MediumFormatCapabilities_Properties,
    KMediumFormatCapabilities_TcpNetworking = ::MediumFormatCapabilities_TcpNetworking,
    KMediumFormatCapabilities_VFS = ::MediumFormatCapabilities_VFS,
    KMediumFormatCapabilities_CapabilityMask = ::MediumFormatCapabilities_CapabilityMask,
    KMediumFormatCapabilities_Max
};

/* KMouseButtonState enum: */
enum KMouseButtonState
{
    KMouseButtonState_LeftButton = ::MouseButtonState_LeftButton,
    KMouseButtonState_RightButton = ::MouseButtonState_RightButton,
    KMouseButtonState_MiddleButton = ::MouseButtonState_MiddleButton,
    KMouseButtonState_WheelUp = ::MouseButtonState_WheelUp,
    KMouseButtonState_WheelDown = ::MouseButtonState_WheelDown,
    KMouseButtonState_XButton1 = ::MouseButtonState_XButton1,
    KMouseButtonState_XButton2 = ::MouseButtonState_XButton2,
    KMouseButtonState_MouseStateMask = ::MouseButtonState_MouseStateMask,
    KMouseButtonState_Max
};

/* KTouchContactState enum: */
enum KTouchContactState
{
    KTouchContactState_None = ::TouchContactState_None,
    KTouchContactState_InContact = ::TouchContactState_InContact,
    KTouchContactState_InRange = ::TouchContactState_InRange,
    KTouchContactState_ContactStateMask = ::TouchContactState_ContactStateMask,
    KTouchContactState_Max
};

/* KFramebufferPixelFormat enum: */
enum KFramebufferPixelFormat
{
    KFramebufferPixelFormat_Opaque = ::FramebufferPixelFormat_Opaque,
    KFramebufferPixelFormat_FOURCC_RGB = ::FramebufferPixelFormat_FOURCC_RGB,
    KFramebufferPixelFormat_Max
};

/* KNetworkAttachmentType enum: */
enum KNetworkAttachmentType
{
    KNetworkAttachmentType_Null = ::NetworkAttachmentType_Null,
    KNetworkAttachmentType_NAT = ::NetworkAttachmentType_NAT,
    KNetworkAttachmentType_Bridged = ::NetworkAttachmentType_Bridged,
    KNetworkAttachmentType_Internal = ::NetworkAttachmentType_Internal,
    KNetworkAttachmentType_HostOnly = ::NetworkAttachmentType_HostOnly,
    KNetworkAttachmentType_Generic = ::NetworkAttachmentType_Generic,
    KNetworkAttachmentType_NATNetwork = ::NetworkAttachmentType_NATNetwork,
    KNetworkAttachmentType_Max
};

/* KNetworkAdapterType enum: */
enum KNetworkAdapterType
{
    KNetworkAdapterType_Null = ::NetworkAdapterType_Null,
    KNetworkAdapterType_Am79C970A = ::NetworkAdapterType_Am79C970A,
    KNetworkAdapterType_Am79C973 = ::NetworkAdapterType_Am79C973,
    KNetworkAdapterType_I82540EM = ::NetworkAdapterType_I82540EM,
    KNetworkAdapterType_I82543GC = ::NetworkAdapterType_I82543GC,
    KNetworkAdapterType_I82545EM = ::NetworkAdapterType_I82545EM,
    KNetworkAdapterType_Virtio = ::NetworkAdapterType_Virtio,
    KNetworkAdapterType_Max
};

/* KNetworkAdapterPromiscModePolicy enum: */
enum KNetworkAdapterPromiscModePolicy
{
    KNetworkAdapterPromiscModePolicy_Deny = ::NetworkAdapterPromiscModePolicy_Deny,
    KNetworkAdapterPromiscModePolicy_AllowNetwork = ::NetworkAdapterPromiscModePolicy_AllowNetwork,
    KNetworkAdapterPromiscModePolicy_AllowAll = ::NetworkAdapterPromiscModePolicy_AllowAll,
    KNetworkAdapterPromiscModePolicy_Max
};

/* KPortMode enum: */
enum KPortMode
{
    KPortMode_Disconnected = ::PortMode_Disconnected,
    KPortMode_HostPipe = ::PortMode_HostPipe,
    KPortMode_HostDevice = ::PortMode_HostDevice,
    KPortMode_RawFile = ::PortMode_RawFile,
    KPortMode_Max
};

/* KUSBControllerType enum: */
enum KUSBControllerType
{
    KUSBControllerType_Null = ::USBControllerType_Null,
    KUSBControllerType_OHCI = ::USBControllerType_OHCI,
    KUSBControllerType_EHCI = ::USBControllerType_EHCI,
    KUSBControllerType_Last = ::USBControllerType_Last,
    KUSBControllerType_Max
};

/* KUSBDeviceState enum: */
enum KUSBDeviceState
{
    KUSBDeviceState_NotSupported = ::USBDeviceState_NotSupported,
    KUSBDeviceState_Unavailable = ::USBDeviceState_Unavailable,
    KUSBDeviceState_Busy = ::USBDeviceState_Busy,
    KUSBDeviceState_Available = ::USBDeviceState_Available,
    KUSBDeviceState_Held = ::USBDeviceState_Held,
    KUSBDeviceState_Captured = ::USBDeviceState_Captured,
    KUSBDeviceState_Max
};

/* KUSBDeviceFilterAction enum: */
enum KUSBDeviceFilterAction
{
    KUSBDeviceFilterAction_Null = ::USBDeviceFilterAction_Null,
    KUSBDeviceFilterAction_Ignore = ::USBDeviceFilterAction_Ignore,
    KUSBDeviceFilterAction_Hold = ::USBDeviceFilterAction_Hold,
    KUSBDeviceFilterAction_Max
};

/* KAudioDriverType enum: */
enum KAudioDriverType
{
    KAudioDriverType_Null = ::AudioDriverType_Null,
    KAudioDriverType_WinMM = ::AudioDriverType_WinMM,
    KAudioDriverType_OSS = ::AudioDriverType_OSS,
    KAudioDriverType_ALSA = ::AudioDriverType_ALSA,
    KAudioDriverType_DirectSound = ::AudioDriverType_DirectSound,
    KAudioDriverType_CoreAudio = ::AudioDriverType_CoreAudio,
    KAudioDriverType_MMPM = ::AudioDriverType_MMPM,
    KAudioDriverType_Pulse = ::AudioDriverType_Pulse,
    KAudioDriverType_SolAudio = ::AudioDriverType_SolAudio,
    KAudioDriverType_Max
};

/* KAudioControllerType enum: */
enum KAudioControllerType
{
    KAudioControllerType_AC97 = ::AudioControllerType_AC97,
    KAudioControllerType_SB16 = ::AudioControllerType_SB16,
    KAudioControllerType_HDA = ::AudioControllerType_HDA,
    KAudioControllerType_Max
};

/* KAuthType enum: */
enum KAuthType
{
    KAuthType_Null = ::AuthType_Null,
    KAuthType_External = ::AuthType_External,
    KAuthType_Guest = ::AuthType_Guest,
    KAuthType_Max
};

/* KReason enum: */
enum KReason
{
    KReason_Unspecified = ::Reason_Unspecified,
    KReason_HostSuspend = ::Reason_HostSuspend,
    KReason_HostResume = ::Reason_HostResume,
    KReason_HostBatteryLow = ::Reason_HostBatteryLow,
    KReason_Max
};

/* KStorageBus enum: */
enum KStorageBus
{
    KStorageBus_Null = ::StorageBus_Null,
    KStorageBus_IDE = ::StorageBus_IDE,
    KStorageBus_SATA = ::StorageBus_SATA,
    KStorageBus_SCSI = ::StorageBus_SCSI,
    KStorageBus_Floppy = ::StorageBus_Floppy,
    KStorageBus_SAS = ::StorageBus_SAS,
    KStorageBus_Max
};

/* KStorageControllerType enum: */
enum KStorageControllerType
{
    KStorageControllerType_Null = ::StorageControllerType_Null,
    KStorageControllerType_LsiLogic = ::StorageControllerType_LsiLogic,
    KStorageControllerType_BusLogic = ::StorageControllerType_BusLogic,
    KStorageControllerType_IntelAhci = ::StorageControllerType_IntelAhci,
    KStorageControllerType_PIIX3 = ::StorageControllerType_PIIX3,
    KStorageControllerType_PIIX4 = ::StorageControllerType_PIIX4,
    KStorageControllerType_ICH6 = ::StorageControllerType_ICH6,
    KStorageControllerType_I82078 = ::StorageControllerType_I82078,
    KStorageControllerType_LsiLogicSas = ::StorageControllerType_LsiLogicSas,
    KStorageControllerType_Max
};

/* KChipsetType enum: */
enum KChipsetType
{
    KChipsetType_Null = ::ChipsetType_Null,
    KChipsetType_PIIX3 = ::ChipsetType_PIIX3,
    KChipsetType_ICH9 = ::ChipsetType_ICH9,
    KChipsetType_Max
};

/* KNATAliasMode enum: */
enum KNATAliasMode
{
    KNATAliasMode_AliasLog = ::NATAliasMode_AliasLog,
    KNATAliasMode_AliasProxyOnly = ::NATAliasMode_AliasProxyOnly,
    KNATAliasMode_AliasUseSamePorts = ::NATAliasMode_AliasUseSamePorts,
    KNATAliasMode_Max
};

/* KNATProtocol enum: */
enum KNATProtocol
{
    KNATProtocol_UDP = ::NATProtocol_UDP,
    KNATProtocol_TCP = ::NATProtocol_TCP,
    KNATProtocol_Max
};

/* KBandwidthGroupType enum: */
enum KBandwidthGroupType
{
    KBandwidthGroupType_Null = ::BandwidthGroupType_Null,
    KBandwidthGroupType_Disk = ::BandwidthGroupType_Disk,
    KBandwidthGroupType_Network = ::BandwidthGroupType_Network,
    KBandwidthGroupType_Max
};

/* KVBoxEventType enum: */
enum KVBoxEventType
{
    KVBoxEventType_Invalid = ::VBoxEventType_Invalid,
    KVBoxEventType_Any = ::VBoxEventType_Any,
    KVBoxEventType_Vetoable = ::VBoxEventType_Vetoable,
    KVBoxEventType_MachineEvent = ::VBoxEventType_MachineEvent,
    KVBoxEventType_SnapshotEvent = ::VBoxEventType_SnapshotEvent,
    KVBoxEventType_InputEvent = ::VBoxEventType_InputEvent,
    KVBoxEventType_LastWildcard = ::VBoxEventType_LastWildcard,
    KVBoxEventType_OnMachineStateChanged = ::VBoxEventType_OnMachineStateChanged,
    KVBoxEventType_OnMachineDataChanged = ::VBoxEventType_OnMachineDataChanged,
    KVBoxEventType_OnExtraDataChanged = ::VBoxEventType_OnExtraDataChanged,
    KVBoxEventType_OnExtraDataCanChange = ::VBoxEventType_OnExtraDataCanChange,
    KVBoxEventType_OnMediumRegistered = ::VBoxEventType_OnMediumRegistered,
    KVBoxEventType_OnMachineRegistered = ::VBoxEventType_OnMachineRegistered,
    KVBoxEventType_OnSessionStateChanged = ::VBoxEventType_OnSessionStateChanged,
    KVBoxEventType_OnSnapshotTaken = ::VBoxEventType_OnSnapshotTaken,
    KVBoxEventType_OnSnapshotDeleted = ::VBoxEventType_OnSnapshotDeleted,
    KVBoxEventType_OnSnapshotChanged = ::VBoxEventType_OnSnapshotChanged,
    KVBoxEventType_OnGuestPropertyChanged = ::VBoxEventType_OnGuestPropertyChanged,
    KVBoxEventType_OnMousePointerShapeChanged = ::VBoxEventType_OnMousePointerShapeChanged,
    KVBoxEventType_OnMouseCapabilityChanged = ::VBoxEventType_OnMouseCapabilityChanged,
    KVBoxEventType_OnKeyboardLedsChanged = ::VBoxEventType_OnKeyboardLedsChanged,
    KVBoxEventType_OnStateChanged = ::VBoxEventType_OnStateChanged,
    KVBoxEventType_OnAdditionsStateChanged = ::VBoxEventType_OnAdditionsStateChanged,
    KVBoxEventType_OnNetworkAdapterChanged = ::VBoxEventType_OnNetworkAdapterChanged,
    KVBoxEventType_OnSerialPortChanged = ::VBoxEventType_OnSerialPortChanged,
    KVBoxEventType_OnParallelPortChanged = ::VBoxEventType_OnParallelPortChanged,
    KVBoxEventType_OnStorageControllerChanged = ::VBoxEventType_OnStorageControllerChanged,
    KVBoxEventType_OnMediumChanged = ::VBoxEventType_OnMediumChanged,
    KVBoxEventType_OnVRDEServerChanged = ::VBoxEventType_OnVRDEServerChanged,
    KVBoxEventType_OnUSBControllerChanged = ::VBoxEventType_OnUSBControllerChanged,
    KVBoxEventType_OnUSBDeviceStateChanged = ::VBoxEventType_OnUSBDeviceStateChanged,
    KVBoxEventType_OnSharedFolderChanged = ::VBoxEventType_OnSharedFolderChanged,
    KVBoxEventType_OnRuntimeError = ::VBoxEventType_OnRuntimeError,
    KVBoxEventType_OnCanShowWindow = ::VBoxEventType_OnCanShowWindow,
    KVBoxEventType_OnShowWindow = ::VBoxEventType_OnShowWindow,
    KVBoxEventType_OnCPUChanged = ::VBoxEventType_OnCPUChanged,
    KVBoxEventType_OnVRDEServerInfoChanged = ::VBoxEventType_OnVRDEServerInfoChanged,
    KVBoxEventType_OnEventSourceChanged = ::VBoxEventType_OnEventSourceChanged,
    KVBoxEventType_OnCPUExecutionCapChanged = ::VBoxEventType_OnCPUExecutionCapChanged,
    KVBoxEventType_OnGuestKeyboard = ::VBoxEventType_OnGuestKeyboard,
    KVBoxEventType_OnGuestMouse = ::VBoxEventType_OnGuestMouse,
    KVBoxEventType_OnNATRedirect = ::VBoxEventType_OnNATRedirect,
    KVBoxEventType_OnHostPCIDevicePlug = ::VBoxEventType_OnHostPCIDevicePlug,
    KVBoxEventType_OnVBoxSVCAvailabilityChanged = ::VBoxEventType_OnVBoxSVCAvailabilityChanged,
    KVBoxEventType_OnBandwidthGroupChanged = ::VBoxEventType_OnBandwidthGroupChanged,
    KVBoxEventType_OnGuestMonitorChanged = ::VBoxEventType_OnGuestMonitorChanged,
    KVBoxEventType_OnStorageDeviceChanged = ::VBoxEventType_OnStorageDeviceChanged,
    KVBoxEventType_OnClipboardModeChanged = ::VBoxEventType_OnClipboardModeChanged,
    KVBoxEventType_OnDragAndDropModeChanged = ::VBoxEventType_OnDragAndDropModeChanged,
    KVBoxEventType_OnNATNetworkChanged = ::VBoxEventType_OnNATNetworkChanged,
    KVBoxEventType_OnNATNetworkStartStop = ::VBoxEventType_OnNATNetworkStartStop,
    KVBoxEventType_OnNATNetworkAlter = ::VBoxEventType_OnNATNetworkAlter,
    KVBoxEventType_OnNATNetworkCreationDeletion = ::VBoxEventType_OnNATNetworkCreationDeletion,
    KVBoxEventType_OnNATNetworkSetting = ::VBoxEventType_OnNATNetworkSetting,
    KVBoxEventType_OnNATNetworkPortForward = ::VBoxEventType_OnNATNetworkPortForward,
    KVBoxEventType_OnGuestSessionStateChanged = ::VBoxEventType_OnGuestSessionStateChanged,
    KVBoxEventType_OnGuestSessionRegistered = ::VBoxEventType_OnGuestSessionRegistered,
    KVBoxEventType_OnGuestProcessRegistered = ::VBoxEventType_OnGuestProcessRegistered,
    KVBoxEventType_OnGuestProcessStateChanged = ::VBoxEventType_OnGuestProcessStateChanged,
    KVBoxEventType_OnGuestProcessInputNotify = ::VBoxEventType_OnGuestProcessInputNotify,
    KVBoxEventType_OnGuestProcessOutput = ::VBoxEventType_OnGuestProcessOutput,
    KVBoxEventType_OnGuestFileRegistered = ::VBoxEventType_OnGuestFileRegistered,
    KVBoxEventType_OnGuestFileStateChanged = ::VBoxEventType_OnGuestFileStateChanged,
    KVBoxEventType_OnGuestFileOffsetChanged = ::VBoxEventType_OnGuestFileOffsetChanged,
    KVBoxEventType_OnGuestFileRead = ::VBoxEventType_OnGuestFileRead,
    KVBoxEventType_OnGuestFileWrite = ::VBoxEventType_OnGuestFileWrite,
    KVBoxEventType_OnVideoCaptureChanged = ::VBoxEventType_OnVideoCaptureChanged,
    KVBoxEventType_OnGuestUserStateChanged = ::VBoxEventType_OnGuestUserStateChanged,
    KVBoxEventType_OnGuestMultiTouch = ::VBoxEventType_OnGuestMultiTouch,
    KVBoxEventType_OnHostNameResolutionConfigurationChange = ::VBoxEventType_OnHostNameResolutionConfigurationChange,
    KVBoxEventType_Last = ::VBoxEventType_Last,
    KVBoxEventType_Max
};

/* KGuestMouseEventMode enum: */
enum KGuestMouseEventMode
{
    KGuestMouseEventMode_Relative = ::GuestMouseEventMode_Relative,
    KGuestMouseEventMode_Absolute = ::GuestMouseEventMode_Absolute,
    KGuestMouseEventMode_Max
};

/* KGuestMonitorChangedEventType enum: */
enum KGuestMonitorChangedEventType
{
    KGuestMonitorChangedEventType_Enabled = ::GuestMonitorChangedEventType_Enabled,
    KGuestMonitorChangedEventType_Disabled = ::GuestMonitorChangedEventType_Disabled,
    KGuestMonitorChangedEventType_NewOrigin = ::GuestMonitorChangedEventType_NewOrigin,
    KGuestMonitorChangedEventType_Max
};

/* Let QMetaType know about generated enums: */
Q_DECLARE_METATYPE(KSettingsVersion)
Q_DECLARE_METATYPE(KAccessMode)
Q_DECLARE_METATYPE(KMachineState)
Q_DECLARE_METATYPE(KSessionState)
Q_DECLARE_METATYPE(KCPUPropertyType)
Q_DECLARE_METATYPE(KHWVirtExPropertyType)
Q_DECLARE_METATYPE(KFaultToleranceState)
Q_DECLARE_METATYPE(KLockType)
Q_DECLARE_METATYPE(KSessionType)
Q_DECLARE_METATYPE(KDeviceType)
Q_DECLARE_METATYPE(KDeviceActivity)
Q_DECLARE_METATYPE(KClipboardMode)
Q_DECLARE_METATYPE(KDragAndDropMode)
Q_DECLARE_METATYPE(KScope)
Q_DECLARE_METATYPE(KBIOSBootMenuMode)
Q_DECLARE_METATYPE(KProcessorFeature)
Q_DECLARE_METATYPE(KFirmwareType)
Q_DECLARE_METATYPE(KPointingHIDType)
Q_DECLARE_METATYPE(KKeyboardHIDType)
Q_DECLARE_METATYPE(KDhcpOpt)
Q_DECLARE_METATYPE(KVFSType)
Q_DECLARE_METATYPE(KVFSFileType)
Q_DECLARE_METATYPE(KImportOptions)
Q_DECLARE_METATYPE(KExportOptions)
Q_DECLARE_METATYPE(KVirtualSystemDescriptionType)
Q_DECLARE_METATYPE(KVirtualSystemDescriptionValueType)
Q_DECLARE_METATYPE(KGraphicsControllerType)
Q_DECLARE_METATYPE(KCleanupMode)
Q_DECLARE_METATYPE(KCloneMode)
Q_DECLARE_METATYPE(KCloneOptions)
Q_DECLARE_METATYPE(KAutostopType)
Q_DECLARE_METATYPE(KHostNetworkInterfaceMediumType)
Q_DECLARE_METATYPE(KHostNetworkInterfaceStatus)
Q_DECLARE_METATYPE(KHostNetworkInterfaceType)
Q_DECLARE_METATYPE(KAdditionsFacilityType)
Q_DECLARE_METATYPE(KAdditionsFacilityClass)
Q_DECLARE_METATYPE(KAdditionsFacilityStatus)
Q_DECLARE_METATYPE(KAdditionsRunLevelType)
Q_DECLARE_METATYPE(KAdditionsUpdateFlag)
Q_DECLARE_METATYPE(KGuestSessionStatus)
Q_DECLARE_METATYPE(KGuestSessionWaitForFlag)
Q_DECLARE_METATYPE(KGuestSessionWaitResult)
Q_DECLARE_METATYPE(KGuestUserState)
Q_DECLARE_METATYPE(KFileSeekType)
Q_DECLARE_METATYPE(KProcessInputFlag)
Q_DECLARE_METATYPE(KProcessOutputFlag)
Q_DECLARE_METATYPE(KProcessWaitForFlag)
Q_DECLARE_METATYPE(KProcessWaitResult)
Q_DECLARE_METATYPE(KCopyFileFlag)
Q_DECLARE_METATYPE(KDirectoryCreateFlag)
Q_DECLARE_METATYPE(KDirectoryRemoveRecFlag)
Q_DECLARE_METATYPE(KPathRenameFlag)
Q_DECLARE_METATYPE(KProcessCreateFlag)
Q_DECLARE_METATYPE(KProcessPriority)
Q_DECLARE_METATYPE(KSymlinkType)
Q_DECLARE_METATYPE(KSymlinkReadFlag)
Q_DECLARE_METATYPE(KProcessStatus)
Q_DECLARE_METATYPE(KProcessInputStatus)
Q_DECLARE_METATYPE(KFileStatus)
Q_DECLARE_METATYPE(KFsObjType)
Q_DECLARE_METATYPE(KDragAndDropAction)
Q_DECLARE_METATYPE(KDirectoryOpenFlag)
Q_DECLARE_METATYPE(KMediumState)
Q_DECLARE_METATYPE(KMediumType)
Q_DECLARE_METATYPE(KMediumVariant)
Q_DECLARE_METATYPE(KDataType)
Q_DECLARE_METATYPE(KDataFlags)
Q_DECLARE_METATYPE(KMediumFormatCapabilities)
Q_DECLARE_METATYPE(KMouseButtonState)
Q_DECLARE_METATYPE(KTouchContactState)
Q_DECLARE_METATYPE(KFramebufferPixelFormat)
Q_DECLARE_METATYPE(KNetworkAttachmentType)
Q_DECLARE_METATYPE(KNetworkAdapterType)
Q_DECLARE_METATYPE(KNetworkAdapterPromiscModePolicy)
Q_DECLARE_METATYPE(KPortMode)
Q_DECLARE_METATYPE(KUSBControllerType)
Q_DECLARE_METATYPE(KUSBDeviceState)
Q_DECLARE_METATYPE(KUSBDeviceFilterAction)
Q_DECLARE_METATYPE(KAudioDriverType)
Q_DECLARE_METATYPE(KAudioControllerType)
Q_DECLARE_METATYPE(KAuthType)
Q_DECLARE_METATYPE(KReason)
Q_DECLARE_METATYPE(KStorageBus)
Q_DECLARE_METATYPE(KStorageControllerType)
Q_DECLARE_METATYPE(KChipsetType)
Q_DECLARE_METATYPE(KNATAliasMode)
Q_DECLARE_METATYPE(KNATProtocol)
Q_DECLARE_METATYPE(KBandwidthGroupType)
Q_DECLARE_METATYPE(KVBoxEventType)
Q_DECLARE_METATYPE(KGuestMouseEventMode)
Q_DECLARE_METATYPE(KGuestMonitorChangedEventType)

#endif /* __COMEnums_h__ */

