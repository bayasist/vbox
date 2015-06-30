/** @file
 *
 * VirtualBox API class wrapper code for IKeyboardLedsChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_KEYBOARDLEDSCHANGEDEVENT

#include "KeyboardLedsChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(KeyboardLedsChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP KeyboardLedsChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "KeyboardLedsChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "KeyboardLedsChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP KeyboardLedsChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "KeyboardLedsChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "KeyboardLedsChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP KeyboardLedsChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "KeyboardLedsChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "KeyboardLedsChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IKeyboardLedsChangedEvent properties
//

STDMETHODIMP KeyboardLedsChangedEventWrap::COMGETTER(NumLock)(BOOL *aNumLock)
{
    LogRelFlow(("{%p} %s: enter aNumLock=%p\n", this, "KeyboardLedsChangedEvent::getNumLock", aNumLock));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNumLock);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNumLock(aNumLock);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNumLock=%RTbool hrc=%Rhrc\n", this, "KeyboardLedsChangedEvent::getNumLock", *aNumLock, hrc));
    return hrc;
}

STDMETHODIMP KeyboardLedsChangedEventWrap::COMGETTER(CapsLock)(BOOL *aCapsLock)
{
    LogRelFlow(("{%p} %s: enter aCapsLock=%p\n", this, "KeyboardLedsChangedEvent::getCapsLock", aCapsLock));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCapsLock);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCapsLock(aCapsLock);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCapsLock=%RTbool hrc=%Rhrc\n", this, "KeyboardLedsChangedEvent::getCapsLock", *aCapsLock, hrc));
    return hrc;
}

STDMETHODIMP KeyboardLedsChangedEventWrap::COMGETTER(ScrollLock)(BOOL *aScrollLock)
{
    LogRelFlow(("{%p} %s: enter aScrollLock=%p\n", this, "KeyboardLedsChangedEvent::getScrollLock", aScrollLock));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aScrollLock);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getScrollLock(aScrollLock);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aScrollLock=%RTbool hrc=%Rhrc\n", this, "KeyboardLedsChangedEvent::getScrollLock", *aScrollLock, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP KeyboardLedsChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "KeyboardLedsChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "KeyboardLedsChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP KeyboardLedsChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                         BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "KeyboardLedsChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "KeyboardLedsChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IKeyboardLedsChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(KeyboardLedsChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(KeyboardLedsChangedEventWrap, IKeyboardLedsChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
