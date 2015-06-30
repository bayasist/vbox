
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
 * IEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IEvent extends IUnknown
{

    public IEvent(org.mozilla.interfaces.IEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IEvent) getWrapped();
    }
    public org.virtualbox_4_3.VBoxEventType getType()
    {
        try
        {
            long retVal = getTypedWrapped().getType();
            return org.virtualbox_4_3.VBoxEventType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IEventSource getSource()
    {
        try
        {
            org.mozilla.interfaces.IEventSource retVal = getTypedWrapped().getSource();
            return (retVal != null) ? new org.virtualbox_4_3.IEventSource(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getWaitable()
    {
        try
        {
            boolean retVal = getTypedWrapped().getWaitable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IEvent qiobj = Helper.queryInterface(nsobj, "{0ca2adba-8f30-401b-a8cd-fe31dbe839c0}", org.mozilla.interfaces.IEvent.class);
        return qiobj == null ? null : new IEvent(qiobj);
    }
    public void setProcessed()
    {
        try
        {
            getTypedWrapped().setProcessed();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean waitProcessed(Integer timeout)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().waitProcessed(timeout);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
