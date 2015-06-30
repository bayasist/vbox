
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
 * IGuestOSType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IGuestOSType extends nsISupports {

  public static final String IGUESTOSTYPE_IID =
    "{6d968f9a-858b-4c50-bf17-241f069e94c2}";

  public String getFamilyId();

  public String getFamilyDescription();

  public String getId();

  public String getDescription();

  public boolean getIs64Bit();

  public boolean getRecommendedIOAPIC();

  public boolean getRecommendedVirtEx();

  public long getRecommendedRAM();

  public long getRecommendedVRAM();

  public boolean getRecommended2DVideoAcceleration();

  public boolean getRecommended3DAcceleration();

  public long getRecommendedHDD();

  public long getAdapterType();

  public boolean getRecommendedPAE();

  public long getRecommendedDVDStorageController();

  public long getRecommendedDVDStorageBus();

  public long getRecommendedHDStorageController();

  public long getRecommendedHDStorageBus();

  public long getRecommendedFirmware();

  public boolean getRecommendedUSBHID();

  public boolean getRecommendedHPET();

  public boolean getRecommendedUSBTablet();

  public boolean getRecommendedRTCUseUTC();

  public long getRecommendedChipset();

  public long getRecommendedAudioController();

  public boolean getRecommendedFloppy();

  public boolean getRecommendedUSB();

}

