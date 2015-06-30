
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
 * ProcessCreateFlag.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface ProcessCreateFlag {

  public static final String PROCESSCREATEFLAG_IID = 
     "{35192799-bfde-405d-9bea-c735ab9998e4}";

  public static final long None = 0L;

  public static final long WaitForProcessStartOnly = 1L;

  public static final long IgnoreOrphanedProcesses = 2L;

  public static final long Hidden = 4L;

  public static final long NoProfile = 8L;

  public static final long WaitForStdOut = 16L;

  public static final long WaitForStdErr = 32L;

  public static final long ExpandArguments = 64L;

  public static final long UnquotedArguments = 128L;

}

