
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
 * FsObjType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface FsObjType {

  public static final String FSOBJTYPE_IID = 
     "{a1ed437c-b3c3-4ca2-b19c-4239d658d5e8}";

  public static final long Undefined = 0L;

  public static final long FIFO = 1L;

  public static final long DevChar = 10L;

  public static final long DevBlock = 11L;

  public static final long Directory = 50L;

  public static final long File = 80L;

  public static final long Symlink = 100L;

  public static final long Socket = 200L;

  public static final long Whiteout = 400L;

}

