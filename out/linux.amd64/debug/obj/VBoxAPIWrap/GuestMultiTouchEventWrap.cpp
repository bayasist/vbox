/** @file
 *
 * VirtualBox API class wrapper code for IGuestMultiTouchEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTMULTITOUCHEVENT

#include "GuestMultiTouchEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestMultiTouchEventWrap)

//
// IEvent properties
//

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "GuestMultiTouchEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "GuestMultiTouchEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "GuestMultiTouchEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IGuestMultiTouchEvent properties
//

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(ContactCount)(LONG *aContactCount)
{
    LogRelFlow(("{%p} %s: enter aContactCount=%p\n", this, "GuestMultiTouchEvent::getContactCount", aContactCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aContactCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getContactCount(aContactCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aContactCount=%RI32 hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getContactCount", *aContactCount, hrc));
    return hrc;
}

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(XPositions)(ComSafeArrayOut(SHORT, aXPositions))
{
    LogRelFlow(("{%p} %s: enter aXPositions=%p\n", this, "GuestMultiTouchEvent::getXPositions", aXPositions));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aXPositions);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getXPositions(ArrayOutConverter<SHORT>(ComSafeArrayOutArg(aXPositions)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aXPositions=%zu hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getXPositions", ComSafeArraySize(*aXPositions), hrc));
    return hrc;
}

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(YPositions)(ComSafeArrayOut(SHORT, aYPositions))
{
    LogRelFlow(("{%p} %s: enter aYPositions=%p\n", this, "GuestMultiTouchEvent::getYPositions", aYPositions));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aYPositions);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getYPositions(ArrayOutConverter<SHORT>(ComSafeArrayOutArg(aYPositions)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aYPositions=%zu hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getYPositions", ComSafeArraySize(*aYPositions), hrc));
    return hrc;
}

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(ContactIds)(ComSafeArrayOut(USHORT, aContactIds))
{
    LogRelFlow(("{%p} %s: enter aContactIds=%p\n", this, "GuestMultiTouchEvent::getContactIds", aContactIds));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aContactIds);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getContactIds(ArrayOutConverter<USHORT>(ComSafeArrayOutArg(aContactIds)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aContactIds=%zu hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getContactIds", ComSafeArraySize(*aContactIds), hrc));
    return hrc;
}

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(ContactFlags)(ComSafeArrayOut(USHORT, aContactFlags))
{
    LogRelFlow(("{%p} %s: enter aContactFlags=%p\n", this, "GuestMultiTouchEvent::getContactFlags", aContactFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aContactFlags);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getContactFlags(ArrayOutConverter<USHORT>(ComSafeArrayOutArg(aContactFlags)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aContactFlags=%zu hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getContactFlags", ComSafeArraySize(*aContactFlags), hrc));
    return hrc;
}

STDMETHODIMP GuestMultiTouchEventWrap::COMGETTER(ScanTime)(ULONG *aScanTime)
{
    LogRelFlow(("{%p} %s: enter aScanTime=%p\n", this, "GuestMultiTouchEvent::getScanTime", aScanTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aScanTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getScanTime(aScanTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aScanTime=%RU32 hrc=%Rhrc\n", this, "GuestMultiTouchEvent::getScanTime", *aScanTime, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP GuestMultiTouchEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestMultiTouchEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestMultiTouchEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP GuestMultiTouchEventWrap::WaitProcessed(LONG aTimeout,
                                                     BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "GuestMultiTouchEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "GuestMultiTouchEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IGuestMultiTouchEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestMultiTouchEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestMultiTouchEventWrap, IGuestMultiTouchEvent, IEvent)
#endif // VBOX_WITH_XPCOM
