
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
 * IUSBDevice.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IUSBDevice extends nsISupports {

  public static final String IUSBDEVICE_IID =
    "{f8967b0b-4483-400f-92b5-8b675d98a85b}";

  public String getId();

  public int getVendorId();

  public int getProductId();

  public int getRevision();

  public String getManufacturer();

  public String getProduct();

  public String getSerialNumber();

  public String getAddress();

  public int getPort();

  public int getVersion();

  public int getPortVersion();

  public boolean getRemote();

}

