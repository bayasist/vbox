
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
 * GuestSessionWaitForFlag.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface GuestSessionWaitForFlag {

  public static final String GUESTSESSIONWAITFORFLAG_IID = 
     "{bb7a372a-f635-4e11-a81a-e707f3a52ef5}";

  public static final long None = 0L;

  public static final long Start = 1L;

  public static final long Terminate = 2L;

  public static final long Status = 4L;

}
