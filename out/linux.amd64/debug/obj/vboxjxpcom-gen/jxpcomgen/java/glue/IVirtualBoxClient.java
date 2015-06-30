
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
 * IVirtualBoxClient.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IVirtualBoxClient extends IUnknown
{

    public IVirtualBoxClient(org.mozilla.interfaces.IVirtualBoxClient wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IVirtualBoxClient getTypedWrapped()
    {
        return (org.mozilla.interfaces.IVirtualBoxClient) getWrapped();
    }
    public org.virtualbox_4_3.IVirtualBox getVirtualBox()
    {
        try
        {
            org.mozilla.interfaces.IVirtualBox retVal = getTypedWrapped().getVirtualBox();
            return (retVal != null) ? new org.virtualbox_4_3.IVirtualBox(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ISession getSession()
    {
        try
        {
            org.mozilla.interfaces.ISession retVal = getTypedWrapped().getSession();
            return (retVal != null) ? new org.virtualbox_4_3.ISession(retVal) : null;
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
    public static IVirtualBoxClient queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IVirtualBoxClient qiobj = Helper.queryInterface(nsobj, "{d191281f-b0cb-4d83-a8fa-0d9fd6ba234c}", org.mozilla.interfaces.IVirtualBoxClient.class);
        return qiobj == null ? null : new IVirtualBoxClient(qiobj);
    }
    public void checkMachineError(org.virtualbox_4_3.IMachine machine)
    {
        try
        {
            getTypedWrapped().checkMachineError((machine != null) ? machine.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
