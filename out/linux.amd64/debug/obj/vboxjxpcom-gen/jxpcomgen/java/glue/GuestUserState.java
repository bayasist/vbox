
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
 * GuestUserState.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum GuestUserState
{
    Unknown(0),
    LoggedIn(1),
    LoggedOut(2),
    Locked(3),
    Unlocked(4),
    Disabled(5),
    Idle(6),
    InUse(7),
    Created(8),
    Deleted(9),
    SessionChanged(10),
    CredentialsChanged(11),
    RoleChanged(12),
    GroupAdded(13),
    GroupRemoved(14),
    Elevated(15);

    private final int value;

    GuestUserState(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static GuestUserState fromValue(long v)
    {
        for (GuestUserState c: GuestUserState.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static GuestUserState fromValue(String v)
    {
        return valueOf(GuestUserState.class, v);
    }
}

