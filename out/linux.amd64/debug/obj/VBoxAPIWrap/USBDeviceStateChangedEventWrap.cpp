/** @file
 *
 * VirtualBox API class wrapper code for IUSBDeviceStateChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_USBDEVICESTATECHANGEDEVENT

#include "USBDeviceStateChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(USBDeviceStateChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP USBDeviceStateChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "USBDeviceStateChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "USBDeviceStateChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceStateChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "USBDeviceStateChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "USBDeviceStateChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceStateChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "USBDeviceStateChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "USBDeviceStateChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IUSBDeviceStateChangedEvent properties
//

STDMETHODIMP USBDeviceStateChangedEventWrap::COMGETTER(Device)(IUSBDevice **aDevice)
{
    LogRelFlow(("{%p} %s: enter aDevice=%p\n", this, "USBDeviceStateChangedEvent::getDevice", aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDevice(ComTypeOutConverter<IUSBDevice>(aDevice).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDevice=%p hrc=%Rhrc\n", this, "USBDeviceStateChangedEvent::getDevice", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceStateChangedEventWrap::COMGETTER(Attached)(BOOL *aAttached)
{
    LogRelFlow(("{%p} %s: enter aAttached=%p\n", this, "USBDeviceStateChangedEvent::getAttached", aAttached));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAttached);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAttached(aAttached);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAttached=%RTbool hrc=%Rhrc\n", this, "USBDeviceStateChangedEvent::getAttached", *aAttached, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceStateChangedEventWrap::COMGETTER(Error)(IVirtualBoxErrorInfo **aError)
{
    LogRelFlow(("{%p} %s: enter aError=%p\n", this, "USBDeviceStateChangedEvent::getError", aError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aError);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getError(ComTypeOutConverter<IVirtualBoxErrorInfo>(aError).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aError=%p hrc=%Rhrc\n", this, "USBDeviceStateChangedEvent::getError", *aError, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP USBDeviceStateChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "USBDeviceStateChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceStateChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceStateChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                           BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "USBDeviceStateChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "USBDeviceStateChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IUSBDeviceStateChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(USBDeviceStateChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(USBDeviceStateChangedEventWrap, IUSBDeviceStateChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
