
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
 * INATRedirectEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class INATRedirectEvent extends IMachineEvent
{

    public INATRedirectEvent(org.mozilla.interfaces.INATRedirectEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.INATRedirectEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.INATRedirectEvent) getWrapped();
    }
    public Long getSlot()
    {
        try
        {
            long retVal = getTypedWrapped().getSlot();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRemove()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRemove();
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
    public String getHostIP()
    {
        try
        {
            String retVal = getTypedWrapped().getHostIP();
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
    public String getGuestIP()
    {
        try
        {
            String retVal = getTypedWrapped().getGuestIP();
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
    public static INATRedirectEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.INATRedirectEvent qiobj = Helper.queryInterface(nsobj, "{24eef068-c380-4510-bc7c-19314a7352f1}", org.mozilla.interfaces.INATRedirectEvent.class);
        return qiobj == null ? null : new INATRedirectEvent(qiobj);
    }
}