
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
 * INATNetwork.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class INATNetwork extends IUnknown
{

    public INATNetwork(org.mozilla.interfaces.INATNetwork wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.INATNetwork getTypedWrapped()
    {
        return (org.mozilla.interfaces.INATNetwork) getWrapped();
    }
    public String getNetworkName()
    {
        try
        {
            String retVal = getTypedWrapped().getNetworkName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setNetworkName(String value)
    {
        try
        {
            getTypedWrapped().setNetworkName(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
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
    public void setEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setEnabled(value);
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
    public void setNetwork(String value)
    {
        try
        {
            getTypedWrapped().setNetwork(value);
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
    public Boolean getIPv6Enabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getIPv6Enabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setIPv6Enabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setIPv6Enabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getIPv6Prefix()
    {
        try
        {
            String retVal = getTypedWrapped().getIPv6Prefix();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setIPv6Prefix(String value)
    {
        try
        {
            getTypedWrapped().setIPv6Prefix(value);
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
    public void setAdvertiseDefaultIPv6RouteEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setAdvertiseDefaultIPv6RouteEnabled(value);
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
    public void setNeedDhcpServer(Boolean value)
    {
        try
        {
            getTypedWrapped().setNeedDhcpServer(value);
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
    public List<String> getPortForwardRules4()
    {
        try
        {
            String[] retVal = getTypedWrapped().getPortForwardRules4(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getLocalMappings()
    {
        try
        {
            String[] retVal = getTypedWrapped().getLocalMappings(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getLoopbackIp6()
    {
        try
        {
            int retVal = getTypedWrapped().getLoopbackIp6();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLoopbackIp6(Integer value)
    {
        try
        {
            getTypedWrapped().setLoopbackIp6(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getPortForwardRules6()
    {
        try
        {
            String[] retVal = getTypedWrapped().getPortForwardRules6(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static INATNetwork queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.INATNetwork qiobj = Helper.queryInterface(nsobj, "{a63c75da-4c99-4e9d-8351-eb73651c18cc}", org.mozilla.interfaces.INATNetwork.class);
        return qiobj == null ? null : new INATNetwork(qiobj);
    }
    public void addLocalMapping(String hostid, Integer offset)
    {
        try
        {
            getTypedWrapped().addLocalMapping(hostid, offset);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void addPortForwardRule(Boolean isIpv6, String ruleName, org.virtualbox_4_3.NATProtocol proto, String hostIP, Integer hostPort, String guestIP, Integer guestPort)
    {
        try
        {
            getTypedWrapped().addPortForwardRule(isIpv6, ruleName, proto.value(), hostIP, hostPort, guestIP, guestPort);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removePortForwardRule(Boolean iSipv6, String ruleName)
    {
        try
        {
            getTypedWrapped().removePortForwardRule(iSipv6, ruleName);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void start(String trunkType)
    {
        try
        {
            getTypedWrapped().start(trunkType);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void stop()
    {
        try
        {
            getTypedWrapped().stop();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
