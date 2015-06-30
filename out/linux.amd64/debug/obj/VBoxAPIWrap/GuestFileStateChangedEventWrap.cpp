/** @file
 *
 * VirtualBox API class wrapper code for IGuestFileStateChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTFILESTATECHANGEDEVENT

#include "GuestFileStateChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestFileStateChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP GuestFileStateChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "GuestFileStateChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP GuestFileStateChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "GuestFileStateChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP GuestFileStateChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "GuestFileStateChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IGuestSessionEvent properties
//

STDMETHODIMP GuestFileStateChangedEventWrap::COMGETTER(Session)(IGuestSession **aSession)
{
    LogRelFlow(("{%p} %s: enter aSession=%p\n", this, "GuestFileStateChangedEvent::getSession", aSession));

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

    LogRelFlow(("{%p} %s: leave *aSession=%p hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::getSession", *aSession, hrc));
    return hrc;
}

//
// IGuestFileEvent properties
//

STDMETHODIMP GuestFileStateChangedEventWrap::COMGETTER(File)(IGuestFile **aFile)
{
    LogRelFlow(("{%p} %s: enter aFile=%p\n", this, "GuestFileStateChangedEvent::getFile", aFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFile(ComTypeOutConverter<IGuestFile>(aFile).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFile=%p hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::getFile", *aFile, hrc));
    return hrc;
}

//
// IGuestFileStateChangedEvent properties
//

STDMETHODIMP GuestFileStateChangedEventWrap::COMGETTER(Status)(FileStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s: enter aStatus=%p\n", this, "GuestFileStateChangedEvent::getStatus", aStatus));

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

    LogRelFlow(("{%p} %s: leave *aStatus=%RU32 hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::getStatus", *aStatus, hrc));
    return hrc;
}

STDMETHODIMP GuestFileStateChangedEventWrap::COMGETTER(Error)(IVirtualBoxErrorInfo **aError)
{
    LogRelFlow(("{%p} %s: enter aError=%p\n", this, "GuestFileStateChangedEvent::getError", aError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aError);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getError(ComTypeOutConverter<IVirtualBoxErrorInfo>(aError).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aError=%p hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::getError", *aError, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP GuestFileStateChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestFileStateChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP GuestFileStateChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                           BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "GuestFileStateChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "GuestFileStateChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IGuestSessionEvent methods
//

//
// IGuestFileEvent methods
//

//
// IGuestFileStateChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFileStateChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(GuestFileStateChangedEventWrap, IGuestFileStateChangedEvent, IGuestFileEvent, IGuestSessionEvent, IEvent)
#endif // VBOX_WITH_XPCOM
