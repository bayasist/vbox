/** @file
 *
 * VirtualBox API class wrapper code for IGuestProcessInputNotifyEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTPROCESSINPUTNOTIFYEVENT

#include "GuestProcessInputNotifyEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestProcessInputNotifyEventWrap)

//
// IEvent properties
//

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "GuestProcessInputNotifyEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "GuestProcessInputNotifyEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "GuestProcessInputNotifyEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IGuestSessionEvent properties
//

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Session)(IGuestSession **aSession)
{
    LogRelFlow(("{%p} %s: enter aSession=%p\n", this, "GuestProcessInputNotifyEvent::getSession", aSession));

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

    LogRelFlow(("{%p} %s: leave *aSession=%p hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getSession", *aSession, hrc));
    return hrc;
}

//
// IGuestProcessEvent properties
//

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Process)(IGuestProcess **aProcess)
{
    LogRelFlow(("{%p} %s: enter aProcess=%p\n", this, "GuestProcessInputNotifyEvent::getProcess", aProcess));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProcess);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcess(ComTypeOutConverter<IGuestProcess>(aProcess).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProcess=%p hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getProcess", *aProcess, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Pid)(ULONG *aPid)
{
    LogRelFlow(("{%p} %s: enter aPid=%p\n", this, "GuestProcessInputNotifyEvent::getPid", aPid));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPid);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPid(aPid);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPid=%RU32 hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getPid", *aPid, hrc));
    return hrc;
}

//
// IGuestProcessIOEvent properties
//

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Handle)(ULONG *aHandle)
{
    LogRelFlow(("{%p} %s: enter aHandle=%p\n", this, "GuestProcessInputNotifyEvent::getHandle", aHandle));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHandle);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHandle(aHandle);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHandle=%RU32 hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getHandle", *aHandle, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Processed)(ULONG *aProcessed)
{
    LogRelFlow(("{%p} %s: enter aProcessed=%p\n", this, "GuestProcessInputNotifyEvent::getProcessed", aProcessed));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProcessed);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessed(aProcessed);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProcessed=%RU32 hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getProcessed", *aProcessed, hrc));
    return hrc;
}

//
// IGuestProcessInputNotifyEvent properties
//

STDMETHODIMP GuestProcessInputNotifyEventWrap::COMGETTER(Status)(ProcessInputStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s: enter aStatus=%p\n", this, "GuestProcessInputNotifyEvent::getStatus", aStatus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStatus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStatus(aStatus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStatus=%RU32 hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::getStatus", *aStatus, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP GuestProcessInputNotifyEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestProcessInputNotifyEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP GuestProcessInputNotifyEventWrap::WaitProcessed(LONG aTimeout,
                                                             BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "GuestProcessInputNotifyEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "GuestProcessInputNotifyEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IGuestSessionEvent methods
//

//
// IGuestProcessEvent methods
//

//
// IGuestProcessIOEvent methods
//

//
// IGuestProcessInputNotifyEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestProcessInputNotifyEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS5_CI(GuestProcessInputNotifyEventWrap, IGuestProcessInputNotifyEvent, IGuestProcessIOEvent, IGuestProcessEvent, IGuestSessionEvent, IEvent)
#endif // VBOX_WITH_XPCOM
