
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
 * MachineState.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum MachineState
{
    Null(0),
    PoweredOff(1),
    Saved(2),
    Teleported(3),
    Aborted(4),
    Running(5),
    Paused(6),
    Stuck(7),
    Teleporting(8),
    LiveSnapshotting(9),
    Starting(10),
    Stopping(11),
    Saving(12),
    Restoring(13),
    TeleportingPausedVM(14),
    TeleportingIn(15),
    FaultTolerantSyncing(16),
    DeletingSnapshotOnline(17),
    DeletingSnapshotPaused(18),
    RestoringSnapshot(19),
    DeletingSnapshot(20),
    SettingUp(21),
    FirstOnline(5),
    LastOnline(18),
    FirstTransient(8),
    LastTransient(21);

    private final int value;

    MachineState(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static MachineState fromValue(long v)
    {
        for (MachineState c: MachineState.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static MachineState fromValue(String v)
    {
        return valueOf(MachineState.class, v);
    }
}

