
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
 * VirtualSystemDescriptionType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum VirtualSystemDescriptionType
{
    Ignore(1),
    OS(2),
    Name(3),
    Product(4),
    Vendor(5),
    Version(6),
    ProductUrl(7),
    VendorUrl(8),
    Description(9),
    License(10),
    Miscellaneous(11),
    CPU(12),
    Memory(13),
    HardDiskControllerIDE(14),
    HardDiskControllerSATA(15),
    HardDiskControllerSCSI(16),
    HardDiskControllerSAS(17),
    HardDiskImage(18),
    Floppy(19),
    CDROM(20),
    NetworkAdapter(21),
    USBController(22),
    SoundCard(23),
    SettingsFile(24);

    private final int value;

    VirtualSystemDescriptionType(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static VirtualSystemDescriptionType fromValue(long v)
    {
        for (VirtualSystemDescriptionType c: VirtualSystemDescriptionType.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static VirtualSystemDescriptionType fromValue(String v)
    {
        return valueOf(VirtualSystemDescriptionType.class, v);
    }
}

