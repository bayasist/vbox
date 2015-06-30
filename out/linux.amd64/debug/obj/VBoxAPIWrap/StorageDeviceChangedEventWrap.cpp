/** @file
 *
 * VirtualBox API class wrapper code for IStorageDeviceChangedEvent.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_STORAGEDEVICECHANGEDEVENT

#include "StorageDeviceChangedEventWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(StorageDeviceChangedEventWrap)

//
// IEvent properties
//

STDMETHODIMP StorageDeviceChangedEventWrap::COMGETTER(Type)(VBoxEventType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "StorageDeviceChangedEvent::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "StorageDeviceChangedEvent::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP StorageDeviceChangedEventWrap::COMGETTER(Source)(IEventSource **aSource)
{
    LogRelFlow(("{%p} %s: enter aSource=%p\n", this, "StorageDeviceChangedEvent::getSource", aSource));

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

    LogRelFlow(("{%p} %s: leave *aSource=%p hrc=%Rhrc\n", this, "StorageDeviceChangedEvent::getSource", *aSource, hrc));
    return hrc;
}

STDMETHODIMP StorageDeviceChangedEventWrap::COMGETTER(Waitable)(BOOL *aWaitable)
{
    LogRelFlow(("{%p} %s: enter aWaitable=%p\n", this, "StorageDeviceChangedEvent::getWaitable", aWaitable));

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

    LogRelFlow(("{%p} %s: leave *aWaitable=%RTbool hrc=%Rhrc\n", this, "StorageDeviceChangedEvent::getWaitable", *aWaitable, hrc));
    return hrc;
}

//
// IStorageDeviceChangedEvent properties
//

STDMETHODIMP StorageDeviceChangedEventWrap::COMGETTER(StorageDevice)(IMediumAttachment **aStorageDevice)
{
    LogRelFlow(("{%p} %s: enter aStorageDevice=%p\n", this, "StorageDeviceChangedEvent::getStorageDevice", aStorageDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStorageDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStorageDevice(ComTypeOutConverter<IMediumAttachment>(aStorageDevice).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStorageDevice=%p hrc=%Rhrc\n", this, "StorageDeviceChangedEvent::getStorageDevice", *aStorageDevice, hrc));
    return hrc;
}

STDMETHODIMP StorageDeviceChangedEventWrap::COMGETTER(Removed)(BOOL *aRemoved)
{
    LogRelFlow(("{%p} %s: enter aRemoved=%p\n", this, "StorageDeviceChangedEvent::getRemoved", aRemoved));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRemoved);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRemoved(aRemoved);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRemoved=%RTbool hrc=%Rhrc\n", this, "StorageDeviceChangedEvent::getRemoved", *aRemoved, hrc));
    return hrc;
}

STDMETHODIMP StorageDeviceChangedEventWrap::COMGETTER(Silent)(BOOL *aSilent)
{
    LogRelFlow(("{%p} %s: enter aSilent=%p\n", this, "StorageDeviceChangedEvent::getSilent", aSilent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSilent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSilent(aSilent);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSilent=%RTbool hrc=%Rhrc\n", this, "StorageDeviceChangedEvent::getSilent", *aSilent, hrc));
    return hrc;
}

//
// IEvent methods
//

STDMETHODIMP StorageDeviceChangedEventWrap::SetProcessed()
{
    LogRelFlow(("{%p} %s:enter\n", this, "StorageDeviceChangedEvent::setProcessed"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "StorageDeviceChangedEvent::setProcessed", hrc));
    return hrc;
}

STDMETHODIMP StorageDeviceChangedEventWrap::WaitProcessed(LONG aTimeout,
                                                          BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32 aResult=%p\n", this, "StorageDeviceChangedEvent::waitProcessed", aTimeout, aResult));

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

    LogRelFlow(("{%p} %s: leave aResult=%RTbool hrc=%Rhrc\n", this, "StorageDeviceChangedEvent::waitProcessed", *aResult, hrc));
    return hrc;
}

//
// IStorageDeviceChangedEvent methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(StorageDeviceChangedEventWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(StorageDeviceChangedEventWrap, IStorageDeviceChangedEvent, IEvent)
#endif // VBOX_WITH_XPCOM
