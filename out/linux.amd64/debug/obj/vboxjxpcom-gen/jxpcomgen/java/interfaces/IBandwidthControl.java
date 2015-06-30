
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
 * IBandwidthControl.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IBandwidthControl extends nsISupports {

  public static final String IBANDWIDTHCONTROL_IID =
    "{e2eb3930-d2f4-4f87-be17-0707e30f019f}";

  public long getNumGroups();

  public void createBandwidthGroup(String name, long type, long maxBytesPerSec);

  public void deleteBandwidthGroup(String name);

  public IBandwidthGroup getBandwidthGroup(String name);

  public IBandwidthGroup[] getAllBandwidthGroups(long[] bandwidthGroups);

}

