/** @file
 *
 * VirtualBox API class wrapper code for IGuestFileReadEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTFILEREADEVENT

#include "GuestFileReadEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestFileReadEventWrap)

//
// IEvent properties
//

STDMETHODIMP GuestFileReadEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "GuestFileReadEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "GuestFileReadEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP GuestFileReadEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "GuestFileReadEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "GuestFileReadEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP GuestFileReadEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "GuestFileReadEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "GuestFileReadEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IGuestSessionEvent properties
//

STDMETHODIMP GuestFileReadEventWrap::COMGETTER(Session)(IGuestSession **aSession)
{
    LogRelFlow(("{%p} %s: enter aSession=%p\n", this, "GuestFileReadEvent::getSession", aSession));

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

    LogRelFlow(("{%p} %s: leave *aSession=%p hrc=%Rhrc\n", this, "GuestFileReadEvent::getSession", *aSession, hrc));
    return hrc;
}

//
// IGuestFileEvent properties
//

STDMETHODIMP GuestFileReadEventWrap::COMGETTER(File)(IGuestFile **aFile)
{
    LogRelFlow(("{%p} %s: enter aFile=%p\n", this, "GuestFileReadEvent::getFile", aFile));

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

    LogRelFlow(("{%p} %s: leave *aFile=%p hrc=%Rhrc\n", this, "GuestFileReadEvent::getFile", *aFile, hrc));
    return hrc;
}

//
// IGuestFileIOEvent properties
//

STDMETHODIMP GuestFileReadEventWrap::COMGETTER(Offset)(LONG64 *aOffset)
{
    LogRelFlow(("{%p} %s: enter aOffset=%p\n", this, "GuestFileReadEvent::getOffset", aOffset));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOffset);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOffset(aOffset);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOffset=%RI64 hrc=%Rhrc\n", this, "GuestFileReadEvent::getOffset", *aOffset, hrc));
    return hrc;
}

STDMETHODIMP GuestFileReadEventWrap::COMGETTER(Processed)(ULONG *aProcessed)
{
    LogRelFlow(("{%p} %s: enter aProcessed=%p\n", this, "GuestFileReadEvent::getProcessed", aProcessed));

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

    LogRelFlow(("{%p} %s: leave *aProcessed=%RU32 hrc=%Rhrc\n", this, "GuestFileReadEvent::getProcessed", *aProcessed, hrc));
    return hrc;
}

//
// IGuestFileReadEvent properties
//

STDMETHODIMP GuestFileReadEventWrap::COMGETTER(Data)(ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s: enter aData=%p\n", this, "GuestFileReadEvent::getData", aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getData(ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aData=%zu hrc=%Rhrc\n", this, "GuestFileReadEvent::getData", ComSafeArraySize(*aData), hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP GuestFileReadEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestFileReadEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestFileReadEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP GuestFileReadEventWrap::WaitProcessed(LONG aTimeout,
                                                   BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "GuestFileReadEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "GuestFileReadEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IGuestSessionEvent methods
//

//
// IGuestFileEvent methods
//

//
// IGuestFileIOEvent methods
//

//
// IGuestFileReadEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFileReadEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS5_CI(GuestFileReadEventWrap, IGuestFileReadEvent, IGuestFileIOEvent, IGuestFileEvent, IGuestSessionEvent, IEvent)
#endif // VBOX_WITH_XPCOM
