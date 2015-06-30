/** @file
 *
 * VirtualBox API class wrapper header for IHostVideoInputDevice.
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

#ifndef HostVideoInputDeviceWrap_H_
#define HostVideoInputDeviceWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostVideoInputDeviceWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IHostVideoInputDevice)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostVideoInputDeviceWrap, IHostVideoInputDevice)
    DECLARE_NOT_AGGREGATABLE(HostVideoInputDeviceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostVideoInputDeviceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostVideoInputDevice)
        COM_INTERFACE_ENTRY2(IDispatch, IHostVideoInputDevice)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(HostVideoInputDeviceWrap)

    // public IHostVideoInputDevice properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Path))(BSTR *aPath);
    STDMETHOD(COMGETTER(Alias))(BSTR *aAlias);

    // public IHostVideoInputDevice methods

private:
    // wrapped IHostVideoInputDevice properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT getAlias(com::Utf8Str &aAlias) = 0;

    // wrapped IHostVideoInputDevice methods
};

#endif // !HostVideoInputDeviceWrap_H_
