/** @file
 *
 * VirtualBox API class wrapper header for IUSBController.
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

#ifndef USBControllerWrap_H_
#define USBControllerWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE USBControllerWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IUSBController)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(USBControllerWrap, IUSBController)
    DECLARE_NOT_AGGREGATABLE(USBControllerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(USBControllerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IUSBController)
        COM_INTERFACE_ENTRY2(IDispatch, IUSBController)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(USBControllerWrap)

    // public IUSBController properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Type))(USBControllerType_T *aType);
    STDMETHOD(COMGETTER(USBStandard))(USHORT *aUSBStandard);

    // public IUSBController methods

private:
    // wrapped IUSBController properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getType(USBControllerType_T *aType) = 0;
    virtual HRESULT getUSBStandard(USHORT *aUSBStandard) = 0;

    // wrapped IUSBController methods
};

#endif // !USBControllerWrap_H_
