/** @file
 *
 * VirtualBox API class wrapper code for IMouse.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MOUSE

#include "MouseWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MouseWrap)

//
// IMouse properties
//

STDMETHODIMP MouseWrap::COMGETTER(AbsoluteSupported)(BOOL *aAbsoluteSupported)
{
    LogRelFlow(("{%p} %s: enter aAbsoluteSupported=%p\n", this, "Mouse::getAbsoluteSupported", aAbsoluteSupported));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAbsoluteSupported);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAbsoluteSupported(aAbsoluteSupported);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAbsoluteSupported=%RTbool hrc=%Rhrc\n", this, "Mouse::getAbsoluteSupported", *aAbsoluteSupported, hrc));
    return hrc;
}

STDMETHODIMP MouseWrap::COMGETTER(RelativeSupported)(BOOL *aRelativeSupported)
{
    LogRelFlow(("{%p} %s: enter aRelativeSupported=%p\n", this, "Mouse::getRelativeSupported", aRelativeSupported));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRelativeSupported);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRelativeSupported(aRelativeSupported);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRelativeSupported=%RTbool hrc=%Rhrc\n", this, "Mouse::getRelativeSupported", *aRelativeSupported, hrc));
    return hrc;
}

STDMETHODIMP MouseWrap::COMGETTER(MultiTouchSupported)(BOOL *aMultiTouchSupported)
{
    LogRelFlow(("{%p} %s: enter aMultiTouchSupported=%p\n", this, "Mouse::getMultiTouchSupported", aMultiTouchSupported));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMultiTouchSupported);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMultiTouchSupported(aMultiTouchSupported);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMultiTouchSupported=%RTbool hrc=%Rhrc\n", this, "Mouse::getMultiTouchSupported", *aMultiTouchSupported, hrc));
    return hrc;
}

STDMETHODIMP MouseWrap::COMGETTER(NeedsHostCursor)(BOOL *aNeedsHostCursor)
{
    LogRelFlow(("{%p} %s: enter aNeedsHostCursor=%p\n", this, "Mouse::getNeedsHostCursor", aNeedsHostCursor));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNeedsHostCursor);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNeedsHostCursor(aNeedsHostCursor);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNeedsHostCursor=%RTbool hrc=%Rhrc\n", this, "Mouse::getNeedsHostCursor", *aNeedsHostCursor, hrc));
    return hrc;
}

STDMETHODIMP MouseWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "Mouse::getEventSource", aEventSource));

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

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "Mouse::getEventSource", *aEventSource, hrc));
    return hrc;
}

//
// IMouse methods
//

STDMETHODIMP MouseWrap::PutMouseEvent(LONG aDx,
                                      LONG aDy,
                                      LONG aDz,
                                      LONG aDw,
                                      LONG aButtonState)
{
    LogRelFlow(("{%p} %s:enter aDx=%RI32 aDy=%RI32 aDz=%RI32 aDw=%RI32 aButtonState=%RI32\n", this, "Mouse::putMouseEvent", aDx, aDy, aDz, aDw, aButtonState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = putMouseEvent(aDx,
                            aDy,
                            aDz,
                            aDw,
                            aButtonState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Mouse::putMouseEvent", hrc));
    return hrc;
}

STDMETHODIMP MouseWrap::PutMouseEventAbsolute(LONG aX,
                                              LONG aY,
                                              LONG aDz,
                                              LONG aDw,
                                              LONG aButtonState)
{
    LogRelFlow(("{%p} %s:enter aX=%RI32 aY=%RI32 aDz=%RI32 aDw=%RI32 aButtonState=%RI32\n", this, "Mouse::putMouseEventAbsolute", aX, aY, aDz, aDw, aButtonState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = putMouseEventAbsolute(aX,
                                    aY,
                                    aDz,
                                    aDw,
                                    aButtonState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Mouse::putMouseEventAbsolute", hrc));
    return hrc;
}

STDMETHODIMP MouseWrap::PutEventMultiTouch(LONG aCount,
                                           ComSafeArrayIn(LONG64, aContacts),
                                           ULONG aScanTime)
{
    LogRelFlow(("{%p} %s:enter aCount=%RI32 aContacts=%zu aScanTime=%RU32\n", this, "Mouse::putEventMultiTouch", aCount, aContacts, aScanTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = putEventMultiTouch(aCount,
                                 ArrayInConverter<LONG64>(ComSafeArrayInArg(aContacts)).array(),
                                 aScanTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Mouse::putEventMultiTouch", hrc));
    return hrc;
}

STDMETHODIMP MouseWrap::PutEventMultiTouchString(LONG aCount,
                                                 IN_BSTR aContacts,
                                                 ULONG aScanTime)
{
    LogRelFlow(("{%p} %s:enter aCount=%RI32 aContacts=%ls aScanTime=%RU32\n", this, "Mouse::putEventMultiTouchString", aCount, aContacts, aScanTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = putEventMultiTouchString(aCount,
                                       BSTRInConverter(aContacts).str(),
                                       aScanTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Mouse::putEventMultiTouchString", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MouseWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(MouseWrap, IMouse)
#endif // VBOX_WITH_XPCOM
