/** @file
 *
 * VirtualBox API class wrapper code for INATNetworkSettingEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_NATNETWORKSETTINGEVENT

#include "NATNetworkSettingEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(NATNetworkSettingEventWrap)

//
// IEvent properties
//

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "NATNetworkSettingEvent::getType", aType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getType(aType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "NATNetworkSettingEvent::getSource", aSource));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSource);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSource(ComTypeOutConverter<IEventSource>(aSource).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "NATNetworkSettingEvent::getWaitable", aWaitable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWaitable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWaitable(aWaitable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// INATNetworkChangedEvent properties
//

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(NetworkName)(BSTR *aNetworkName)
{
    LogRelFlow(("{%p} %s: enter aNetworkName=%p\n", this, "NATNetworkSettingEvent::getNetworkName", aNetworkName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetworkName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetworkName(BSTROutConverter(aNetworkName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNetworkName=%ls hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getNetworkName", *aNetworkName, hrc));
    return hrc;
}

//
// INATNetworkAlterEvent properties
//

//
// INATNetworkSettingEvent properties
//

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(Enabled)(BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%p\n", this, "NATNetworkSettingEvent::getEnabled", aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEnabled(aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEnabled=%RTbool hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getEnabled", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(Network)(BSTR *aNetwork)
{
    LogRelFlow(("{%p} %s: enter aNetwork=%p\n", this, "NATNetworkSettingEvent::getNetwork", aNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetwork);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetwork(BSTROutConverter(aNetwork).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNetwork=%ls hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getNetwork", *aNetwork, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(Gateway)(BSTR *aGateway)
{
    LogRelFlow(("{%p} %s: enter aGateway=%p\n", this, "NATNetworkSettingEvent::getGateway", aGateway));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGateway);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGateway(BSTROutConverter(aGateway).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGateway=%ls hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getGateway", *aGateway, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(AdvertiseDefaultIPv6RouteEnabled)(BOOL *aAdvertiseDefaultIPv6RouteEnabled)
{
    LogRelFlow(("{%p} %s: enter aAdvertiseDefaultIPv6RouteEnabled=%p\n", this, "NATNetworkSettingEvent::getAdvertiseDefaultIPv6RouteEnabled", aAdvertiseDefaultIPv6RouteEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdvertiseDefaultIPv6RouteEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdvertiseDefaultIPv6RouteEnabled(aAdvertiseDefaultIPv6RouteEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAdvertiseDefaultIPv6RouteEnabled=%RTbool hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getAdvertiseDefaultIPv6RouteEnabled", *aAdvertiseDefaultIPv6RouteEnabled, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkSettingEventWrap::COMGETTER(NeedDhcpServer)(BOOL *aNeedDhcpServer)
{
    LogRelFlow(("{%p} %s: enter aNeedDhcpServer=%p\n", this, "NATNetworkSettingEvent::getNeedDhcpServer", aNeedDhcpServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNeedDhcpServer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNeedDhcpServer(aNeedDhcpServer);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNeedDhcpServer=%RTbool hrc=%Rhrc\n", this, "NATNetworkSettingEvent::getNeedDhcpServer", *aNeedDhcpServer, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP NATNetworkSettingEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "NATNetworkSettingEvent::setProcessed"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setProcessed();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetworkSettingEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkSettingEventWrap::WaitProcessed(LONG aTimeout,
                                                       BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "NATNetworkSettingEvent::waitProcessed", aTimeout, aResult));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResult);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = waitProcessed(aTimeout,
                            aResult);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "NATNetworkSettingEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// INATNetworkChangedEvent methods
//

//
// INATNetworkAlterEvent methods
//

//
// INATNetworkSettingEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkSettingEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(NATNetworkSettingEventWrap, INATNetworkSettingEvent, INATNetworkAlterEvent, INATNetworkChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
