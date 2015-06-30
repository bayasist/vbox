
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
 * IDHCPServer.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IDHCPServer extends IUnknown
{

    public IDHCPServer(org.mozilla.interfaces.IDHCPServer wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IDHCPServer getTypedWrapped()
    {
        return (org.mozilla.interfaces.IDHCPServer) getWrapped();
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
    public String getIPAddress()
    {
        try
        {
            String retVal = getTypedWrapped().getIPAddress();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getNetworkMask()
    {
        try
        {
            String retVal = getTypedWrapped().getNetworkMask();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
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
    public String getLowerIP()
    {
        try
        {
            String retVal = getTypedWrapped().getLowerIP();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getUpperIP()
    {
        try
        {
            String retVal = getTypedWrapped().getUpperIP();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getGlobalOptions()
    {
        try
        {
            String[] retVal = getTypedWrapped().getGlobalOptions(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getVmConfigs()
    {
        try
        {
            String[] retVal = getTypedWrapped().getVmConfigs(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IDHCPServer queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IDHCPServer qiobj = Helper.queryInterface(nsobj, "{ff0774c5-1f62-4bc3-919c-7fc942bf1d25}", org.mozilla.interfaces.IDHCPServer.class);
        return qiobj == null ? null : new IDHCPServer(qiobj);
    }
    public void addGlobalOption(org.virtualbox_4_3.DhcpOpt option, String value)
    {
        try
        {
            getTypedWrapped().addGlobalOption(option.value(), value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void addVmSlotOption(String vmname, Integer slot, org.virtualbox_4_3.DhcpOpt option, String value)
    {
        try
        {
            getTypedWrapped().addVmSlotOption(vmname, slot, option.value(), value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeVmSlotOptions(String vmname, Integer slot)
    {
        try
        {
            getTypedWrapped().removeVmSlotOptions(vmname, slot);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getVmSlotOptions(String vmname, Integer slot)
    {
        try
        {
            String[] retVal;
            retVal = getTypedWrapped().getVmSlotOptions(vmname, slot, null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getMacOptions(String mac)
    {
        try
        {
            String[] retVal;
            retVal = getTypedWrapped().getMacOptions(mac, null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setConfiguration(String IPAddress, String networkMask, String FromIPAddress, String ToIPAddress)
    {
        try
        {
            getTypedWrapped().setConfiguration(IPAddress, networkMask, FromIPAddress, ToIPAddress);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void start(String networkName, String trunkName, String trunkType)
    {
        try
        {
            getTypedWrapped().start(networkName, trunkName, trunkType);
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
