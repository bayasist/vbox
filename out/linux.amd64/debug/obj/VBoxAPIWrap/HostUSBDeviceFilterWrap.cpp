/** @file
 *
 * VirtualBox API class wrapper code for IHostUSBDeviceFilter.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_HOSTUSBDEVICEFILTER

#include "HostUSBDeviceFilterWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(HostUSBDeviceFilterWrap)

//
// IUSBDeviceFilter properties
//

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "HostUSBDeviceFilter::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(Name)(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s: enter aName=%ls\n", this, "HostUSBDeviceFilter::setName", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setName(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setName", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(Active)(BOOL *aActive)
{
    LogRelFlow(("{%p} %s: enter aActive=%p\n", this, "HostUSBDeviceFilter::getActive", aActive));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aActive);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getActive(aActive);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aActive=%RTbool hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getActive", *aActive, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(Active)(BOOL aActive)
{
    LogRelFlow(("{%p} %s: enter aActive=%RTbool\n", this, "HostUSBDeviceFilter::setActive", aActive));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setActive(aActive);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setActive", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(VendorId)(BSTR *aVendorId)
{
    LogRelFlow(("{%p} %s: enter aVendorId=%p\n", this, "HostUSBDeviceFilter::getVendorId", aVendorId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVendorId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVendorId(BSTROutConverter(aVendorId).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVendorId=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getVendorId", *aVendorId, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(VendorId)(IN_BSTR aVendorId)
{
    LogRelFlow(("{%p} %s: enter aVendorId=%ls\n", this, "HostUSBDeviceFilter::setVendorId", aVendorId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVendorId(BSTRInConverter(aVendorId).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setVendorId", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(ProductId)(BSTR *aProductId)
{
    LogRelFlow(("{%p} %s: enter aProductId=%p\n", this, "HostUSBDeviceFilter::getProductId", aProductId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProductId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProductId(BSTROutConverter(aProductId).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProductId=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getProductId", *aProductId, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(ProductId)(IN_BSTR aProductId)
{
    LogRelFlow(("{%p} %s: enter aProductId=%ls\n", this, "HostUSBDeviceFilter::setProductId", aProductId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setProductId(BSTRInConverter(aProductId).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setProductId", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(Revision)(BSTR *aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%p\n", this, "HostUSBDeviceFilter::getRevision", aRevision));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRevision);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRevision(BSTROutConverter(aRevision).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRevision=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getRevision", *aRevision, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(Revision)(IN_BSTR aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%ls\n", this, "HostUSBDeviceFilter::setRevision", aRevision));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setRevision(BSTRInConverter(aRevision).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setRevision", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(Manufacturer)(BSTR *aManufacturer)
{
    LogRelFlow(("{%p} %s: enter aManufacturer=%p\n", this, "HostUSBDeviceFilter::getManufacturer", aManufacturer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aManufacturer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getManufacturer(BSTROutConverter(aManufacturer).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aManufacturer=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getManufacturer", *aManufacturer, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(Manufacturer)(IN_BSTR aManufacturer)
{
    LogRelFlow(("{%p} %s: enter aManufacturer=%ls\n", this, "HostUSBDeviceFilter::setManufacturer", aManufacturer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setManufacturer(BSTRInConverter(aManufacturer).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setManufacturer", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(Product)(BSTR *aProduct)
{
    LogRelFlow(("{%p} %s: enter aProduct=%p\n", this, "HostUSBDeviceFilter::getProduct", aProduct));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProduct);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProduct(BSTROutConverter(aProduct).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProduct=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getProduct", *aProduct, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(Product)(IN_BSTR aProduct)
{
    LogRelFlow(("{%p} %s: enter aProduct=%ls\n", this, "HostUSBDeviceFilter::setProduct", aProduct));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setProduct(BSTRInConverter(aProduct).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setProduct", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(SerialNumber)(BSTR *aSerialNumber)
{
    LogRelFlow(("{%p} %s: enter aSerialNumber=%p\n", this, "HostUSBDeviceFilter::getSerialNumber", aSerialNumber));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSerialNumber);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSerialNumber(BSTROutConverter(aSerialNumber).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSerialNumber=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getSerialNumber", *aSerialNumber, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(SerialNumber)(IN_BSTR aSerialNumber)
{
    LogRelFlow(("{%p} %s: enter aSerialNumber=%ls\n", this, "HostUSBDeviceFilter::setSerialNumber", aSerialNumber));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setSerialNumber(BSTRInConverter(aSerialNumber).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setSerialNumber", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(Port)(BSTR *aPort)
{
    LogRelFlow(("{%p} %s: enter aPort=%p\n", this, "HostUSBDeviceFilter::getPort", aPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPort(BSTROutConverter(aPort).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPort=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getPort", *aPort, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(Port)(IN_BSTR aPort)
{
    LogRelFlow(("{%p} %s: enter aPort=%ls\n", this, "HostUSBDeviceFilter::setPort", aPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setPort(BSTRInConverter(aPort).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setPort", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(Remote)(BSTR *aRemote)
{
    LogRelFlow(("{%p} %s: enter aRemote=%p\n", this, "HostUSBDeviceFilter::getRemote", aRemote));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRemote);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRemote(BSTROutConverter(aRemote).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRemote=%ls hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getRemote", *aRemote, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(Remote)(IN_BSTR aRemote)
{
    LogRelFlow(("{%p} %s: enter aRemote=%ls\n", this, "HostUSBDeviceFilter::setRemote", aRemote));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setRemote(BSTRInConverter(aRemote).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setRemote", hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(MaskedInterfaces)(ULONG *aMaskedInterfaces)
{
    LogRelFlow(("{%p} %s: enter aMaskedInterfaces=%p\n", this, "HostUSBDeviceFilter::getMaskedInterfaces", aMaskedInterfaces));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaskedInterfaces);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaskedInterfaces(aMaskedInterfaces);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaskedInterfaces=%RU32 hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getMaskedInterfaces", *aMaskedInterfaces, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(MaskedInterfaces)(ULONG aMaskedInterfaces)
{
    LogRelFlow(("{%p} %s: enter aMaskedInterfaces=%RU32\n", this, "HostUSBDeviceFilter::setMaskedInterfaces", aMaskedInterfaces));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setMaskedInterfaces(aMaskedInterfaces);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setMaskedInterfaces", hrc));
    return hrc;
}

//
// IHostUSBDeviceFilter properties
//

STDMETHODIMP HostUSBDeviceFilterWrap::COMGETTER(Action)(USBDeviceFilterAction_T *aAction)
{
    LogRelFlow(("{%p} %s: enter aAction=%p\n", this, "HostUSBDeviceFilter::getAction", aAction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAction);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAction(aAction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAction=%RU32 hrc=%Rhrc\n", this, "HostUSBDeviceFilter::getAction", *aAction, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceFilterWrap::COMSETTER(Action)(USBDeviceFilterAction_T aAction)
{
    LogRelFlow(("{%p} %s: enter aAction=%RU32\n", this, "HostUSBDeviceFilter::setAction", aAction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAction(aAction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostUSBDeviceFilter::setAction", hrc));
    return hrc;
}

//
// IUSBDeviceFilter methods
//

//
// IHostUSBDeviceFilter methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostUSBDeviceFilterWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(HostUSBDeviceFilterWrap, IHostUSBDeviceFilter, IUSBDeviceFilter)
#endif // VBOX_WITH_XPCOM
