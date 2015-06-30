
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
 * MediumState.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface MediumState {

  public static final String MEDIUMSTATE_IID = 
     "{ef41e980-e012-43cd-9dea-479d4ef14d13}";

  public static final long NotCreated = 0L;

  public static final long Created = 1L;

  public static final long LockedRead = 2L;

  public static final long LockedWrite = 3L;

  public static final long Inaccessible = 4L;

  public static final long Creating = 5L;

  public static final long Deleting = 6L;

}

