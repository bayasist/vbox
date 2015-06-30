/** @file
 *
 * VirtualBox API class wrapper code for IHostPCIDevicePlugEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_HOSTPCIDEVICEPLUGEVENT

#include "HostPCIDevicePlugEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(HostPCIDevicePlugEventWrap)

//
// IEvent properties
//

STDMETHODIMP HostPCIDevicePlugEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "HostPCIDevicePlugEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP HostPCIDevicePlugEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "HostPCIDevicePlugEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP HostPCIDevicePlugEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "HostPCIDevicePlugEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IMachineEvent properties
//

STDMETHODIMP HostPCIDevicePlugEventWrap::COMGETTER(MachineId)(BSTR *aMachineId)
{
    LogRelFlow(("{%p} %s: enter aMachineId=%p\n", this, "HostPCIDevicePlugEvent::getMachineId", aMachineId));

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

    LogRelFlow(("{%p} %s: leave *aMachineId=%ls hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::getMachineId", *aMachineId, hrc));
    return hrc;
}

//
// IHostPCIDevicePlugEvent properties
//

STDMETHODIMP HostPCIDevicePlugEventWrap::COMGETTER(Plugged)(BOOL *aPlugged)
{
    LogRelFlow(("{%p} %s: enter aPlugged=%p\n", this, "HostPCIDevicePlugEvent::getPlugged", aPlugged));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPlugged);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPlugged(aPlugged);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPlugged=%RTbool hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::getPlugged", *aPlugged, hrc));
    return hrc;
}

STDMETHODIMP HostPCIDevicePlugEventWrap::COMGETTER(Success)(BOOL *aSuccess)
{
    LogRelFlow(("{%p} %s: enter aSuccess=%p\n", this, "HostPCIDevicePlugEvent::getSuccess", aSuccess));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSuccess);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSuccess(aSuccess);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSuccess=%RTbool hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::getSuccess", *aSuccess, hrc));
    return hrc;
}

STDMETHODIMP HostPCIDevicePlugEventWrap::COMGETTER(Attachment)(IPCIDeviceAttachment **aAttachment)
{
    LogRelFlow(("{%p} %s: enter aAttachment=%p\n", this, "HostPCIDevicePlugEvent::getAttachment", aAttachment));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAttachment);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAttachment(ComTypeOutConverter<IPCIDeviceAttachment>(aAttachment).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAttachment=%p hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::getAttachment", *aAttachment, hrc));
    return hrc;
}

STDMETHODIMP HostPCIDevicePlugEventWrap::COMGETTER(Message)(BSTR *aMessage)
{
    LogRelFlow(("{%p} %s: enter aMessage=%p\n", this, "HostPCIDevicePlugEvent::getMessage", aMessage));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMessage);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMessage(BSTROutConverter(aMessage).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMessage=%ls hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::getMessage", *aMessage, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP HostPCIDevicePlugEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "HostPCIDevicePlugEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP HostPCIDevicePlugEventWrap::WaitProcessed(LONG aTimeout,
                                                       BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "HostPCIDevicePlugEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "HostPCIDevicePlugEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IMachineEvent methods
//

//
// IHostPCIDevicePlugEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostPCIDevicePlugEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(HostPCIDevicePlugEventWrap, IHostPCIDevicePlugEvent, IMachineEvent, IEvent)
#endif // VBOX_WITH_XPCOM
