
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
 * INATNetwork.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface INATNetwork extends nsISupports {

  public static final String INATNETWORK_IID =
    "{a63c75da-4c99-4e9d-8351-eb73651c18cc}";

  public String getNetworkName();

  public void setNetworkName(String arg1);

  public boolean getEnabled();

  public void setEnabled(boolean arg1);

  public String getNetwork();

  public void setNetwork(String arg1);

  public String getGateway();

  public boolean getIPv6Enabled();

  public void setIPv6Enabled(boolean arg1);

  public String getIPv6Prefix();

  public void setIPv6Prefix(String arg1);

  public boolean getAdvertiseDefaultIPv6RouteEnabled();

  public void setAdvertiseDefaultIPv6RouteEnabled(boolean arg1);

  public boolean getNeedDhcpServer();

  public void setNeedDhcpServer(boolean arg1);

  public IEventSource getEventSource();

  public String[] getPortForwardRules4(  long[] portForwardRules4Size);

  public String[] getLocalMappings(  long[] localMappingsSize);

  public int getLoopbackIp6();

  public void setLoopbackIp6(int arg1);

  public String[] getPortForwardRules6(  long[] portForwardRules6Size);

  public void addLocalMapping(String hostid, int offset);

  public void addPortForwardRule(boolean isIpv6, String ruleName, long proto, String hostIP, int hostPort, String guestIP, int guestPort);

  public void removePortForwardRule(boolean iSipv6, String ruleName);

  public void start(String trunkType);

  public void stop();

}

