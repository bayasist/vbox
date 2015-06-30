/** @file
 *
 * VirtualBox API class wrapper code for IUSBDeviceFilters.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_USBDEVICEFILTERS

#include "USBDeviceFiltersWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(USBDeviceFiltersWrap)

//
// IUSBDeviceFilters properties
//

STDMETHODIMP USBDeviceFiltersWrap::COMGETTER(DeviceFilters)(ComSafeArrayOut(IUSBDeviceFilter *, aDeviceFilters))
{
    LogRelFlow(("{%p} %s: enter aDeviceFilters=%p\n", this, "USBDeviceFilters::getDeviceFilters", aDeviceFilters));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDeviceFilters);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDeviceFilters(ArrayComTypeOutConverter<IUSBDeviceFilter>(ComSafeArrayOutArg(aDeviceFilters)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDeviceFilters=%zu hrc=%Rhrc\n", this, "USBDeviceFilters::getDeviceFilters", ComSafeArraySize(*aDeviceFilters), hrc));
    return hrc;
}

//
// IUSBDeviceFilters methods
//

STDMETHODIMP USBDeviceFiltersWrap::CreateDeviceFilter(IN_BSTR aName,
                                                      IUSBDeviceFilter **aFilter)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aFilter=%p\n", this, "USBDeviceFilters::createDeviceFilter", aName, aFilter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFilter);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createDeviceFilter(BSTRInConverter(aName).str(),
                                 ComTypeOutConverter<IUSBDeviceFilter>(aFilter).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFilter=%p hrc=%Rhrc\n", this, "USBDeviceFilters::createDeviceFilter", *aFilter, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFiltersWrap::InsertDeviceFilter(ULONG aPosition,
                                                      IUSBDeviceFilter *aFilter)
{
    LogRelFlow(("{%p} %s:enter aPosition=%RU32 aFilter=%p\n", this, "USBDeviceFilters::insertDeviceFilter", aPosition, aFilter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = insertDeviceFilter(aPosition,
                                 ComTypeInConverter<IUSBDeviceFilter>(aFilter).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilters::insertDeviceFilter", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFiltersWrap::RemoveDeviceFilter(ULONG aPosition,
                                                      IUSBDeviceFilter **aFilter)
{
    LogRelFlow(("{%p} %s:enter aPosition=%RU32 aFilter=%p\n", this, "USBDeviceFilters::removeDeviceFilter", aPosition, aFilter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFilter);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeDeviceFilter(aPosition,
                                 ComTypeOutConverter<IUSBDeviceFilter>(aFilter).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFilter=%p hrc=%Rhrc\n", this, "USBDeviceFilters::removeDeviceFilter", *aFilter, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(USBDeviceFiltersWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(USBDeviceFiltersWrap, IUSBDeviceFilters)
#endif // VBOX_WITH_XPCOM
