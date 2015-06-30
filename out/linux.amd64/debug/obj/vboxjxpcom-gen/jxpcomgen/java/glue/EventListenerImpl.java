
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
 * EventListenerImpl.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;

import org.mozilla.interfaces.*;

public class EventListenerImpl extends nsISupportsBase implements org.mozilla.interfaces.IEventListener
{
    private Object obj;
    private java.lang.reflect.Method handleEvent;
    EventListenerImpl(Object obj)
    {
        this.obj = obj;
        try
        {
            this.handleEvent = obj.getClass().getMethod("handleEvent", IEvent.class);
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
    }
    public void handleEvent(org.mozilla.interfaces.IEvent ev)
    {
        try
        {
            if (obj != null && handleEvent != null)
                handleEvent.invoke(obj, ev != null ? new IEvent(ev) : null);
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
    }
}