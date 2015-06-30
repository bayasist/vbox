
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
 * GuestUserState.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface GuestUserState {

  public static final String GUESTUSERSTATE_IID = 
     "{b2a82b02-fd3d-4fc2-ba84-6ba5ac8be198}";

  public static final long Unknown = 0L;

  public static final long LoggedIn = 1L;

  public static final long LoggedOut = 2L;

  public static final long Locked = 3L;

  public static final long Unlocked = 4L;

  public static final long Disabled = 5L;

  public static final long Idle = 6L;

  public static final long InUse = 7L;

  public static final long Created = 8L;

  public static final long Deleted = 9L;

  public static final long SessionChanged = 10L;

  public static final long CredentialsChanged = 11L;

  public static final long RoleChanged = 12L;

  public static final long GroupAdded = 13L;

  public static final long GroupRemoved = 14L;

  public static final long Elevated = 15L;

}

