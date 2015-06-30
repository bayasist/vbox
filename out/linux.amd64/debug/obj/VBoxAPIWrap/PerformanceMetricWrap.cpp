/** @file
 *
 * VirtualBox API class wrapper code for IPerformanceMetric.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_PERFORMANCEMETRIC

#include "PerformanceMetricWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(PerformanceMetricWrap)

//
// IPerformanceMetric properties
//

STDMETHODIMP PerformanceMetricWrap::COMGETTER(MetricName)(BSTR *aMetricName)
{
    LogRelFlow(("{%p} %s: enter aMetricName=%p\n", this, "PerformanceMetric::getMetricName", aMetricName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMetricName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMetricName(BSTROutConverter(aMetricName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMetricName=%ls hrc=%Rhrc\n", this, "PerformanceMetric::getMetricName", *aMetricName, hrc));
    return hrc;
}

STDMETHODIMP PerformanceMetricWrap::COMGETTER(Object)(IUnknown **aObject)
{
    LogRelFlow(("{%p} %s: enter aObject=%p\n", this, "PerformanceMetric::getObject", aObject));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aObject);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getObject(ComTypeOutConverter<IUnknown>(aObject).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aObject=%p hrc=%Rhrc\n", this, "PerformanceMetric::getObject", *aObject, hrc));
    return hrc;
}

STDMETHODIMP PerformanceMetricWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "PerformanceMetric::getDescription", aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDescription(BSTROutConverter(aDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "PerformanceMetric::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP PerformanceMetricWrap::COMGETTER(Period)(ULONG *aPeriod)
{
    LogRelFlow(("{%p} %s: enter aPeriod=%p\n", this, "PerformanceMetric::getPeriod", aPeriod));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPeriod);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPeriod(aPeriod);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPeriod=%RU32 hrc=%Rhrc\n", this, "PerformanceMetric::getPeriod", *aPeriod, hrc));
    return hrc;
}

STDMETHODIMP PerformanceMetricWrap::COMGETTER(Count)(ULONG *aCount)
{
    LogRelFlow(("{%p} %s: enter aCount=%p\n", this, "PerformanceMetric::getCount", aCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCount(aCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCount=%RU32 hrc=%Rhrc\n", this, "PerformanceMetric::getCount", *aCount, hrc));
    return hrc;
}

STDMETHODIMP PerformanceMetricWrap::COMGETTER(Unit)(BSTR *aUnit)
{
    LogRelFlow(("{%p} %s: enter aUnit=%p\n", this, "PerformanceMetric::getUnit", aUnit));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUnit);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUnit(BSTROutConverter(aUnit).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUnit=%ls hrc=%Rhrc\n", this, "PerformanceMetric::getUnit", *aUnit, hrc));
    return hrc;
}

STDMETHODIMP PerformanceMetricWrap::COMGETTER(MinimumValue)(LONG *aMinimumValue)
{
    LogRelFlow(("{%p} %s: enter aMinimumValue=%p\n", this, "PerformanceMetric::getMinimumValue", aMinimumValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMinimumValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMinimumValue(aMinimumValue);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMinimumValue=%RI32 hrc=%Rhrc\n", this, "PerformanceMetric::getMinimumValue", *aMinimumValue, hrc));
    return hrc;
}

STDMETHODIMP PerformanceMetricWrap::COMGETTER(MaximumValue)(LONG *aMaximumValue)
{
    LogRelFlow(("{%p} %s: enter aMaximumValue=%p\n", this, "PerformanceMetric::getMaximumValue", aMaximumValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaximumValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaximumValue(aMaximumValue);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaximumValue=%RI32 hrc=%Rhrc\n", this, "PerformanceMetric::getMaximumValue", *aMaximumValue, hrc));
    return hrc;
}

//
// IPerformanceMetric methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(PerformanceMetricWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(PerformanceMetricWrap, IPerformanceMetric)
#endif // VBOX_WITH_XPCOM
