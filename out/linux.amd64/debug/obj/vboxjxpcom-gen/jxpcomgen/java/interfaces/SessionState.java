
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
 * SessionState.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface SessionState {

  public static final String SESSIONSTATE_IID = 
     "{cf2700c0-ea4b-47ae-9725-7810114b94d8}";

  public static final long Null = 0L;

  public static final long Unlocked = 1L;

  public static final long Locked = 2L;

  public static final long Spawning = 3L;

  public static final long Unlocking = 4L;

}

