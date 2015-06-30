
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
 * ProcessWaitForFlag.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface ProcessWaitForFlag {

  public static final String PROCESSWAITFORFLAG_IID = 
     "{23b550c7-78e1-437e-98f0-65fd9757bcd2}";

  public static final long None = 0L;

  public static final long Start = 1L;

  public static final long Terminate = 2L;

  public static final long StdIn = 4L;

  public static final long StdOut = 8L;

  public static final long StdErr = 16L;

}

