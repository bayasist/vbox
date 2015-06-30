
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
 * IMachine.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IMachine extends nsISupports {

  public static final String IMACHINE_IID =
    "{480cf695-2d8d-4256-9c7c-cce4184fa048}";

  public IVirtualBox getParent();

  public byte[] getIcon(  long[] iconSize);

  public void setIcon(byte[] arg1);

  public boolean getAccessible();

  public IVirtualBoxErrorInfo getAccessError();

  public String getName();

  public void setName(String arg1);

  public String getDescription();

  public void setDescription(String arg1);

  public String getId();

  public String[] getGroups(  long[] groupsSize);

  public void setGroups(String[] arg1);

  public String getOSTypeId();

  public void setOSTypeId(String arg1);

  public String getHardwareVersion();

  public void setHardwareVersion(String arg1);

  public String getHardwareUUID();

  public void setHardwareUUID(String arg1);

  public long getCPUCount();

  public void setCPUCount(long arg1);

  public boolean getCPUHotPlugEnabled();

  public void setCPUHotPlugEnabled(boolean arg1);

  public long getCPUExecutionCap();

  public void setCPUExecutionCap(long arg1);

  public long getMemorySize();

  public void setMemorySize(long arg1);

  public long getMemoryBalloonSize();

  public void setMemoryBalloonSize(long arg1);

  public boolean getPageFusionEnabled();

  public void setPageFusionEnabled(boolean arg1);

  public long getGraphicsControllerType();

  public void setGraphicsControllerType(long arg1);

  public long getVRAMSize();

  public void setVRAMSize(long arg1);

  public boolean getAccelerate3DEnabled();

  public void setAccelerate3DEnabled(boolean arg1);

  public boolean getAccelerate2DVideoEnabled();

  public void setAccelerate2DVideoEnabled(boolean arg1);

  public long getMonitorCount();

  public void setMonitorCount(long arg1);

  public boolean getVideoCaptureEnabled();

  public void setVideoCaptureEnabled(boolean arg1);

  public boolean[] getVideoCaptureScreens(  long[] videoCaptureScreensSize);

  public void setVideoCaptureScreens(boolean[] arg1);

  public String getVideoCaptureFile();

  public void setVideoCaptureFile(String arg1);

  public long getVideoCaptureWidth();

  public void setVideoCaptureWidth(long arg1);

  public long getVideoCaptureHeight();

  public void setVideoCaptureHeight(long arg1);

  public long getVideoCaptureRate();

  public void setVideoCaptureRate(long arg1);

  public long getVideoCaptureFPS();

  public void setVideoCaptureFPS(long arg1);

  public IBIOSSettings getBIOSSettings();

  public long getFirmwareType();

  public void setFirmwareType(long arg1);

  public long getPointingHIDType();

  public void setPointingHIDType(long arg1);

  public long getKeyboardHIDType();

  public void setKeyboardHIDType(long arg1);

  public boolean getHPETEnabled();

  public void setHPETEnabled(boolean arg1);

  public long getChipsetType();

  public void setChipsetType(long arg1);

  public String getSnapshotFolder();

  public void setSnapshotFolder(String arg1);

  public IVRDEServer getVRDEServer();

  public boolean getEmulatedUSBCardReaderEnabled();

  public void setEmulatedUSBCardReaderEnabled(boolean arg1);

  public IMediumAttachment[] getMediumAttachments(  long[] mediumAttachmentsSize);

  public IUSBController[] getUSBControllers(  long[] USBControllersSize);

  public IUSBDeviceFilters getUSBDeviceFilters();

  public IAudioAdapter getAudioAdapter();

  public IStorageController[] getStorageControllers(  long[] storageControllersSize);

  public String getSettingsFilePath();

  public boolean getSettingsModified();

  public long getSessionState();

  public String getSessionType();

  public long getSessionPID();

  public long getState();

  public long getLastStateChange();

  public String getStateFilePath();

  public String getLogFolder();

  public ISnapshot getCurrentSnapshot();

  public long getSnapshotCount();

  public boolean getCurrentStateModified();

  public ISharedFolder[] getSharedFolders(  long[] sharedFoldersSize);

  public long getClipboardMode();

  public void setClipboardMode(long arg1);

  public long getDragAndDropMode();

  public void setDragAndDropMode(long arg1);

  public String getGuestPropertyNotificationPatterns();

  public void setGuestPropertyNotificationPatterns(String arg1);

  public boolean getTeleporterEnabled();

  public void setTeleporterEnabled(boolean arg1);

  public long getTeleporterPort();

  public void setTeleporterPort(long arg1);

  public String getTeleporterAddress();

  public void setTeleporterAddress(String arg1);

  public String getTeleporterPassword();

  public void setTeleporterPassword(String arg1);

  public long getFaultToleranceState();

  public void setFaultToleranceState(long arg1);

  public long getFaultTolerancePort();

  public void setFaultTolerancePort(long arg1);

  public String getFaultToleranceAddress();

  public void setFaultToleranceAddress(String arg1);

  public String getFaultTolerancePassword();

  public void setFaultTolerancePassword(String arg1);

  public long getFaultToleranceSyncInterval();

  public void setFaultToleranceSyncInterval(long arg1);

  public boolean getRTCUseUTC();

  public void setRTCUseUTC(boolean arg1);

  public boolean getIOCacheEnabled();

  public void setIOCacheEnabled(boolean arg1);

  public long getIOCacheSize();

  public void setIOCacheSize(long arg1);

  public IPCIDeviceAttachment[] getPCIDeviceAssignments(  long[] PCIDeviceAssignmentsSize);

  public IBandwidthControl getBandwidthControl();

  public boolean getTracingEnabled();

  public void setTracingEnabled(boolean arg1);

  public String getTracingConfig();

  public void setTracingConfig(String arg1);

  public boolean getAllowTracingToAccessVM();

  public void setAllowTracingToAccessVM(boolean arg1);

  public boolean getAutostartEnabled();

  public void setAutostartEnabled(boolean arg1);

  public long getAutostartDelay();

  public void setAutostartDelay(long arg1);

  public long getAutostopType();

  public void setAutostopType(long arg1);

  public String getDefaultFrontend();

  public void setDefaultFrontend(String arg1);

  public boolean getUSBProxyAvailable();

  public void lockMachine(ISession session, long lockType);

  public IProgress launchVMProcess(ISession session, String type, String environment);

  public void setBootOrder(long position, long device);

  public long getBootOrder(long position);

  public void attachDevice(String name, int controllerPort, int device, long type, IMedium medium);

  public void attachDeviceWithoutMedium(String name, int controllerPort, int device, long type);

  public void detachDevice(String name, int controllerPort, int device);

  public void passthroughDevice(String name, int controllerPort, int device, boolean passthrough);

  public void temporaryEjectDevice(String name, int controllerPort, int device, boolean temporaryEject);

  public void nonRotationalDevice(String name, int controllerPort, int device, boolean nonRotational);

  public void setAutoDiscardForDevice(String name, int controllerPort, int device, boolean discard);

  public void setHotPluggableForDevice(String name, int controllerPort, int device, boolean hotPluggable);

  public void setBandwidthGroupForDevice(String name, int controllerPort, int device, IBandwidthGroup bandwidthGroup);

  public void setNoBandwidthGroupForDevice(String name, int controllerPort, int device);

  public void unmountMedium(String name, int controllerPort, int device, boolean force);

  public void mountMedium(String name, int controllerPort, int device, IMedium medium, boolean force);

  public IMedium getMedium(String name, int controllerPort, int device);

  public IMediumAttachment[] getMediumAttachmentsOfController(String name, long[] mediumAttachments);

  public IMediumAttachment getMediumAttachment(String name, int controllerPort, int device);

  public void attachHostPCIDevice(int hostAddress, int desiredGuestAddress, boolean tryToUnbind);

  public void detachHostPCIDevice(int hostAddress);

  public INetworkAdapter getNetworkAdapter(long slot);

  public IStorageController addStorageController(String name, long connectionType);

  public IStorageController getStorageControllerByName(String name);

  public IStorageController getStorageControllerByInstance(long instance);

  public void removeStorageController(String name);

  public void setStorageControllerBootable(String name, boolean bootable);

  public IUSBController addUSBController(String name, long type);

  public void removeUSBController(String name);

  public IUSBController getUSBControllerByName(String name);

  public long getUSBControllerCountByType(long type);

  public ISerialPort getSerialPort(long slot);

  public IParallelPort getParallelPort(long slot);

  public String[] getExtraDataKeys(long[] keys);

  public String getExtraData(String key);

  public void setExtraData(String key, String value);

  public boolean getCPUProperty(long property);

  public void setCPUProperty(long property, boolean value);

  public void getCPUIDLeaf(long id, long[] valEax, long[] valEbx, long[] valEcx, long[] valEdx);

  public void setCPUIDLeaf(long id, long valEax, long valEbx, long valEcx, long valEdx);

  public void removeCPUIDLeaf(long id);

  public void removeAllCPUIDLeaves();

  public boolean getHWVirtExProperty(long property);

  public void setHWVirtExProperty(long property, boolean value);

  public IProgress setSettingsFilePath(String settingsFilePath);

  public void saveSettings();

  public void discardSettings();

  public IMedium[] unregister(long cleanupMode, long[] media);

  public IProgress deleteConfig(long mediaSize, IMedium[] media);

  public IVirtualSystemDescription exportTo(IAppliance appliance, String location);

  public ISnapshot findSnapshot(String nameOrId);

  public void createSharedFolder(String name, String hostPath, boolean writable, boolean automount);

  public void removeSharedFolder(String name);

  public boolean canShowConsoleWindow();

  public long showConsoleWindow();

  public void getGuestProperty(String name, String[] value, long[] timestamp, String[] flags);

  public String getGuestPropertyValue(String property);

  public long getGuestPropertyTimestamp(String property);

  public void setGuestProperty(String property, String value, String flags);

  public void setGuestPropertyValue(String property, String value);

  public void deleteGuestProperty(String name);

  public void enumerateGuestProperties(String patterns, long[] namesSize, String[][] names, long[] valuesSize, String[][] values, long[] timestampsSize, long[][] timestamps, long[] flagsSize, String[][] flags);

  public void querySavedGuestScreenInfo(long screenId, long[] originX, long[] originY, long[] width, long[] height, boolean[] enabled);

  public void querySavedThumbnailSize(long screenId, long[] size, long[] width, long[] height);

  public byte[] readSavedThumbnailToArray(long screenId, boolean BGR, long[] width, long[] height, long[] data);

  public byte[] readSavedThumbnailPNGToArray(long screenId, long[] width, long[] height, long[] data);

  public void querySavedScreenshotPNGSize(long screenId, long[] size, long[] width, long[] height);

  public byte[] readSavedScreenshotPNGToArray(long screenId, long[] width, long[] height, long[] data);

  public void hotPlugCPU(long cpu);

  public void hotUnplugCPU(long cpu);

  public boolean getCPUStatus(long cpu);

  public String queryLogFilename(long idx);

  public byte[] readLog(long idx, long offset, long size, long[] data);

  public IProgress cloneTo(IMachine target, long mode, long optionsSize, long[] options);

}

