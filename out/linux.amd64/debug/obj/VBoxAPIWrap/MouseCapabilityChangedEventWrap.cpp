/** @file
 *
 * VirtualBox API class wrapper code for IMouseCapabilityChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MOUSECAPABILITYCHANGEDEVENT

#include "MouseCapabilityChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MouseCapabilityChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP MouseCapabilityChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "MouseCapabilityChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP MouseCapabilityChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "MouseCapabilityChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP MouseCapabilityChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "MouseCapabilityChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IMouseCapabilityChangedEvent properties
//

STDMETHODIMP MouseCapabilityChangedEventWrap::COMGETTER(SupportsAbsolute)(BOOL *aSupportsAbsolute)
{
    LogRelFlow(("{%p} %s: enter aSupportsAbsolute=%p\n", this, "MouseCapabilityChangedEvent::getSupportsAbsolute", aSupportsAbsolute));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSupportsAbsolute);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSupportsAbsolute(aSupportsAbsolute);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSupportsAbsolute=%RTbool hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::getSupportsAbsolute", *aSupportsAbsolute, hrc));
    return hrc;
}

STDMETHODIMP MouseCapabilityChangedEventWrap::COMGETTER(SupportsRelative)(BOOL *aSupportsRelative)
{
    LogRelFlow(("{%p} %s: enter aSupportsRelative=%p\n", this, "MouseCapabilityChangedEvent::getSupportsRelative", aSupportsRelative));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSupportsRelative);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSupportsRelative(aSupportsRelative);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSupportsRelative=%RTbool hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::getSupportsRelative", *aSupportsRelative, hrc));
    return hrc;
}

STDMETHODIMP MouseCapabilityChangedEventWrap::COMGETTER(SupportsMultiTouch)(BOOL *aSupportsMultiTouch)
{
    LogRelFlow(("{%p} %s: enter aSupportsMultiTouch=%p\n", this, "MouseCapabilityChangedEvent::getSupportsMultiTouch", aSupportsMultiTouch));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSupportsMultiTouch);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSupportsMultiTouch(aSupportsMultiTouch);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSupportsMultiTouch=%RTbool hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::getSupportsMultiTouch", *aSupportsMultiTouch, hrc));
    return hrc;
}

STDMETHODIMP MouseCapabilityChangedEventWrap::COMGETTER(NeedsHostCursor)(BOOL *aNeedsHostCursor)
{
    LogRelFlow(("{%p} %s: enter aNeedsHostCursor=%p\n", this, "MouseCapabilityChangedEvent::getNeedsHostCursor", aNeedsHostCursor));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNeedsHostCursor);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNeedsHostCursor(aNeedsHostCursor);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNeedsHostCursor=%RTbool hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::getNeedsHostCursor", *aNeedsHostCursor, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP MouseCapabilityChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "MouseCapabilityChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP MouseCapabilityChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                            BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "MouseCapabilityChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "MouseCapabilityChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IMouseCapabilityChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MouseCapabilityChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(MouseCapabilityChangedEventWrap, IMouseCapabilityChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
