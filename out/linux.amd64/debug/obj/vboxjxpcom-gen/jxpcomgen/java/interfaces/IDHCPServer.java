
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
 * IDHCPServer.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IDHCPServer extends nsISupports {

  public static final String IDHCPSERVER_IID =
    "{ff0774c5-1f62-4bc3-919c-7fc942bf1d25}";

  public IEventSource getEventSource();

  public boolean getEnabled();

  public void setEnabled(boolean arg1);

  public String getIPAddress();

  public String getNetworkMask();

  public String getNetworkName();

  public String getLowerIP();

  public String getUpperIP();

  public String[] getGlobalOptions(  long[] globalOptionsSize);

  public String[] getVmConfigs(  long[] vmConfigsSize);

  public void addGlobalOption(long option, String value);

  public void addVmSlotOption(String vmname, int slot, long option, String value);

  public void removeVmSlotOptions(String vmname, int slot);

  public String[] getVmSlotOptions(String vmname, int slot, long[] option);

  public String[] getMacOptions(String mac, long[] option);

  public void setConfiguration(String IPAddress, String networkMask, String FromIPAddress, String ToIPAddress);

  public void start(String networkName, String trunkName, String trunkType);

  public void stop();

}

