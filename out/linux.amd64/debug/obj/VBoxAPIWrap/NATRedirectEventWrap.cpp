/** @file
 *
 * VirtualBox API class wrapper code for INATRedirectEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_NATREDIRECTEVENT

#include "NATRedirectEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(NATRedirectEventWrap)

//
// IEvent properties
//

STDMETHODIMP NATRedirectEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "NATRedirectEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "NATRedirectEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "NATRedirectEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "NATRedirectEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "NATRedirectEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "NATRedirectEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IMachineEvent properties
//

STDMETHODIMP NATRedirectEventWrap::COMGETTER(MachineId)(BSTR *aMachineId)
{
    LogRelFlow(("{%p} %s: enter aMachineId=%p\n", this, "NATRedirectEvent::getMachineId", aMachineId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachineId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachineId(UuidOutConverter(aMachineId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachineId=%ls hrc=%Rhrc\n", this, "NATRedirectEvent::getMachineId", *aMachineId, hrc));
    return hrc;
}

//
// INATRedirectEvent properties
//

STDMETHODIMP NATRedirectEventWrap::COMGETTER(Slot)(ULONG *aSlot)
{
    LogRelFlow(("{%p} %s: enter aSlot=%p\n", this, "NATRedirectEvent::getSlot", aSlot));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSlot);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSlot(aSlot);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSlot=%RU32 hrc=%Rhrc\n", this, "NATRedirectEvent::getSlot", *aSlot, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(Remove)(BOOL *aRemove)
{
    LogRelFlow(("{%p} %s: enter aRemove=%p\n", this, "NATRedirectEvent::getRemove", aRemove));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRemove);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRemove(aRemove);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRemove=%RTbool hrc=%Rhrc\n", this, "NATRedirectEvent::getRemove", *aRemove, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "NATRedirectEvent::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "NATRedirectEvent::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(Proto)(NATProtocol_T *aProto)
{
    LogRelFlow(("{%p} %s: enter aProto=%p\n", this, "NATRedirectEvent::getProto", aProto));

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

    LogRelFlow(("{%p} %s: leave *aProto=%RU32 hrc=%Rhrc\n", this, "NATRedirectEvent::getProto", *aProto, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(HostIP)(BSTR *aHostIP)
{
    LogRelFlow(("{%p} %s: enter aHostIP=%p\n", this, "NATRedirectEvent::getHostIP", aHostIP));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostIP);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostIP(BSTROutConverter(aHostIP).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostIP=%ls hrc=%Rhrc\n", this, "NATRedirectEvent::getHostIP", *aHostIP, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(HostPort)(LONG *aHostPort)
{
    LogRelFlow(("{%p} %s: enter aHostPort=%p\n", this, "NATRedirectEvent::getHostPort", aHostPort));

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

    LogRelFlow(("{%p} %s: leave *aHostPort=%RI32 hrc=%Rhrc\n", this, "NATRedirectEvent::getHostPort", *aHostPort, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(GuestIP)(BSTR *aGuestIP)
{
    LogRelFlow(("{%p} %s: enter aGuestIP=%p\n", this, "NATRedirectEvent::getGuestIP", aGuestIP));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestIP);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestIP(BSTROutConverter(aGuestIP).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGuestIP=%ls hrc=%Rhrc\n", this, "NATRedirectEvent::getGuestIP", *aGuestIP, hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::COMGETTER(GuestPort)(LONG *aGuestPort)
{
    LogRelFlow(("{%p} %s: enter aGuestPort=%p\n", this, "NATRedirectEvent::getGuestPort", aGuestPort));

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

    LogRelFlow(("{%p} %s: leave *aGuestPort=%RI32 hrc=%Rhrc\n", this, "NATRedirectEvent::getGuestPort", *aGuestPort, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP NATRedirectEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "NATRedirectEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATRedirectEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP NATRedirectEventWrap::WaitProcessed(LONG aTimeout,
                                                 BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "NATRedirectEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "NATRedirectEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IMachineEvent methods
//

//
// INATRedirectEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATRedirectEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(NATRedirectEventWrap, INATRedirectEvent, IMachineEvent, IEvent)
#endif // VBOX_WITH_XPCOM
