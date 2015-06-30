
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
 * IEventSource.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IEventSource extends IUnknown
{

    public IEventSource(org.mozilla.interfaces.IEventSource wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IEventSource getTypedWrapped()
    {
        return (org.mozilla.interfaces.IEventSource) getWrapped();
    }
    public static IEventSource queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IEventSource qiobj = Helper.queryInterface(nsobj, "{9b6e1aee-35f3-4f4d-b5bb-ed0ecefd8538}", org.mozilla.interfaces.IEventSource.class);
        return qiobj == null ? null : new IEventSource(qiobj);
    }
    public org.virtualbox_4_3.IEventListener createListener()
    {
        try
        {
            org.mozilla.interfaces.IEventListener retVal;
            retVal = getTypedWrapped().createListener();
            return (retVal != null) ? new org.virtualbox_4_3.IEventListener(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IEventSource createAggregator(List<org.virtualbox_4_3.IEventSource> subordinates)
    {
        try
        {
            org.mozilla.interfaces.IEventSource retVal;
            retVal = getTypedWrapped().createAggregator(subordinates != null ? subordinates.size() : 0, Helper.unwrap2(org.virtualbox_4_3.IEventSource.class, org.mozilla.interfaces.IEventSource.class, subordinates));
            return (retVal != null) ? new org.virtualbox_4_3.IEventSource(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void registerListener(org.virtualbox_4_3.IEventListener listener, List<org.virtualbox_4_3.VBoxEventType> interesting, Boolean active)
    {
        try
        {
            getTypedWrapped().registerListener((listener != null) ? listener.getTypedWrapped() : null, interesting != null ? interesting.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.VBoxEventType.class, interesting), active);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void unregisterListener(org.virtualbox_4_3.IEventListener listener)
    {
        try
        {
            getTypedWrapped().unregisterListener((listener != null) ? listener.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean fireEvent(org.virtualbox_4_3.IEvent event, Integer timeout)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().fireEvent((event != null) ? event.getTypedWrapped() : null, timeout);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IEvent getEvent(org.virtualbox_4_3.IEventListener listener, Integer timeout)
    {
        try
        {
            org.mozilla.interfaces.IEvent retVal;
            retVal = getTypedWrapped().getEvent((listener != null) ? listener.getTypedWrapped() : null, timeout);
            return (retVal != null) ? new org.virtualbox_4_3.IEvent(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void eventProcessed(org.virtualbox_4_3.IEventListener listener, org.virtualbox_4_3.IEvent event)
    {
        try
        {
            getTypedWrapped().eventProcessed((listener != null) ? listener.getTypedWrapped() : null, (event != null) ? event.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
