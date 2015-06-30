/** @file
 *
 * VirtualBox API class wrapper header for IPerformanceMetric.
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

#ifndef PerformanceMetricWrap_H_
#define PerformanceMetricWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PerformanceMetricWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IPerformanceMetric)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PerformanceMetricWrap, IPerformanceMetric)
    DECLARE_NOT_AGGREGATABLE(PerformanceMetricWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PerformanceMetricWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPerformanceMetric)
        COM_INTERFACE_ENTRY2(IDispatch, IPerformanceMetric)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(PerformanceMetricWrap)

    // public IPerformanceMetric properties
    STDMETHOD(COMGETTER(MetricName))(BSTR *aMetricName);
    STDMETHOD(COMGETTER(Object))(IUnknown **aObject);
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription);
    STDMETHOD(COMGETTER(Period))(ULONG *aPeriod);
    STDMETHOD(COMGETTER(Count))(ULONG *aCount);
    STDMETHOD(COMGETTER(Unit))(BSTR *aUnit);
    STDMETHOD(COMGETTER(MinimumValue))(LONG *aMinimumValue);
    STDMETHOD(COMGETTER(MaximumValue))(LONG *aMaximumValue);

    // public IPerformanceMetric methods

private:
    // wrapped IPerformanceMetric properties
    virtual HRESULT getMetricName(com::Utf8Str &aMetricName) = 0;
    virtual HRESULT getObject(ComPtr<IUnknown> &aObject) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getPeriod(ULONG *aPeriod) = 0;
    virtual HRESULT getCount(ULONG *aCount) = 0;
    virtual HRESULT getUnit(com::Utf8Str &aUnit) = 0;
    virtual HRESULT getMinimumValue(LONG *aMinimumValue) = 0;
    virtual HRESULT getMaximumValue(LONG *aMaximumValue) = 0;

    // wrapped IPerformanceMetric methods
};

#endif // !PerformanceMetricWrap_H_
