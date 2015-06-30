
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
 * IGuest.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IGuest extends nsISupports {

  public static final String IGUEST_IID =
    "{8011a1b1-6adb-4ffb-a37e-20abdaee4650}";

  public String getOSTypeId();

  public long getAdditionsRunLevel();

  public String getAdditionsVersion();

  public long getAdditionsRevision();

  public IEventSource getEventSource();

  public IAdditionsFacility[] getFacilities(  long[] facilitiesSize);

  public IGuestSession[] getSessions(  long[] sessionsSize);

  public long getMemoryBalloonSize();

  public void setMemoryBalloonSize(long arg1);

  public long getStatisticsUpdateInterval();

  public void setStatisticsUpdateInterval(long arg1);

  public void internalGetStatistics(long[] cpuUser, long[] cpuKernel, long[] cpuIdle, long[] memTotal, long[] memFree, long[] memBalloon, long[] memShared, long[] memCache, long[] pagedTotal, long[] memAllocTotal, long[] memFreeTotal, long[] memBalloonTotal, long[] memSharedTotal);

  public long getFacilityStatus(long facility, long[] timestamp);

  public boolean getAdditionsStatus(long level);

  public void setCredentials(String userName, String password, String domain, boolean allowInteractiveLogon);

  public long dragHGEnter(long screenId, long y, long x, long defaultAction, long allowedActionsSize, long[] allowedActions, long formatsSize, String[] formats);

  public long dragHGMove(long screenId, long x, long y, long defaultAction, long allowedActionsSize, long[] allowedActions, long formatsSize, String[] formats);

  public void dragHGLeave(long screenId);

  public long dragHGDrop(long screenId, long x, long y, long defaultAction, long allowedActionsSize, long[] allowedActions, long formatsSize, String[] formats, String[] format);

  public IProgress dragHGPutData(long screenId, String format, byte[] data);

  public long dragGHPending(long screenId, long[] formatsSize, String[][] formats, long[] allowedActionsSize, long[][] allowedActions);

  public IProgress dragGHDropped(String format, long action);

  public byte[] dragGHGetData(long[] data);

  public IGuestSession createSession(String user, String password, String domain, String sessionName);

  public IGuestSession[] findSession(String sessionName, long[] sessions);

  public IProgress updateGuestAdditions(String source, long argumentsSize, String[] arguments, long flagsSize, long[] flags);

}

