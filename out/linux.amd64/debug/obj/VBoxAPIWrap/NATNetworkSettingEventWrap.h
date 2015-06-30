/** @file
 *
 * VirtualBox API class wrapper header for INATNetworkSettingEvent.
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

#ifndef NATNetworkSettingEventWrap_H_
#define NATNetworkSettingEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NATNetworkSettingEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(INATNetworkSettingEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkSettingEventWrap, INATNetworkSettingEvent)
    DECLARE_NOT_AGGREGATABLE(NATNetworkSettingEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NATNetworkSettingEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INATNetworkSettingEvent)
        COM_INTERFACE_ENTRY(INATNetworkAlterEvent)
        COM_INTERFACE_ENTRY(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, INATNetworkSettingEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(NATNetworkSettingEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public INATNetworkChangedEvent properties
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName);

    // public INATNetworkAlterEvent properties

    // public INATNetworkSettingEvent properties
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled);
    STDMETHOD(COMGETTER(Network))(BSTR *aNetwork);
    STDMETHOD(COMGETTER(Gateway))(BSTR *aGateway);
    STDMETHOD(COMGETTER(AdvertiseDefaultIPv6RouteEnabled))(BOOL *aAdvertiseDefaultIPv6RouteEnabled);
    STDMETHOD(COMGETTER(NeedDhcpServer))(BOOL *aNeedDhcpServer);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public INATNetworkChangedEvent methods

    // public INATNetworkAlterEvent methods

    // public INATNetworkSettingEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped INATNetworkChangedEvent properties
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;

    // wrapped INATNetworkAlterEvent properties

    // wrapped INATNetworkSettingEvent properties
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT getNetwork(com::Utf8Str &aNetwork) = 0;
    virtual HRESULT getGateway(com::Utf8Str &aGateway) = 0;
    virtual HRESULT getAdvertiseDefaultIPv6RouteEnabled(BOOL *aAdvertiseDefaultIPv6RouteEnabled) = 0;
    virtual HRESULT getNeedDhcpServer(BOOL *aNeedDhcpServer) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped INATNetworkChangedEvent methods

    // wrapped INATNetworkAlterEvent methods

    // wrapped INATNetworkSettingEvent methods
};

#endif // !NATNetworkSettingEventWrap_H_
