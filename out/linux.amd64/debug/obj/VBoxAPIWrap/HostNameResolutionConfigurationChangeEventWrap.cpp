/** @file
 *
 * VirtualBox API class wrapper code for IHostNameResolutionConfigurationChangeEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_HOSTNAMERESOLUTIONCONFIGURATIONCHANGEEVENT

#include "HostNameResolutionConfigurationChangeEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(HostNameResolutionConfigurationChangeEventWrap)

//
// IEvent properties
//

STDMETHODIMP HostNameResolutionConfigurationChangeEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "HostNameResolutionConfigurationChangeEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "HostNameResolutionConfigurationChangeEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP HostNameResolutionConfigurationChangeEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "HostNameResolutionConfigurationChangeEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "HostNameResolutionConfigurationChangeEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP HostNameResolutionConfigurationChangeEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "HostNameResolutionConfigurationChangeEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "HostNameResolutionConfigurationChangeEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IHostNameResolutionConfigurationChangeEvent properties
//

//
// IEvent methods
//

STDMETHODIMP HostNameResolutionConfigurationChangeEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "HostNameResolutionConfigurationChangeEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostNameResolutionConfigurationChangeEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP HostNameResolutionConfigurationChangeEventWrap::WaitProcessed(LONG aTimeout,
                                                                           BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "HostNameResolutionConfigurationChangeEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "HostNameResolutionConfigurationChangeEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IHostNameResolutionConfigurationChangeEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostNameResolutionConfigurationChangeEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(HostNameResolutionConfigurationChangeEventWrap, IHostNameResolutionConfigurationChangeEvent, IEvent)
#endif // VBOX_WITH_XPCOM
