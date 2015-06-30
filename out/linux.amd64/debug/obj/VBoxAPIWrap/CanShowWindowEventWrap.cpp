/** @file
 *
 * VirtualBox API class wrapper code for ICanShowWindowEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_CANSHOWWINDOWEVENT

#include "CanShowWindowEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(CanShowWindowEventWrap)

//
// IEvent properties
//

STDMETHODIMP CanShowWindowEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "CanShowWindowEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "CanShowWindowEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP CanShowWindowEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "CanShowWindowEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "CanShowWindowEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP CanShowWindowEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "CanShowWindowEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "CanShowWindowEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IVetoEvent properties
//

//
// ICanShowWindowEvent properties
//

//
// IEvent methods
//

STDMETHODIMP CanShowWindowEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "CanShowWindowEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "CanShowWindowEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP CanShowWindowEventWrap::WaitProcessed(LONG aTimeout,
                                                   BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "CanShowWindowEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "CanShowWindowEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IVetoEvent methods
//

STDMETHODIMP CanShowWindowEventWrap::AddVeto(IN_BSTR aReason)
{
    LogRelFlow(("{%p} %s:enter aReason=%ls\n", this, "CanShowWindowEvent::addVeto", aReason));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addVeto(BSTRInConverter(aReason).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "CanShowWindowEvent::addVeto", hrc));
    return hrc;
}

STDMETHODIMP CanShowWindowEventWrap::IsVetoed(BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aResult=%p\n", this, "CanShowWindowEvent::isVetoed", aResult));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResult);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = isVetoed(aResult);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "CanShowWindowEvent::isVetoed", *aResult, hrc));
    return hrc;
}

STDMETHODIMP CanShowWindowEventWrap::GetVetos(ComSafeArrayOut(BSTR, aResult))
{
    LogRelFlow(("{%p} %s:enter aResult=%p\n", this, "CanShowWindowEvent::getVetos", aResult));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResult);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVetos(ArrayBSTROutConverter(ComSafeArrayOutArg(aResult)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aResult=%zu hrc=%Rhrc\n", this, "CanShowWindowEvent::getVetos", ComSafeArraySize(*aResult), hrc));
    return hrc;
}

//
// ICanShowWindowEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(CanShowWindowEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(CanShowWindowEventWrap, ICanShowWindowEvent, IVetoEvent, IEvent)
#endif // VBOX_WITH_XPCOM
