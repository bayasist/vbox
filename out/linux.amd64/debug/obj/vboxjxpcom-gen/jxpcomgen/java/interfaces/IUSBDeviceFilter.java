
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
 * IUSBDeviceFilter.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IUSBDeviceFilter extends nsISupports {

  public static final String IUSBDEVICEFILTER_IID =
    "{d6831fb4-1a94-4c2c-96ef-8d0d6192066d}";

  public String getName();

  public void setName(String arg1);

  public boolean getActive();

  public void setActive(boolean arg1);

  public String getVendorId();

  public void setVendorId(String arg1);

  public String getProductId();

  public void setProductId(String arg1);

  public String getRevision();

  public void setRevision(String arg1);

  public String getManufacturer();

  public void setManufacturer(String arg1);

  public String getProduct();

  public void setProduct(String arg1);

  public String getSerialNumber();

  public void setSerialNumber(String arg1);

  public String getPort();

  public void setPort(String arg1);

  public String getRemote();

  public void setRemote(String arg1);

  public long getMaskedInterfaces();

  public void setMaskedInterfaces(long arg1);

}

