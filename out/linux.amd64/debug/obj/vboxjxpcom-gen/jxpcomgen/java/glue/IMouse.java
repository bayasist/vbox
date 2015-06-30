
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
 * IMouse.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IMouse extends IUnknown
{

    public IMouse(org.mozilla.interfaces.IMouse wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IMouse getTypedWrapped()
    {
        return (org.mozilla.interfaces.IMouse) getWrapped();
    }
    public Boolean getAbsoluteSupported()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAbsoluteSupported();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRelativeSupported()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRelativeSupported();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getMultiTouchSupported()
    {
        try
        {
            boolean retVal = getTypedWrapped().getMultiTouchSupported();
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
    public org.virtualbox_4_3.IEventSource getEventSource()
    {
        try
        {
            org.mozilla.interfaces.IEventSource retVal = getTypedWrapped().getEventSource();
            return (retVal != null) ? new org.virtualbox_4_3.IEventSource(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IMouse queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IMouse qiobj = Helper.queryInterface(nsobj, "{ee770393-415f-4421-b2d5-28b73cacf86a}", org.mozilla.interfaces.IMouse.class);
        return qiobj == null ? null : new IMouse(qiobj);
    }
    public void putMouseEvent(Integer dx, Integer dy, Integer dz, Integer dw, Integer buttonState)
    {
        try
        {
            getTypedWrapped().putMouseEvent(dx, dy, dz, dw, buttonState);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void putMouseEventAbsolute(Integer x, Integer y, Integer dz, Integer dw, Integer buttonState)
    {
        try
        {
            getTypedWrapped().putMouseEventAbsolute(x, y, dz, dw, buttonState);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void putEventMultiTouch(Integer count, List<Long> contacts, Long scanTime)
    {
        try
        {
            getTypedWrapped().putEventMultiTouch(count, contacts != null ? contacts.size() : 0, Helper.unwrapULong(contacts), scanTime);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void putEventMultiTouchString(Integer count, String contacts, Long scanTime)
    {
        try
        {
            getTypedWrapped().putEventMultiTouchString(count, contacts, scanTime);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
