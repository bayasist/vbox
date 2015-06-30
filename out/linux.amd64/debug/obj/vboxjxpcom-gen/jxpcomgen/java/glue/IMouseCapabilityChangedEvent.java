
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
 * IMouseCapabilityChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IMouseCapabilityChangedEvent extends IEvent
{

    public IMouseCapabilityChangedEvent(org.mozilla.interfaces.IMouseCapabilityChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IMouseCapabilityChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IMouseCapabilityChangedEvent) getWrapped();
    }
    public Boolean getSupportsAbsolute()
    {
        try
        {
            boolean retVal = getTypedWrapped().getSupportsAbsolute();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getSupportsRelative()
    {
        try
        {
            boolean retVal = getTypedWrapped().getSupportsRelative();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getSupportsMultiTouch()
    {
        try
        {
            boolean retVal = getTypedWrapped().getSupportsMultiTouch();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getNeedsHostCursor()
    {
        try
        {
            boolean retVal = getTypedWrapped().getNeedsHostCursor();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IMouseCapabilityChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IMouseCapabilityChangedEvent qiobj = Helper.queryInterface(nsobj, "{70e7779a-e64a-4908-804e-371cad23a756}", org.mozilla.interfaces.IMouseCapabilityChangedEvent.class);
        return qiobj == null ? null : new IMouseCapabilityChangedEvent(qiobj);
    }
}
