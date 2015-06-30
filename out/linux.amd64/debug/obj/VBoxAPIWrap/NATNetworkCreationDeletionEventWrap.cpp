/** @file
 *
 * VirtualBox API class wrapper code for INATNetworkCreationDeletionEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_NATNETWORKCREATIONDELETIONEVENT

#include "NATNetworkCreationDeletionEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(NATNetworkCreationDeletionEventWrap)

//
// IEvent properties
//

STDMETHODIMP NATNetworkCreationDeletionEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "NATNetworkCreationDeletionEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "NATNetworkCreationDeletionEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkCreationDeletionEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "NATNetworkCreationDeletionEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "NATNetworkCreationDeletionEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkCreationDeletionEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "NATNetworkCreationDeletionEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "NATNetworkCreationDeletionEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// INATNetworkChangedEvent properties
//

STDMETHODIMP NATNetworkCreationDeletionEventWrap::COMGETTER(NetworkName)(BSTR *aNetworkName)
{
    LogRelFlow(("{%p} %s: enter aNetworkName=%p\n", this, "NATNetworkCreationDeletionEvent::getNetworkName", aNetworkName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetworkName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetworkName(BSTROutConverter(aNetworkName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNetworkName=%ls hrc=%Rhrc\n", this, "NATNetworkCreationDeletionEvent::getNetworkName", *aNetworkName, hrc));
    return hrc;
}

//
// INATNetworkAlterEvent properties
//

//
// INATNetworkCreationDeletionEvent properties
//

STDMETHODIMP NATNetworkCreationDeletionEventWrap::COMGETTER(CreationEvent)(BOOL *aCreationEvent)
{
    LogRelFlow(("{%p} %s: enter aCreationEvent=%p\n", this, "NATNetworkCreationDeletionEvent::getCreationEvent", aCreationEvent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCreationEvent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCreationEvent(aCreationEvent);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCreationEvent=%RTbool hrc=%Rhrc\n", this, "NATNetworkCreationDeletionEvent::getCreationEvent", *aCreationEvent, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP NATNetworkCreationDeletionEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "NATNetworkCreationDeletionEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetworkCreationDeletionEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkCreationDeletionEventWrap::WaitProcessed(LONG aTimeout,
                                                                BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "NATNetworkCreationDeletionEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "NATNetworkCreationDeletionEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// INATNetworkChangedEvent methods
//

//
// INATNetworkAlterEvent methods
//

//
// INATNetworkCreationDeletionEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkCreationDeletionEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(NATNetworkCreationDeletionEventWrap, INATNetworkCreationDeletionEvent, INATNetworkAlterEvent, INATNetworkChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
