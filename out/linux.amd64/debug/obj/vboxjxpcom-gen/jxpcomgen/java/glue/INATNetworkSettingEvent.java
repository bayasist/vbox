
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
 * INATNetworkSettingEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class INATNetworkSettingEvent extends INATNetworkAlterEvent
{

    public INATNetworkSettingEvent(org.mozilla.interfaces.INATNetworkSettingEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.INATNetworkSettingEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.INATNetworkSettingEvent) getWrapped();
    }
    public Boolean getEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getNetwork()
    {
        try
        {
            String retVal = getTypedWrapped().getNetwork();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getGateway()
    {
        try
        {
            String retVal = getTypedWrapped().getGateway();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAdvertiseDefaultIPv6RouteEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAdvertiseDefaultIPv6RouteEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getNeedDhcpServer()
    {
        try
        {
            boolean retVal = getTypedWrapped().getNeedDhcpServer();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static INATNetworkSettingEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.INATNetworkSettingEvent qiobj = Helper.queryInterface(nsobj, "{9db3a9e6-7f29-4aae-a627-5a282c83092c}", org.mozilla.interfaces.INATNetworkSettingEvent.class);
        return qiobj == null ? null : new INATNetworkSettingEvent(qiobj);
    }
}
