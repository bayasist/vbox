
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
 * IPCIAddress.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IPCIAddress extends nsISupports {

  public static final String IPCIADDRESS_IID =
    "{c984d15f-e191-400b-840e-970f3dad7296}";

  public short getBus();

  public void setBus(short arg1);

  public short getDevice();

  public void setDevice(short arg1);

  public short getDevFunction();

  public void setDevFunction(short arg1);

  public int asLong();

  public void fromLong(int number);

}

