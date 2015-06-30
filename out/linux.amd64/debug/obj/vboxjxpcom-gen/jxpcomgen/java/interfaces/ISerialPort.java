
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
 * ISerialPort.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface ISerialPort extends nsISupports {

  public static final String ISERIALPORT_IID =
    "{937f6970-5103-4745-b78e-d28dcf1479a8}";

  public long getSlot();

  public boolean getEnabled();

  public void setEnabled(boolean arg1);

  public long getIOBase();

  public void setIOBase(long arg1);

  public long getIRQ();

  public void setIRQ(long arg1);

  public long getHostMode();

  public void setHostMode(long arg1);

  public boolean getServer();

  public void setServer(boolean arg1);

  public String getPath();

  public void setPath(String arg1);

}

