
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
 * IStorageController.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IStorageController extends nsISupports {

  public static final String ISTORAGECONTROLLER_IID =
    "{a1556333-09b6-46d9-bfb7-fc239b7fbe1e}";

  public String getName();

  public long getMaxDevicesPerPortCount();

  public long getMinPortCount();

  public long getMaxPortCount();

  public long getInstance();

  public void setInstance(long arg1);

  public long getPortCount();

  public void setPortCount(long arg1);

  public long getBus();

  public long getControllerType();

  public void setControllerType(long arg1);

  public boolean getUseHostIOCache();

  public void setUseHostIOCache(boolean arg1);

  public boolean getBootable();

}

