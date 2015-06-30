
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
 * GuestSessionStatus.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface GuestSessionStatus {

  public static final String GUESTSESSIONSTATUS_IID = 
     "{ac2669da-4624-44f2-85b5-0b0bfb8d8673}";

  public static final long Undefined = 0L;

  public static final long Starting = 10L;

  public static final long Started = 100L;

  public static final long Terminating = 480L;

  public static final long Terminated = 500L;

  public static final long TimedOutKilled = 512L;

  public static final long TimedOutAbnormally = 513L;

  public static final long Down = 600L;

  public static final long Error = 800L;

}

