/** @file
 *
 * VirtualBox API class wrapper header for IHostNetworkInterface.
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

#ifndef HostNetworkInterfaceWrap_H_
#define HostNetworkInterfaceWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostNetworkInterfaceWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IHostNetworkInterface)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostNetworkInterfaceWrap, IHostNetworkInterface)
    DECLARE_NOT_AGGREGATABLE(HostNetworkInterfaceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostNetworkInterfaceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostNetworkInterface)
        COM_INTERFACE_ENTRY2(IDispatch, IHostNetworkInterface)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(HostNetworkInterfaceWrap)

    // public IHostNetworkInterface properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(ShortName))(BSTR *aShortName);
    STDMETHOD(COMGETTER(Id))(BSTR *aId);
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName);
    STDMETHOD(COMGETTER(DHCPEnabled))(BOOL *aDHCPEnabled);
    STDMETHOD(COMGETTER(IPAddress))(BSTR *aIPAddress);
    STDMETHOD(COMGETTER(NetworkMask))(BSTR *aNetworkMask);
    STDMETHOD(COMGETTER(IPV6Supported))(BOOL *aIPV6Supported);
    STDMETHOD(COMGETTER(IPV6Address))(BSTR *aIPV6Address);
    STDMETHOD(COMGETTER(IPV6NetworkMaskPrefixLength))(ULONG *aIPV6NetworkMaskPrefixLength);
    STDMETHOD(COMGETTER(HardwareAddress))(BSTR *aHardwareAddress);
    STDMETHOD(COMGETTER(MediumType))(HostNetworkInterfaceMediumType_T *aMediumType);
    STDMETHOD(COMGETTER(Status))(HostNetworkInterfaceStatus_T *aStatus);
    STDMETHOD(COMGETTER(InterfaceType))(HostNetworkInterfaceType_T *aInterfaceType);

    // public IHostNetworkInterface methods
    STDMETHOD(EnableStaticIPConfig)(IN_BSTR aIPAddress,
                                    IN_BSTR aNetworkMask);
    STDMETHOD(EnableStaticIPConfigV6)(IN_BSTR aIPV6Address,
                                      ULONG aIPV6NetworkMaskPrefixLength);
    STDMETHOD(EnableDynamicIPConfig)();
    STDMETHOD(DHCPRediscover)();

private:
    // wrapped IHostNetworkInterface properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getShortName(com::Utf8Str &aShortName) = 0;
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT getDHCPEnabled(BOOL *aDHCPEnabled) = 0;
    virtual HRESULT getIPAddress(com::Utf8Str &aIPAddress) = 0;
    virtual HRESULT getNetworkMask(com::Utf8Str &aNetworkMask) = 0;
    virtual HRESULT getIPV6Supported(BOOL *aIPV6Supported) = 0;
    virtual HRESULT getIPV6Address(com::Utf8Str &aIPV6Address) = 0;
    virtual HRESULT getIPV6NetworkMaskPrefixLength(ULONG *aIPV6NetworkMaskPrefixLength) = 0;
    virtual HRESULT getHardwareAddress(com::Utf8Str &aHardwareAddress) = 0;
    virtual HRESULT getMediumType(HostNetworkInterfaceMediumType_T *aMediumType) = 0;
    virtual HRESULT getStatus(HostNetworkInterfaceStatus_T *aStatus) = 0;
    virtual HRESULT getInterfaceType(HostNetworkInterfaceType_T *aInterfaceType) = 0;

    // wrapped IHostNetworkInterface methods
    virtual HRESULT enableStaticIPConfig(const com::Utf8Str &aIPAddress,
                                         const com::Utf8Str &aNetworkMask) = 0;
    virtual HRESULT enableStaticIPConfigV6(const com::Utf8Str &aIPV6Address,
                                           ULONG aIPV6NetworkMaskPrefixLength) = 0;
    virtual HRESULT enableDynamicIPConfig() = 0;
    virtual HRESULT dHCPRediscover() = 0;
};

#endif // !HostNetworkInterfaceWrap_H_
