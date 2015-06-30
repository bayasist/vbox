/** @file
 *
 * VirtualBox API class wrapper header for IHostUSBDeviceFilter.
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

#ifndef HostUSBDeviceFilterWrap_H_
#define HostUSBDeviceFilterWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostUSBDeviceFilterWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IHostUSBDeviceFilter)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostUSBDeviceFilterWrap, IHostUSBDeviceFilter)
    DECLARE_NOT_AGGREGATABLE(HostUSBDeviceFilterWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostUSBDeviceFilterWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostUSBDeviceFilter)
        COM_INTERFACE_ENTRY(IUSBDeviceFilter)
        COM_INTERFACE_ENTRY2(IDispatch, IHostUSBDeviceFilter)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(HostUSBDeviceFilterWrap)

    // public IUSBDeviceFilter properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName);
    STDMETHOD(COMGETTER(Active))(BOOL *aActive);
    STDMETHOD(COMSETTER(Active))(BOOL aActive);
    STDMETHOD(COMGETTER(VendorId))(BSTR *aVendorId);
    STDMETHOD(COMSETTER(VendorId))(IN_BSTR aVendorId);
    STDMETHOD(COMGETTER(ProductId))(BSTR *aProductId);
    STDMETHOD(COMSETTER(ProductId))(IN_BSTR aProductId);
    STDMETHOD(COMGETTER(Revision))(BSTR *aRevision);
    STDMETHOD(COMSETTER(Revision))(IN_BSTR aRevision);
    STDMETHOD(COMGETTER(Manufacturer))(BSTR *aManufacturer);
    STDMETHOD(COMSETTER(Manufacturer))(IN_BSTR aManufacturer);
    STDMETHOD(COMGETTER(Product))(BSTR *aProduct);
    STDMETHOD(COMSETTER(Product))(IN_BSTR aProduct);
    STDMETHOD(COMGETTER(SerialNumber))(BSTR *aSerialNumber);
    STDMETHOD(COMSETTER(SerialNumber))(IN_BSTR aSerialNumber);
    STDMETHOD(COMGETTER(Port))(BSTR *aPort);
    STDMETHOD(COMSETTER(Port))(IN_BSTR aPort);
    STDMETHOD(COMGETTER(Remote))(BSTR *aRemote);
    STDMETHOD(COMSETTER(Remote))(IN_BSTR aRemote);
    STDMETHOD(COMGETTER(MaskedInterfaces))(ULONG *aMaskedInterfaces);
    STDMETHOD(COMSETTER(MaskedInterfaces))(ULONG aMaskedInterfaces);

    // public IHostUSBDeviceFilter properties
    STDMETHOD(COMGETTER(Action))(USBDeviceFilterAction_T *aAction);
    STDMETHOD(COMSETTER(Action))(USBDeviceFilterAction_T aAction);

    // public IUSBDeviceFilter methods

    // public IHostUSBDeviceFilter methods

private:
    // wrapped IUSBDeviceFilter properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getActive(BOOL *aActive) = 0;
    virtual HRESULT setActive(BOOL aActive) = 0;
    virtual HRESULT getVendorId(com::Utf8Str &aVendorId) = 0;
    virtual HRESULT setVendorId(const com::Utf8Str &aVendorId) = 0;
    virtual HRESULT getProductId(com::Utf8Str &aProductId) = 0;
    virtual HRESULT setProductId(const com::Utf8Str &aProductId) = 0;
    virtual HRESULT getRevision(com::Utf8Str &aRevision) = 0;
    virtual HRESULT setRevision(const com::Utf8Str &aRevision) = 0;
    virtual HRESULT getManufacturer(com::Utf8Str &aManufacturer) = 0;
    virtual HRESULT setManufacturer(const com::Utf8Str &aManufacturer) = 0;
    virtual HRESULT getProduct(com::Utf8Str &aProduct) = 0;
    virtual HRESULT setProduct(const com::Utf8Str &aProduct) = 0;
    virtual HRESULT getSerialNumber(com::Utf8Str &aSerialNumber) = 0;
    virtual HRESULT setSerialNumber(const com::Utf8Str &aSerialNumber) = 0;
    virtual HRESULT getPort(com::Utf8Str &aPort) = 0;
    virtual HRESULT setPort(const com::Utf8Str &aPort) = 0;
    virtual HRESULT getRemote(com::Utf8Str &aRemote) = 0;
    virtual HRESULT setRemote(const com::Utf8Str &aRemote) = 0;
    virtual HRESULT getMaskedInterfaces(ULONG *aMaskedInterfaces) = 0;
    virtual HRESULT setMaskedInterfaces(ULONG aMaskedInterfaces) = 0;

    // wrapped IHostUSBDeviceFilter properties
    virtual HRESULT getAction(USBDeviceFilterAction_T *aAction) = 0;
    virtual HRESULT setAction(USBDeviceFilterAction_T aAction) = 0;

    // wrapped IUSBDeviceFilter methods

    // wrapped IHostUSBDeviceFilter methods
};

#endif // !HostUSBDeviceFilterWrap_H_
