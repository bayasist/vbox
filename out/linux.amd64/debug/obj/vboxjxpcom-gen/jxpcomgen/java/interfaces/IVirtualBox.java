
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
 * IVirtualBox.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IVirtualBox extends nsISupports {

  public static final String IVIRTUALBOX_IID =
    "{fafa4e17-1ee2-4905-a10e-fe7c18bf5554}";

  public String getVersion();

  public String getVersionNormalized();

  public long getRevision();

  public String getPackageType();

  public String getAPIVersion();

  public String getHomeFolder();

  public String getSettingsFilePath();

  public IHost getHost();

  public ISystemProperties getSystemProperties();

  public IMachine[] getMachines(  long[] machinesSize);

  public String[] getMachineGroups(  long[] machineGroupsSize);

  public IMedium[] getHardDisks(  long[] hardDisksSize);

  public IMedium[] getDVDImages(  long[] DVDImagesSize);

  public IMedium[] getFloppyImages(  long[] floppyImagesSize);

  public IProgress[] getProgressOperations(  long[] progressOperationsSize);

  public IGuestOSType[] getGuestOSTypes(  long[] guestOSTypesSize);

  public ISharedFolder[] getSharedFolders(  long[] sharedFoldersSize);

  public IPerformanceCollector getPerformanceCollector();

  public IDHCPServer[] getDHCPServers(  long[] DHCPServersSize);

  public INATNetwork[] getNATNetworks(  long[] NATNetworksSize);

  public IEventSource getEventSource();

  public IExtPackManager getExtensionPackManager();

  public String[] getInternalNetworks(  long[] internalNetworksSize);

  public String[] getGenericNetworkDrivers(  long[] genericNetworkDriversSize);

  public String composeMachineFilename(String name, String group, String createFlags, String baseFolder);

  public IMachine createMachine(String settingsFile, String name, long groupsSize, String[] groups, String osTypeId, String flags);

  public IMachine openMachine(String settingsFile);

  public void registerMachine(IMachine machine);

  public IMachine findMachine(String nameOrId);

  public IMachine[] getMachinesByGroups(long groupsSize, String[] groups, long[] machines);

  public long[] getMachineStates(long machinesSize, IMachine[] machines, long[] states);

  public IAppliance createAppliance();

  public IMedium createHardDisk(String format, String location);

  public IMedium openMedium(String location, long deviceType, long accessMode, boolean forceNewUuid);

  public IGuestOSType getGuestOSType(String id);

  public void createSharedFolder(String name, String hostPath, boolean writable, boolean automount);

  public void removeSharedFolder(String name);

  public String[] getExtraDataKeys(long[] keys);

  public String getExtraData(String key);

  public void setExtraData(String key, String value);

  public void setSettingsSecret(String password);

  public IDHCPServer createDHCPServer(String name);

  public IDHCPServer findDHCPServerByNetworkName(String name);

  public void removeDHCPServer(IDHCPServer server);

  public INATNetwork createNATNetwork(String networkName);

  public INATNetwork findNATNetworkByName(String networkName);

  public void removeNATNetwork(INATNetwork network);

  public boolean checkFirmwarePresent(long firmwareType, String version, String[] url, String[] file);

}

