/** @file
 *
 * VirtualBox API class wrapper code for IMachineRegisteredEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MACHINEREGISTEREDEVENT

#include "MachineRegisteredEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MachineRegisteredEventWrap)

//
// IEvent properties
//

STDMETHODIMP MachineRegisteredEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "MachineRegisteredEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "MachineRegisteredEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP MachineRegisteredEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "MachineRegisteredEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "MachineRegisteredEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP MachineRegisteredEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "MachineRegisteredEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "MachineRegisteredEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IMachineEvent properties
//

STDMETHODIMP MachineRegisteredEventWrap::COMGETTER(MachineId)(BSTR *aMachineId)
{
    LogRelFlow(("{%p} %s: enter aMachineId=%p\n", this, "MachineRegisteredEvent::getMachineId", aMachineId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachineId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachineId(UuidOutConverter(aMachineId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachineId=%ls hrc=%Rhrc\n", this, "MachineRegisteredEvent::getMachineId", *aMachineId, hrc));
    return hrc;
}

//
// IMachineRegisteredEvent properties
//

STDMETHODIMP MachineRegisteredEventWrap::COMGETTER(Registered)(BOOL *aRegistered)
{
    LogRelFlow(("{%p} %s: enter aRegistered=%p\n", this, "MachineRegisteredEvent::getRegistered", aRegistered));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRegistered);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRegistered(aRegistered);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRegistered=%RTbool hrc=%Rhrc\n", this, "MachineRegisteredEvent::getRegistered", *aRegistered, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP MachineRegisteredEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "MachineRegisteredEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineRegisteredEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP MachineRegisteredEventWrap::WaitProcessed(LONG aTimeout,
                                                       BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "MachineRegisteredEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "MachineRegisteredEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IMachineEvent methods
//

//
// IMachineRegisteredEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MachineRegisteredEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(MachineRegisteredEventWrap, IMachineRegisteredEvent, IMachineEvent, IEvent)
#endif // VBOX_WITH_XPCOM
