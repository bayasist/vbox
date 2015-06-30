/** @file
 *
 * VirtualBox API class wrapper header for IExtPackPlugIn.
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

#ifndef ExtPackPlugInWrap_H_
#define ExtPackPlugInWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ExtPackPlugInWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IExtPackPlugIn)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ExtPackPlugInWrap, IExtPackPlugIn)
    DECLARE_NOT_AGGREGATABLE(ExtPackPlugInWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ExtPackPlugInWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IExtPackPlugIn)
        COM_INTERFACE_ENTRY2(IDispatch, IExtPackPlugIn)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ExtPackPlugInWrap)

    // public IExtPackPlugIn properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription);
    STDMETHOD(COMGETTER(Frontend))(BSTR *aFrontend);
    STDMETHOD(COMGETTER(ModulePath))(BSTR *aModulePath);

    // public IExtPackPlugIn methods

private:
    // wrapped IExtPackPlugIn properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getFrontend(com::Utf8Str &aFrontend) = 0;
    virtual HRESULT getModulePath(com::Utf8Str &aModulePath) = 0;

    // wrapped IExtPackPlugIn methods
};

#endif // !ExtPackPlugInWrap_H_
