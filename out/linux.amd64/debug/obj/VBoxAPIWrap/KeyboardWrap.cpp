/** @file
 *
 * VirtualBox API class wrapper code for IKeyboard.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_KEYBOARD

#include "KeyboardWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(KeyboardWrap)

//
// IKeyboard properties
//

STDMETHODIMP KeyboardWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "Keyboard::getEventSource", aEventSource));

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

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "Keyboard::getEventSource", *aEventSource, hrc));
    return hrc;
}

//
// IKeyboard methods
//

STDMETHODIMP KeyboardWrap::PutScancode(LONG aScancode)
{
    LogRelFlow(("{%p} %s:enter aScancode=%RI32\n", this, "Keyboard::putScancode", aScancode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = putScancode(aScancode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Keyboard::putScancode", hrc));
    return hrc;
}

STDMETHODIMP KeyboardWrap::PutScancodes(ComSafeArrayIn(LONG, aScancodes),
                                        ULONG *aCodesStored)
{
    LogRelFlow(("{%p} %s:enter aScancodes=%zu aCodesStored=%p\n", this, "Keyboard::putScancodes", aScancodes, aCodesStored));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCodesStored);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = putScancodes(ArrayInConverter<LONG>(ComSafeArrayInArg(aScancodes)).array(),
                           aCodesStored);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aCodesStored=%RU32 hrc=%Rhrc\n", this, "Keyboard::putScancodes", *aCodesStored, hrc));
    return hrc;
}

STDMETHODIMP KeyboardWrap::PutCAD()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Keyboard::putCAD"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = putCAD();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Keyboard::putCAD", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(KeyboardWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(KeyboardWrap, IKeyboard)
#endif // VBOX_WITH_XPCOM
