
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
 * ISystemProperties.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface ISystemProperties extends nsISupports {

  public static final String ISYSTEMPROPERTIES_IID =
    "{1254a96a-ae57-4484-946a-22d86c1f98af}";

  public long getMinGuestRAM();

  public long getMaxGuestRAM();

  public long getMinGuestVRAM();

  public long getMaxGuestVRAM();

  public long getMinGuestCPUCount();

  public long getMaxGuestCPUCount();

  public long getMaxGuestMonitors();

  public long getInfoVDSize();

  public long getSerialPortCount();

  public long getParallelPortCount();

  public long getMaxBootPosition();

  public boolean getExclusiveHwVirt();

  public void setExclusiveHwVirt(boolean arg1);

  public String getDefaultMachineFolder();

  public void setDefaultMachineFolder(String arg1);

  public String getLoggingLevel();

  public void setLoggingLevel(String arg1);

  public IMediumFormat[] getMediumFormats(  long[] mediumFormatsSize);

  public String getDefaultHardDiskFormat();

  public void setDefaultHardDiskFormat(String arg1);

  public long getFreeDiskSpaceWarning();

  public void setFreeDiskSpaceWarning(long arg1);

  public long getFreeDiskSpacePercentWarning();

  public void setFreeDiskSpacePercentWarning(long arg1);

  public long getFreeDiskSpaceError();

  public void setFreeDiskSpaceError(long arg1);

  public long getFreeDiskSpacePercentError();

  public void setFreeDiskSpacePercentError(long arg1);

  public String getVRDEAuthLibrary();

  public void setVRDEAuthLibrary(String arg1);

  public String getWebServiceAuthLibrary();

  public void setWebServiceAuthLibrary(String arg1);

  public String getDefaultVRDEExtPack();

  public void setDefaultVRDEExtPack(String arg1);

  public long getLogHistoryCount();

  public void setLogHistoryCount(long arg1);

  public long getDefaultAudioDriver();

  public String getAutostartDatabasePath();

  public void setAutostartDatabasePath(String arg1);

  public String getDefaultAdditionsISO();

  public void setDefaultAdditionsISO(String arg1);

  public String getDefaultFrontend();

  public void setDefaultFrontend(String arg1);

  public long getMaxNetworkAdapters(long chipset);

  public long getMaxNetworkAdaptersOfType(long chipset, long type);

  public long getMaxDevicesPerPortForStorageBus(long bus);

  public long getMinPortCountForStorageBus(long bus);

  public long getMaxPortCountForStorageBus(long bus);

  public long getMaxInstancesOfStorageBus(long chipset, long bus);

  public long[] getDeviceTypesForStorageBus(long bus, long[] deviceTypes);

  public boolean getDefaultIoCacheSettingForStorageController(long controllerType);

  public long getMaxInstancesOfUSBControllerType(long chipset, long type);

}

