
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
 * NetworkAdapterType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum NetworkAdapterType
{
    Null(0),
    Am79C970A(1),
    Am79C973(2),
    I82540EM(3),
    I82543GC(4),
    I82545EM(5),
    Virtio(6);

    private final int value;

    NetworkAdapterType(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static NetworkAdapterType fromValue(long v)
    {
        for (NetworkAdapterType c: NetworkAdapterType.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static NetworkAdapterType fromValue(String v)
    {
        return valueOf(NetworkAdapterType.class, v);
    }
}
