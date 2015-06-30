
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
 * ProcessStatus.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface ProcessStatus {

  public static final String PROCESSSTATUS_IID = 
     "{4d52368f-5b48-4bfe-b486-acf89139b52f}";

  public static final long Undefined = 0L;

  public static final long Starting = 10L;

  public static final long Started = 100L;

  public static final long Paused = 110L;

  public static final long Terminating = 480L;

  public static final long TerminatedNormally = 500L;

  public static final long TerminatedSignal = 510L;

  public static final long TerminatedAbnormally = 511L;

  public static final long TimedOutKilled = 512L;

  public static final long TimedOutAbnormally = 513L;

  public static final long Down = 600L;

  public static final long Error = 800L;

}

