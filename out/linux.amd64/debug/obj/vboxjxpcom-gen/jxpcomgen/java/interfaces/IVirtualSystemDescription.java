
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
 * IVirtualSystemDescription.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IVirtualSystemDescription extends nsISupports {

  public static final String IVIRTUALSYSTEMDESCRIPTION_IID =
    "{d7525e6c-531a-4c51-8e04-41235083a3d8}";

  public long getCount();

  public void getDescription(long[] typesSize, long[][] types, long[] refsSize, String[][] refs, long[] OVFValuesSize, String[][] OVFValues, long[] VBoxValuesSize, String[][] VBoxValues, long[] extraConfigValuesSize, String[][] extraConfigValues);

  public void getDescriptionByType(long type, long[] typesSize, long[][] types, long[] refsSize, String[][] refs, long[] OVFValuesSize, String[][] OVFValues, long[] VBoxValuesSize, String[][] VBoxValues, long[] extraConfigValuesSize, String[][] extraConfigValues);

  public String[] getValuesByType(long type, long which, long[] values);

  public void setFinalValues(long enabledSize, boolean[] enabled, long VBoxValuesSize, String[] VBoxValues, long extraConfigValuesSize, String[] extraConfigValues);

  public void addDescription(long type, String VBoxValue, String extraConfigValue);

}

