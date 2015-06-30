
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
 * IHost.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IHost extends nsISupports {

  public static final String IHOST_IID =
    "{93269330-48ca-4096-b4a2-1189df336267}";

  public IMedium[] getDVDDrives(  long[] DVDDrivesSize);

  public IMedium[] getFloppyDrives(  long[] floppyDrivesSize);

  public IHostUSBDevice[] getUSBDevices(  long[] USBDevicesSize);

  public IHostUSBDeviceFilter[] getUSBDeviceFilters(  long[] USBDeviceFiltersSize);

  public IHostNetworkInterface[] getNetworkInterfaces(  long[] networkInterfacesSize);

  public String[] getNameServers(  long[] nameServersSize);

  public String getDomainName();

  public String[] getSearchStrings(  long[] searchStringsSize);

  public long getProcessorCount();

  public long getProcessorOnlineCount();

  public long getProcessorCoreCount();

  public long getProcessorOnlineCoreCount();

  public long getMemorySize();

  public long getMemoryAvailable();

  public String getOperatingSystem();

  public String getOSVersion();

  public long getUTCTime();

  public boolean getAcceleration3DAvailable();

  public IHostVideoInputDevice[] getVideoInputDevices(  long[] videoInputDevicesSize);

  public long getProcessorSpeed(long cpuId);

  public boolean getProcessorFeature(long feature);

  public String getProcessorDescription(long cpuId);

  public void getProcessorCPUIDLeaf(long cpuId, long leaf, long subLeaf, long[] valEax, long[] valEbx, long[] valEcx, long[] valEdx);

  public IProgress createHostOnlyNetworkInterface(IHostNetworkInterface[] hostInterface);

  public IProgress removeHostOnlyNetworkInterface(String id);

  public IHostUSBDeviceFilter createUSBDeviceFilter(String name);

  public void insertUSBDeviceFilter(long position, IHostUSBDeviceFilter filter);

  public void removeUSBDeviceFilter(long position);

  public IMedium findHostDVDDrive(String name);

  public IMedium findHostFloppyDrive(String name);

  public IHostNetworkInterface findHostNetworkInterfaceByName(String name);

  public IHostNetworkInterface findHostNetworkInterfaceById(String id);

  public IHostNetworkInterface[] findHostNetworkInterfacesOfType(long type, long[] networkInterfaces);

  public IHostUSBDevice findUSBDeviceById(String id);

  public IHostUSBDevice findUSBDeviceByAddress(String name);

  public String generateMACAddress();

}

