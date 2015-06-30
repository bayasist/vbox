/** @file
 *
 * VirtualBox API class wrapper header for IHost.
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

#ifndef HostWrap_H_
#define HostWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IHost)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostWrap, IHost)
    DECLARE_NOT_AGGREGATABLE(HostWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHost)
        COM_INTERFACE_ENTRY2(IDispatch, IHost)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(HostWrap)

    // public IHost properties
    STDMETHOD(COMGETTER(DVDDrives))(ComSafeArrayOut(IMedium *, aDVDDrives));
    STDMETHOD(COMGETTER(FloppyDrives))(ComSafeArrayOut(IMedium *, aFloppyDrives));
    STDMETHOD(COMGETTER(USBDevices))(ComSafeArrayOut(IHostUSBDevice *, aUSBDevices));
    STDMETHOD(COMGETTER(USBDeviceFilters))(ComSafeArrayOut(IHostUSBDeviceFilter *, aUSBDeviceFilters));
    STDMETHOD(COMGETTER(NetworkInterfaces))(ComSafeArrayOut(IHostNetworkInterface *, aNetworkInterfaces));
    STDMETHOD(COMGETTER(NameServers))(ComSafeArrayOut(BSTR, aNameServers));
    STDMETHOD(COMGETTER(DomainName))(BSTR *aDomainName);
    STDMETHOD(COMGETTER(SearchStrings))(ComSafeArrayOut(BSTR, aSearchStrings));
    STDMETHOD(COMGETTER(ProcessorCount))(ULONG *aProcessorCount);
    STDMETHOD(COMGETTER(ProcessorOnlineCount))(ULONG *aProcessorOnlineCount);
    STDMETHOD(COMGETTER(ProcessorCoreCount))(ULONG *aProcessorCoreCount);
    STDMETHOD(COMGETTER(ProcessorOnlineCoreCount))(ULONG *aProcessorOnlineCoreCount);
    STDMETHOD(COMGETTER(MemorySize))(ULONG *aMemorySize);
    STDMETHOD(COMGETTER(MemoryAvailable))(ULONG *aMemoryAvailable);
    STDMETHOD(COMGETTER(OperatingSystem))(BSTR *aOperatingSystem);
    STDMETHOD(COMGETTER(OSVersion))(BSTR *aOSVersion);
    STDMETHOD(COMGETTER(UTCTime))(LONG64 *aUTCTime);
    STDMETHOD(COMGETTER(Acceleration3DAvailable))(BOOL *aAcceleration3DAvailable);
    STDMETHOD(COMGETTER(VideoInputDevices))(ComSafeArrayOut(IHostVideoInputDevice *, aVideoInputDevices));

    // public IHost methods
    STDMETHOD(GetProcessorSpeed)(ULONG aCpuId,
                                 ULONG *aSpeed);
    STDMETHOD(GetProcessorFeature)(ProcessorFeature_T aFeature,
                                   BOOL *aSupported);
    STDMETHOD(GetProcessorDescription)(ULONG aCpuId,
                                       BSTR *aDescription);
    STDMETHOD(GetProcessorCPUIDLeaf)(ULONG aCpuId,
                                     ULONG aLeaf,
                                     ULONG aSubLeaf,
                                     ULONG *aValEax,
                                     ULONG *aValEbx,
                                     ULONG *aValEcx,
                                     ULONG *aValEdx);
    STDMETHOD(CreateHostOnlyNetworkInterface)(IHostNetworkInterface **aHostInterface,
                                              IProgress **aProgress);
    STDMETHOD(RemoveHostOnlyNetworkInterface)(IN_BSTR aId,
                                              IProgress **aProgress);
    STDMETHOD(CreateUSBDeviceFilter)(IN_BSTR aName,
                                     IHostUSBDeviceFilter **aFilter);
    STDMETHOD(InsertUSBDeviceFilter)(ULONG aPosition,
                                     IHostUSBDeviceFilter *aFilter);
    STDMETHOD(RemoveUSBDeviceFilter)(ULONG aPosition);
    STDMETHOD(FindHostDVDDrive)(IN_BSTR aName,
                                IMedium **aDrive);
    STDMETHOD(FindHostFloppyDrive)(IN_BSTR aName,
                                   IMedium **aDrive);
    STDMETHOD(FindHostNetworkInterfaceByName)(IN_BSTR aName,
                                              IHostNetworkInterface **aNetworkInterface);
    STDMETHOD(FindHostNetworkInterfaceById)(IN_BSTR aId,
                                            IHostNetworkInterface **aNetworkInterface);
    STDMETHOD(FindHostNetworkInterfacesOfType)(HostNetworkInterfaceType_T aType,
                                               ComSafeArrayOut(IHostNetworkInterface *, aNetworkInterfaces));
    STDMETHOD(FindUSBDeviceById)(IN_BSTR aId,
                                 IHostUSBDevice **aDevice);
    STDMETHOD(FindUSBDeviceByAddress)(IN_BSTR aName,
                                      IHostUSBDevice **aDevice);
    STDMETHOD(GenerateMACAddress)(BSTR *aAddress);

private:
    // wrapped IHost properties
    virtual HRESULT getDVDDrives(std::vector<ComPtr<IMedium> > &aDVDDrives) = 0;
    virtual HRESULT getFloppyDrives(std::vector<ComPtr<IMedium> > &aFloppyDrives) = 0;
    virtual HRESULT getUSBDevices(std::vector<ComPtr<IHostUSBDevice> > &aUSBDevices) = 0;
    virtual HRESULT getUSBDeviceFilters(std::vector<ComPtr<IHostUSBDeviceFilter> > &aUSBDeviceFilters) = 0;
    virtual HRESULT getNetworkInterfaces(std::vector<ComPtr<IHostNetworkInterface> > &aNetworkInterfaces) = 0;
    virtual HRESULT getNameServers(std::vector<com::Utf8Str> &aNameServers) = 0;
    virtual HRESULT getDomainName(com::Utf8Str &aDomainName) = 0;
    virtual HRESULT getSearchStrings(std::vector<com::Utf8Str> &aSearchStrings) = 0;
    virtual HRESULT getProcessorCount(ULONG *aProcessorCount) = 0;
    virtual HRESULT getProcessorOnlineCount(ULONG *aProcessorOnlineCount) = 0;
    virtual HRESULT getProcessorCoreCount(ULONG *aProcessorCoreCount) = 0;
    virtual HRESULT getProcessorOnlineCoreCount(ULONG *aProcessorOnlineCoreCount) = 0;
    virtual HRESULT getMemorySize(ULONG *aMemorySize) = 0;
    virtual HRESULT getMemoryAvailable(ULONG *aMemoryAvailable) = 0;
    virtual HRESULT getOperatingSystem(com::Utf8Str &aOperatingSystem) = 0;
    virtual HRESULT getOSVersion(com::Utf8Str &aOSVersion) = 0;
    virtual HRESULT getUTCTime(LONG64 *aUTCTime) = 0;
    virtual HRESULT getAcceleration3DAvailable(BOOL *aAcceleration3DAvailable) = 0;
    virtual HRESULT getVideoInputDevices(std::vector<ComPtr<IHostVideoInputDevice> > &aVideoInputDevices) = 0;

    // wrapped IHost methods
    virtual HRESULT getProcessorSpeed(ULONG aCpuId,
                                      ULONG *aSpeed) = 0;
    virtual HRESULT getProcessorFeature(ProcessorFeature_T aFeature,
                                        BOOL *aSupported) = 0;
    virtual HRESULT getProcessorDescription(ULONG aCpuId,
                                            com::Utf8Str &aDescription) = 0;
    virtual HRESULT getProcessorCPUIDLeaf(ULONG aCpuId,
                                          ULONG aLeaf,
                                          ULONG aSubLeaf,
                                          ULONG *aValEax,
                                          ULONG *aValEbx,
                                          ULONG *aValEcx,
                                          ULONG *aValEdx) = 0;
    virtual HRESULT createHostOnlyNetworkInterface(ComPtr<IHostNetworkInterface> &aHostInterface,
                                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT removeHostOnlyNetworkInterface(const com::Guid &aId,
                                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createUSBDeviceFilter(const com::Utf8Str &aName,
                                          ComPtr<IHostUSBDeviceFilter> &aFilter) = 0;
    virtual HRESULT insertUSBDeviceFilter(ULONG aPosition,
                                          const ComPtr<IHostUSBDeviceFilter> &aFilter) = 0;
    virtual HRESULT removeUSBDeviceFilter(ULONG aPosition) = 0;
    virtual HRESULT findHostDVDDrive(const com::Utf8Str &aName,
                                     ComPtr<IMedium> &aDrive) = 0;
    virtual HRESULT findHostFloppyDrive(const com::Utf8Str &aName,
                                        ComPtr<IMedium> &aDrive) = 0;
    virtual HRESULT findHostNetworkInterfaceByName(const com::Utf8Str &aName,
                                                   ComPtr<IHostNetworkInterface> &aNetworkInterface) = 0;
    virtual HRESULT findHostNetworkInterfaceById(const com::Guid &aId,
                                                 ComPtr<IHostNetworkInterface> &aNetworkInterface) = 0;
    virtual HRESULT findHostNetworkInterfacesOfType(HostNetworkInterfaceType_T aType,
                                                    std::vector<ComPtr<IHostNetworkInterface> > &aNetworkInterfaces) = 0;
    virtual HRESULT findUSBDeviceById(const com::Guid &aId,
                                      ComPtr<IHostUSBDevice> &aDevice) = 0;
    virtual HRESULT findUSBDeviceByAddress(const com::Utf8Str &aName,
                                           ComPtr<IHostUSBDevice> &aDevice) = 0;
    virtual HRESULT generateMACAddress(com::Utf8Str &aAddress) = 0;
};

#endif // !HostWrap_H_
