
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
 * MediumFormatCapabilities.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum MediumFormatCapabilities
{
    Uuid(0x01),
    CreateFixed(0x02),
    CreateDynamic(0x04),
    CreateSplit2G(0x08),
    Differencing(0x10),
    Asynchronous(0x20),
    File(0x40),
    Properties(0x80),
    TcpNetworking(0x100),
    VFS(0x200),
    CapabilityMask(0x3FF);

    private final int value;

    MediumFormatCapabilities(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static MediumFormatCapabilities fromValue(long v)
    {
        for (MediumFormatCapabilities c: MediumFormatCapabilities.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static MediumFormatCapabilities fromValue(String v)
    {
        return valueOf(MediumFormatCapabilities.class, v);
    }
}

