/** @file
 *
 * VirtualBox API class wrapper code for IExtraDataChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EXTRADATACHANGEDEVENT

#include "ExtraDataChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ExtraDataChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP ExtraDataChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "ExtraDataChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "ExtraDataChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "ExtraDataChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "ExtraDataChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "ExtraDataChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "ExtraDataChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IExtraDataChangedEvent properties
//

STDMETHODIMP ExtraDataChangedEventWrap::COMGETTER(MachineId)(BSTR *aMachineId)
{
    LogRelFlow(("{%p} %s: enter aMachineId=%p\n", this, "ExtraDataChangedEvent::getMachineId", aMachineId));

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

    LogRelFlow(("{%p} %s: leave *aMachineId=%ls hrc=%Rhrc\n", this, "ExtraDataChangedEvent::getMachineId", *aMachineId, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataChangedEventWrap::COMGETTER(Key)(BSTR *aKey)
{
    LogRelFlow(("{%p} %s: enter aKey=%p\n", this, "ExtraDataChangedEvent::getKey", aKey));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aKey);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getKey(BSTROutConverter(aKey).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aKey=%ls hrc=%Rhrc\n", this, "ExtraDataChangedEvent::getKey", *aKey, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataChangedEventWrap::COMGETTER(Value)(BSTR *aValue)
{
    LogRelFlow(("{%p} %s: enter aValue=%p\n", this, "ExtraDataChangedEvent::getValue", aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getValue(BSTROutConverter(aValue).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aValue=%ls hrc=%Rhrc\n", this, "ExtraDataChangedEvent::getValue", *aValue, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP ExtraDataChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "ExtraDataChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "ExtraDataChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP ExtraDataChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                      BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "ExtraDataChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "ExtraDataChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IExtraDataChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ExtraDataChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(ExtraDataChangedEventWrap, IExtraDataChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
