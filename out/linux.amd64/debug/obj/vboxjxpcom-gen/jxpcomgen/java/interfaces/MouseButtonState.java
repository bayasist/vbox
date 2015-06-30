
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
 * MouseButtonState.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface MouseButtonState {

  public static final String MOUSEBUTTONSTATE_IID = 
     "{9ee094b8-b28a-4d56-a166-973cb588d7f8}";

  public static final long LeftButton = 0x01L;

  public static final long RightButton = 0x02L;

  public static final long MiddleButton = 0x04L;

  public static final long WheelUp = 0x08L;

  public static final long WheelDown = 0x10L;

  public static final long XButton1 = 0x20L;

  public static final long XButton2 = 0x40L;

  public static final long MouseStateMask = 0x7FL;

}

