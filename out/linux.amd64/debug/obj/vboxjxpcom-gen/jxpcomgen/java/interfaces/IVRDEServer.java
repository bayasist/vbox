
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
 * IVRDEServer.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IVRDEServer extends nsISupports {

  public static final String IVRDESERVER_IID =
    "{d38de40a-c2c1-4e95-b5a4-167b05f5694c}";

  public boolean getEnabled();

  public void setEnabled(boolean arg1);

  public long getAuthType();

  public void setAuthType(long arg1);

  public long getAuthTimeout();

  public void setAuthTimeout(long arg1);

  public boolean getAllowMultiConnection();

  public void setAllowMultiConnection(boolean arg1);

  public boolean getReuseSingleConnection();

  public void setReuseSingleConnection(boolean arg1);

  public String getVRDEExtPack();

  public void setVRDEExtPack(String arg1);

  public String getAuthLibrary();

  public void setAuthLibrary(String arg1);

  public String[] getVRDEProperties(  long[] VRDEPropertiesSize);

  public void setVRDEProperty(String key, String value);

  public String getVRDEProperty(String key);

}

