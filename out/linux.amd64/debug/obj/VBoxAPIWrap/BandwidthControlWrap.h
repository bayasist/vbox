/** @file
 *
 * VirtualBox API class wrapper header for IBandwidthControl.
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

#ifndef BandwidthControlWrap_H_
#define BandwidthControlWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE BandwidthControlWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IBandwidthControl)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(BandwidthControlWrap, IBandwidthControl)
    DECLARE_NOT_AGGREGATABLE(BandwidthControlWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(BandwidthControlWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IBandwidthControl)
        COM_INTERFACE_ENTRY2(IDispatch, IBandwidthControl)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(BandwidthControlWrap)

    // public IBandwidthControl properties
    STDMETHOD(COMGETTER(NumGroups))(ULONG *aNumGroups);

    // public IBandwidthControl methods
    STDMETHOD(CreateBandwidthGroup)(IN_BSTR aName,
                                    BandwidthGroupType_T aType,
                                    LONG64 aMaxBytesPerSec);
    STDMETHOD(DeleteBandwidthGroup)(IN_BSTR aName);
    STDMETHOD(GetBandwidthGroup)(IN_BSTR aName,
                                 IBandwidthGroup **aBandwidthGroup);
    STDMETHOD(GetAllBandwidthGroups)(ComSafeArrayOut(IBandwidthGroup *, aBandwidthGroups));

private:
    // wrapped IBandwidthControl properties
    virtual HRESULT getNumGroups(ULONG *aNumGroups) = 0;

    // wrapped IBandwidthControl methods
    virtual HRESULT createBandwidthGroup(const com::Utf8Str &aName,
                                         BandwidthGroupType_T aType,
                                         LONG64 aMaxBytesPerSec) = 0;
    virtual HRESULT deleteBandwidthGroup(const com::Utf8Str &aName) = 0;
    virtual HRESULT getBandwidthGroup(const com::Utf8Str &aName,
                                      ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    virtual HRESULT getAllBandwidthGroups(std::vector<ComPtr<IBandwidthGroup> > &aBandwidthGroups) = 0;
};

#endif // !BandwidthControlWrap_H_
