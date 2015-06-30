
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
 * IExtPackManager.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IExtPackManager extends nsISupports {

  public static final String IEXTPACKMANAGER_IID =
    "{3295e6ce-b051-47b2-9514-2c588bfe7554}";

  public IExtPack[] getInstalledExtPacks(  long[] installedExtPacksSize);

  public IExtPack find(String name);

  public IExtPackFile openExtPackFile(String path);

  public IProgress uninstall(String name, boolean forcedRemoval, String displayInfo);

  public void cleanup();

  public String[] queryAllPlugInsForFrontend(String frontendName, long[] plugInModules);

  public boolean isExtPackUsable(String name);

}

