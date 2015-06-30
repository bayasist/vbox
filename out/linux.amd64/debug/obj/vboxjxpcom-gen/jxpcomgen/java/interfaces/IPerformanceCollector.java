
/**
 *  Copyright (C) 2010-2013 Oracle Corporation
 *
 *  This file is part of VirtualBox Open Source Edition (OSE), as
 *  available from http://www.virtualbox.org. This file is free software;
 *  you can redistribute it and/or modify it under the terms of the GNU
 *  General Public License (GPL) as published by the Free Software
 *  Foundation, in version 2 as it comes in the "COPYING" file of the
 *  VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 *  hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 *
 * IPerformanceCollector.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IPerformanceCollector extends nsISupports {

  public static final String IPERFORMANCECOLLECTOR_IID =
    "{e22e1acb-ac4a-43bb-a31c-17321659b0c6}";

  public String[] getMetricNames(  long[] metricNamesSize);

  public IPerformanceMetric[] getMetrics(long metricNamesSize, String[] metricNames, long objectsSize, nsISupports[] objects, long[] metrics);

  public IPerformanceMetric[] setupMetrics(long metricNamesSize, String[] metricNames, long objectsSize, nsISupports[] objects, long period, long count, long[] affectedMetrics);

  public IPerformanceMetric[] enableMetrics(long metricNamesSize, String[] metricNames, long objectsSize, nsISupports[] objects, long[] affectedMetrics);

  public IPerformanceMetric[] disableMetrics(long metricNamesSize, String[] metricNames, long objectsSize, nsISupports[] objects, long[] affectedMetrics);

  public int[] queryMetricsData(long metricNamesSize, String[] metricNames, long objectsSize, nsISupports[] objects, long[] returnMetricNamesSize, String[][] returnMetricNames, long[] returnObjectsSize, nsISupports[][] returnObjects, long[] returnUnitsSize, String[][] returnUnits, long[] returnScalesSize, long[][] returnScales, long[] returnSequenceNumbersSize, long[][] returnSequenceNumbers, long[] returnDataIndicesSize, long[][] returnDataIndices, long[] returnDataLengthsSize, long[][] returnDataLengths, long[] returnData);

}

