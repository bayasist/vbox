/** @file
 *
 * VirtualBox API class wrapper code for IGuestMouseEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTMOUSEEVENT

#include "GuestMouseEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestMouseEventWrap)

//
// IEvent properties
//

STDMETHODIMP GuestMouseEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "GuestMouseEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "GuestMouseEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP GuestMouseEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "GuestMouseEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "GuestMouseEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP GuestMouseEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "GuestMouseEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "GuestMouseEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IReusableEvent properties
//

STDMETHODIMP GuestMouseEventWrap::COMGETTER(Generation)(ULONG *aGeneration)
{
    LogRelFlow(("{%p} %s: enter aGeneration=%p\n", this, "GuestMouseEvent::getGeneration", aGeneration));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGeneration);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGeneration(aGeneration);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGeneration=%RU32 hrc=%Rhrc\n", this, "GuestMouseEvent::getGeneration", *aGeneration, hrc));
    return hrc;
}

//
// IGuestMouseEvent properties
//

STDMETHODIMP GuestMouseEventWrap::COMGETTER(Mode)(GuestMouseEventMode_T *aMode)
{
    LogRelFlow(("{%p} %s: enter aMode=%p\n", this, "GuestMouseEvent::getMode", aMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMode(aMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMode=%RU32 hrc=%Rhrc\n", this, "GuestMouseEvent::getMode", *aMode, hrc));
    return hrc;
}

STDMETHODIMP GuestMouseEventWrap::COMGETTER(X)(LONG *aX)
{
    LogRelFlow(("{%p} %s: enter aX=%p\n", this, "GuestMouseEvent::getX", aX));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aX);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getX(aX);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aX=%RI32 hrc=%Rhrc\n", this, "GuestMouseEvent::getX", *aX, hrc));
    return hrc;
}

STDMETHODIMP GuestMouseEventWrap::COMGETTER(Y)(LONG *aY)
{
    LogRelFlow(("{%p} %s: enter aY=%p\n", this, "GuestMouseEvent::getY", aY));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aY);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getY(aY);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aY=%RI32 hrc=%Rhrc\n", this, "GuestMouseEvent::getY", *aY, hrc));
    return hrc;
}

STDMETHODIMP GuestMouseEventWrap::COMGETTER(Z)(LONG *aZ)
{
    LogRelFlow(("{%p} %s: enter aZ=%p\n", this, "GuestMouseEvent::getZ", aZ));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aZ);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getZ(aZ);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aZ=%RI32 hrc=%Rhrc\n", this, "GuestMouseEvent::getZ", *aZ, hrc));
    return hrc;
}

STDMETHODIMP GuestMouseEventWrap::COMGETTER(W)(LONG *aW)
{
    LogRelFlow(("{%p} %s: enter aW=%p\n", this, "GuestMouseEvent::getW", aW));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aW);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getW(aW);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aW=%RI32 hrc=%Rhrc\n", this, "GuestMouseEvent::getW", *aW, hrc));
    return hrc;
}

STDMETHODIMP GuestMouseEventWrap::COMGETTER(Buttons)(LONG *aButtons)
{
    LogRelFlow(("{%p} %s: enter aButtons=%p\n", this, "GuestMouseEvent::getButtons", aButtons));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aButtons);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getButtons(aButtons);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aButtons=%RI32 hrc=%Rhrc\n", this, "GuestMouseEvent::getButtons", *aButtons, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP GuestMouseEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestMouseEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestMouseEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP GuestMouseEventWrap::WaitProcessed(LONG aTimeout,
                                                BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "GuestMouseEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "GuestMouseEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IReusableEvent methods
//

STDMETHODIMP GuestMouseEventWrap::Reuse()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestMouseEvent::reuse"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = reuse();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestMouseEvent::reuse", hrc));
    return hrc;
}

//
// IGuestMouseEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestMouseEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(GuestMouseEventWrap, IGuestMouseEvent, IReusableEvent, IEvent)
#endif // VBOX_WITH_XPCOM
