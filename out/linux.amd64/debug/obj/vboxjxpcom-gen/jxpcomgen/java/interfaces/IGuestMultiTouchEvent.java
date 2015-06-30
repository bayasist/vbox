
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
 * IGuestMultiTouchEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IGuestMultiTouchEvent extends IEvent {

  public static final String IGUESTMULTITOUCHEVENT_IID =
    "{be8a0eb5-f4f4-4dd0-9d30-c89b873247ec}";

  public int getContactCount();

  public short[] getXPositions(  long[] xPositionsSize);

  public short[] getYPositions(  long[] yPositionsSize);

  public int[] getContactIds(  long[] contactIdsSize);

  public int[] getContactFlags(  long[] contactFlagsSize);

  public long getScanTime();

}

