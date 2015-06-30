
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
 * IExtPackBase.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IExtPackBase extends nsISupports {

  public static final String IEXTPACKBASE_IID =
    "{f79b75d8-2890-4f34-ffff-ffffa144e82c}";

  public String getName();

  public String getDescription();

  public String getVersion();

  public long getRevision();

  public String getEdition();

  public String getVRDEModule();

  public IExtPackPlugIn[] getPlugIns(  long[] plugInsSize);

  public boolean getUsable();

  public String getWhyUnusable();

  public boolean getShowLicense();

  public String getLicense();

  public String queryLicense(String preferredLocale, String preferredLanguage, String format);

}

