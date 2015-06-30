/** @file
 *
 * VirtualBox API class wrapper header for IBandwidthGroup.
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

#ifndef BandwidthGroupWrap_H_
#define BandwidthGroupWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE BandwidthGroupWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IBandwidthGroup)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(BandwidthGroupWrap, IBandwidthGroup)
    DECLARE_NOT_AGGREGATABLE(BandwidthGroupWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(BandwidthGroupWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IBandwidthGroup)
        COM_INTERFACE_ENTRY2(IDispatch, IBandwidthGroup)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(BandwidthGroupWrap)

    // public IBandwidthGroup properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Type))(BandwidthGroupType_T *aType);
    STDMETHOD(COMGETTER(Reference))(ULONG *aReference);
    STDMETHOD(COMGETTER(MaxBytesPerSec))(LONG64 *aMaxBytesPerSec);
    STDMETHOD(COMSETTER(MaxBytesPerSec))(LONG64 aMaxBytesPerSec);

    // public IBandwidthGroup methods

private:
    // wrapped IBandwidthGroup properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getType(BandwidthGroupType_T *aType) = 0;
    virtual HRESULT getReference(ULONG *aReference) = 0;
    virtual HRESULT getMaxBytesPerSec(LONG64 *aMaxBytesPerSec) = 0;
    virtual HRESULT setMaxBytesPerSec(LONG64 aMaxBytesPerSec) = 0;

    // wrapped IBandwidthGroup methods
};

#endif // !BandwidthGroupWrap_H_
