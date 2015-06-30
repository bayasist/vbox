
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
 * VBoxEventType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface VBoxEventType {

  public static final String VBOXEVENTTYPE_IID = 
     "{5248e377-e578-47d7-b07b-84b1db6db8a8}";

  public static final long Invalid = 0L;

  public static final long Any = 1L;

  public static final long Vetoable = 2L;

  public static final long MachineEvent = 3L;

  public static final long SnapshotEvent = 4L;

  public static final long InputEvent = 5L;

  public static final long LastWildcard = 31L;

  public static final long OnMachineStateChanged = 32L;

  public static final long OnMachineDataChanged = 33L;

  public static final long OnExtraDataChanged = 34L;

  public static final long OnExtraDataCanChange = 35L;

  public static final long OnMediumRegistered = 36L;

  public static final long OnMachineRegistered = 37L;

  public static final long OnSessionStateChanged = 38L;

  public static final long OnSnapshotTaken = 39L;

  public static final long OnSnapshotDeleted = 40L;

  public static final long OnSnapshotChanged = 41L;

  public static final long OnGuestPropertyChanged = 42L;

  public static final long OnMousePointerShapeChanged = 43L;

  public static final long OnMouseCapabilityChanged = 44L;

  public static final long OnKeyboardLedsChanged = 45L;

  public static final long OnStateChanged = 46L;

  public static final long OnAdditionsStateChanged = 47L;

  public static final long OnNetworkAdapterChanged = 48L;

  public static final long OnSerialPortChanged = 49L;

  public static final long OnParallelPortChanged = 50L;

  public static final long OnStorageControllerChanged = 51L;

  public static final long OnMediumChanged = 52L;

  public static final long OnVRDEServerChanged = 53L;

  public static final long OnUSBControllerChanged = 54L;

  public static final long OnUSBDeviceStateChanged = 55L;

  public static final long OnSharedFolderChanged = 56L;

  public static final long OnRuntimeError = 57L;

  public static final long OnCanShowWindow = 58L;

  public static final long OnShowWindow = 59L;

  public static final long OnCPUChanged = 60L;

  public static final long OnVRDEServerInfoChanged = 61L;

  public static final long OnEventSourceChanged = 62L;

  public static final long OnCPUExecutionCapChanged = 63L;

  public static final long OnGuestKeyboard = 64L;

  public static final long OnGuestMouse = 65L;

  public static final long OnNATRedirect = 66L;

  public static final long OnHostPCIDevicePlug = 67L;

  public static final long OnVBoxSVCAvailabilityChanged = 68L;

  public static final long OnBandwidthGroupChanged = 69L;

  public static final long OnGuestMonitorChanged = 70L;

  public static final long OnStorageDeviceChanged = 71L;

  public static final long OnClipboardModeChanged = 72L;

  public static final long OnDragAndDropModeChanged = 73L;

  public static final long OnNATNetworkChanged = 74L;

  public static final long OnNATNetworkStartStop = 75L;

  public static final long OnNATNetworkAlter = 76L;

  public static final long OnNATNetworkCreationDeletion = 77L;

  public static final long OnNATNetworkSetting = 78L;

  public static final long OnNATNetworkPortForward = 79L;

  public static final long OnGuestSessionStateChanged = 80L;

  public static final long OnGuestSessionRegistered = 81L;

  public static final long OnGuestProcessRegistered = 82L;

  public static final long OnGuestProcessStateChanged = 83L;

  public static final long OnGuestProcessInputNotify = 84L;

  public static final long OnGuestProcessOutput = 85L;

  public static final long OnGuestFileRegistered = 86L;

  public static final long OnGuestFileStateChanged = 87L;

  public static final long OnGuestFileOffsetChanged = 88L;

  public static final long OnGuestFileRead = 89L;

  public static final long OnGuestFileWrite = 90L;

  public static final long OnVideoCaptureChanged = 91L;

  public static final long OnGuestUserStateChanged = 92L;

  public static final long OnGuestMultiTouch = 93L;

  public static final long OnHostNameResolutionConfigurationChange = 94L;

  public static final long Last = 95L;

}

