/** @file
 *
 * VirtualBox API class wrapper header for IPerformanceCollector.
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

#ifndef PerformanceCollectorWrap_H_
#define PerformanceCollectorWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PerformanceCollectorWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IPerformanceCollector)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PerformanceCollectorWrap, IPerformanceCollector)
    DECLARE_NOT_AGGREGATABLE(PerformanceCollectorWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PerformanceCollectorWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPerformanceCollector)
        COM_INTERFACE_ENTRY2(IDispatch, IPerformanceCollector)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(PerformanceCollectorWrap)

    // public IPerformanceCollector properties
    STDMETHOD(COMGETTER(MetricNames))(ComSafeArrayOut(BSTR, aMetricNames));

    // public IPerformanceCollector methods
    STDMETHOD(GetMetrics)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                          ComSafeArrayIn(IUnknown *, aObjects),
                          ComSafeArrayOut(IPerformanceMetric *, aMetrics));
    STDMETHOD(SetupMetrics)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                            ComSafeArrayIn(IUnknown *, aObjects),
                            ULONG aPeriod,
                            ULONG aCount,
                            ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics));
    STDMETHOD(EnableMetrics)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                             ComSafeArrayIn(IUnknown *, aObjects),
                             ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics));
    STDMETHOD(DisableMetrics)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                              ComSafeArrayIn(IUnknown *, aObjects),
                              ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics));
    STDMETHOD(QueryMetricsData)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                                ComSafeArrayIn(IUnknown *, aObjects),
                                ComSafeArrayOut(BSTR, aReturnMetricNames),
                                ComSafeArrayOut(IUnknown *, aReturnObjects),
                                ComSafeArrayOut(BSTR, aReturnUnits),
                                ComSafeArrayOut(ULONG, aReturnScales),
                                ComSafeArrayOut(ULONG, aReturnSequenceNumbers),
                                ComSafeArrayOut(ULONG, aReturnDataIndices),
                                ComSafeArrayOut(ULONG, aReturnDataLengths),
                                ComSafeArrayOut(LONG, aReturnData));

private:
    // wrapped IPerformanceCollector properties
    virtual HRESULT getMetricNames(std::vector<com::Utf8Str> &aMetricNames) = 0;

    // wrapped IPerformanceCollector methods
    virtual HRESULT getMetrics(const std::vector<com::Utf8Str> &aMetricNames,
                               const std::vector<ComPtr<IUnknown> > &aObjects,
                               std::vector<ComPtr<IPerformanceMetric> > &aMetrics) = 0;
    virtual HRESULT setupMetrics(const std::vector<com::Utf8Str> &aMetricNames,
                                 const std::vector<ComPtr<IUnknown> > &aObjects,
                                 ULONG aPeriod,
                                 ULONG aCount,
                                 std::vector<ComPtr<IPerformanceMetric> > &aAffectedMetrics) = 0;
    virtual HRESULT enableMetrics(const std::vector<com::Utf8Str> &aMetricNames,
                                  const std::vector<ComPtr<IUnknown> > &aObjects,
                                  std::vector<ComPtr<IPerformanceMetric> > &aAffectedMetrics) = 0;
    virtual HRESULT disableMetrics(const std::vector<com::Utf8Str> &aMetricNames,
                                   const std::vector<ComPtr<IUnknown> > &aObjects,
                                   std::vector<ComPtr<IPerformanceMetric> > &aAffectedMetrics) = 0;
    virtual HRESULT queryMetricsData(const std::vector<com::Utf8Str> &aMetricNames,
                                     const std::vector<ComPtr<IUnknown> > &aObjects,
                                     std::vector<com::Utf8Str> &aReturnMetricNames,
                                     std::vector<ComPtr<IUnknown> > &aReturnObjects,
                                     std::vector<com::Utf8Str> &aReturnUnits,
                                     std::vector<ULONG> &aReturnScales,
                                     std::vector<ULONG> &aReturnSequenceNumbers,
                                     std::vector<ULONG> &aReturnDataIndices,
                                     std::vector<ULONG> &aReturnDataLengths,
                                     std::vector<LONG> &aReturnData) = 0;
};

#endif // !PerformanceCollectorWrap_H_
