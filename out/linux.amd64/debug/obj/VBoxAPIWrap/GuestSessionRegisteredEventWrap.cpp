/** @file
 *
 * VirtualBox API class wrapper code for IGuestSessionRegisteredEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTSESSIONREGISTEREDEVENT

#include "GuestSessionRegisteredEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestSessionRegisteredEventWrap)

//
// IEvent properties
//

STDMETHODIMP GuestSessionRegisteredEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "GuestSessionRegisteredEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "GuestSessionRegisteredEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionRegisteredEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "GuestSessionRegisteredEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "GuestSessionRegisteredEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionRegisteredEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "GuestSessionRegisteredEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "GuestSessionRegisteredEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IGuestSessionEvent properties
//

STDMETHODIMP GuestSessionRegisteredEventWrap::COMGETTER(Session)(IGuestSession **aSession)
{
    LogRelFlow(("{%p} %s: enter aSession=%p\n", this, "GuestSessionRegisteredEvent::getSession", aSession));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSession);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSession(ComTypeOutConverter<IGuestSession>(aSession).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSession=%p hrc=%Rhrc\n", this, "GuestSessionRegisteredEvent::getSession", *aSession, hrc));
    return hrc;
}

//
// IGuestSessionRegisteredEvent properties
//

STDMETHODIMP GuestSessionRegisteredEventWrap::COMGETTER(Registered)(BOOL *aRegistered)
{
    LogRelFlow(("{%p} %s: enter aRegistered=%p\n", this, "GuestSessionRegisteredEvent::getRegistered", aRegistered));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRegistered);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRegistered(aRegistered);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRegistered=%RTbool hrc=%Rhrc\n", this, "GuestSessionRegisteredEvent::getRegistered", *aRegistered, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP GuestSessionRegisteredEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestSessionRegisteredEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSessionRegisteredEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionRegisteredEventWrap::WaitProcessed(LONG aTimeout,
                                                            BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "GuestSessionRegisteredEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "GuestSessionRegisteredEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IGuestSessionEvent methods
//

//
// IGuestSessionRegisteredEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestSessionRegisteredEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(GuestSessionRegisteredEventWrap, IGuestSessionRegisteredEvent, IGuestSessionEvent, IEvent)
#endif // VBOX_WITH_XPCOM
