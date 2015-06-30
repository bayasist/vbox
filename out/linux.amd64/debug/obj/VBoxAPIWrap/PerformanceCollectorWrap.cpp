/** @file
 *
 * VirtualBox API class wrapper code for IPerformanceCollector.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_PERFORMANCECOLLECTOR

#include "PerformanceCollectorWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(PerformanceCollectorWrap)

//
// IPerformanceCollector properties
//

STDMETHODIMP PerformanceCollectorWrap::COMGETTER(MetricNames)(ComSafeArrayOut(BSTR, aMetricNames))
{
    LogRelFlow(("{%p} %s: enter aMetricNames=%p\n", this, "PerformanceCollector::getMetricNames", aMetricNames));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMetricNames);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMetricNames(ArrayBSTROutConverter(ComSafeArrayOutArg(aMetricNames)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMetricNames=%zu hrc=%Rhrc\n", this, "PerformanceCollector::getMetricNames", ComSafeArraySize(*aMetricNames), hrc));
    return hrc;
}

//
// IPerformanceCollector methods
//

STDMETHODIMP PerformanceCollectorWrap::GetMetrics(ComSafeArrayIn(IN_BSTR, aMetricNames),
                                                  ComSafeArrayIn(IUnknown *, aObjects),
                                                  ComSafeArrayOut(IPerformanceMetric *, aMetrics))
{
    LogRelFlow(("{%p} %s:enter aMetricNames=%zu aObjects=%zu aMetrics=%p\n", this, "PerformanceCollector::getMetrics", aMetricNames, aObjects, aMetrics));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMetrics);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMetrics(ArrayBSTRInConverter(ComSafeArrayInArg(aMetricNames)).array(),
                         ArrayComTypeInConverter<IUnknown>(ComSafeArrayInArg(aObjects)).array(),
                         ArrayComTypeOutConverter<IPerformanceMetric>(ComSafeArrayOutArg(aMetrics)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMetrics=%zu hrc=%Rhrc\n", this, "PerformanceCollector::getMetrics", ComSafeArraySize(*aMetrics), hrc));
    return hrc;
}

STDMETHODIMP PerformanceCollectorWrap::SetupMetrics(ComSafeArrayIn(IN_BSTR, aMetricNames),
                                                    ComSafeArrayIn(IUnknown *, aObjects),
                                                    ULONG aPeriod,
                                                    ULONG aCount,
                                                    ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics))
{
    LogRelFlow(("{%p} %s:enter aMetricNames=%zu aObjects=%zu aPeriod=%RU32 aCount=%RU32 aAffectedMetrics=%p\n", this, "PerformanceCollector::setupMetrics", aMetricNames, aObjects, aPeriod, aCount, aAffectedMetrics));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAffectedMetrics);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setupMetrics(ArrayBSTRInConverter(ComSafeArrayInArg(aMetricNames)).array(),
                           ArrayComTypeInConverter<IUnknown>(ComSafeArrayInArg(aObjects)).array(),
                           aPeriod,
                           aCount,
                           ArrayComTypeOutConverter<IPerformanceMetric>(ComSafeArrayOutArg(aAffectedMetrics)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aAffectedMetrics=%zu hrc=%Rhrc\n", this, "PerformanceCollector::setupMetrics", ComSafeArraySize(*aAffectedMetrics), hrc));
    return hrc;
}

STDMETHODIMP PerformanceCollectorWrap::EnableMetrics(ComSafeArrayIn(IN_BSTR, aMetricNames),
                                                     ComSafeArrayIn(IUnknown *, aObjects),
                                                     ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics))
{
    LogRelFlow(("{%p} %s:enter aMetricNames=%zu aObjects=%zu aAffectedMetrics=%p\n", this, "PerformanceCollector::enableMetrics", aMetricNames, aObjects, aAffectedMetrics));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAffectedMetrics);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = enableMetrics(ArrayBSTRInConverter(ComSafeArrayInArg(aMetricNames)).array(),
                            ArrayComTypeInConverter<IUnknown>(ComSafeArrayInArg(aObjects)).array(),
                            ArrayComTypeOutConverter<IPerformanceMetric>(ComSafeArrayOutArg(aAffectedMetrics)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aAffectedMetrics=%zu hrc=%Rhrc\n", this, "PerformanceCollector::enableMetrics", ComSafeArraySize(*aAffectedMetrics), hrc));
    return hrc;
}

STDMETHODIMP PerformanceCollectorWrap::DisableMetrics(ComSafeArrayIn(IN_BSTR, aMetricNames),
                                                      ComSafeArrayIn(IUnknown *, aObjects),
                                                      ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics))
{
    LogRelFlow(("{%p} %s:enter aMetricNames=%zu aObjects=%zu aAffectedMetrics=%p\n", this, "PerformanceCollector::disableMetrics", aMetricNames, aObjects, aAffectedMetrics));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAffectedMetrics);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = disableMetrics(ArrayBSTRInConverter(ComSafeArrayInArg(aMetricNames)).array(),
                             ArrayComTypeInConverter<IUnknown>(ComSafeArrayInArg(aObjects)).array(),
                             ArrayComTypeOutConverter<IPerformanceMetric>(ComSafeArrayOutArg(aAffectedMetrics)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aAffectedMetrics=%zu hrc=%Rhrc\n", this, "PerformanceCollector::disableMetrics", ComSafeArraySize(*aAffectedMetrics), hrc));
    return hrc;
}

STDMETHODIMP PerformanceCollectorWrap::QueryMetricsData(ComSafeArrayIn(IN_BSTR, aMetricNames),
                                                        ComSafeArrayIn(IUnknown *, aObjects),
                                                        ComSafeArrayOut(BSTR, aReturnMetricNames),
                                                        ComSafeArrayOut(IUnknown *, aReturnObjects),
                                                        ComSafeArrayOut(BSTR, aReturnUnits),
                                                        ComSafeArrayOut(ULONG, aReturnScales),
                                                        ComSafeArrayOut(ULONG, aReturnSequenceNumbers),
                                                        ComSafeArrayOut(ULONG, aReturnDataIndices),
                                                        ComSafeArrayOut(ULONG, aReturnDataLengths),
                                                        ComSafeArrayOut(LONG, aReturnData))
{
    LogRelFlow(("{%p} %s:enter aMetricNames=%zu aObjects=%zu aReturnMetricNames=%p aReturnObjects=%p aReturnUnits=%p aReturnScales=%p aReturnSequenceNumbers=%p aReturnDataIndices=%p aReturnDataLengths=%p aReturnData=%p\n", this, "PerformanceCollector::queryMetricsData", aMetricNames, aObjects, aReturnMetricNames, aReturnObjects, aReturnUnits, aReturnScales, aReturnSequenceNumbers, aReturnDataIndices, aReturnDataLengths, aReturnData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReturnMetricNames);
        CheckComArgOutPointerValidThrow(aReturnObjects);
        CheckComArgOutPointerValidThrow(aReturnUnits);
        CheckComArgOutPointerValidThrow(aReturnScales);
        CheckComArgOutPointerValidThrow(aReturnSequenceNumbers);
        CheckComArgOutPointerValidThrow(aReturnDataIndices);
        CheckComArgOutPointerValidThrow(aReturnDataLengths);
        CheckComArgOutPointerValidThrow(aReturnData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = queryMetricsData(ArrayBSTRInConverter(ComSafeArrayInArg(aMetricNames)).array(),
                               ArrayComTypeInConverter<IUnknown>(ComSafeArrayInArg(aObjects)).array(),
                               ArrayBSTROutConverter(ComSafeArrayOutArg(aReturnMetricNames)).array(),
                               ArrayComTypeOutConverter<IUnknown>(ComSafeArrayOutArg(aReturnObjects)).array(),
                               ArrayBSTROutConverter(ComSafeArrayOutArg(aReturnUnits)).array(),
                               ArrayOutConverter<ULONG>(ComSafeArrayOutArg(aReturnScales)).array(),
                               ArrayOutConverter<ULONG>(ComSafeArrayOutArg(aReturnSequenceNumbers)).array(),
                               ArrayOutConverter<ULONG>(ComSafeArrayOutArg(aReturnDataIndices)).array(),
                               ArrayOutConverter<ULONG>(ComSafeArrayOutArg(aReturnDataLengths)).array(),
                               ArrayOutConverter<LONG>(ComSafeArrayOutArg(aReturnData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aReturnMetricNames=%zu *aReturnObjects=%zu *aReturnUnits=%zu *aReturnScales=%zu *aReturnSequenceNumbers=%zu *aReturnDataIndices=%zu *aReturnDataLengths=%zu aReturnData=%zu hrc=%Rhrc\n", this, "PerformanceCollector::queryMetricsData", ComSafeArraySize(*aReturnMetricNames), ComSafeArraySize(*aReturnObjects), ComSafeArraySize(*aReturnUnits), ComSafeArraySize(*aReturnScales), ComSafeArraySize(*aReturnSequenceNumbers), ComSafeArraySize(*aReturnDataIndices), ComSafeArraySize(*aReturnDataLengths), ComSafeArraySize(*aReturnData), hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(PerformanceCollectorWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(PerformanceCollectorWrap, IPerformanceCollector)
#endif // VBOX_WITH_XPCOM
