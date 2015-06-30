
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
 * AdditionsFacilityType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum AdditionsFacilityType
{
    None(0),
    VBoxGuestDriver(20),
    AutoLogon(90),
    VBoxService(100),
    VBoxTrayClient(101),
    Seamless(1000),
    Graphics(1100),
    All(2147483646);

    private final int value;

    AdditionsFacilityType(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static AdditionsFacilityType fromValue(long v)
    {
        for (AdditionsFacilityType c: AdditionsFacilityType.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static AdditionsFacilityType fromValue(String v)
    {
        return valueOf(AdditionsFacilityType.class, v);
    }
}

