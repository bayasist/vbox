/** @file
 *
 * VirtualBox API class wrapper code for IPCIAddress.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_PCIADDRESS

#include "PCIAddressWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(PCIAddressWrap)

//
// IPCIAddress properties
//

STDMETHODIMP PCIAddressWrap::COMGETTER(Bus)(SHORT *aBus)
{
    LogRelFlow(("{%p} %s: enter aBus=%p\n", this, "PCIAddress::getBus", aBus));

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

    LogRelFlow(("{%p} %s: leave *aBus=%RI16 hrc=%Rhrc\n", this, "PCIAddress::getBus", *aBus, hrc));
    return hrc;
}

STDMETHODIMP PCIAddressWrap::COMSETTER(Bus)(SHORT aBus)
{
    LogRelFlow(("{%p} %s: enter aBus=%RI16\n", this, "PCIAddress::setBus", aBus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setBus(aBus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "PCIAddress::setBus", hrc));
    return hrc;
}

STDMETHODIMP PCIAddressWrap::COMGETTER(Device)(SHORT *aDevice)
{
    LogRelFlow(("{%p} %s: enter aDevice=%p\n", this, "PCIAddress::getDevice", aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDevice(aDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDevice=%RI16 hrc=%Rhrc\n", this, "PCIAddress::getDevice", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP PCIAddressWrap::COMSETTER(Device)(SHORT aDevice)
{
    LogRelFlow(("{%p} %s: enter aDevice=%RI16\n", this, "PCIAddress::setDevice", aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDevice(aDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "PCIAddress::setDevice", hrc));
    return hrc;
}

STDMETHODIMP PCIAddressWrap::COMGETTER(DevFunction)(SHORT *aDevFunction)
{
    LogRelFlow(("{%p} %s: enter aDevFunction=%p\n", this, "PCIAddress::getDevFunction", aDevFunction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevFunction);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDevFunction(aDevFunction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDevFunction=%RI16 hrc=%Rhrc\n", this, "PCIAddress::getDevFunction", *aDevFunction, hrc));
    return hrc;
}

STDMETHODIMP PCIAddressWrap::COMSETTER(DevFunction)(SHORT aDevFunction)
{
    LogRelFlow(("{%p} %s: enter aDevFunction=%RI16\n", this, "PCIAddress::setDevFunction", aDevFunction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDevFunction(aDevFunction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "PCIAddress::setDevFunction", hrc));
    return hrc;
}

//
// IPCIAddress methods
//

STDMETHODIMP PCIAddressWrap::AsLong(LONG *aResult)
{
    LogRelFlow(("{%p} %s:enter aResult=%p\n", this, "PCIAddress::asLong", aResult));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResult);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = asLong(aResult);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aResult=%RI32 hrc=%Rhrc\n", this, "PCIAddress::asLong", *aResult, hrc));
    return hrc;
}

STDMETHODIMP PCIAddressWrap::FromLong(LONG aNumber)
{
    LogRelFlow(("{%p} %s:enter aNumber=%RI32\n", this, "PCIAddress::fromLong", aNumber));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fromLong(aNumber);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "PCIAddress::fromLong", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(PCIAddressWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(PCIAddressWrap, IPCIAddress)
#endif // VBOX_WITH_XPCOM
