/** @file
 *
 * VirtualBox API class wrapper header for IDHCPServer.
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

#ifndef DHCPServerWrap_H_
#define DHCPServerWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DHCPServerWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IDHCPServer)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DHCPServerWrap, IDHCPServer)
    DECLARE_NOT_AGGREGATABLE(DHCPServerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DHCPServerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDHCPServer)
        COM_INTERFACE_ENTRY2(IDispatch, IDHCPServer)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(DHCPServerWrap)

    // public IDHCPServer properties
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled);
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled);
    STDMETHOD(COMGETTER(IPAddress))(BSTR *aIPAddress);
    STDMETHOD(COMGETTER(NetworkMask))(BSTR *aNetworkMask);
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName);
    STDMETHOD(COMGETTER(LowerIP))(BSTR *aLowerIP);
    STDMETHOD(COMGETTER(UpperIP))(BSTR *aUpperIP);
    STDMETHOD(COMGETTER(GlobalOptions))(ComSafeArrayOut(BSTR, aGlobalOptions));
    STDMETHOD(COMGETTER(VmConfigs))(ComSafeArrayOut(BSTR, aVmConfigs));

    // public IDHCPServer methods
    STDMETHOD(AddGlobalOption)(DhcpOpt_T aOption,
                               IN_BSTR aValue);
    STDMETHOD(AddVmSlotOption)(IN_BSTR aVmname,
                               LONG aSlot,
                               DhcpOpt_T aOption,
                               IN_BSTR aValue);
    STDMETHOD(RemoveVmSlotOptions)(IN_BSTR aVmname,
                                   LONG aSlot);
    STDMETHOD(GetVmSlotOptions)(IN_BSTR aVmname,
                                LONG aSlot,
                                ComSafeArrayOut(BSTR, aOption));
    STDMETHOD(GetMacOptions)(IN_BSTR aMac,
                             ComSafeArrayOut(BSTR, aOption));
    STDMETHOD(SetConfiguration)(IN_BSTR aIPAddress,
                                IN_BSTR aNetworkMask,
                                IN_BSTR aFromIPAddress,
                                IN_BSTR aToIPAddress);
    STDMETHOD(Start)(IN_BSTR aNetworkName,
                     IN_BSTR aTrunkName,
                     IN_BSTR aTrunkType);
    STDMETHOD(Stop)();

private:
    // wrapped IDHCPServer properties
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getIPAddress(com::Utf8Str &aIPAddress) = 0;
    virtual HRESULT getNetworkMask(com::Utf8Str &aNetworkMask) = 0;
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT getLowerIP(com::Utf8Str &aLowerIP) = 0;
    virtual HRESULT getUpperIP(com::Utf8Str &aUpperIP) = 0;
    virtual HRESULT getGlobalOptions(std::vector<com::Utf8Str> &aGlobalOptions) = 0;
    virtual HRESULT getVmConfigs(std::vector<com::Utf8Str> &aVmConfigs) = 0;

    // wrapped IDHCPServer methods
    virtual HRESULT addGlobalOption(DhcpOpt_T aOption,
                                    const com::Utf8Str &aValue) = 0;
    virtual HRESULT addVmSlotOption(const com::Utf8Str &aVmname,
                                    LONG aSlot,
                                    DhcpOpt_T aOption,
                                    const com::Utf8Str &aValue) = 0;
    virtual HRESULT removeVmSlotOptions(const com::Utf8Str &aVmname,
                                        LONG aSlot) = 0;
    virtual HRESULT getVmSlotOptions(const com::Utf8Str &aVmname,
                                     LONG aSlot,
                                     std::vector<com::Utf8Str> &aOption) = 0;
    virtual HRESULT getMacOptions(const com::Utf8Str &aMac,
                                  std::vector<com::Utf8Str> &aOption) = 0;
    virtual HRESULT setConfiguration(const com::Utf8Str &aIPAddress,
                                     const com::Utf8Str &aNetworkMask,
                                     const com::Utf8Str &aFromIPAddress,
                                     const com::Utf8Str &aToIPAddress) = 0;
    virtual HRESULT start(const com::Utf8Str &aNetworkName,
                          const com::Utf8Str &aTrunkName,
                          const com::Utf8Str &aTrunkType) = 0;
    virtual HRESULT stop() = 0;
};

#endif // !DHCPServerWrap_H_
