
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
 * IInternalSessionControl.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IInternalSessionControl extends nsISupports {

  public static final String IINTERNALSESSIONCONTROL_IID =
    "{2d2124a7-0f62-4907-ae21-eee5a559bdde}";

  public long getPID();

  public IConsole getRemoteConsole();

  public void assignRemoteMachine(IMachine machine, IConsole console);

  public void updateMachineState(long machineState);

  public void uninitialize();

  public void onNetworkAdapterChange(INetworkAdapter networkAdapter, boolean changeAdapter);

  public void onSerialPortChange(ISerialPort serialPort);

  public void onParallelPortChange(IParallelPort parallelPort);

  public void onStorageControllerChange();

  public void onMediumChange(IMediumAttachment mediumAttachment, boolean force);

  public void onStorageDeviceChange(IMediumAttachment mediumAttachment, boolean remove, boolean silent);

  public void onClipboardModeChange(long clipboardMode);

  public void onDragAndDropModeChange(long dragAndDropMode);

  public void onCPUChange(long cpu, boolean add);

  public void onCPUExecutionCapChange(long executionCap);

  public void onVRDEServerChange(boolean restart);

  public void onVideoCaptureChange();

  public void onUSBControllerChange();

  public void onSharedFolderChange(boolean global);

  public void onUSBDeviceAttach(IUSBDevice device, IVirtualBoxErrorInfo error, long maskedInterfaces);

  public void onUSBDeviceDetach(String id, IVirtualBoxErrorInfo error);

  public void onShowWindow(boolean check, boolean[] canShow, long[] winId);

  public void onBandwidthGroupChange(IBandwidthGroup bandwidthGroup);

  public void accessGuestProperty(String name, String value, String flags, boolean isSetter, String[] retValue, long[] retTimestamp, String[] retFlags);

  public void enumerateGuestProperties(String patterns, long[] keysSize, String[][] keys, long[] valuesSize, String[][] values, long[] timestampsSize, long[][] timestamps, long[] flagsSize, String[][] flags);

  public void onlineMergeMedium(IMediumAttachment mediumAttachment, long sourceIdx, long targetIdx, IProgress progress);

  public void enableVMMStatistics(boolean enable);

  public void pauseWithReason(long reason);

  public void resumeWithReason(long reason);

  public IProgress saveStateWithReason(long reason);

}

