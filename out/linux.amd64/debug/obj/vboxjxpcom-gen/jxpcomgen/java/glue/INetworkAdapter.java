
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
 * INetworkAdapter.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class INetworkAdapter extends IUnknown
{

    public INetworkAdapter(org.mozilla.interfaces.INetworkAdapter wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.INetworkAdapter getTypedWrapped()
    {
        return (org.mozilla.interfaces.INetworkAdapter) getWrapped();
    }
    public org.virtualbox_4_3.NetworkAdapterType getAdapterType()
    {
        try
        {
            long retVal = getTypedWrapped().getAdapterType();
            return org.virtualbox_4_3.NetworkAdapterType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAdapterType(org.virtualbox_4_3.NetworkAdapterType value)
    {
        try
        {
            getTypedWrapped().setAdapterType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
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
    public String getMACAddress()
    {
        try
        {
            String retVal = getTypedWrapped().getMACAddress();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setMACAddress(String value)
    {
        try
        {
            getTypedWrapped().setMACAddress(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.NetworkAttachmentType getAttachmentType()
    {
        try
        {
            long retVal = getTypedWrapped().getAttachmentType();
            return org.virtualbox_4_3.NetworkAttachmentType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAttachmentType(org.virtualbox_4_3.NetworkAttachmentType value)
    {
        try
        {
            getTypedWrapped().setAttachmentType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getBridgedInterface()
    {
        try
        {
            String retVal = getTypedWrapped().getBridgedInterface();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setBridgedInterface(String value)
    {
        try
        {
            getTypedWrapped().setBridgedInterface(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getHostOnlyInterface()
    {
        try
        {
            String retVal = getTypedWrapped().getHostOnlyInterface();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setHostOnlyInterface(String value)
    {
        try
        {
            getTypedWrapped().setHostOnlyInterface(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getInternalNetwork()
    {
        try
        {
            String retVal = getTypedWrapped().getInternalNetwork();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setInternalNetwork(String value)
    {
        try
        {
            getTypedWrapped().setInternalNetwork(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getNATNetwork()
    {
        try
        {
            String retVal = getTypedWrapped().getNATNetwork();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setNATNetwork(String value)
    {
        try
        {
            getTypedWrapped().setNATNetwork(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getGenericDriver()
    {
        try
        {
            String retVal = getTypedWrapped().getGenericDriver();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setGenericDriver(String value)
    {
        try
        {
            getTypedWrapped().setGenericDriver(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCableConnected()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCableConnected();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setCableConnected(Boolean value)
    {
        try
        {
            getTypedWrapped().setCableConnected(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getLineSpeed()
    {
        try
        {
            long retVal = getTypedWrapped().getLineSpeed();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLineSpeed(Long value)
    {
        try
        {
            getTypedWrapped().setLineSpeed(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.NetworkAdapterPromiscModePolicy getPromiscModePolicy()
    {
        try
        {
            long retVal = getTypedWrapped().getPromiscModePolicy();
            return org.virtualbox_4_3.NetworkAdapterPromiscModePolicy.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setPromiscModePolicy(org.virtualbox_4_3.NetworkAdapterPromiscModePolicy value)
    {
        try
        {
            getTypedWrapped().setPromiscModePolicy(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getTraceEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getTraceEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTraceEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setTraceEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getTraceFile()
    {
        try
        {
            String retVal = getTypedWrapped().getTraceFile();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTraceFile(String value)
    {
        try
        {
            getTypedWrapped().setTraceFile(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.INATEngine getNATEngine()
    {
        try
        {
            org.mozilla.interfaces.INATEngine retVal = getTypedWrapped().getNATEngine();
            return (retVal != null) ? new org.virtualbox_4_3.INATEngine(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getBootPriority()
    {
        try
        {
            long retVal = getTypedWrapped().getBootPriority();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setBootPriority(Long value)
    {
        try
        {
            getTypedWrapped().setBootPriority(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IBandwidthGroup getBandwidthGroup()
    {
        try
        {
            org.mozilla.interfaces.IBandwidthGroup retVal = getTypedWrapped().getBandwidthGroup();
            return (retVal != null) ? new org.virtualbox_4_3.IBandwidthGroup(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setBandwidthGroup(org.virtualbox_4_3.IBandwidthGroup value)
    {
        try
        {
            getTypedWrapped().setBandwidthGroup((value != null) ? value.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static INetworkAdapter queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.INetworkAdapter qiobj = Helper.queryInterface(nsobj, "{efa0f965-63c7-4c60-afdf-b1cc9943b9c0}", org.mozilla.interfaces.INetworkAdapter.class);
        return qiobj == null ? null : new INetworkAdapter(qiobj);
    }
    public String getProperty(String key)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().getProperty(key);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setProperty(String key, String value)
    {
        try
        {
            getTypedWrapped().setProperty(key, value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getProperties(String names, Holder<List<String>> returnNames)
    {
        try
        {
        String[][] tmp_returnNames = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            String[] retVal;
            retVal = getTypedWrapped().getProperties(names, null, tmp_returnNames, null);
        returnNames.value = Helper.wrap(tmp_returnNames[0]);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
