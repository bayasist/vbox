
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
 * INATNetworkPortForwardEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface INATNetworkPortForwardEvent extends INATNetworkAlterEvent {

  public static final String INATNETWORKPORTFORWARDEVENT_IID =
    "{2514881b-23d0-430a-a7ff-7ed7f05534bc}";

  public boolean getCreate();

  public boolean getIpv6();

  public String getName();

  public long getProto();

  public String getHostIp();

  public int getHostPort();

  public String getGuestIp();

  public int getGuestPort();

}

