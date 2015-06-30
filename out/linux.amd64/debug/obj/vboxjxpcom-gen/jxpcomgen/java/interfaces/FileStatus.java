
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
 * FileStatus.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface FileStatus {

  public static final String FILESTATUS_IID = 
     "{8c86468b-b97b-4080-8914-e29f5b0abd2c}";

  public static final long Undefined = 0L;

  public static final long Opening = 10L;

  public static final long Open = 100L;

  public static final long Closing = 150L;

  public static final long Closed = 200L;

  public static final long Down = 600L;

  public static final long Error = 800L;

}

