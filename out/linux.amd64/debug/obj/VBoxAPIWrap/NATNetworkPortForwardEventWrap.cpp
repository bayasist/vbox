/** @file
 *
 * VirtualBox API class wrapper code for INATNetworkPortForwardEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_NATNETWORKPORTFORWARDEVENT

#include "NATNetworkPortForwardEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(NATNetworkPortForwardEventWrap)

//
// IEvent properties
//

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "NATNetworkPortForwardEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "NATNetworkPortForwardEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "NATNetworkPortForwardEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// INATNetworkChangedEvent properties
//

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(NetworkName)(BSTR *aNetworkName)
{
    LogRelFlow(("{%p} %s: enter aNetworkName=%p\n", this, "NATNetworkPortForwardEvent::getNetworkName", aNetworkName));

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

    LogRelFlow(("{%p} %s: leave *aNetworkName=%ls hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getNetworkName", *aNetworkName, hrc));
    return hrc;
}

//
// INATNetworkAlterEvent properties
//

//
// INATNetworkPortForwardEvent properties
//

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(Create)(BOOL *aCreate)
{
    LogRelFlow(("{%p} %s: enter aCreate=%p\n", this, "NATNetworkPortForwardEvent::getCreate", aCreate));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCreate);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCreate(aCreate);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCreate=%RTbool hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getCreate", *aCreate, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(Ipv6)(BOOL *aIpv6)
{
    LogRelFlow(("{%p} %s: enter aIpv6=%p\n", this, "NATNetworkPortForwardEvent::getIpv6", aIpv6));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIpv6);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIpv6(aIpv6);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIpv6=%RTbool hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getIpv6", *aIpv6, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "NATNetworkPortForwardEvent::getName", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getName(BSTROutConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(Proto)(NATProtocol_T *aProto)
{
    LogRelFlow(("{%p} %s: enter aProto=%p\n", this, "NATNetworkPortForwardEvent::getProto", aProto));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProto);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProto(aProto);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProto=%RU32 hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getProto", *aProto, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(HostIp)(BSTR *aHostIp)
{
    LogRelFlow(("{%p} %s: enter aHostIp=%p\n", this, "NATNetworkPortForwardEvent::getHostIp", aHostIp));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostIp);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostIp(BSTROutConverter(aHostIp).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostIp=%ls hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getHostIp", *aHostIp, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(HostPort)(LONG *aHostPort)
{
    LogRelFlow(("{%p} %s: enter aHostPort=%p\n", this, "NATNetworkPortForwardEvent::getHostPort", aHostPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostPort(aHostPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostPort=%RI32 hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getHostPort", *aHostPort, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(GuestIp)(BSTR *aGuestIp)
{
    LogRelFlow(("{%p} %s: enter aGuestIp=%p\n", this, "NATNetworkPortForwardEvent::getGuestIp", aGuestIp));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestIp);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestIp(BSTROutConverter(aGuestIp).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGuestIp=%ls hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getGuestIp", *aGuestIp, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::COMGETTER(GuestPort)(LONG *aGuestPort)
{
    LogRelFlow(("{%p} %s: enter aGuestPort=%p\n", this, "NATNetworkPortForwardEvent::getGuestPort", aGuestPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestPort(aGuestPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGuestPort=%RI32 hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::getGuestPort", *aGuestPort, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP NATNetworkPortForwardEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "NATNetworkPortForwardEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkPortForwardEventWrap::WaitProcessed(LONG aTimeout,
                                                           BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "NATNetworkPortForwardEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "NATNetworkPortForwardEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// INATNetworkChangedEvent methods
//

//
// INATNetworkAlterEvent methods
//

//
// INATNetworkPortForwardEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkPortForwardEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(NATNetworkPortForwardEventWrap, INATNetworkPortForwardEvent, INATNetworkAlterEvent, INATNetworkChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
