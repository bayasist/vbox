/** @file
 *
 * VirtualBox API class wrapper code for IEventSource.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EVENTSOURCE

#include "EventSourceWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(EventSourceWrap)

//
// IEventSource properties
//

//
// IEventSource methods
//

STDMETHODIMP EventSourceWrap::CreateListener(IEventListener **aListener)
{
    LogRelFlow(("{%p} %s:enter aListener=%p\n", this, "EventSource::createListener", aListener));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aListener);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createListener(ComTypeOutConverter<IEventListener>(aListener).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aListener=%p hrc=%Rhrc\n", this, "EventSource::createListener", *aListener, hrc));
    return hrc;
}

STDMETHODIMP EventSourceWrap::CreateAggregator(ComSafeArrayIn(IEventSource *, aSubordinates),
                                               IEventSource **aResult)
{
    LogRelFlow(("{%p} %s:enter aSubordinates=%zu aResult=%p\n", this, "EventSource::createAggregator", aSubordinates, aResult));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResult);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createAggregator(ArrayComTypeInConverter<IEventSource>(ComSafeArrayInArg(aSubordinates)).array(),
                               ComTypeOutConverter<IEventSource>(aResult).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aResult=%p hrc=%Rhrc\n", this, "EventSource::createAggregator", *aResult, hrc));
    return hrc;
}

STDMETHODIMP EventSourceWrap::RegisterListener(IEventListener *aListener,
                                               ComSafeArrayIn(VBoxEventType_T, aInteresting),
                                               BOOL aActive)
{
    LogRelFlow(("{%p} %s:enter aListener=%p aInteresting=%zu aActive=%RTbool\n", this, "EventSource::registerListener", aListener, aInteresting, aActive));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = registerListener(ComTypeInConverter<IEventListener>(aListener).ptr(),
                               ArrayInConverter<VBoxEventType_T>(ComSafeArrayInArg(aInteresting)).array(),
                               aActive);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "EventSource::registerListener", hrc));
    return hrc;
}

STDMETHODIMP EventSourceWrap::UnregisterListener(IEventListener *aListener)
{
    LogRelFlow(("{%p} %s:enter aListener=%p\n", this, "EventSource::unregisterListener", aListener));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = unregisterListener(ComTypeInConverter<IEventListener>(aListener).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "EventSource::unregisterListener", hrc));
    return hrc;
}

STDMETHODIMP EventSourceWrap::FireEvent(IEvent *aEvent,
                                        LONG aTimeout,
                                        BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aEvent=%p aTimeout=%RI32 aResult=%p\n", this, "EventSource::fireEvent", aEvent, aTimeout, aResult));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResult);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fireEvent(ComTypeInConverter<IEvent>(aEvent).ptr(),
                        aTimeout,
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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "EventSource::fireEvent", *aResult, hrc));
    return hrc;
}

STDMETHODIMP EventSourceWrap::GetEvent(IEventListener *aListener,
                                       LONG aTimeout,
                                       IEvent **aEvent)
{
    LogRelFlow(("{%p} %s:enter aListener=%p aTimeout=%RI32 aEvent=%p\n", this, "EventSource::getEvent", aListener, aTimeout, aEvent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEvent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEvent(ComTypeInConverter<IEventListener>(aListener).ptr(),
                       aTimeout,
                       ComTypeOutConverter<IEvent>(aEvent).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aEvent=%p hrc=%Rhrc\n", this, "EventSource::getEvent", *aEvent, hrc));
    return hrc;
}

STDMETHODIMP EventSourceWrap::EventProcessed(IEventListener *aListener,
                                             IEvent *aEvent)
{
    LogRelFlow(("{%p} %s:enter aListener=%p aEvent=%p\n", this, "EventSource::eventProcessed", aListener, aEvent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = eventProcessed(ComTypeInConverter<IEventListener>(aListener).ptr(),
                             ComTypeInConverter<IEvent>(aEvent).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "EventSource::eventProcessed", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(EventSourceWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(EventSourceWrap, IEventSource)
#endif // VBOX_WITH_XPCOM
