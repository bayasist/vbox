
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
 * IBIOSSettings.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IBIOSSettings extends nsISupports {

  public static final String IBIOSSETTINGS_IID =
    "{38b54279-dc35-4f5e-a431-835b867c6b5e}";

  public boolean getLogoFadeIn();

  public void setLogoFadeIn(boolean arg1);

  public boolean getLogoFadeOut();

  public void setLogoFadeOut(boolean arg1);

  public long getLogoDisplayTime();

  public void setLogoDisplayTime(long arg1);

  public String getLogoImagePath();

  public void setLogoImagePath(String arg1);

  public long getBootMenuMode();

  public void setBootMenuMode(long arg1);

  public boolean getACPIEnabled();

  public void setACPIEnabled(boolean arg1);

  public boolean getIOAPICEnabled();

  public void setIOAPICEnabled(boolean arg1);

  public long getTimeOffset();

  public void setTimeOffset(long arg1);

  public boolean getPXEDebugEnabled();

  public void setPXEDebugEnabled(boolean arg1);

  public String getNonVolatileStorageFile();

}

