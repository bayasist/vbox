
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
 * IEventSourceChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IEventSourceChangedEvent extends IEvent
{

    public IEventSourceChangedEvent(org.mozilla.interfaces.IEventSourceChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IEventSourceChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IEventSourceChangedEvent) getWrapped();
    }
    public org.virtualbox_4_3.IEventListener getListener()
    {
        try
        {
            org.mozilla.interfaces.IEventListener retVal = getTypedWrapped().getListener();
            return (retVal != null) ? new org.virtualbox_4_3.IEventListener(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAdd()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAdd();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IEventSourceChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IEventSourceChangedEvent qiobj = Helper.queryInterface(nsobj, "{e7932cb8-f6d4-4ab6-9cbf-558eb8959a6a}", org.mozilla.interfaces.IEventSourceChangedEvent.class);
        return qiobj == null ? null : new IEventSourceChangedEvent(qiobj);
    }
}
