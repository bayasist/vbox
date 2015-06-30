/** @file
 *
 * VirtualBox API class wrapper header for INATNetworkPortForwardEvent.
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

#ifndef NATNetworkPortForwardEventWrap_H_
#define NATNetworkPortForwardEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NATNetworkPortForwardEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(INATNetworkPortForwardEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkPortForwardEventWrap, INATNetworkPortForwardEvent)
    DECLARE_NOT_AGGREGATABLE(NATNetworkPortForwardEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NATNetworkPortForwardEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INATNetworkPortForwardEvent)
        COM_INTERFACE_ENTRY(INATNetworkAlterEvent)
        COM_INTERFACE_ENTRY(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, INATNetworkPortForwardEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(NATNetworkPortForwardEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public INATNetworkChangedEvent properties
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName);

    // public INATNetworkAlterEvent properties

    // public INATNetworkPortForwardEvent properties
    STDMETHOD(COMGETTER(Create))(BOOL *aCreate);
    STDMETHOD(COMGETTER(Ipv6))(BOOL *aIpv6);
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Proto))(NATProtocol_T *aProto);
    STDMETHOD(COMGETTER(HostIp))(BSTR *aHostIp);
    STDMETHOD(COMGETTER(HostPort))(LONG *aHostPort);
    STDMETHOD(COMGETTER(GuestIp))(BSTR *aGuestIp);
    STDMETHOD(COMGETTER(GuestPort))(LONG *aGuestPort);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public INATNetworkChangedEvent methods

    // public INATNetworkAlterEvent methods

    // public INATNetworkPortForwardEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped INATNetworkChangedEvent properties
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;

    // wrapped INATNetworkAlterEvent properties

    // wrapped INATNetworkPortForwardEvent properties
    virtual HRESULT getCreate(BOOL *aCreate) = 0;
    virtual HRESULT getIpv6(BOOL *aIpv6) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getProto(NATProtocol_T *aProto) = 0;
    virtual HRESULT getHostIp(com::Utf8Str &aHostIp) = 0;
    virtual HRESULT getHostPort(LONG *aHostPort) = 0;
    virtual HRESULT getGuestIp(com::Utf8Str &aGuestIp) = 0;
    virtual HRESULT getGuestPort(LONG *aGuestPort) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped INATNetworkChangedEvent methods

    // wrapped INATNetworkAlterEvent methods

    // wrapped INATNetworkPortForwardEvent methods
};

#endif // !NATNetworkPortForwardEventWrap_H_
