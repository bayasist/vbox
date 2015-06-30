/** @file
 *
 * VirtualBox API class wrapper code for IMediumRegisteredEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MEDIUMREGISTEREDEVENT

#include "MediumRegisteredEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MediumRegisteredEventWrap)

//
// IEvent properties
//

STDMETHODIMP MediumRegisteredEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "MediumRegisteredEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "MediumRegisteredEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP MediumRegisteredEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "MediumRegisteredEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "MediumRegisteredEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP MediumRegisteredEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "MediumRegisteredEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "MediumRegisteredEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IMediumRegisteredEvent properties
//

STDMETHODIMP MediumRegisteredEventWrap::COMGETTER(MediumId)(BSTR *aMediumId)
{
    LogRelFlow(("{%p} %s: enter aMediumId=%p\n", this, "MediumRegisteredEvent::getMediumId", aMediumId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMediumId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMediumId(UuidOutConverter(aMediumId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMediumId=%ls hrc=%Rhrc\n", this, "MediumRegisteredEvent::getMediumId", *aMediumId, hrc));
    return hrc;
}

STDMETHODIMP MediumRegisteredEventWrap::COMGETTER(MediumType)(DeviceType_T *aMediumType)
{
    LogRelFlow(("{%p} %s: enter aMediumType=%p\n", this, "MediumRegisteredEvent::getMediumType", aMediumType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMediumType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMediumType(aMediumType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMediumType=%RU32 hrc=%Rhrc\n", this, "MediumRegisteredEvent::getMediumType", *aMediumType, hrc));
    return hrc;
}

STDMETHODIMP MediumRegisteredEventWrap::COMGETTER(Registered)(BOOL *aRegistered)
{
    LogRelFlow(("{%p} %s: enter aRegistered=%p\n", this, "MediumRegisteredEvent::getRegistered", aRegistered));

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

    LogRelFlow(("{%p} %s: leave *aRegistered=%RTbool hrc=%Rhrc\n", this, "MediumRegisteredEvent::getRegistered", *aRegistered, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP MediumRegisteredEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "MediumRegisteredEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MediumRegisteredEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP MediumRegisteredEventWrap::WaitProcessed(LONG aTimeout,
                                                      BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "MediumRegisteredEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "MediumRegisteredEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IMediumRegisteredEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MediumRegisteredEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(MediumRegisteredEventWrap, IMediumRegisteredEvent, IEvent)
#endif // VBOX_WITH_XPCOM
