
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
 * IMouse.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IMouse extends nsISupports {

  public static final String IMOUSE_IID =
    "{ee770393-415f-4421-b2d5-28b73cacf86a}";

  public boolean getAbsoluteSupported();

  public boolean getRelativeSupported();

  public boolean getMultiTouchSupported();

  public boolean getNeedsHostCursor();

  public IEventSource getEventSource();

  public void putMouseEvent(int dx, int dy, int dz, int dw, int buttonState);

  public void putMouseEventAbsolute(int x, int y, int dz, int dw, int buttonState);

  public void putEventMultiTouch(int count, long contactsSize, long[] contacts, long scanTime);

  public void putEventMultiTouchString(int count, String contacts, long scanTime);

}

