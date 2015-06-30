
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
 * MediumFormatCapabilities.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface MediumFormatCapabilities {

  public static final String MEDIUMFORMATCAPABILITIES_IID = 
     "{7342ba79-7ce0-4d94-8f86-5ed5a185d9bd}";

  public static final long Uuid = 0x01L;

  public static final long CreateFixed = 0x02L;

  public static final long CreateDynamic = 0x04L;

  public static final long CreateSplit2G = 0x08L;

  public static final long Differencing = 0x10L;

  public static final long Asynchronous = 0x20L;

  public static final long File = 0x40L;

  public static final long Properties = 0x80L;

  public static final long TcpNetworking = 0x100L;

  public static final long VFS = 0x200L;

  public static final long CapabilityMask = 0x3FFL;

}

