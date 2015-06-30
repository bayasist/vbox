/** @file
 *
 * VirtualBox API class wrapper header for IAdditionsFacility.
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

#ifndef AdditionsFacilityWrap_H_
#define AdditionsFacilityWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE AdditionsFacilityWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IAdditionsFacility)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(AdditionsFacilityWrap, IAdditionsFacility)
    DECLARE_NOT_AGGREGATABLE(AdditionsFacilityWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(AdditionsFacilityWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IAdditionsFacility)
        COM_INTERFACE_ENTRY2(IDispatch, IAdditionsFacility)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(AdditionsFacilityWrap)

    // public IAdditionsFacility properties
    STDMETHOD(COMGETTER(ClassType))(AdditionsFacilityClass_T *aClassType);
    STDMETHOD(COMGETTER(LastUpdated))(LONG64 *aLastUpdated);
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Status))(AdditionsFacilityStatus_T *aStatus);
    STDMETHOD(COMGETTER(Type))(AdditionsFacilityType_T *aType);

    // public IAdditionsFacility methods

private:
    // wrapped IAdditionsFacility properties
    virtual HRESULT getClassType(AdditionsFacilityClass_T *aClassType) = 0;
    virtual HRESULT getLastUpdated(LONG64 *aLastUpdated) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getStatus(AdditionsFacilityStatus_T *aStatus) = 0;
    virtual HRESULT getType(AdditionsFacilityType_T *aType) = 0;

    // wrapped IAdditionsFacility methods
};

#endif // !AdditionsFacilityWrap_H_
