
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
 * IFramebufferOverlay.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IFramebufferOverlay extends IFramebuffer {

  public static final String IFRAMEBUFFEROVERLAY_IID =
    "{0bcc1c7e-e415-47d2-bfdb-e4c705fb0f47}";

  public long getX();

  public long getY();

  public boolean getVisible();

  public void setVisible(boolean arg1);

  public long getAlpha();

  public void setAlpha(long arg1);

  public void move(long x, long y);

}

