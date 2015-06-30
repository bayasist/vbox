/** @file
 *
 * VirtualBox API class wrapper code for IStorageController.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_STORAGECONTROLLER

#include "StorageControllerWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(StorageControllerWrap)

//
// IStorageController properties
//

STDMETHODIMP StorageControllerWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "StorageController::getName", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getName(BSTROutConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "StorageController::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(MaxDevicesPerPortCount)(ULONG *aMaxDevicesPerPortCount)
{
    LogRelFlow(("{%p} %s: enter aMaxDevicesPerPortCount=%p\n", this, "StorageController::getMaxDevicesPerPortCount", aMaxDevicesPerPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxDevicesPerPortCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxDevicesPerPortCount(aMaxDevicesPerPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaxDevicesPerPortCount=%RU32 hrc=%Rhrc\n", this, "StorageController::getMaxDevicesPerPortCount", *aMaxDevicesPerPortCount, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(MinPortCount)(ULONG *aMinPortCount)
{
    LogRelFlow(("{%p} %s: enter aMinPortCount=%p\n", this, "StorageController::getMinPortCount", aMinPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMinPortCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMinPortCount(aMinPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMinPortCount=%RU32 hrc=%Rhrc\n", this, "StorageController::getMinPortCount", *aMinPortCount, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(MaxPortCount)(ULONG *aMaxPortCount)
{
    LogRelFlow(("{%p} %s: enter aMaxPortCount=%p\n", this, "StorageController::getMaxPortCount", aMaxPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxPortCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxPortCount(aMaxPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaxPortCount=%RU32 hrc=%Rhrc\n", this, "StorageController::getMaxPortCount", *aMaxPortCount, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(Instance)(ULONG *aInstance)
{
    LogRelFlow(("{%p} %s: enter aInstance=%p\n", this, "StorageController::getInstance", aInstance));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInstance);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getInstance(aInstance);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aInstance=%RU32 hrc=%Rhrc\n", this, "StorageController::getInstance", *aInstance, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMSETTER(Instance)(ULONG aInstance)
{
    LogRelFlow(("{%p} %s: enter aInstance=%RU32\n", this, "StorageController::setInstance", aInstance));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setInstance(aInstance);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "StorageController::setInstance", hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(PortCount)(ULONG *aPortCount)
{
    LogRelFlow(("{%p} %s: enter aPortCount=%p\n", this, "StorageController::getPortCount", aPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPortCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPortCount(aPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPortCount=%RU32 hrc=%Rhrc\n", this, "StorageController::getPortCount", *aPortCount, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMSETTER(PortCount)(ULONG aPortCount)
{
    LogRelFlow(("{%p} %s: enter aPortCount=%RU32\n", this, "StorageController::setPortCount", aPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setPortCount(aPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "StorageController::setPortCount", hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(Bus)(StorageBus_T *aBus)
{
    LogRelFlow(("{%p} %s: enter aBus=%p\n", this, "StorageController::getBus", aBus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBus(aBus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBus=%RU32 hrc=%Rhrc\n", this, "StorageController::getBus", *aBus, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(ControllerType)(StorageControllerType_T *aControllerType)
{
    LogRelFlow(("{%p} %s: enter aControllerType=%p\n", this, "StorageController::getControllerType", aControllerType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aControllerType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getControllerType(aControllerType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aControllerType=%RU32 hrc=%Rhrc\n", this, "StorageController::getControllerType", *aControllerType, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMSETTER(ControllerType)(StorageControllerType_T aControllerType)
{
    LogRelFlow(("{%p} %s: enter aControllerType=%RU32\n", this, "StorageController::setControllerType", aControllerType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setControllerType(aControllerType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "StorageController::setControllerType", hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(UseHostIOCache)(BOOL *aUseHostIOCache)
{
    LogRelFlow(("{%p} %s: enter aUseHostIOCache=%p\n", this, "StorageController::getUseHostIOCache", aUseHostIOCache));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUseHostIOCache);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUseHostIOCache(aUseHostIOCache);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUseHostIOCache=%RTbool hrc=%Rhrc\n", this, "StorageController::getUseHostIOCache", *aUseHostIOCache, hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMSETTER(UseHostIOCache)(BOOL aUseHostIOCache)
{
    LogRelFlow(("{%p} %s: enter aUseHostIOCache=%RTbool\n", this, "StorageController::setUseHostIOCache", aUseHostIOCache));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setUseHostIOCache(aUseHostIOCache);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "StorageController::setUseHostIOCache", hrc));
    return hrc;
}

STDMETHODIMP StorageControllerWrap::COMGETTER(Bootable)(BOOL *aBootable)
{
    LogRelFlow(("{%p} %s: enter aBootable=%p\n", this, "StorageController::getBootable", aBootable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBootable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBootable(aBootable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBootable=%RTbool hrc=%Rhrc\n", this, "StorageController::getBootable", *aBootable, hrc));
    return hrc;
}

//
// IStorageController methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(StorageControllerWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(StorageControllerWrap, IStorageController)
#endif // VBOX_WITH_XPCOM
