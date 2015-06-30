
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
 * IHostNetworkInterface.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IHostNetworkInterface extends nsISupports {

  public static final String IHOSTNETWORKINTERFACE_IID =
    "{f6e556f9-d598-409b-898c-8ba99d9b05ae}";

  public String getName();

  public String getShortName();

  public String getId();

  public String getNetworkName();

  public boolean getDHCPEnabled();

  public String getIPAddress();

  public String getNetworkMask();

  public boolean getIPV6Supported();

  public String getIPV6Address();

  public long getIPV6NetworkMaskPrefixLength();

  public String getHardwareAddress();

  public long getMediumType();

  public long getStatus();

  public long getInterfaceType();

  public void enableStaticIPConfig(String IPAddress, String networkMask);

  public void enableStaticIPConfigV6(String IPV6Address, long IPV6NetworkMaskPrefixLength);

  public void enableDynamicIPConfig();

  public void DHCPRediscover();

}

