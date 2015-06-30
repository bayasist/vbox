
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
 * StorageControllerType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum StorageControllerType
{
    Null(0),
    LsiLogic(1),
    BusLogic(2),
    IntelAhci(3),
    PIIX3(4),
    PIIX4(5),
    ICH6(6),
    I82078(7),
    LsiLogicSas(8);

    private final int value;

    StorageControllerType(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static StorageControllerType fromValue(long v)
    {
        for (StorageControllerType c: StorageControllerType.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static StorageControllerType fromValue(String v)
    {
        return valueOf(StorageControllerType.class, v);
    }
}

