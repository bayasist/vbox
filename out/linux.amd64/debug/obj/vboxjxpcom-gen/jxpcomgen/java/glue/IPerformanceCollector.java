
/*
 * Copyright (C) 2010-2014 Oracle Corporation
 *
 * This file is part of the VirtualBox SDK, as available from
 * http://www.virtualbox.org.  This library is free software; you can
 * redistribute it and/or modify it under the terms of the GNU Lesser General
 * Public License as published by the Free Software Foundation, in version 2.1
 * as it comes in the "COPYING.LIB" file of the VirtualBox SDK distribution.
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * IPerformanceCollector.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IPerformanceCollector extends IUnknown
{

    public IPerformanceCollector(org.mozilla.interfaces.IPerformanceCollector wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IPerformanceCollector getTypedWrapped()
    {
        return (org.mozilla.interfaces.IPerformanceCollector) getWrapped();
    }
    public List<String> getMetricNames()
    {
        try
        {
            String[] retVal = getTypedWrapped().getMetricNames(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IPerformanceCollector queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IPerformanceCollector qiobj = Helper.queryInterface(nsobj, "{e22e1acb-ac4a-43bb-a31c-17321659b0c6}", org.mozilla.interfaces.IPerformanceCollector.class);
        return qiobj == null ? null : new IPerformanceCollector(qiobj);
    }
    public List<org.virtualbox_4_3.IPerformanceMetric> getMetrics(List<String> metricNames, List<IUnknown> objects)
    {
        try
        {
            org.mozilla.interfaces.IPerformanceMetric[] retVal;
            retVal = getTypedWrapped().getMetrics(metricNames != null ? metricNames.size() : 0, Helper.unwrapStr(metricNames), objects != null ? objects.size() : 0, Helper.unwrap2(IUnknown.class, nsISupports.class, objects), null);
            return Helper.wrap2(org.virtualbox_4_3.IPerformanceMetric.class, org.mozilla.interfaces.IPerformanceMetric.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IPerformanceMetric> setupMetrics(List<String> metricNames, List<IUnknown> objects, Long period, Long count)
    {
        try
        {
            org.mozilla.interfaces.IPerformanceMetric[] retVal;
            retVal = getTypedWrapped().setupMetrics(metricNames != null ? metricNames.size() : 0, Helper.unwrapStr(metricNames), objects != null ? objects.size() : 0, Helper.unwrap2(IUnknown.class, nsISupports.class, objects), period, count, null);
            return Helper.wrap2(org.virtualbox_4_3.IPerformanceMetric.class, org.mozilla.interfaces.IPerformanceMetric.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IPerformanceMetric> enableMetrics(List<String> metricNames, List<IUnknown> objects)
    {
        try
        {
            org.mozilla.interfaces.IPerformanceMetric[] retVal;
            retVal = getTypedWrapped().enableMetrics(metricNames != null ? metricNames.size() : 0, Helper.unwrapStr(metricNames), objects != null ? objects.size() : 0, Helper.unwrap2(IUnknown.class, nsISupports.class, objects), null);
            return Helper.wrap2(org.virtualbox_4_3.IPerformanceMetric.class, org.mozilla.interfaces.IPerformanceMetric.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IPerformanceMetric> disableMetrics(List<String> metricNames, List<IUnknown> objects)
    {
        try
        {
            org.mozilla.interfaces.IPerformanceMetric[] retVal;
            retVal = getTypedWrapped().disableMetrics(metricNames != null ? metricNames.size() : 0, Helper.unwrapStr(metricNames), objects != null ? objects.size() : 0, Helper.unwrap2(IUnknown.class, nsISupports.class, objects), null);
            return Helper.wrap2(org.virtualbox_4_3.IPerformanceMetric.class, org.mozilla.interfaces.IPerformanceMetric.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<Integer> queryMetricsData(List<String> metricNames, List<IUnknown> objects, Holder<List<String>> returnMetricNames, Holder<List<IUnknown>> returnObjects, Holder<List<String>> returnUnits, Holder<List<Long>> returnScales, Holder<List<Long>> returnSequenceNumbers, Holder<List<Long>> returnDataIndices, Holder<List<Long>> returnDataLengths)
    {
        try
        {
        String[][] tmp_returnMetricNames = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        nsISupports[][] tmp_returnObjects = (nsISupports[][])java.lang.reflect.Array.newInstance(nsISupports[].class, 1);
        String[][] tmp_returnUnits = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        long[][] tmp_returnScales = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        long[][] tmp_returnSequenceNumbers = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        long[][] tmp_returnDataIndices = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        long[][] tmp_returnDataLengths = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
            int[] retVal;
            retVal = getTypedWrapped().queryMetricsData(metricNames != null ? metricNames.size() : 0, Helper.unwrapStr(metricNames), objects != null ? objects.size() : 0, Helper.unwrap2(IUnknown.class, nsISupports.class, objects), null, tmp_returnMetricNames, null, tmp_returnObjects, null, tmp_returnUnits, null, tmp_returnScales, null, tmp_returnSequenceNumbers, null, tmp_returnDataIndices, null, tmp_returnDataLengths, null);
        returnMetricNames.value = Helper.wrap(tmp_returnMetricNames[0]);
        returnObjects.value = Helper.wrap2(IUnknown.class, nsISupports.class, tmp_returnObjects[0]);
        returnUnits.value = Helper.wrap(tmp_returnUnits[0]);
        returnScales.value = Helper.wrap(tmp_returnScales[0]);
        returnSequenceNumbers.value = Helper.wrap(tmp_returnSequenceNumbers[0]);
        returnDataIndices.value = Helper.wrap(tmp_returnDataIndices[0]);
        returnDataLengths.value = Helper.wrap(tmp_returnDataLengths[0]);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
