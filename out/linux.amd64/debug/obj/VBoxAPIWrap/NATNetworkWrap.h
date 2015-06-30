/** @file
 *
 * VirtualBox API class wrapper header for INATNetwork.
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

#ifndef NATNetworkWrap_H_
#define NATNetworkWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NATNetworkWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(INATNetwork)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkWrap, INATNetwork)
    DECLARE_NOT_AGGREGATABLE(NATNetworkWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NATNetworkWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INATNetwork)
        COM_INTERFACE_ENTRY2(IDispatch, INATNetwork)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(NATNetworkWrap)

    // public INATNetwork properties
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName);
    STDMETHOD(COMSETTER(NetworkName))(IN_BSTR aNetworkName);
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled);
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled);
    STDMETHOD(COMGETTER(Network))(BSTR *aNetwork);
    STDMETHOD(COMSETTER(Network))(IN_BSTR aNetwork);
    STDMETHOD(COMGETTER(Gateway))(BSTR *aGateway);
    STDMETHOD(COMGETTER(IPv6Enabled))(BOOL *aIPv6Enabled);
    STDMETHOD(COMSETTER(IPv6Enabled))(BOOL aIPv6Enabled);
    STDMETHOD(COMGETTER(IPv6Prefix))(BSTR *aIPv6Prefix);
    STDMETHOD(COMSETTER(IPv6Prefix))(IN_BSTR aIPv6Prefix);
    STDMETHOD(COMGETTER(AdvertiseDefaultIPv6RouteEnabled))(BOOL *aAdvertiseDefaultIPv6RouteEnabled);
    STDMETHOD(COMSETTER(AdvertiseDefaultIPv6RouteEnabled))(BOOL aAdvertiseDefaultIPv6RouteEnabled);
    STDMETHOD(COMGETTER(NeedDhcpServer))(BOOL *aNeedDhcpServer);
    STDMETHOD(COMSETTER(NeedDhcpServer))(BOOL aNeedDhcpServer);
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);
    STDMETHOD(COMGETTER(PortForwardRules4))(ComSafeArrayOut(BSTR, aPortForwardRules4));
    STDMETHOD(COMGETTER(LocalMappings))(ComSafeArrayOut(BSTR, aLocalMappings));
    STDMETHOD(COMGETTER(LoopbackIp6))(LONG *aLoopbackIp6);
    STDMETHOD(COMSETTER(LoopbackIp6))(LONG aLoopbackIp6);
    STDMETHOD(COMGETTER(PortForwardRules6))(ComSafeArrayOut(BSTR, aPortForwardRules6));

    // public INATNetwork methods
    STDMETHOD(AddLocalMapping)(IN_BSTR aHostid,
                               LONG aOffset);
    STDMETHOD(AddPortForwardRule)(BOOL aIsIpv6,
                                  IN_BSTR aRuleName,
                                  NATProtocol_T aProto,
                                  IN_BSTR aHostIP,
                                  USHORT aHostPort,
                                  IN_BSTR aGuestIP,
                                  USHORT aGuestPort);
    STDMETHOD(RemovePortForwardRule)(BOOL aISipv6,
                                     IN_BSTR aRuleName);
    STDMETHOD(Start)(IN_BSTR aTrunkType);
    STDMETHOD(Stop)();

private:
    // wrapped INATNetwork properties
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT setNetworkName(const com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getNetwork(com::Utf8Str &aNetwork) = 0;
    virtual HRESULT setNetwork(const com::Utf8Str &aNetwork) = 0;
    virtual HRESULT getGateway(com::Utf8Str &aGateway) = 0;
    virtual HRESULT getIPv6Enabled(BOOL *aIPv6Enabled) = 0;
    virtual HRESULT setIPv6Enabled(BOOL aIPv6Enabled) = 0;
    virtual HRESULT getIPv6Prefix(com::Utf8Str &aIPv6Prefix) = 0;
    virtual HRESULT setIPv6Prefix(const com::Utf8Str &aIPv6Prefix) = 0;
    virtual HRESULT getAdvertiseDefaultIPv6RouteEnabled(BOOL *aAdvertiseDefaultIPv6RouteEnabled) = 0;
    virtual HRESULT setAdvertiseDefaultIPv6RouteEnabled(BOOL aAdvertiseDefaultIPv6RouteEnabled) = 0;
    virtual HRESULT getNeedDhcpServer(BOOL *aNeedDhcpServer) = 0;
    virtual HRESULT setNeedDhcpServer(BOOL aNeedDhcpServer) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getPortForwardRules4(std::vector<com::Utf8Str> &aPortForwardRules4) = 0;
    virtual HRESULT getLocalMappings(std::vector<com::Utf8Str> &aLocalMappings) = 0;
    virtual HRESULT getLoopbackIp6(LONG *aLoopbackIp6) = 0;
    virtual HRESULT setLoopbackIp6(LONG aLoopbackIp6) = 0;
    virtual HRESULT getPortForwardRules6(std::vector<com::Utf8Str> &aPortForwardRules6) = 0;

    // wrapped INATNetwork methods
    virtual HRESULT addLocalMapping(const com::Utf8Str &aHostid,
                                    LONG aOffset) = 0;
    virtual HRESULT addPortForwardRule(BOOL aIsIpv6,
                                       const com::Utf8Str &aRuleName,
                                       NATProtocol_T aProto,
                                       const com::Utf8Str &aHostIP,
                                       USHORT aHostPort,
                                       const com::Utf8Str &aGuestIP,
                                       USHORT aGuestPort) = 0;
    virtual HRESULT removePortForwardRule(BOOL aISipv6,
                                          const com::Utf8Str &aRuleName) = 0;
    virtual HRESULT start(const com::Utf8Str &aTrunkType) = 0;
    virtual HRESULT stop() = 0;
};

#endif // !NATNetworkWrap_H_
