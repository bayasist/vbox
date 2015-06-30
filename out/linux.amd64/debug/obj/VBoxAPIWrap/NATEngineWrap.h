/** @file
 *
 * VirtualBox API class wrapper header for INATEngine.
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

#ifndef NATEngineWrap_H_
#define NATEngineWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NATEngineWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(INATEngine)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATEngineWrap, INATEngine)
    DECLARE_NOT_AGGREGATABLE(NATEngineWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NATEngineWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INATEngine)
        COM_INTERFACE_ENTRY2(IDispatch, INATEngine)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(NATEngineWrap)

    // public INATEngine properties
    STDMETHOD(COMGETTER(Network))(BSTR *aNetwork);
    STDMETHOD(COMSETTER(Network))(IN_BSTR aNetwork);
    STDMETHOD(COMGETTER(HostIP))(BSTR *aHostIP);
    STDMETHOD(COMSETTER(HostIP))(IN_BSTR aHostIP);
    STDMETHOD(COMGETTER(TFTPPrefix))(BSTR *aTFTPPrefix);
    STDMETHOD(COMSETTER(TFTPPrefix))(IN_BSTR aTFTPPrefix);
    STDMETHOD(COMGETTER(TFTPBootFile))(BSTR *aTFTPBootFile);
    STDMETHOD(COMSETTER(TFTPBootFile))(IN_BSTR aTFTPBootFile);
    STDMETHOD(COMGETTER(TFTPNextServer))(BSTR *aTFTPNextServer);
    STDMETHOD(COMSETTER(TFTPNextServer))(IN_BSTR aTFTPNextServer);
    STDMETHOD(COMGETTER(AliasMode))(ULONG *aAliasMode);
    STDMETHOD(COMSETTER(AliasMode))(ULONG aAliasMode);
    STDMETHOD(COMGETTER(DNSPassDomain))(BOOL *aDNSPassDomain);
    STDMETHOD(COMSETTER(DNSPassDomain))(BOOL aDNSPassDomain);
    STDMETHOD(COMGETTER(DNSProxy))(BOOL *aDNSProxy);
    STDMETHOD(COMSETTER(DNSProxy))(BOOL aDNSProxy);
    STDMETHOD(COMGETTER(DNSUseHostResolver))(BOOL *aDNSUseHostResolver);
    STDMETHOD(COMSETTER(DNSUseHostResolver))(BOOL aDNSUseHostResolver);
    STDMETHOD(COMGETTER(Redirects))(ComSafeArrayOut(BSTR, aRedirects));

    // public INATEngine methods
    STDMETHOD(SetNetworkSettings)(ULONG aMtu,
                                  ULONG aSockSnd,
                                  ULONG aSockRcv,
                                  ULONG aTcpWndSnd,
                                  ULONG aTcpWndRcv);
    STDMETHOD(GetNetworkSettings)(ULONG *aMtu,
                                  ULONG *aSockSnd,
                                  ULONG *aSockRcv,
                                  ULONG *aTcpWndSnd,
                                  ULONG *aTcpWndRcv);
    STDMETHOD(AddRedirect)(IN_BSTR aName,
                           NATProtocol_T aProto,
                           IN_BSTR aHostIP,
                           USHORT aHostPort,
                           IN_BSTR aGuestIP,
                           USHORT aGuestPort);
    STDMETHOD(RemoveRedirect)(IN_BSTR aName);

private:
    // wrapped INATEngine properties
    virtual HRESULT getNetwork(com::Utf8Str &aNetwork) = 0;
    virtual HRESULT setNetwork(const com::Utf8Str &aNetwork) = 0;
    virtual HRESULT getHostIP(com::Utf8Str &aHostIP) = 0;
    virtual HRESULT setHostIP(const com::Utf8Str &aHostIP) = 0;
    virtual HRESULT getTFTPPrefix(com::Utf8Str &aTFTPPrefix) = 0;
    virtual HRESULT setTFTPPrefix(const com::Utf8Str &aTFTPPrefix) = 0;
    virtual HRESULT getTFTPBootFile(com::Utf8Str &aTFTPBootFile) = 0;
    virtual HRESULT setTFTPBootFile(const com::Utf8Str &aTFTPBootFile) = 0;
    virtual HRESULT getTFTPNextServer(com::Utf8Str &aTFTPNextServer) = 0;
    virtual HRESULT setTFTPNextServer(const com::Utf8Str &aTFTPNextServer) = 0;
    virtual HRESULT getAliasMode(ULONG *aAliasMode) = 0;
    virtual HRESULT setAliasMode(ULONG aAliasMode) = 0;
    virtual HRESULT getDNSPassDomain(BOOL *aDNSPassDomain) = 0;
    virtual HRESULT setDNSPassDomain(BOOL aDNSPassDomain) = 0;
    virtual HRESULT getDNSProxy(BOOL *aDNSProxy) = 0;
    virtual HRESULT setDNSProxy(BOOL aDNSProxy) = 0;
    virtual HRESULT getDNSUseHostResolver(BOOL *aDNSUseHostResolver) = 0;
    virtual HRESULT setDNSUseHostResolver(BOOL aDNSUseHostResolver) = 0;
    virtual HRESULT getRedirects(std::vector<com::Utf8Str> &aRedirects) = 0;

    // wrapped INATEngine methods
    virtual HRESULT setNetworkSettings(ULONG aMtu,
                                       ULONG aSockSnd,
                                       ULONG aSockRcv,
                                       ULONG aTcpWndSnd,
                                       ULONG aTcpWndRcv) = 0;
    virtual HRESULT getNetworkSettings(ULONG *aMtu,
                                       ULONG *aSockSnd,
                                       ULONG *aSockRcv,
                                       ULONG *aTcpWndSnd,
                                       ULONG *aTcpWndRcv) = 0;
    virtual HRESULT addRedirect(const com::Utf8Str &aName,
                                NATProtocol_T aProto,
                                const com::Utf8Str &aHostIP,
                                USHORT aHostPort,
                                const com::Utf8Str &aGuestIP,
                                USHORT aGuestPort) = 0;
    virtual HRESULT removeRedirect(const com::Utf8Str &aName) = 0;
};

#endif // !NATEngineWrap_H_
