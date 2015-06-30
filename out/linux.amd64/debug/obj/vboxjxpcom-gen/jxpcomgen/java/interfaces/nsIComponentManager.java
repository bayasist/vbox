
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
 * nsIComponentManager.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;


public interface nsIComponentManager extends nsISupports
{
  public static final String NS_ICOMPONENTMANAGER_IID =
    "{a88e5a60-205a-4bb1-94e1-2628daf51eae}";

  public nsISupports getClassObject(String arg1, String arg2);

  public nsISupports getClassObjectByContractID(String arg1, String arg2);

  public nsISupports createInstance(String arg1, nsISupports arg2, String arg3);

  public nsISupports createInstanceByContractID(String arg1, nsISupports arg2, String arg3);
}
