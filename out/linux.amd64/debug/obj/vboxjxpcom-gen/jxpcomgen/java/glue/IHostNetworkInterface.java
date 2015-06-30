
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
 * IHostNetworkInterface.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IHostNetworkInterface extends IUnknown
{

    public IHostNetworkInterface(org.mozilla.interfaces.IHostNetworkInterface wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IHostNetworkInterface getTypedWrapped()
    {
        return (org.mozilla.interfaces.IHostNetworkInterface) getWrapped();
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
    public String getShortName()
    {
        try
        {
            String retVal = getTypedWrapped().getShortName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getId()
    {
        try
        {
            String retVal = getTypedWrapped().getId();
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
    public Boolean getDHCPEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getDHCPEnabled();
            return retVal;
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
    public Boolean getIPV6Supported()
    {
        try
        {
            boolean retVal = getTypedWrapped().getIPV6Supported();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getIPV6Address()
    {
        try
        {
            String retVal = getTypedWrapped().getIPV6Address();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getIPV6NetworkMaskPrefixLength()
    {
        try
        {
            long retVal = getTypedWrapped().getIPV6NetworkMaskPrefixLength();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getHardwareAddress()
    {
        try
        {
            String retVal = getTypedWrapped().getHardwareAddress();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.HostNetworkInterfaceMediumType getMediumType()
    {
        try
        {
            long retVal = getTypedWrapped().getMediumType();
            return org.virtualbox_4_3.HostNetworkInterfaceMediumType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.HostNetworkInterfaceStatus getStatus()
    {
        try
        {
            long retVal = getTypedWrapped().getStatus();
            return org.virtualbox_4_3.HostNetworkInterfaceStatus.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.HostNetworkInterfaceType getInterfaceType()
    {
        try
        {
            long retVal = getTypedWrapped().getInterfaceType();
            return org.virtualbox_4_3.HostNetworkInterfaceType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IHostNetworkInterface queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IHostNetworkInterface qiobj = Helper.queryInterface(nsobj, "{f6e556f9-d598-409b-898c-8ba99d9b05ae}", org.mozilla.interfaces.IHostNetworkInterface.class);
        return qiobj == null ? null : new IHostNetworkInterface(qiobj);
    }
    public void enableStaticIPConfig(String IPAddress, String networkMask)
    {
        try
        {
            getTypedWrapped().enableStaticIPConfig(IPAddress, networkMask);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void enableStaticIPConfigV6(String IPV6Address, Long IPV6NetworkMaskPrefixLength)
    {
        try
        {
            getTypedWrapped().enableStaticIPConfigV6(IPV6Address, IPV6NetworkMaskPrefixLength);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void enableDynamicIPConfig()
    {
        try
        {
            getTypedWrapped().enableDynamicIPConfig();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void DHCPRediscover()
    {
        try
        {
            getTypedWrapped().DHCPRediscover();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
