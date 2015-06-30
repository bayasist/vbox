/** @file
 *
 * VirtualBox API class wrapper code for ISession.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_SESSION

#include "SessionWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(SessionWrap)

//
// ISession properties
//

STDMETHODIMP SessionWrap::COMGETTER(State)(SessionState_T *aState)
{
    LogRelFlow(("{%p} %s: enter aState=%p\n", this, "Session::getState", aState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aState);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getState(aState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aState=%RU32 hrc=%Rhrc\n", this, "Session::getState", *aState, hrc));
    return hrc;
}

STDMETHODIMP SessionWrap::COMGETTER(Type)(SessionType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "Session::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "Session::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP SessionWrap::COMGETTER(Machine)(IMachine **aMachine)
{
    LogRelFlow(("{%p} %s: enter aMachine=%p\n", this, "Session::getMachine", aMachine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachine);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachine(ComTypeOutConverter<IMachine>(aMachine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachine=%p hrc=%Rhrc\n", this, "Session::getMachine", *aMachine, hrc));
    return hrc;
}

STDMETHODIMP SessionWrap::COMGETTER(Console)(IConsole **aConsole)
{
    LogRelFlow(("{%p} %s: enter aConsole=%p\n", this, "Session::getConsole", aConsole));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aConsole);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getConsole(ComTypeOutConverter<IConsole>(aConsole).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aConsole=%p hrc=%Rhrc\n", this, "Session::getConsole", *aConsole, hrc));
    return hrc;
}

//
// ISession methods
//

STDMETHODIMP SessionWrap::UnlockMachine()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Session::unlockMachine"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = unlockMachine();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Session::unlockMachine", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SessionWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(SessionWrap, ISession)
#endif // VBOX_WITH_XPCOM
