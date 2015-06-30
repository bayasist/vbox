
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
 * IDisplay.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IDisplay extends nsISupports {

  public static final String IDISPLAY_IID =
    "{480b372c-c0b5-4c23-9bd7-dcbb85b1594c}";

  public void getScreenResolution(long screenId, long[] width, long[] height, long[] bitsPerPixel, int[] xOrigin, int[] yOrigin);

  public void setFramebuffer(long screenId, IFramebuffer framebuffer);

  public void getFramebuffer(long screenId, IFramebuffer[] framebuffer, int[] xOrigin, int[] yOrigin);

  public void setVideoModeHint(long display, boolean enabled, boolean changeOrigin, int originX, int originY, long width, long height, long bitsPerPixel);

  public void setSeamlessMode(boolean enabled);

  public void takeScreenShot(long screenId, byte address, long width, long height);

  public byte[] takeScreenShotToArray(long screenId, long width, long height, long[] screenData);

  public byte[] takeScreenShotPNGToArray(long screenId, long width, long height, long[] screenData);

  public void drawToScreen(long screenId, byte address, long x, long y, long width, long height);

  public void invalidateAndUpdate();

  public void resizeCompleted(long screenId);

  public void completeVHWACommand(byte command);

  public void viewportChanged(long screenId, long x, long y, long width, long height);

}

