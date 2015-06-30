
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
 * MachineState.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface MachineState {

  public static final String MACHINESTATE_IID = 
     "{ec6c6a9e-113d-4ff4-b44f-0b69f21c97fe}";

  public static final long Null = 0L;

  public static final long PoweredOff = 1L;

  public static final long Saved = 2L;

  public static final long Teleported = 3L;

  public static final long Aborted = 4L;

  public static final long Running = 5L;

  public static final long Paused = 6L;

  public static final long Stuck = 7L;

  public static final long Teleporting = 8L;

  public static final long LiveSnapshotting = 9L;

  public static final long Starting = 10L;

  public static final long Stopping = 11L;

  public static final long Saving = 12L;

  public static final long Restoring = 13L;

  public static final long TeleportingPausedVM = 14L;

  public static final long TeleportingIn = 15L;

  public static final long FaultTolerantSyncing = 16L;

  public static final long DeletingSnapshotOnline = 17L;

  public static final long DeletingSnapshotPaused = 18L;

  public static final long RestoringSnapshot = 19L;

  public static final long DeletingSnapshot = 20L;

  public static final long SettingUp = 21L;

  public static final long FirstOnline = 5L;

  public static final long LastOnline = 18L;

  public static final long FirstTransient = 8L;

  public static final long LastTransient = 21L;

}

