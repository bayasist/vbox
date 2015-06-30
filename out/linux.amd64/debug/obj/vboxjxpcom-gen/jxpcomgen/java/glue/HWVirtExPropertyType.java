
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
 * HWVirtExPropertyType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum HWVirtExPropertyType
{
    Null(0),
    Enabled(1),
    VPID(2),
    NestedPaging(3),
    UnrestrictedExecution(4),
    LargePages(5),
    Force(6);

    private final int value;

    HWVirtExPropertyType(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static HWVirtExPropertyType fromValue(long v)
    {
        for (HWVirtExPropertyType c: HWVirtExPropertyType.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static HWVirtExPropertyType fromValue(String v)
    {
        return valueOf(HWVirtExPropertyType.class, v);
    }
}

