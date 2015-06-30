/** @file
 *
 * VirtualBox API class wrapper code for IExtraDataCanChangeEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EXTRADATACANCHANGEEVENT

#include "ExtraDataCanChangeEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ExtraDataCanChangeEventWrap)

//
// IEvent properties
//

STDMETHODIMP ExtraDataCanChangeEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "ExtraDataCanChangeEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataCanChangeEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "ExtraDataCanChangeEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataCanChangeEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "ExtraDataCanChangeEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IVetoEvent properties
//

//
// IExtraDataCanChangeEvent properties
//

STDMETHODIMP ExtraDataCanChangeEventWrap::COMGETTER(MachineId)(BSTR *aMachineId)
{
    LogRelFlow(("{%p} %s: enter aMachineId=%p\n", this, "ExtraDataCanChangeEvent::getMachineId", aMachineId));

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

    LogRelFlow(("{%p} %s: leave *aMachineId=%ls hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::getMachineId", *aMachineId, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataCanChangeEventWrap::COMGETTER(Key)(BSTR *aKey)
{
    LogRelFlow(("{%p} %s: enter aKey=%p\n", this, "ExtraDataCanChangeEvent::getKey", aKey));

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

    LogRelFlow(("{%p} %s: leave *aKey=%ls hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::getKey", *aKey, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataCanChangeEventWrap::COMGETTER(Value)(BSTR *aValue)
{
    LogRelFlow(("{%p} %s: enter aValue=%p\n", this, "ExtraDataCanChangeEvent::getValue", aValue));

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

    LogRelFlow(("{%p} %s: leave *aValue=%ls hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::getValue", *aValue, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP ExtraDataCanChangeEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "ExtraDataCanChangeEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP ExtraDataCanChangeEventWrap::WaitProcessed(LONG aTimeout,
                                                        BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "ExtraDataCanChangeEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IVetoEvent methods
//

STDMETHODIMP ExtraDataCanChangeEventWrap::AddVeto(IN_BSTR aReason)
{
    LogRelFlow(("{%p} %s:enter aReason=%ls\n", this, "ExtraDataCanChangeEvent::addVeto", aReason));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::addVeto", hrc));
    return hrc;
}

STDMETHODIMP ExtraDataCanChangeEventWrap::IsVetoed(BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aResult=%p\n", this, "ExtraDataCanChangeEvent::isVetoed", aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::isVetoed", *aResult, hrc));
    return hrc;
}

STDMETHODIMP ExtraDataCanChangeEventWrap::GetVetos(ComSafeArrayOut(BSTR, aResult))
{
    LogRelFlow(("{%p} %s:enter aResult=%p\n", this, "ExtraDataCanChangeEvent::getVetos", aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%zu hrc=%Rhrc\n", this, "ExtraDataCanChangeEvent::getVetos", ComSafeArraySize(*aResult), hrc));
    return hrc;
}

//
// IExtraDataCanChangeEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ExtraDataCanChangeEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(ExtraDataCanChangeEventWrap, IExtraDataCanChangeEvent, IVetoEvent, IEvent)
#endif // VBOX_WITH_XPCOM
