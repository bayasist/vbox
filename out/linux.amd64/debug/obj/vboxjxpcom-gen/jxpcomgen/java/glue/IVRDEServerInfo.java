
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
 * IVRDEServerInfo.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IVRDEServerInfo extends IUnknown
{

    public IVRDEServerInfo(org.mozilla.interfaces.IVRDEServerInfo wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IVRDEServerInfo getTypedWrapped()
    {
        return (org.mozilla.interfaces.IVRDEServerInfo) getWrapped();
    }
    public Boolean getActive()
    {
        try
        {
            boolean retVal = getTypedWrapped().getActive();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getPort()
    {
        try
        {
            int retVal = getTypedWrapped().getPort();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getNumberOfClients()
    {
        try
        {
            long retVal = getTypedWrapped().getNumberOfClients();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getBeginTime()
    {
        try
        {
            long retVal = getTypedWrapped().getBeginTime();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getEndTime()
    {
        try
        {
            long retVal = getTypedWrapped().getEndTime();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getBytesSent()
    {
        try
        {
            long retVal = getTypedWrapped().getBytesSent();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getBytesSentTotal()
    {
        try
        {
            long retVal = getTypedWrapped().getBytesSentTotal();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getBytesReceived()
    {
        try
        {
            long retVal = getTypedWrapped().getBytesReceived();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getBytesReceivedTotal()
    {
        try
        {
            long retVal = getTypedWrapped().getBytesReceivedTotal();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getUser()
    {
        try
        {
            String retVal = getTypedWrapped().getUser();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDomain()
    {
        try
        {
            String retVal = getTypedWrapped().getDomain();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getClientName()
    {
        try
        {
            String retVal = getTypedWrapped().getClientName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getClientIP()
    {
        try
        {
            String retVal = getTypedWrapped().getClientIP();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getClientVersion()
    {
        try
        {
            long retVal = getTypedWrapped().getClientVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getEncryptionStyle()
    {
        try
        {
            long retVal = getTypedWrapped().getEncryptionStyle();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IVRDEServerInfo queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IVRDEServerInfo qiobj = Helper.queryInterface(nsobj, "{714434a1-58c3-4aab-9049-7652c5df113b}", org.mozilla.interfaces.IVRDEServerInfo.class);
        return qiobj == null ? null : new IVRDEServerInfo(qiobj);
    }
}
