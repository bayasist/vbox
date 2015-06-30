
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
 * nsIServiceManager.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;


public interface nsIServiceManager extends nsISupports
{
  public static final String NS_ISERVICEMANAGER_IID =
    "{8bb35ed9-e332-462d-9155-4a002ab5c958}";

  public nsISupports getService(String arg1, String arg2);

  public nsISupports getServiceByContractID(String arg1, String arg2);

  public boolean isServiceInstantiated(String arg1, String arg2);

  public boolean isServiceInstantiatedByContractID(String arg1, String arg2);
}
