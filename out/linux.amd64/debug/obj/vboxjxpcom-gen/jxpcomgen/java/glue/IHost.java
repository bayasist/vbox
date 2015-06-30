
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
 * IHost.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IHost extends IUnknown
{

    public IHost(org.mozilla.interfaces.IHost wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IHost getTypedWrapped()
    {
        return (org.mozilla.interfaces.IHost) getWrapped();
    }
    public List<org.virtualbox_4_3.IMedium> getDVDDrives()
    {
        try
        {
            org.mozilla.interfaces.IMedium[] retVal = getTypedWrapped().getDVDDrives(null);
            return Helper.wrap2(org.virtualbox_4_3.IMedium.class, org.mozilla.interfaces.IMedium.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMedium> getFloppyDrives()
    {
        try
        {
            org.mozilla.interfaces.IMedium[] retVal = getTypedWrapped().getFloppyDrives(null);
            return Helper.wrap2(org.virtualbox_4_3.IMedium.class, org.mozilla.interfaces.IMedium.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IHostUSBDevice> getUSBDevices()
    {
        try
        {
            org.mozilla.interfaces.IHostUSBDevice[] retVal = getTypedWrapped().getUSBDevices(null);
            return Helper.wrap2(org.virtualbox_4_3.IHostUSBDevice.class, org.mozilla.interfaces.IHostUSBDevice.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IHostUSBDeviceFilter> getUSBDeviceFilters()
    {
        try
        {
            org.mozilla.interfaces.IHostUSBDeviceFilter[] retVal = getTypedWrapped().getUSBDeviceFilters(null);
            return Helper.wrap2(org.virtualbox_4_3.IHostUSBDeviceFilter.class, org.mozilla.interfaces.IHostUSBDeviceFilter.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IHostNetworkInterface> getNetworkInterfaces()
    {
        try
        {
            org.mozilla.interfaces.IHostNetworkInterface[] retVal = getTypedWrapped().getNetworkInterfaces(null);
            return Helper.wrap2(org.virtualbox_4_3.IHostNetworkInterface.class, org.mozilla.interfaces.IHostNetworkInterface.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getNameServers()
    {
        try
        {
            String[] retVal = getTypedWrapped().getNameServers(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDomainName()
    {
        try
        {
            String retVal = getTypedWrapped().getDomainName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getSearchStrings()
    {
        try
        {
            String[] retVal = getTypedWrapped().getSearchStrings(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getProcessorCount()
    {
        try
        {
            long retVal = getTypedWrapped().getProcessorCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getProcessorOnlineCount()
    {
        try
        {
            long retVal = getTypedWrapped().getProcessorOnlineCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getProcessorCoreCount()
    {
        try
        {
            long retVal = getTypedWrapped().getProcessorCoreCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getProcessorOnlineCoreCount()
    {
        try
        {
            long retVal = getTypedWrapped().getProcessorOnlineCoreCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMemorySize()
    {
        try
        {
            long retVal = getTypedWrapped().getMemorySize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMemoryAvailable()
    {
        try
        {
            long retVal = getTypedWrapped().getMemoryAvailable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getOperatingSystem()
    {
        try
        {
            String retVal = getTypedWrapped().getOperatingSystem();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getOSVersion()
    {
        try
        {
            String retVal = getTypedWrapped().getOSVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getUTCTime()
    {
        try
        {
            long retVal = getTypedWrapped().getUTCTime();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAcceleration3DAvailable()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAcceleration3DAvailable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IHostVideoInputDevice> getVideoInputDevices()
    {
        try
        {
            org.mozilla.interfaces.IHostVideoInputDevice[] retVal = getTypedWrapped().getVideoInputDevices(null);
            return Helper.wrap2(org.virtualbox_4_3.IHostVideoInputDevice.class, org.mozilla.interfaces.IHostVideoInputDevice.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IHost queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IHost qiobj = Helper.queryInterface(nsobj, "{93269330-48ca-4096-b4a2-1189df336267}", org.mozilla.interfaces.IHost.class);
        return qiobj == null ? null : new IHost(qiobj);
    }
    public Long getProcessorSpeed(Long cpuId)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getProcessorSpeed(cpuId);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getProcessorFeature(org.virtualbox_4_3.ProcessorFeature feature)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().getProcessorFeature(feature.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getProcessorDescription(Long cpuId)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().getProcessorDescription(cpuId);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void getProcessorCPUIDLeaf(Long cpuId, Long leaf, Long subLeaf, Holder<Long> valEax, Holder<Long> valEbx, Holder<Long> valEcx, Holder<Long> valEdx)
    {
        try
        {
        long[] tmp_valEax = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_valEbx = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_valEcx = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_valEdx = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            getTypedWrapped().getProcessorCPUIDLeaf(cpuId, leaf, subLeaf, tmp_valEax, tmp_valEbx, tmp_valEcx, tmp_valEdx);
        valEax.value = tmp_valEax[0];
        valEbx.value = tmp_valEbx[0];
        valEcx.value = tmp_valEcx[0];
        valEdx.value = tmp_valEdx[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress createHostOnlyNetworkInterface(Holder<org.virtualbox_4_3.IHostNetworkInterface> hostInterface)
    {
        try
        {
        org.mozilla.interfaces.IHostNetworkInterface[] tmp_hostInterface = (org.mozilla.interfaces.IHostNetworkInterface[])java.lang.reflect.Array.newInstance(org.mozilla.interfaces.IHostNetworkInterface.class, 1);
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().createHostOnlyNetworkInterface(tmp_hostInterface);
        hostInterface.value = (tmp_hostInterface[0] != null) ? new org.virtualbox_4_3.IHostNetworkInterface(tmp_hostInterface[0]) : null;
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress removeHostOnlyNetworkInterface(String id)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().removeHostOnlyNetworkInterface(id);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IHostUSBDeviceFilter createUSBDeviceFilter(String name)
    {
        try
        {
            org.mozilla.interfaces.IHostUSBDeviceFilter retVal;
            retVal = getTypedWrapped().createUSBDeviceFilter(name);
            return (retVal != null) ? new org.virtualbox_4_3.IHostUSBDeviceFilter(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void insertUSBDeviceFilter(Long position, org.virtualbox_4_3.IHostUSBDeviceFilter filter)
    {
        try
        {
            getTypedWrapped().insertUSBDeviceFilter(position, (filter != null) ? filter.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeUSBDeviceFilter(Long position)
    {
        try
        {
            getTypedWrapped().removeUSBDeviceFilter(position);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMedium findHostDVDDrive(String name)
    {
        try
        {
            org.mozilla.interfaces.IMedium retVal;
            retVal = getTypedWrapped().findHostDVDDrive(name);
            return (retVal != null) ? new org.virtualbox_4_3.IMedium(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMedium findHostFloppyDrive(String name)
    {
        try
        {
            org.mozilla.interfaces.IMedium retVal;
            retVal = getTypedWrapped().findHostFloppyDrive(name);
            return (retVal != null) ? new org.virtualbox_4_3.IMedium(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IHostNetworkInterface findHostNetworkInterfaceByName(String name)
    {
        try
        {
            org.mozilla.interfaces.IHostNetworkInterface retVal;
            retVal = getTypedWrapped().findHostNetworkInterfaceByName(name);
            return (retVal != null) ? new org.virtualbox_4_3.IHostNetworkInterface(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IHostNetworkInterface findHostNetworkInterfaceById(String id)
    {
        try
        {
            org.mozilla.interfaces.IHostNetworkInterface retVal;
            retVal = getTypedWrapped().findHostNetworkInterfaceById(id);
            return (retVal != null) ? new org.virtualbox_4_3.IHostNetworkInterface(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IHostNetworkInterface> findHostNetworkInterfacesOfType(org.virtualbox_4_3.HostNetworkInterfaceType type)
    {
        try
        {
            org.mozilla.interfaces.IHostNetworkInterface[] retVal;
            retVal = getTypedWrapped().findHostNetworkInterfacesOfType(type.value(), null);
            return Helper.wrap2(org.virtualbox_4_3.IHostNetworkInterface.class, org.mozilla.interfaces.IHostNetworkInterface.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IHostUSBDevice findUSBDeviceById(String id)
    {
        try
        {
            org.mozilla.interfaces.IHostUSBDevice retVal;
            retVal = getTypedWrapped().findUSBDeviceById(id);
            return (retVal != null) ? new org.virtualbox_4_3.IHostUSBDevice(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IHostUSBDevice findUSBDeviceByAddress(String name)
    {
        try
        {
            org.mozilla.interfaces.IHostUSBDevice retVal;
            retVal = getTypedWrapped().findUSBDeviceByAddress(name);
            return (retVal != null) ? new org.virtualbox_4_3.IHostUSBDevice(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String generateMACAddress()
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().generateMACAddress();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
