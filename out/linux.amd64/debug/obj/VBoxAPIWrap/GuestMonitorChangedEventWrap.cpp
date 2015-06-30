/** @file
 *
 * VirtualBox API class wrapper code for IGuestMonitorChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTMONITORCHANGEDEVENT

#include "GuestMonitorChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestMonitorChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "GuestMonitorChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "GuestMonitorChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "GuestMonitorChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IGuestMonitorChangedEvent properties
//

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(ChangeType)(GuestMonitorChangedEventType_T *aChangeType)
{
    LogRelFlow(("{%p} %s: enter aChangeType=%p\n", this, "GuestMonitorChangedEvent::getChangeType", aChangeType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aChangeType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getChangeType(aChangeType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aChangeType=%RU32 hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getChangeType", *aChangeType, hrc));
    return hrc;
}

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(ScreenId)(ULONG *aScreenId)
{
    LogRelFlow(("{%p} %s: enter aScreenId=%p\n", this, "GuestMonitorChangedEvent::getScreenId", aScreenId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aScreenId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getScreenId(aScreenId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aScreenId=%RU32 hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getScreenId", *aScreenId, hrc));
    return hrc;
}

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(OriginX)(ULONG *aOriginX)
{
    LogRelFlow(("{%p} %s: enter aOriginX=%p\n", this, "GuestMonitorChangedEvent::getOriginX", aOriginX));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOriginX);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOriginX(aOriginX);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOriginX=%RU32 hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getOriginX", *aOriginX, hrc));
    return hrc;
}

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(OriginY)(ULONG *aOriginY)
{
    LogRelFlow(("{%p} %s: enter aOriginY=%p\n", this, "GuestMonitorChangedEvent::getOriginY", aOriginY));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOriginY);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOriginY(aOriginY);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOriginY=%RU32 hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getOriginY", *aOriginY, hrc));
    return hrc;
}

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(Width)(ULONG *aWidth)
{
    LogRelFlow(("{%p} %s: enter aWidth=%p\n", this, "GuestMonitorChangedEvent::getWidth", aWidth));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWidth);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWidth(aWidth);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWidth=%RU32 hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getWidth", *aWidth, hrc));
    return hrc;
}

STDMETHODIMP GuestMonitorChangedEventWrap::COMGETTER(Height)(ULONG *aHeight)
{
    LogRelFlow(("{%p} %s: enter aHeight=%p\n", this, "GuestMonitorChangedEvent::getHeight", aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHeight);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHeight(aHeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHeight=%RU32 hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::getHeight", *aHeight, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP GuestMonitorChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestMonitorChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP GuestMonitorChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                         BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "GuestMonitorChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "GuestMonitorChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IGuestMonitorChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestMonitorChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestMonitorChangedEventWrap, IGuestMonitorChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
