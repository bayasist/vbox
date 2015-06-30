
/*
 * Copyright (C) 2010-2014 Oracle Corporation
 *
 * This file is part of the VirtualBox SDK, as available from
 * http://www.virtualbox.org.  This library is free software; you can
 * redistribute it and/or modify it under the terms of the GNU Lesser General
 * Public License as published by the Free Software Foundation, in version 2.1
 * as it comes in the "COPYING.LIB" file of the VirtualBox SDK distribution.
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * VBoxEventType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum VBoxEventType
{
    Invalid(0),
    Any(1),
    Vetoable(2),
    MachineEvent(3),
    SnapshotEvent(4),
    InputEvent(5),
    LastWildcard(31),
    OnMachineStateChanged(32),
    OnMachineDataChanged(33),
    OnExtraDataChanged(34),
    OnExtraDataCanChange(35),
    OnMediumRegistered(36),
    OnMachineRegistered(37),
    OnSessionStateChanged(38),
    OnSnapshotTaken(39),
    OnSnapshotDeleted(40),
    OnSnapshotChanged(41),
    OnGuestPropertyChanged(42),
    OnMousePointerShapeChanged(43),
    OnMouseCapabilityChanged(44),
    OnKeyboardLedsChanged(45),
    OnStateChanged(46),
    OnAdditionsStateChanged(47),
    OnNetworkAdapterChanged(48),
    OnSerialPortChanged(49),
    OnParallelPortChanged(50),
    OnStorageControllerChanged(51),
    OnMediumChanged(52),
    OnVRDEServerChanged(53),
    OnUSBControllerChanged(54),
    OnUSBDeviceStateChanged(55),
    OnSharedFolderChanged(56),
    OnRuntimeError(57),
    OnCanShowWindow(58),
    OnShowWindow(59),
    OnCPUChanged(60),
    OnVRDEServerInfoChanged(61),
    OnEventSourceChanged(62),
    OnCPUExecutionCapChanged(63),
    OnGuestKeyboard(64),
    OnGuestMouse(65),
    OnNATRedirect(66),
    OnHostPCIDevicePlug(67),
    OnVBoxSVCAvailabilityChanged(68),
    OnBandwidthGroupChanged(69),
    OnGuestMonitorChanged(70),
    OnStorageDeviceChanged(71),
    OnClipboardModeChanged(72),
    OnDragAndDropModeChanged(73),
    OnNATNetworkChanged(74),
    OnNATNetworkStartStop(75),
    OnNATNetworkAlter(76),
    OnNATNetworkCreationDeletion(77),
    OnNATNetworkSetting(78),
    OnNATNetworkPortForward(79),
    OnGuestSessionStateChanged(80),
    OnGuestSessionRegistered(81),
    OnGuestProcessRegistered(82),
    OnGuestProcessStateChanged(83),
    OnGuestProcessInputNotify(84),
    OnGuestProcessOutput(85),
    OnGuestFileRegistered(86),
    OnGuestFileStateChanged(87),
    OnGuestFileOffsetChanged(88),
    OnGuestFileRead(89),
    OnGuestFileWrite(90),
    OnVideoCaptureChanged(91),
    OnGuestUserStateChanged(92),
    OnGuestMultiTouch(93),
    OnHostNameResolutionConfigurationChange(94),
    Last(95);

    private final int value;

    VBoxEventType(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static VBoxEventType fromValue(long v)
    {
        for (VBoxEventType c: VBoxEventType.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static VBoxEventType fromValue(String v)
    {
        return valueOf(VBoxEventType.class, v);
    }
}

