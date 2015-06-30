
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
 * IInternalMachineControl.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IInternalMachineControl extends nsISupports {

  public static final String IINTERNALMACHINECONTROL_IID =
    "{2d9ce4b7-0ab2-4931-ac4a-e45aa66465ef}";

  public void setRemoveSavedStateFile(boolean remove);

  public void updateState(long state);

  public void beginPowerUp(IProgress progress);

  public void endPowerUp(int result);

  public void beginPoweringDown(IProgress[] progress);

  public void endPoweringDown(int result, String errMsg);

  public void runUSBDeviceFilters(IUSBDevice device, boolean[] matched, long[] maskedInterfaces);

  public void captureUSBDevice(String id);

  public void detachUSBDevice(String id, boolean done);

  public void autoCaptureUSBDevices();

  public void detachAllUSBDevices(boolean done);

  public IProgress onSessionEnd(ISession session);

  public void beginSavingState(IProgress[] progress, String[] stateFilePath);

  public void endSavingState(int result, String errMsg);

  public void adoptSavedState(String savedStateFile);

  public void beginTakingSnapshot(IConsole initiator, String name, String description, IProgress consoleProgress, boolean fTakingSnapshotOnline, String[] stateFilePath);

  public void endTakingSnapshot(boolean success);

  public IProgress deleteSnapshot(IConsole initiator, String startId, String endId, boolean deleteAllChildren, long[] machineState);

  public void finishOnlineMergeMedium();

  public IProgress restoreSnapshot(IConsole initiator, ISnapshot snapshot, long[] machineState);

  public void pullGuestProperties(long[] namesSize, String[][] names, long[] valuesSize, String[][] values, long[] timestampsSize, long[][] timestamps, long[] flagsSize, String[][] flags);

  public void pushGuestProperty(String name, String value, long timestamp, String flags);

  public void lockMedia();

  public void unlockMedia();

  public IMediumAttachment ejectMedium(IMediumAttachment attachment);

  public void reportVmStatistics(long validStats, long cpuUser, long cpuKernel, long cpuIdle, long memTotal, long memFree, long memBalloon, long memShared, long memCache, long pagedTotal, long memAllocTotal, long memFreeTotal, long memBalloonTotal, long memSharedTotal, long vmNetRx, long vmNetTx);

}

