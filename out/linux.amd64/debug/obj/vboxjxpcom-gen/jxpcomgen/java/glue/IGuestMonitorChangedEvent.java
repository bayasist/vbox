
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
 * IGuestMonitorChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IGuestMonitorChangedEvent extends IEvent
{

    public IGuestMonitorChangedEvent(org.mozilla.interfaces.IGuestMonitorChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IGuestMonitorChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IGuestMonitorChangedEvent) getWrapped();
    }
    public org.virtualbox_4_3.GuestMonitorChangedEventType getChangeType()
    {
        try
        {
            long retVal = getTypedWrapped().getChangeType();
            return org.virtualbox_4_3.GuestMonitorChangedEventType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getScreenId()
    {
        try
        {
            long retVal = getTypedWrapped().getScreenId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getOriginX()
    {
        try
        {
            long retVal = getTypedWrapped().getOriginX();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getOriginY()
    {
        try
        {
            long retVal = getTypedWrapped().getOriginY();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getWidth()
    {
        try
        {
            long retVal = getTypedWrapped().getWidth();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getHeight()
    {
        try
        {
            long retVal = getTypedWrapped().getHeight();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IGuestMonitorChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IGuestMonitorChangedEvent qiobj = Helper.queryInterface(nsobj, "{0f7b8a22-c71f-4a36-8e5f-a77d01d76090}", org.mozilla.interfaces.IGuestMonitorChangedEvent.class);
        return qiobj == null ? null : new IGuestMonitorChangedEvent(qiobj);
    }
}
