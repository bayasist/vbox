/** @file
 *
 * VirtualBox API class wrapper code for ICPUChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_CPUCHANGEDEVENT

#include "CPUChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(CPUChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP CPUChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "CPUChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "CPUChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP CPUChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "CPUChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "CPUChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP CPUChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "CPUChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "CPUChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// ICPUChangedEvent properties
//

STDMETHODIMP CPUChangedEventWrap::COMGETTER(CPU)(ULONG *aCPU)
{
    LogRelFlow(("{%p} %s: enter aCPU=%p\n", this, "CPUChangedEvent::getCPU", aCPU));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCPU);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCPU(aCPU);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCPU=%RU32 hrc=%Rhrc\n", this, "CPUChangedEvent::getCPU", *aCPU, hrc));
    return hrc;
}

STDMETHODIMP CPUChangedEventWrap::COMGETTER(Add)(BOOL *aAdd)
{
    LogRelFlow(("{%p} %s: enter aAdd=%p\n", this, "CPUChangedEvent::getAdd", aAdd));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdd);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdd(aAdd);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAdd=%RTbool hrc=%Rhrc\n", this, "CPUChangedEvent::getAdd", *aAdd, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP CPUChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "CPUChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "CPUChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP CPUChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "CPUChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "CPUChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// ICPUChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(CPUChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(CPUChangedEventWrap, ICPUChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
