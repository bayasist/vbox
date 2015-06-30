/** @file
 *
 * VirtualBox API class wrapper code for INATNetworkStartStopEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_NATNETWORKSTARTSTOPEVENT

#include "NATNetworkStartStopEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(NATNetworkStartStopEventWrap)

//
// IEvent properties
//

STDMETHODIMP NATNetworkStartStopEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "NATNetworkStartStopEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "NATNetworkStartStopEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkStartStopEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "NATNetworkStartStopEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "NATNetworkStartStopEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkStartStopEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "NATNetworkStartStopEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "NATNetworkStartStopEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// INATNetworkChangedEvent properties
//

STDMETHODIMP NATNetworkStartStopEventWrap::COMGETTER(NetworkName)(BSTR *aNetworkName)
{
    LogRelFlow(("{%p} %s: enter aNetworkName=%p\n", this, "NATNetworkStartStopEvent::getNetworkName", aNetworkName));

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

    LogRelFlow(("{%p} %s: leave *aNetworkName=%ls hrc=%Rhrc\n", this, "NATNetworkStartStopEvent::getNetworkName", *aNetworkName, hrc));
    return hrc;
}

//
// INATNetworkStartStopEvent properties
//

STDMETHODIMP NATNetworkStartStopEventWrap::COMGETTER(StartEvent)(BOOL *aStartEvent)
{
    LogRelFlow(("{%p} %s: enter aStartEvent=%p\n", this, "NATNetworkStartStopEvent::getStartEvent", aStartEvent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStartEvent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStartEvent(aStartEvent);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStartEvent=%RTbool hrc=%Rhrc\n", this, "NATNetworkStartStopEvent::getStartEvent", *aStartEvent, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP NATNetworkStartStopEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "NATNetworkStartStopEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetworkStartStopEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkStartStopEventWrap::WaitProcessed(LONG aTimeout,
                                                         BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "NATNetworkStartStopEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "NATNetworkStartStopEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// INATNetworkChangedEvent methods
//

//
// INATNetworkStartStopEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkStartStopEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(NATNetworkStartStopEventWrap, INATNetworkStartStopEvent, INATNetworkChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
