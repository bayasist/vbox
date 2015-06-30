
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
 * AdditionsFacilityStatus.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface AdditionsFacilityStatus {

  public static final String ADDITIONSFACILITYSTATUS_IID = 
     "{ce06f9e1-394e-4fe9-9368-5a88c567dbde}";

  public static final long Inactive = 0L;

  public static final long Paused = 1L;

  public static final long PreInit = 20L;

  public static final long Init = 30L;

  public static final long Active = 50L;

  public static final long Terminating = 100L;

  public static final long Terminated = 101L;

  public static final long Failed = 800L;

  public static final long Unknown = 999L;

}

