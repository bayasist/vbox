/** @file
 *
 * VirtualBox API class wrapper header for IUSBDeviceFilters.
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

#ifndef USBDeviceFiltersWrap_H_
#define USBDeviceFiltersWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE USBDeviceFiltersWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IUSBDeviceFilters)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(USBDeviceFiltersWrap, IUSBDeviceFilters)
    DECLARE_NOT_AGGREGATABLE(USBDeviceFiltersWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(USBDeviceFiltersWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IUSBDeviceFilters)
        COM_INTERFACE_ENTRY2(IDispatch, IUSBDeviceFilters)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(USBDeviceFiltersWrap)

    // public IUSBDeviceFilters properties
    STDMETHOD(COMGETTER(DeviceFilters))(ComSafeArrayOut(IUSBDeviceFilter *, aDeviceFilters));

    // public IUSBDeviceFilters methods
    STDMETHOD(CreateDeviceFilter)(IN_BSTR aName,
                                  IUSBDeviceFilter **aFilter);
    STDMETHOD(InsertDeviceFilter)(ULONG aPosition,
                                  IUSBDeviceFilter *aFilter);
    STDMETHOD(RemoveDeviceFilter)(ULONG aPosition,
                                  IUSBDeviceFilter **aFilter);

private:
    // wrapped IUSBDeviceFilters properties
    virtual HRESULT getDeviceFilters(std::vector<ComPtr<IUSBDeviceFilter> > &aDeviceFilters) = 0;

    // wrapped IUSBDeviceFilters methods
    virtual HRESULT createDeviceFilter(const com::Utf8Str &aName,
                                       ComPtr<IUSBDeviceFilter> &aFilter) = 0;
    virtual HRESULT insertDeviceFilter(ULONG aPosition,
                                       const ComPtr<IUSBDeviceFilter> &aFilter) = 0;
    virtual HRESULT removeDeviceFilter(ULONG aPosition,
                                       ComPtr<IUSBDeviceFilter> &aFilter) = 0;
};

#endif // !USBDeviceFiltersWrap_H_
