/** @file
 *
 * VirtualBox API class wrapper code for IHostUSBDevice.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_HOSTUSBDEVICE

#include "HostUSBDeviceWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(HostUSBDeviceWrap)

//
// IUSBDevice properties
//

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(Id)(BSTR *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "HostUSBDevice::getId", aId));

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

    LogRelFlow(("{%p} %s: leave *aId=%ls hrc=%Rhrc\n", this, "HostUSBDevice::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(VendorId)(USHORT *aVendorId)
{
    LogRelFlow(("{%p} %s: enter aVendorId=%p\n", this, "HostUSBDevice::getVendorId", aVendorId));

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

    LogRelFlow(("{%p} %s: leave *aVendorId=%RU16 hrc=%Rhrc\n", this, "HostUSBDevice::getVendorId", *aVendorId, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(ProductId)(USHORT *aProductId)
{
    LogRelFlow(("{%p} %s: enter aProductId=%p\n", this, "HostUSBDevice::getProductId", aProductId));

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

    LogRelFlow(("{%p} %s: leave *aProductId=%RU16 hrc=%Rhrc\n", this, "HostUSBDevice::getProductId", *aProductId, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(Revision)(USHORT *aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%p\n", this, "HostUSBDevice::getRevision", aRevision));

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

    LogRelFlow(("{%p} %s: leave *aRevision=%RU16 hrc=%Rhrc\n", this, "HostUSBDevice::getRevision", *aRevision, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(Manufacturer)(BSTR *aManufacturer)
{
    LogRelFlow(("{%p} %s: enter aManufacturer=%p\n", this, "HostUSBDevice::getManufacturer", aManufacturer));

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

    LogRelFlow(("{%p} %s: leave *aManufacturer=%ls hrc=%Rhrc\n", this, "HostUSBDevice::getManufacturer", *aManufacturer, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(Product)(BSTR *aProduct)
{
    LogRelFlow(("{%p} %s: enter aProduct=%p\n", this, "HostUSBDevice::getProduct", aProduct));

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

    LogRelFlow(("{%p} %s: leave *aProduct=%ls hrc=%Rhrc\n", this, "HostUSBDevice::getProduct", *aProduct, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(SerialNumber)(BSTR *aSerialNumber)
{
    LogRelFlow(("{%p} %s: enter aSerialNumber=%p\n", this, "HostUSBDevice::getSerialNumber", aSerialNumber));

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

    LogRelFlow(("{%p} %s: leave *aSerialNumber=%ls hrc=%Rhrc\n", this, "HostUSBDevice::getSerialNumber", *aSerialNumber, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(Address)(BSTR *aAddress)
{
    LogRelFlow(("{%p} %s: enter aAddress=%p\n", this, "HostUSBDevice::getAddress", aAddress));

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

    LogRelFlow(("{%p} %s: leave *aAddress=%ls hrc=%Rhrc\n", this, "HostUSBDevice::getAddress", *aAddress, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(Port)(USHORT *aPort)
{
    LogRelFlow(("{%p} %s: enter aPort=%p\n", this, "HostUSBDevice::getPort", aPort));

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

    LogRelFlow(("{%p} %s: leave *aPort=%RU16 hrc=%Rhrc\n", this, "HostUSBDevice::getPort", *aPort, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(Version)(USHORT *aVersion)
{
    LogRelFlow(("{%p} %s: enter aVersion=%p\n", this, "HostUSBDevice::getVersion", aVersion));

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

    LogRelFlow(("{%p} %s: leave *aVersion=%RU16 hrc=%Rhrc\n", this, "HostUSBDevice::getVersion", *aVersion, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(PortVersion)(USHORT *aPortVersion)
{
    LogRelFlow(("{%p} %s: enter aPortVersion=%p\n", this, "HostUSBDevice::getPortVersion", aPortVersion));

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

    LogRelFlow(("{%p} %s: leave *aPortVersion=%RU16 hrc=%Rhrc\n", this, "HostUSBDevice::getPortVersion", *aPortVersion, hrc));
    return hrc;
}

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(Remote)(BOOL *aRemote)
{
    LogRelFlow(("{%p} %s: enter aRemote=%p\n", this, "HostUSBDevice::getRemote", aRemote));

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

    LogRelFlow(("{%p} %s: leave *aRemote=%RTbool hrc=%Rhrc\n", this, "HostUSBDevice::getRemote", *aRemote, hrc));
    return hrc;
}

//
// IHostUSBDevice properties
//

STDMETHODIMP HostUSBDeviceWrap::COMGETTER(State)(USBDeviceState_T *aState)
{
    LogRelFlow(("{%p} %s: enter aState=%p\n", this, "HostUSBDevice::getState", aState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aState);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getState(aState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aState=%RU32 hrc=%Rhrc\n", this, "HostUSBDevice::getState", *aState, hrc));
    return hrc;
}

//
// IUSBDevice methods
//

//
// IHostUSBDevice methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostUSBDeviceWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(HostUSBDeviceWrap, IHostUSBDevice, IUSBDevice)
#endif // VBOX_WITH_XPCOM
