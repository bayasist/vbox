
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
 * INATNetworkPortForwardEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class INATNetworkPortForwardEvent extends INATNetworkAlterEvent
{

    public INATNetworkPortForwardEvent(org.mozilla.interfaces.INATNetworkPortForwardEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.INATNetworkPortForwardEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.INATNetworkPortForwardEvent) getWrapped();
    }
    public Boolean getCreate()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCreate();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getIpv6()
    {
        try
        {
            boolean retVal = getTypedWrapped().getIpv6();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getName()
    {
        try
        {
            String retVal = getTypedWrapped().getName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.NATProtocol getProto()
    {
        try
        {
            long retVal = getTypedWrapped().getProto();
            return org.virtualbox_4_3.NATProtocol.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getHostIp()
    {
        try
        {
            String retVal = getTypedWrapped().getHostIp();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getHostPort()
    {
        try
        {
            int retVal = getTypedWrapped().getHostPort();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getGuestIp()
    {
        try
        {
            String retVal = getTypedWrapped().getGuestIp();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getGuestPort()
    {
        try
        {
            int retVal = getTypedWrapped().getGuestPort();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static INATNetworkPortForwardEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.INATNetworkPortForwardEvent qiobj = Helper.queryInterface(nsobj, "{2514881b-23d0-430a-a7ff-7ed7f05534bc}", org.mozilla.interfaces.INATNetworkPortForwardEvent.class);
        return qiobj == null ? null : new INATNetworkPortForwardEvent(qiobj);
    }
}
