/** @file
 *
 * VirtualBox API class wrapper header for IVirtualSystemDescription.
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

#ifndef VirtualSystemDescriptionWrap_H_
#define VirtualSystemDescriptionWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VirtualSystemDescriptionWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IVirtualSystemDescription)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VirtualSystemDescriptionWrap, IVirtualSystemDescription)
    DECLARE_NOT_AGGREGATABLE(VirtualSystemDescriptionWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VirtualSystemDescriptionWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVirtualSystemDescription)
        COM_INTERFACE_ENTRY2(IDispatch, IVirtualSystemDescription)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(VirtualSystemDescriptionWrap)

    // public IVirtualSystemDescription properties
    STDMETHOD(COMGETTER(Count))(ULONG *aCount);

    // public IVirtualSystemDescription methods
    STDMETHOD(GetDescription)(ComSafeArrayOut(VirtualSystemDescriptionType_T, aTypes),
                              ComSafeArrayOut(BSTR, aRefs),
                              ComSafeArrayOut(BSTR, aOVFValues),
                              ComSafeArrayOut(BSTR, aVBoxValues),
                              ComSafeArrayOut(BSTR, aExtraConfigValues));
    STDMETHOD(GetDescriptionByType)(VirtualSystemDescriptionType_T aType,
                                    ComSafeArrayOut(VirtualSystemDescriptionType_T, aTypes),
                                    ComSafeArrayOut(BSTR, aRefs),
                                    ComSafeArrayOut(BSTR, aOVFValues),
                                    ComSafeArrayOut(BSTR, aVBoxValues),
                                    ComSafeArrayOut(BSTR, aExtraConfigValues));
    STDMETHOD(GetValuesByType)(VirtualSystemDescriptionType_T aType,
                               VirtualSystemDescriptionValueType_T aWhich,
                               ComSafeArrayOut(BSTR, aValues));
    STDMETHOD(SetFinalValues)(ComSafeArrayIn(BOOL, aEnabled),
                              ComSafeArrayIn(IN_BSTR, aVBoxValues),
                              ComSafeArrayIn(IN_BSTR, aExtraConfigValues));
    STDMETHOD(AddDescription)(VirtualSystemDescriptionType_T aType,
                              IN_BSTR aVBoxValue,
                              IN_BSTR aExtraConfigValue);

private:
    // wrapped IVirtualSystemDescription properties
    virtual HRESULT getCount(ULONG *aCount) = 0;

    // wrapped IVirtualSystemDescription methods
    virtual HRESULT getDescription(std::vector<VirtualSystemDescriptionType_T> &aTypes,
                                   std::vector<com::Utf8Str> &aRefs,
                                   std::vector<com::Utf8Str> &aOVFValues,
                                   std::vector<com::Utf8Str> &aVBoxValues,
                                   std::vector<com::Utf8Str> &aExtraConfigValues) = 0;
    virtual HRESULT getDescriptionByType(VirtualSystemDescriptionType_T aType,
                                         std::vector<VirtualSystemDescriptionType_T> &aTypes,
                                         std::vector<com::Utf8Str> &aRefs,
                                         std::vector<com::Utf8Str> &aOVFValues,
                                         std::vector<com::Utf8Str> &aVBoxValues,
                                         std::vector<com::Utf8Str> &aExtraConfigValues) = 0;
    virtual HRESULT getValuesByType(VirtualSystemDescriptionType_T aType,
                                    VirtualSystemDescriptionValueType_T aWhich,
                                    std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT setFinalValues(const std::vector<BOOL> &aEnabled,
                                   const std::vector<com::Utf8Str> &aVBoxValues,
                                   const std::vector<com::Utf8Str> &aExtraConfigValues) = 0;
    virtual HRESULT addDescription(VirtualSystemDescriptionType_T aType,
                                   const com::Utf8Str &aVBoxValue,
                                   const com::Utf8Str &aExtraConfigValue) = 0;
};

#endif // !VirtualSystemDescriptionWrap_H_
