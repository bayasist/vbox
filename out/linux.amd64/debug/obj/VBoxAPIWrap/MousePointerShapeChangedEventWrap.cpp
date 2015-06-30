/** @file
 *
 * VirtualBox API class wrapper code for IMousePointerShapeChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MOUSEPOINTERSHAPECHANGEDEVENT

#include "MousePointerShapeChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MousePointerShapeChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "MousePointerShapeChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "MousePointerShapeChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "MousePointerShapeChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IMousePointerShapeChangedEvent properties
//

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Visible)(BOOL *aVisible)
{
    LogRelFlow(("{%p} %s: enter aVisible=%p\n", this, "MousePointerShapeChangedEvent::getVisible", aVisible));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVisible);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVisible(aVisible);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVisible=%RTbool hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getVisible", *aVisible, hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Alpha)(BOOL *aAlpha)
{
    LogRelFlow(("{%p} %s: enter aAlpha=%p\n", this, "MousePointerShapeChangedEvent::getAlpha", aAlpha));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAlpha);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAlpha(aAlpha);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAlpha=%RTbool hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getAlpha", *aAlpha, hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Xhot)(ULONG *aXhot)
{
    LogRelFlow(("{%p} %s: enter aXhot=%p\n", this, "MousePointerShapeChangedEvent::getXhot", aXhot));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aXhot);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getXhot(aXhot);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aXhot=%RU32 hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getXhot", *aXhot, hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Yhot)(ULONG *aYhot)
{
    LogRelFlow(("{%p} %s: enter aYhot=%p\n", this, "MousePointerShapeChangedEvent::getYhot", aYhot));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aYhot);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getYhot(aYhot);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aYhot=%RU32 hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getYhot", *aYhot, hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Width)(ULONG *aWidth)
{
    LogRelFlow(("{%p} %s: enter aWidth=%p\n", this, "MousePointerShapeChangedEvent::getWidth", aWidth));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWidth);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWidth(aWidth);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWidth=%RU32 hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getWidth", *aWidth, hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Height)(ULONG *aHeight)
{
    LogRelFlow(("{%p} %s: enter aHeight=%p\n", this, "MousePointerShapeChangedEvent::getHeight", aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHeight);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHeight(aHeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHeight=%RU32 hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getHeight", *aHeight, hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::COMGETTER(Shape)(ComSafeArrayOut(BYTE, aShape))
{
    LogRelFlow(("{%p} %s: enter aShape=%p\n", this, "MousePointerShapeChangedEvent::getShape", aShape));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aShape);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getShape(ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aShape)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aShape=%zu hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::getShape", ComSafeArraySize(*aShape), hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP MousePointerShapeChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "MousePointerShapeChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP MousePointerShapeChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                              BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "MousePointerShapeChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "MousePointerShapeChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IMousePointerShapeChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MousePointerShapeChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(MousePointerShapeChangedEventWrap, IMousePointerShapeChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
