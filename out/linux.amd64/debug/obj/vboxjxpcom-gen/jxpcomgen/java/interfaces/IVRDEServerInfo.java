
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
 * IVRDEServerInfo.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IVRDEServerInfo extends nsISupports {

  public static final String IVRDESERVERINFO_IID =
    "{714434a1-58c3-4aab-9049-7652c5df113b}";

  public boolean getActive();

  public int getPort();

  public long getNumberOfClients();

  public long getBeginTime();

  public long getEndTime();

  public long getBytesSent();

  public long getBytesSentTotal();

  public long getBytesReceived();

  public long getBytesReceivedTotal();

  public String getUser();

  public String getDomain();

  public String getClientName();

  public String getClientIP();

  public long getClientVersion();

  public long getEncryptionStyle();

}

