
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
 * IConsole.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IConsole extends nsISupports {

  public static final String ICONSOLE_IID =
    "{8ab7c520-2442-4b66-8d74-4ff1e195d2b6}";

  public IMachine getMachine();

  public long getState();

  public IGuest getGuest();

  public IKeyboard getKeyboard();

  public IMouse getMouse();

  public IDisplay getDisplay();

  public IMachineDebugger getDebugger();

  public IUSBDevice[] getUSBDevices(  long[] USBDevicesSize);

  public IHostUSBDevice[] getRemoteUSBDevices(  long[] remoteUSBDevicesSize);

  public ISharedFolder[] getSharedFolders(  long[] sharedFoldersSize);

  public IVRDEServerInfo getVRDEServerInfo();

  public IEventSource getEventSource();

  public IPCIDeviceAttachment[] getAttachedPCIDevices(  long[] attachedPCIDevicesSize);

  public boolean getUseHostClipboard();

  public void setUseHostClipboard(boolean arg1);

  public IEmulatedUSB getEmulatedUSB();

  public IProgress powerUp();

  public IProgress powerUpPaused();

  public IProgress powerDown();

  public void reset();

  public void pause();

  public void resume();

  public void powerButton();

  public void sleepButton();

  public boolean getPowerButtonHandled();

  public boolean getGuestEnteredACPIMode();

  public IProgress saveState();

  public void adoptSavedState(String savedStateFile);

  public void discardSavedState(boolean fRemoveFile);

  public long getDeviceActivity(long type);

  public void attachUSBDevice(String id);

  public IUSBDevice detachUSBDevice(String id);

  public IUSBDevice findUSBDeviceByAddress(String name);

  public IUSBDevice findUSBDeviceById(String id);

  public void createSharedFolder(String name, String hostPath, boolean writable, boolean automount);

  public void removeSharedFolder(String name);

  public IProgress takeSnapshot(String name, String description);

  public IProgress deleteSnapshot(String id);

  public IProgress deleteSnapshotAndAllChildren(String id);

  public IProgress deleteSnapshotRange(String startId, String endId);

  public IProgress restoreSnapshot(ISnapshot snapshot);

  public IProgress teleport(String hostname, long tcpport, String password, long maxDowntime);

}

