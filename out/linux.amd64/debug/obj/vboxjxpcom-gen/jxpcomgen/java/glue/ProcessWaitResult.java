
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
 * ProcessWaitResult.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum ProcessWaitResult
{
    None(0),
    Start(1),
    Terminate(2),
    Status(3),
    Error(4),
    Timeout(5),
    StdIn(6),
    StdOut(7),
    StdErr(8),
    WaitFlagNotSupported(9);

    private final int value;

    ProcessWaitResult(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static ProcessWaitResult fromValue(long v)
    {
        for (ProcessWaitResult c: ProcessWaitResult.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static ProcessWaitResult fromValue(String v)
    {
        return valueOf(ProcessWaitResult.class, v);
    }
}

