
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
 * INetworkAdapter.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface INetworkAdapter extends nsISupports {

  public static final String INETWORKADAPTER_IID =
    "{efa0f965-63c7-4c60-afdf-b1cc9943b9c0}";

  public long getAdapterType();

  public void setAdapterType(long arg1);

  public long getSlot();

  public boolean getEnabled();

  public void setEnabled(boolean arg1);

  public String getMACAddress();

  public void setMACAddress(String arg1);

  public long getAttachmentType();

  public void setAttachmentType(long arg1);

  public String getBridgedInterface();

  public void setBridgedInterface(String arg1);

  public String getHostOnlyInterface();

  public void setHostOnlyInterface(String arg1);

  public String getInternalNetwork();

  public void setInternalNetwork(String arg1);

  public String getNATNetwork();

  public void setNATNetwork(String arg1);

  public String getGenericDriver();

  public void setGenericDriver(String arg1);

  public boolean getCableConnected();

  public void setCableConnected(boolean arg1);

  public long getLineSpeed();

  public void setLineSpeed(long arg1);

  public long getPromiscModePolicy();

  public void setPromiscModePolicy(long arg1);

  public boolean getTraceEnabled();

  public void setTraceEnabled(boolean arg1);

  public String getTraceFile();

  public void setTraceFile(String arg1);

  public INATEngine getNATEngine();

  public long getBootPriority();

  public void setBootPriority(long arg1);

  public IBandwidthGroup getBandwidthGroup();

  public void setBandwidthGroup(IBandwidthGroup arg1);

  public String getProperty(String key);

  public void setProperty(String key, String value);

  public String[] getProperties(String names, long[] returnNamesSize, String[][] returnNames, long[] returnValues);

}

