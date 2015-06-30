/** @file
 *
 * VirtualBox API class wrapper code for IUSBDeviceFilter.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_USBDEVICEFILTER

#include "USBDeviceFilterWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(USBDeviceFilterWrap)

//
// IUSBDeviceFilter properties
//

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "USBDeviceFilter::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(Name)(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s: enter aName=%ls\n", this, "USBDeviceFilter::setName", aName));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setName", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(Active)(BOOL *aActive)
{
    LogRelFlow(("{%p} %s: enter aActive=%p\n", this, "USBDeviceFilter::getActive", aActive));

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

    LogRelFlow(("{%p} %s: leave *aActive=%RTbool hrc=%Rhrc\n", this, "USBDeviceFilter::getActive", *aActive, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(Active)(BOOL aActive)
{
    LogRelFlow(("{%p} %s: enter aActive=%RTbool\n", this, "USBDeviceFilter::setActive", aActive));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setActive", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(VendorId)(BSTR *aVendorId)
{
    LogRelFlow(("{%p} %s: enter aVendorId=%p\n", this, "USBDeviceFilter::getVendorId", aVendorId));

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

    LogRelFlow(("{%p} %s: leave *aVendorId=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getVendorId", *aVendorId, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(VendorId)(IN_BSTR aVendorId)
{
    LogRelFlow(("{%p} %s: enter aVendorId=%ls\n", this, "USBDeviceFilter::setVendorId", aVendorId));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setVendorId", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(ProductId)(BSTR *aProductId)
{
    LogRelFlow(("{%p} %s: enter aProductId=%p\n", this, "USBDeviceFilter::getProductId", aProductId));

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

    LogRelFlow(("{%p} %s: leave *aProductId=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getProductId", *aProductId, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(ProductId)(IN_BSTR aProductId)
{
    LogRelFlow(("{%p} %s: enter aProductId=%ls\n", this, "USBDeviceFilter::setProductId", aProductId));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setProductId", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(Revision)(BSTR *aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%p\n", this, "USBDeviceFilter::getRevision", aRevision));

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

    LogRelFlow(("{%p} %s: leave *aRevision=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getRevision", *aRevision, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(Revision)(IN_BSTR aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%ls\n", this, "USBDeviceFilter::setRevision", aRevision));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setRevision", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(Manufacturer)(BSTR *aManufacturer)
{
    LogRelFlow(("{%p} %s: enter aManufacturer=%p\n", this, "USBDeviceFilter::getManufacturer", aManufacturer));

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

    LogRelFlow(("{%p} %s: leave *aManufacturer=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getManufacturer", *aManufacturer, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(Manufacturer)(IN_BSTR aManufacturer)
{
    LogRelFlow(("{%p} %s: enter aManufacturer=%ls\n", this, "USBDeviceFilter::setManufacturer", aManufacturer));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setManufacturer", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(Product)(BSTR *aProduct)
{
    LogRelFlow(("{%p} %s: enter aProduct=%p\n", this, "USBDeviceFilter::getProduct", aProduct));

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

    LogRelFlow(("{%p} %s: leave *aProduct=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getProduct", *aProduct, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(Product)(IN_BSTR aProduct)
{
    LogRelFlow(("{%p} %s: enter aProduct=%ls\n", this, "USBDeviceFilter::setProduct", aProduct));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setProduct", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(SerialNumber)(BSTR *aSerialNumber)
{
    LogRelFlow(("{%p} %s: enter aSerialNumber=%p\n", this, "USBDeviceFilter::getSerialNumber", aSerialNumber));

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

    LogRelFlow(("{%p} %s: leave *aSerialNumber=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getSerialNumber", *aSerialNumber, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(SerialNumber)(IN_BSTR aSerialNumber)
{
    LogRelFlow(("{%p} %s: enter aSerialNumber=%ls\n", this, "USBDeviceFilter::setSerialNumber", aSerialNumber));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setSerialNumber", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(Port)(BSTR *aPort)
{
    LogRelFlow(("{%p} %s: enter aPort=%p\n", this, "USBDeviceFilter::getPort", aPort));

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

    LogRelFlow(("{%p} %s: leave *aPort=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getPort", *aPort, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(Port)(IN_BSTR aPort)
{
    LogRelFlow(("{%p} %s: enter aPort=%ls\n", this, "USBDeviceFilter::setPort", aPort));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setPort", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(Remote)(BSTR *aRemote)
{
    LogRelFlow(("{%p} %s: enter aRemote=%p\n", this, "USBDeviceFilter::getRemote", aRemote));

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

    LogRelFlow(("{%p} %s: leave *aRemote=%ls hrc=%Rhrc\n", this, "USBDeviceFilter::getRemote", *aRemote, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(Remote)(IN_BSTR aRemote)
{
    LogRelFlow(("{%p} %s: enter aRemote=%ls\n", this, "USBDeviceFilter::setRemote", aRemote));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setRemote", hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMGETTER(MaskedInterfaces)(ULONG *aMaskedInterfaces)
{
    LogRelFlow(("{%p} %s: enter aMaskedInterfaces=%p\n", this, "USBDeviceFilter::getMaskedInterfaces", aMaskedInterfaces));

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

    LogRelFlow(("{%p} %s: leave *aMaskedInterfaces=%RU32 hrc=%Rhrc\n", this, "USBDeviceFilter::getMaskedInterfaces", *aMaskedInterfaces, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceFilterWrap::COMSETTER(MaskedInterfaces)(ULONG aMaskedInterfaces)
{
    LogRelFlow(("{%p} %s: enter aMaskedInterfaces=%RU32\n", this, "USBDeviceFilter::setMaskedInterfaces", aMaskedInterfaces));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "USBDeviceFilter::setMaskedInterfaces", hrc));
    return hrc;
}

//
// IUSBDeviceFilter methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(USBDeviceFilterWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(USBDeviceFilterWrap, IUSBDeviceFilter)
#endif // VBOX_WITH_XPCOM
