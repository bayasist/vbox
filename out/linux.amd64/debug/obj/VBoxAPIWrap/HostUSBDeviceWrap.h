/** @file
 *
 * VirtualBox API class wrapper header for IHostUSBDevice.
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

#ifndef HostUSBDeviceWrap_H_
#define HostUSBDeviceWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostUSBDeviceWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IHostUSBDevice)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostUSBDeviceWrap, IHostUSBDevice)
    DECLARE_NOT_AGGREGATABLE(HostUSBDeviceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostUSBDeviceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostUSBDevice)
        COM_INTERFACE_ENTRY(IUSBDevice)
        COM_INTERFACE_ENTRY2(IDispatch, IHostUSBDevice)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(HostUSBDeviceWrap)

    // public IUSBDevice properties
    STDMETHOD(COMGETTER(Id))(BSTR *aId);
    STDMETHOD(COMGETTER(VendorId))(USHORT *aVendorId);
    STDMETHOD(COMGETTER(ProductId))(USHORT *aProductId);
    STDMETHOD(COMGETTER(Revision))(USHORT *aRevision);
    STDMETHOD(COMGETTER(Manufacturer))(BSTR *aManufacturer);
    STDMETHOD(COMGETTER(Product))(BSTR *aProduct);
    STDMETHOD(COMGETTER(SerialNumber))(BSTR *aSerialNumber);
    STDMETHOD(COMGETTER(Address))(BSTR *aAddress);
    STDMETHOD(COMGETTER(Port))(USHORT *aPort);
    STDMETHOD(COMGETTER(Version))(USHORT *aVersion);
    STDMETHOD(COMGETTER(PortVersion))(USHORT *aPortVersion);
    STDMETHOD(COMGETTER(Remote))(BOOL *aRemote);

    // public IHostUSBDevice properties
    STDMETHOD(COMGETTER(State))(USBDeviceState_T *aState);

    // public IUSBDevice methods

    // public IHostUSBDevice methods

private:
    // wrapped IUSBDevice properties
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getVendorId(USHORT *aVendorId) = 0;
    virtual HRESULT getProductId(USHORT *aProductId) = 0;
    virtual HRESULT getRevision(USHORT *aRevision) = 0;
    virtual HRESULT getManufacturer(com::Utf8Str &aManufacturer) = 0;
    virtual HRESULT getProduct(com::Utf8Str &aProduct) = 0;
    virtual HRESULT getSerialNumber(com::Utf8Str &aSerialNumber) = 0;
    virtual HRESULT getAddress(com::Utf8Str &aAddress) = 0;
    virtual HRESULT getPort(USHORT *aPort) = 0;
    virtual HRESULT getVersion(USHORT *aVersion) = 0;
    virtual HRESULT getPortVersion(USHORT *aPortVersion) = 0;
    virtual HRESULT getRemote(BOOL *aRemote) = 0;

    // wrapped IHostUSBDevice properties
    virtual HRESULT getState(USBDeviceState_T *aState) = 0;

    // wrapped IUSBDevice methods

    // wrapped IHostUSBDevice methods
};

#endif // !HostUSBDeviceWrap_H_
