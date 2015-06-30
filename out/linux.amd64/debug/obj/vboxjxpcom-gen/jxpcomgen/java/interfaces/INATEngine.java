
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
 * INATEngine.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface INATEngine extends nsISupports {

  public static final String INATENGINE_IID =
    "{26451b99-3b2d-4dcb-8e4b-d63654218175}";

  public String getNetwork();

  public void setNetwork(String arg1);

  public String getHostIP();

  public void setHostIP(String arg1);

  public String getTFTPPrefix();

  public void setTFTPPrefix(String arg1);

  public String getTFTPBootFile();

  public void setTFTPBootFile(String arg1);

  public String getTFTPNextServer();

  public void setTFTPNextServer(String arg1);

  public long getAliasMode();

  public void setAliasMode(long arg1);

  public boolean getDNSPassDomain();

  public void setDNSPassDomain(boolean arg1);

  public boolean getDNSProxy();

  public void setDNSProxy(boolean arg1);

  public boolean getDNSUseHostResolver();

  public void setDNSUseHostResolver(boolean arg1);

  public String[] getRedirects(  long[] redirectsSize);

  public void setNetworkSettings(long mtu, long sockSnd, long sockRcv, long TcpWndSnd, long TcpWndRcv);

  public void getNetworkSettings(long[] mtu, long[] sockSnd, long[] sockRcv, long[] TcpWndSnd, long[] TcpWndRcv);

  public void addRedirect(String name, long proto, String hostIP, int hostPort, String guestIP, int guestPort);

  public void removeRedirect(String name);

}

