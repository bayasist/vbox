/** @file
 *
 * VirtualBox API class wrapper code for IUSBDevice.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_USBDEVICE

#include "USBDeviceWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(USBDeviceWrap)

//
// IUSBDevice properties
//

STDMETHODIMP USBDeviceWrap::COMGETTER(Id)(BSTR *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "USBDevice::getId", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getId(UuidOutConverter(aId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aId=%ls hrc=%Rhrc\n", this, "USBDevice::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(VendorId)(USHORT *aVendorId)
{
    LogRelFlow(("{%p} %s: enter aVendorId=%p\n", this, "USBDevice::getVendorId", aVendorId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVendorId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVendorId(aVendorId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVendorId=%RU16 hrc=%Rhrc\n", this, "USBDevice::getVendorId", *aVendorId, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(ProductId)(USHORT *aProductId)
{
    LogRelFlow(("{%p} %s: enter aProductId=%p\n", this, "USBDevice::getProductId", aProductId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProductId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProductId(aProductId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProductId=%RU16 hrc=%Rhrc\n", this, "USBDevice::getProductId", *aProductId, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(Revision)(USHORT *aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%p\n", this, "USBDevice::getRevision", aRevision));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRevision);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRevision(aRevision);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRevision=%RU16 hrc=%Rhrc\n", this, "USBDevice::getRevision", *aRevision, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(Manufacturer)(BSTR *aManufacturer)
{
    LogRelFlow(("{%p} %s: enter aManufacturer=%p\n", this, "USBDevice::getManufacturer", aManufacturer));

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

    LogRelFlow(("{%p} %s: leave *aManufacturer=%ls hrc=%Rhrc\n", this, "USBDevice::getManufacturer", *aManufacturer, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(Product)(BSTR *aProduct)
{
    LogRelFlow(("{%p} %s: enter aProduct=%p\n", this, "USBDevice::getProduct", aProduct));

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

    LogRelFlow(("{%p} %s: leave *aProduct=%ls hrc=%Rhrc\n", this, "USBDevice::getProduct", *aProduct, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(SerialNumber)(BSTR *aSerialNumber)
{
    LogRelFlow(("{%p} %s: enter aSerialNumber=%p\n", this, "USBDevice::getSerialNumber", aSerialNumber));

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

    LogRelFlow(("{%p} %s: leave *aSerialNumber=%ls hrc=%Rhrc\n", this, "USBDevice::getSerialNumber", *aSerialNumber, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(Address)(BSTR *aAddress)
{
    LogRelFlow(("{%p} %s: enter aAddress=%p\n", this, "USBDevice::getAddress", aAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAddress(BSTROutConverter(aAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAddress=%ls hrc=%Rhrc\n", this, "USBDevice::getAddress", *aAddress, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(Port)(USHORT *aPort)
{
    LogRelFlow(("{%p} %s: enter aPort=%p\n", this, "USBDevice::getPort", aPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPort(aPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPort=%RU16 hrc=%Rhrc\n", this, "USBDevice::getPort", *aPort, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(Version)(USHORT *aVersion)
{
    LogRelFlow(("{%p} %s: enter aVersion=%p\n", this, "USBDevice::getVersion", aVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVersion(aVersion);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVersion=%RU16 hrc=%Rhrc\n", this, "USBDevice::getVersion", *aVersion, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(PortVersion)(USHORT *aPortVersion)
{
    LogRelFlow(("{%p} %s: enter aPortVersion=%p\n", this, "USBDevice::getPortVersion", aPortVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPortVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPortVersion(aPortVersion);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPortVersion=%RU16 hrc=%Rhrc\n", this, "USBDevice::getPortVersion", *aPortVersion, hrc));
    return hrc;
}

STDMETHODIMP USBDeviceWrap::COMGETTER(Remote)(BOOL *aRemote)
{
    LogRelFlow(("{%p} %s: enter aRemote=%p\n", this, "USBDevice::getRemote", aRemote));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRemote);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRemote(aRemote);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRemote=%RTbool hrc=%Rhrc\n", this, "USBDevice::getRemote", *aRemote, hrc));
    return hrc;
}

//
// IUSBDevice methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(USBDeviceWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(USBDeviceWrap, IUSBDevice)
#endif // VBOX_WITH_XPCOM
