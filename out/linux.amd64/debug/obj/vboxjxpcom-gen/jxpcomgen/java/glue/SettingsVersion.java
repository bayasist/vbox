
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
 * SettingsVersion.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum SettingsVersion
{
    Null(0),
    v1_0(1),
    v1_1(2),
    v1_2(3),
    v1_3pre(4),
    v1_3(5),
    v1_4(6),
    v1_5(7),
    v1_6(8),
    v1_7(9),
    v1_8(10),
    v1_9(11),
    v1_10(12),
    v1_11(13),
    v1_12(14),
    v1_13(15),
    v1_14(16),
    Future(99999);

    private final int value;

    SettingsVersion(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static SettingsVersion fromValue(long v)
    {
        for (SettingsVersion c: SettingsVersion.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static SettingsVersion fromValue(String v)
    {
        return valueOf(SettingsVersion.class, v);
    }
}

