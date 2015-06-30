
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
 * MediumVariant.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface MediumVariant {

  public static final String MEDIUMVARIANT_IID = 
     "{80685b6b-e42f-497d-8271-e77bf3c61ada}";

  public static final long Standard = 0L;

  public static final long VmdkSplit2G = 0x01L;

  public static final long VmdkRawDisk = 0x02L;

  public static final long VmdkStreamOptimized = 0x04L;

  public static final long VmdkESX = 0x08L;

  public static final long Fixed = 0x10000L;

  public static final long Diff = 0x20000L;

  public static final long NoCreateDir = 0x40000000L;

}

