/** @file
 *
 * VirtualBox API class wrapper header for ISystemProperties.
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

#ifndef SystemPropertiesWrap_H_
#define SystemPropertiesWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SystemPropertiesWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(ISystemProperties)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SystemPropertiesWrap, ISystemProperties)
    DECLARE_NOT_AGGREGATABLE(SystemPropertiesWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SystemPropertiesWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISystemProperties)
        COM_INTERFACE_ENTRY2(IDispatch, ISystemProperties)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(SystemPropertiesWrap)

    // public ISystemProperties properties
    STDMETHOD(COMGETTER(MinGuestRAM))(ULONG *aMinGuestRAM);
    STDMETHOD(COMGETTER(MaxGuestRAM))(ULONG *aMaxGuestRAM);
    STDMETHOD(COMGETTER(MinGuestVRAM))(ULONG *aMinGuestVRAM);
    STDMETHOD(COMGETTER(MaxGuestVRAM))(ULONG *aMaxGuestVRAM);
    STDMETHOD(COMGETTER(MinGuestCPUCount))(ULONG *aMinGuestCPUCount);
    STDMETHOD(COMGETTER(MaxGuestCPUCount))(ULONG *aMaxGuestCPUCount);
    STDMETHOD(COMGETTER(MaxGuestMonitors))(ULONG *aMaxGuestMonitors);
    STDMETHOD(COMGETTER(InfoVDSize))(LONG64 *aInfoVDSize);
    STDMETHOD(COMGETTER(SerialPortCount))(ULONG *aSerialPortCount);
    STDMETHOD(COMGETTER(ParallelPortCount))(ULONG *aParallelPortCount);
    STDMETHOD(COMGETTER(MaxBootPosition))(ULONG *aMaxBootPosition);
    STDMETHOD(COMGETTER(ExclusiveHwVirt))(BOOL *aExclusiveHwVirt);
    STDMETHOD(COMSETTER(ExclusiveHwVirt))(BOOL aExclusiveHwVirt);
    STDMETHOD(COMGETTER(DefaultMachineFolder))(BSTR *aDefaultMachineFolder);
    STDMETHOD(COMSETTER(DefaultMachineFolder))(IN_BSTR aDefaultMachineFolder);
    STDMETHOD(COMGETTER(LoggingLevel))(BSTR *aLoggingLevel);
    STDMETHOD(COMSETTER(LoggingLevel))(IN_BSTR aLoggingLevel);
    STDMETHOD(COMGETTER(MediumFormats))(ComSafeArrayOut(IMediumFormat *, aMediumFormats));
    STDMETHOD(COMGETTER(DefaultHardDiskFormat))(BSTR *aDefaultHardDiskFormat);
    STDMETHOD(COMSETTER(DefaultHardDiskFormat))(IN_BSTR aDefaultHardDiskFormat);
    STDMETHOD(COMGETTER(FreeDiskSpaceWarning))(LONG64 *aFreeDiskSpaceWarning);
    STDMETHOD(COMSETTER(FreeDiskSpaceWarning))(LONG64 aFreeDiskSpaceWarning);
    STDMETHOD(COMGETTER(FreeDiskSpacePercentWarning))(ULONG *aFreeDiskSpacePercentWarning);
    STDMETHOD(COMSETTER(FreeDiskSpacePercentWarning))(ULONG aFreeDiskSpacePercentWarning);
    STDMETHOD(COMGETTER(FreeDiskSpaceError))(LONG64 *aFreeDiskSpaceError);
    STDMETHOD(COMSETTER(FreeDiskSpaceError))(LONG64 aFreeDiskSpaceError);
    STDMETHOD(COMGETTER(FreeDiskSpacePercentError))(ULONG *aFreeDiskSpacePercentError);
    STDMETHOD(COMSETTER(FreeDiskSpacePercentError))(ULONG aFreeDiskSpacePercentError);
    STDMETHOD(COMGETTER(VRDEAuthLibrary))(BSTR *aVRDEAuthLibrary);
    STDMETHOD(COMSETTER(VRDEAuthLibrary))(IN_BSTR aVRDEAuthLibrary);
    STDMETHOD(COMGETTER(WebServiceAuthLibrary))(BSTR *aWebServiceAuthLibrary);
    STDMETHOD(COMSETTER(WebServiceAuthLibrary))(IN_BSTR aWebServiceAuthLibrary);
    STDMETHOD(COMGETTER(DefaultVRDEExtPack))(BSTR *aDefaultVRDEExtPack);
    STDMETHOD(COMSETTER(DefaultVRDEExtPack))(IN_BSTR aDefaultVRDEExtPack);
    STDMETHOD(COMGETTER(LogHistoryCount))(ULONG *aLogHistoryCount);
    STDMETHOD(COMSETTER(LogHistoryCount))(ULONG aLogHistoryCount);
    STDMETHOD(COMGETTER(DefaultAudioDriver))(AudioDriverType_T *aDefaultAudioDriver);
    STDMETHOD(COMGETTER(AutostartDatabasePath))(BSTR *aAutostartDatabasePath);
    STDMETHOD(COMSETTER(AutostartDatabasePath))(IN_BSTR aAutostartDatabasePath);
    STDMETHOD(COMGETTER(DefaultAdditionsISO))(BSTR *aDefaultAdditionsISO);
    STDMETHOD(COMSETTER(DefaultAdditionsISO))(IN_BSTR aDefaultAdditionsISO);
    STDMETHOD(COMGETTER(DefaultFrontend))(BSTR *aDefaultFrontend);
    STDMETHOD(COMSETTER(DefaultFrontend))(IN_BSTR aDefaultFrontend);

    // public ISystemProperties methods
    STDMETHOD(GetMaxNetworkAdapters)(ChipsetType_T aChipset,
                                     ULONG *aMaxNetworkAdapters);
    STDMETHOD(GetMaxNetworkAdaptersOfType)(ChipsetType_T aChipset,
                                           NetworkAttachmentType_T aType,
                                           ULONG *aMaxNetworkAdapters);
    STDMETHOD(GetMaxDevicesPerPortForStorageBus)(StorageBus_T aBus,
                                                 ULONG *aMaxDevicesPerPort);
    STDMETHOD(GetMinPortCountForStorageBus)(StorageBus_T aBus,
                                            ULONG *aMinPortCount);
    STDMETHOD(GetMaxPortCountForStorageBus)(StorageBus_T aBus,
                                            ULONG *aMaxPortCount);
    STDMETHOD(GetMaxInstancesOfStorageBus)(ChipsetType_T aChipset,
                                           StorageBus_T aBus,
                                           ULONG *aMaxInstances);
    STDMETHOD(GetDeviceTypesForStorageBus)(StorageBus_T aBus,
                                           ComSafeArrayOut(DeviceType_T, aDeviceTypes));
    STDMETHOD(GetDefaultIoCacheSettingForStorageController)(StorageControllerType_T aControllerType,
                                                            BOOL *aEnabled);
    STDMETHOD(GetMaxInstancesOfUSBControllerType)(ChipsetType_T aChipset,
                                                  USBControllerType_T aType,
                                                  ULONG *aMaxInstances);

private:
    // wrapped ISystemProperties properties
    virtual HRESULT getMinGuestRAM(ULONG *aMinGuestRAM) = 0;
    virtual HRESULT getMaxGuestRAM(ULONG *aMaxGuestRAM) = 0;
    virtual HRESULT getMinGuestVRAM(ULONG *aMinGuestVRAM) = 0;
    virtual HRESULT getMaxGuestVRAM(ULONG *aMaxGuestVRAM) = 0;
    virtual HRESULT getMinGuestCPUCount(ULONG *aMinGuestCPUCount) = 0;
    virtual HRESULT getMaxGuestCPUCount(ULONG *aMaxGuestCPUCount) = 0;
    virtual HRESULT getMaxGuestMonitors(ULONG *aMaxGuestMonitors) = 0;
    virtual HRESULT getInfoVDSize(LONG64 *aInfoVDSize) = 0;
    virtual HRESULT getSerialPortCount(ULONG *aSerialPortCount) = 0;
    virtual HRESULT getParallelPortCount(ULONG *aParallelPortCount) = 0;
    virtual HRESULT getMaxBootPosition(ULONG *aMaxBootPosition) = 0;
    virtual HRESULT getExclusiveHwVirt(BOOL *aExclusiveHwVirt) = 0;
    virtual HRESULT setExclusiveHwVirt(BOOL aExclusiveHwVirt) = 0;
    virtual HRESULT getDefaultMachineFolder(com::Utf8Str &aDefaultMachineFolder) = 0;
    virtual HRESULT setDefaultMachineFolder(const com::Utf8Str &aDefaultMachineFolder) = 0;
    virtual HRESULT getLoggingLevel(com::Utf8Str &aLoggingLevel) = 0;
    virtual HRESULT setLoggingLevel(const com::Utf8Str &aLoggingLevel) = 0;
    virtual HRESULT getMediumFormats(std::vector<ComPtr<IMediumFormat> > &aMediumFormats) = 0;
    virtual HRESULT getDefaultHardDiskFormat(com::Utf8Str &aDefaultHardDiskFormat) = 0;
    virtual HRESULT setDefaultHardDiskFormat(const com::Utf8Str &aDefaultHardDiskFormat) = 0;
    virtual HRESULT getFreeDiskSpaceWarning(LONG64 *aFreeDiskSpaceWarning) = 0;
    virtual HRESULT setFreeDiskSpaceWarning(LONG64 aFreeDiskSpaceWarning) = 0;
    virtual HRESULT getFreeDiskSpacePercentWarning(ULONG *aFreeDiskSpacePercentWarning) = 0;
    virtual HRESULT setFreeDiskSpacePercentWarning(ULONG aFreeDiskSpacePercentWarning) = 0;
    virtual HRESULT getFreeDiskSpaceError(LONG64 *aFreeDiskSpaceError) = 0;
    virtual HRESULT setFreeDiskSpaceError(LONG64 aFreeDiskSpaceError) = 0;
    virtual HRESULT getFreeDiskSpacePercentError(ULONG *aFreeDiskSpacePercentError) = 0;
    virtual HRESULT setFreeDiskSpacePercentError(ULONG aFreeDiskSpacePercentError) = 0;
    virtual HRESULT getVRDEAuthLibrary(com::Utf8Str &aVRDEAuthLibrary) = 0;
    virtual HRESULT setVRDEAuthLibrary(const com::Utf8Str &aVRDEAuthLibrary) = 0;
    virtual HRESULT getWebServiceAuthLibrary(com::Utf8Str &aWebServiceAuthLibrary) = 0;
    virtual HRESULT setWebServiceAuthLibrary(const com::Utf8Str &aWebServiceAuthLibrary) = 0;
    virtual HRESULT getDefaultVRDEExtPack(com::Utf8Str &aDefaultVRDEExtPack) = 0;
    virtual HRESULT setDefaultVRDEExtPack(const com::Utf8Str &aDefaultVRDEExtPack) = 0;
    virtual HRESULT getLogHistoryCount(ULONG *aLogHistoryCount) = 0;
    virtual HRESULT setLogHistoryCount(ULONG aLogHistoryCount) = 0;
    virtual HRESULT getDefaultAudioDriver(AudioDriverType_T *aDefaultAudioDriver) = 0;
    virtual HRESULT getAutostartDatabasePath(com::Utf8Str &aAutostartDatabasePath) = 0;
    virtual HRESULT setAutostartDatabasePath(const com::Utf8Str &aAutostartDatabasePath) = 0;
    virtual HRESULT getDefaultAdditionsISO(com::Utf8Str &aDefaultAdditionsISO) = 0;
    virtual HRESULT setDefaultAdditionsISO(const com::Utf8Str &aDefaultAdditionsISO) = 0;
    virtual HRESULT getDefaultFrontend(com::Utf8Str &aDefaultFrontend) = 0;
    virtual HRESULT setDefaultFrontend(const com::Utf8Str &aDefaultFrontend) = 0;

    // wrapped ISystemProperties methods
    virtual HRESULT getMaxNetworkAdapters(ChipsetType_T aChipset,
                                          ULONG *aMaxNetworkAdapters) = 0;
    virtual HRESULT getMaxNetworkAdaptersOfType(ChipsetType_T aChipset,
                                                NetworkAttachmentType_T aType,
                                                ULONG *aMaxNetworkAdapters) = 0;
    virtual HRESULT getMaxDevicesPerPortForStorageBus(StorageBus_T aBus,
                                                      ULONG *aMaxDevicesPerPort) = 0;
    virtual HRESULT getMinPortCountForStorageBus(StorageBus_T aBus,
                                                 ULONG *aMinPortCount) = 0;
    virtual HRESULT getMaxPortCountForStorageBus(StorageBus_T aBus,
                                                 ULONG *aMaxPortCount) = 0;
    virtual HRESULT getMaxInstancesOfStorageBus(ChipsetType_T aChipset,
                                                StorageBus_T aBus,
                                                ULONG *aMaxInstances) = 0;
    virtual HRESULT getDeviceTypesForStorageBus(StorageBus_T aBus,
                                                std::vector<DeviceType_T> &aDeviceTypes) = 0;
    virtual HRESULT getDefaultIoCacheSettingForStorageController(StorageControllerType_T aControllerType,
                                                                 BOOL *aEnabled) = 0;
    virtual HRESULT getMaxInstancesOfUSBControllerType(ChipsetType_T aChipset,
                                                       USBControllerType_T aType,
                                                       ULONG *aMaxInstances) = 0;
};

#endif // !SystemPropertiesWrap_H_
