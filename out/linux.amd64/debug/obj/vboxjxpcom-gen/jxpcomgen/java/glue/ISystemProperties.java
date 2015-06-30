
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
 * ISystemProperties.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class ISystemProperties extends IUnknown
{

    public ISystemProperties(org.mozilla.interfaces.ISystemProperties wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.ISystemProperties getTypedWrapped()
    {
        return (org.mozilla.interfaces.ISystemProperties) getWrapped();
    }
    public Long getMinGuestRAM()
    {
        try
        {
            long retVal = getTypedWrapped().getMinGuestRAM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxGuestRAM()
    {
        try
        {
            long retVal = getTypedWrapped().getMaxGuestRAM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMinGuestVRAM()
    {
        try
        {
            long retVal = getTypedWrapped().getMinGuestVRAM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxGuestVRAM()
    {
        try
        {
            long retVal = getTypedWrapped().getMaxGuestVRAM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMinGuestCPUCount()
    {
        try
        {
            long retVal = getTypedWrapped().getMinGuestCPUCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxGuestCPUCount()
    {
        try
        {
            long retVal = getTypedWrapped().getMaxGuestCPUCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxGuestMonitors()
    {
        try
        {
            long retVal = getTypedWrapped().getMaxGuestMonitors();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getInfoVDSize()
    {
        try
        {
            long retVal = getTypedWrapped().getInfoVDSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getSerialPortCount()
    {
        try
        {
            long retVal = getTypedWrapped().getSerialPortCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getParallelPortCount()
    {
        try
        {
            long retVal = getTypedWrapped().getParallelPortCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxBootPosition()
    {
        try
        {
            long retVal = getTypedWrapped().getMaxBootPosition();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getExclusiveHwVirt()
    {
        try
        {
            boolean retVal = getTypedWrapped().getExclusiveHwVirt();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setExclusiveHwVirt(Boolean value)
    {
        try
        {
            getTypedWrapped().setExclusiveHwVirt(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDefaultMachineFolder()
    {
        try
        {
            String retVal = getTypedWrapped().getDefaultMachineFolder();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDefaultMachineFolder(String value)
    {
        try
        {
            getTypedWrapped().setDefaultMachineFolder(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLoggingLevel()
    {
        try
        {
            String retVal = getTypedWrapped().getLoggingLevel();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLoggingLevel(String value)
    {
        try
        {
            getTypedWrapped().setLoggingLevel(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMediumFormat> getMediumFormats()
    {
        try
        {
            org.mozilla.interfaces.IMediumFormat[] retVal = getTypedWrapped().getMediumFormats(null);
            return Helper.wrap2(org.virtualbox_4_3.IMediumFormat.class, org.mozilla.interfaces.IMediumFormat.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDefaultHardDiskFormat()
    {
        try
        {
            String retVal = getTypedWrapped().getDefaultHardDiskFormat();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDefaultHardDiskFormat(String value)
    {
        try
        {
            getTypedWrapped().setDefaultHardDiskFormat(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getFreeDiskSpaceWarning()
    {
        try
        {
            long retVal = getTypedWrapped().getFreeDiskSpaceWarning();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFreeDiskSpaceWarning(Long value)
    {
        try
        {
            getTypedWrapped().setFreeDiskSpaceWarning(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getFreeDiskSpacePercentWarning()
    {
        try
        {
            long retVal = getTypedWrapped().getFreeDiskSpacePercentWarning();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFreeDiskSpacePercentWarning(Long value)
    {
        try
        {
            getTypedWrapped().setFreeDiskSpacePercentWarning(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getFreeDiskSpaceError()
    {
        try
        {
            long retVal = getTypedWrapped().getFreeDiskSpaceError();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFreeDiskSpaceError(Long value)
    {
        try
        {
            getTypedWrapped().setFreeDiskSpaceError(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getFreeDiskSpacePercentError()
    {
        try
        {
            long retVal = getTypedWrapped().getFreeDiskSpacePercentError();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFreeDiskSpacePercentError(Long value)
    {
        try
        {
            getTypedWrapped().setFreeDiskSpacePercentError(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getVRDEAuthLibrary()
    {
        try
        {
            String retVal = getTypedWrapped().getVRDEAuthLibrary();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVRDEAuthLibrary(String value)
    {
        try
        {
            getTypedWrapped().setVRDEAuthLibrary(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getWebServiceAuthLibrary()
    {
        try
        {
            String retVal = getTypedWrapped().getWebServiceAuthLibrary();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setWebServiceAuthLibrary(String value)
    {
        try
        {
            getTypedWrapped().setWebServiceAuthLibrary(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDefaultVRDEExtPack()
    {
        try
        {
            String retVal = getTypedWrapped().getDefaultVRDEExtPack();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDefaultVRDEExtPack(String value)
    {
        try
        {
            getTypedWrapped().setDefaultVRDEExtPack(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getLogHistoryCount()
    {
        try
        {
            long retVal = getTypedWrapped().getLogHistoryCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLogHistoryCount(Long value)
    {
        try
        {
            getTypedWrapped().setLogHistoryCount(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.AudioDriverType getDefaultAudioDriver()
    {
        try
        {
            long retVal = getTypedWrapped().getDefaultAudioDriver();
            return org.virtualbox_4_3.AudioDriverType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getAutostartDatabasePath()
    {
        try
        {
            String retVal = getTypedWrapped().getAutostartDatabasePath();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAutostartDatabasePath(String value)
    {
        try
        {
            getTypedWrapped().setAutostartDatabasePath(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDefaultAdditionsISO()
    {
        try
        {
            String retVal = getTypedWrapped().getDefaultAdditionsISO();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDefaultAdditionsISO(String value)
    {
        try
        {
            getTypedWrapped().setDefaultAdditionsISO(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDefaultFrontend()
    {
        try
        {
            String retVal = getTypedWrapped().getDefaultFrontend();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDefaultFrontend(String value)
    {
        try
        {
            getTypedWrapped().setDefaultFrontend(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static ISystemProperties queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.ISystemProperties qiobj = Helper.queryInterface(nsobj, "{1254a96a-ae57-4484-946a-22d86c1f98af}", org.mozilla.interfaces.ISystemProperties.class);
        return qiobj == null ? null : new ISystemProperties(qiobj);
    }
    public Long getMaxNetworkAdapters(org.virtualbox_4_3.ChipsetType chipset)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getMaxNetworkAdapters(chipset.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxNetworkAdaptersOfType(org.virtualbox_4_3.ChipsetType chipset, org.virtualbox_4_3.NetworkAttachmentType type)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getMaxNetworkAdaptersOfType(chipset.value(), type.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxDevicesPerPortForStorageBus(org.virtualbox_4_3.StorageBus bus)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getMaxDevicesPerPortForStorageBus(bus.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMinPortCountForStorageBus(org.virtualbox_4_3.StorageBus bus)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getMinPortCountForStorageBus(bus.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxPortCountForStorageBus(org.virtualbox_4_3.StorageBus bus)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getMaxPortCountForStorageBus(bus.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxInstancesOfStorageBus(org.virtualbox_4_3.ChipsetType chipset, org.virtualbox_4_3.StorageBus bus)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getMaxInstancesOfStorageBus(chipset.value(), bus.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.DeviceType> getDeviceTypesForStorageBus(org.virtualbox_4_3.StorageBus bus)
    {
        try
        {
            long[] retVal;
            retVal = getTypedWrapped().getDeviceTypesForStorageBus(bus.value(), null);
            return Helper.wrapEnum(org.virtualbox_4_3.DeviceType.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getDefaultIoCacheSettingForStorageController(org.virtualbox_4_3.StorageControllerType controllerType)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().getDefaultIoCacheSettingForStorageController(controllerType.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxInstancesOfUSBControllerType(org.virtualbox_4_3.ChipsetType chipset, org.virtualbox_4_3.USBControllerType type)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getMaxInstancesOfUSBControllerType(chipset.value(), type.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
