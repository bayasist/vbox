/** @file
 *
 * VirtualBox API class wrapper code for IVirtualBoxClient.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_VIRTUALBOXCLIENT

#include "VirtualBoxClientWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(VirtualBoxClientWrap)

//
// IVirtualBoxClient properties
//

STDMETHODIMP VirtualBoxClientWrap::COMGETTER(VirtualBox)(IVirtualBox **aVirtualBox)
{
    LogRelFlow(("{%p} %s: enter aVirtualBox=%p\n", this, "VirtualBoxClient::getVirtualBox", aVirtualBox));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVirtualBox);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVirtualBox(ComTypeOutConverter<IVirtualBox>(aVirtualBox).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVirtualBox=%p hrc=%Rhrc\n", this, "VirtualBoxClient::getVirtualBox", *aVirtualBox, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxClientWrap::COMGETTER(Session)(ISession **aSession)
{
    LogRelFlow(("{%p} %s: enter aSession=%p\n", this, "VirtualBoxClient::getSession", aSession));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSession);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSession(ComTypeOutConverter<ISession>(aSession).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSession=%p hrc=%Rhrc\n", this, "VirtualBoxClient::getSession", *aSession, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxClientWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "VirtualBoxClient::getEventSource", aEventSource));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEventSource);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEventSource(ComTypeOutConverter<IEventSource>(aEventSource).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "VirtualBoxClient::getEventSource", *aEventSource, hrc));
    return hrc;
}

//
// IVirtualBoxClient methods
//

STDMETHODIMP VirtualBoxClientWrap::CheckMachineError(IMachine *aMachine)
{
    LogRelFlow(("{%p} %s:enter aMachine=%p\n", this, "VirtualBoxClient::checkMachineError", aMachine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = checkMachineError(ComTypeInConverter<IMachine>(aMachine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualBoxClient::checkMachineError", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VirtualBoxClientWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(VirtualBoxClientWrap, IVirtualBoxClient)
#endif // VBOX_WITH_XPCOM
