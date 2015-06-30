
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
 * IVirtualBox.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IVirtualBox extends IUnknown
{

    public IVirtualBox(org.mozilla.interfaces.IVirtualBox wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IVirtualBox getTypedWrapped()
    {
        return (org.mozilla.interfaces.IVirtualBox) getWrapped();
    }
    public String getVersion()
    {
        try
        {
            String retVal = getTypedWrapped().getVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getVersionNormalized()
    {
        try
        {
            String retVal = getTypedWrapped().getVersionNormalized();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getRevision()
    {
        try
        {
            long retVal = getTypedWrapped().getRevision();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getPackageType()
    {
        try
        {
            String retVal = getTypedWrapped().getPackageType();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getAPIVersion()
    {
        try
        {
            String retVal = getTypedWrapped().getAPIVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getHomeFolder()
    {
        try
        {
            String retVal = getTypedWrapped().getHomeFolder();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getSettingsFilePath()
    {
        try
        {
            String retVal = getTypedWrapped().getSettingsFilePath();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IHost getHost()
    {
        try
        {
            org.mozilla.interfaces.IHost retVal = getTypedWrapped().getHost();
            return (retVal != null) ? new org.virtualbox_4_3.IHost(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ISystemProperties getSystemProperties()
    {
        try
        {
            org.mozilla.interfaces.ISystemProperties retVal = getTypedWrapped().getSystemProperties();
            return (retVal != null) ? new org.virtualbox_4_3.ISystemProperties(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMachine> getMachines()
    {
        try
        {
            org.mozilla.interfaces.IMachine[] retVal = getTypedWrapped().getMachines(null);
            return Helper.wrap2(org.virtualbox_4_3.IMachine.class, org.mozilla.interfaces.IMachine.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getMachineGroups()
    {
        try
        {
            String[] retVal = getTypedWrapped().getMachineGroups(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMedium> getHardDisks()
    {
        try
        {
            org.mozilla.interfaces.IMedium[] retVal = getTypedWrapped().getHardDisks(null);
            return Helper.wrap2(org.virtualbox_4_3.IMedium.class, org.mozilla.interfaces.IMedium.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMedium> getDVDImages()
    {
        try
        {
            org.mozilla.interfaces.IMedium[] retVal = getTypedWrapped().getDVDImages(null);
            return Helper.wrap2(org.virtualbox_4_3.IMedium.class, org.mozilla.interfaces.IMedium.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMedium> getFloppyImages()
    {
        try
        {
            org.mozilla.interfaces.IMedium[] retVal = getTypedWrapped().getFloppyImages(null);
            return Helper.wrap2(org.virtualbox_4_3.IMedium.class, org.mozilla.interfaces.IMedium.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IProgress> getProgressOperations()
    {
        try
        {
            org.mozilla.interfaces.IProgress[] retVal = getTypedWrapped().getProgressOperations(null);
            return Helper.wrap2(org.virtualbox_4_3.IProgress.class, org.mozilla.interfaces.IProgress.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IGuestOSType> getGuestOSTypes()
    {
        try
        {
            org.mozilla.interfaces.IGuestOSType[] retVal = getTypedWrapped().getGuestOSTypes(null);
            return Helper.wrap2(org.virtualbox_4_3.IGuestOSType.class, org.mozilla.interfaces.IGuestOSType.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.ISharedFolder> getSharedFolders()
    {
        try
        {
            org.mozilla.interfaces.ISharedFolder[] retVal = getTypedWrapped().getSharedFolders(null);
            return Helper.wrap2(org.virtualbox_4_3.ISharedFolder.class, org.mozilla.interfaces.ISharedFolder.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IPerformanceCollector getPerformanceCollector()
    {
        try
        {
            org.mozilla.interfaces.IPerformanceCollector retVal = getTypedWrapped().getPerformanceCollector();
            return (retVal != null) ? new org.virtualbox_4_3.IPerformanceCollector(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IDHCPServer> getDHCPServers()
    {
        try
        {
            org.mozilla.interfaces.IDHCPServer[] retVal = getTypedWrapped().getDHCPServers(null);
            return Helper.wrap2(org.virtualbox_4_3.IDHCPServer.class, org.mozilla.interfaces.IDHCPServer.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.INATNetwork> getNATNetworks()
    {
        try
        {
            org.mozilla.interfaces.INATNetwork[] retVal = getTypedWrapped().getNATNetworks(null);
            return Helper.wrap2(org.virtualbox_4_3.INATNetwork.class, org.mozilla.interfaces.INATNetwork.class, retVal);
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
    public org.virtualbox_4_3.IExtPackManager getExtensionPackManager()
    {
        try
        {
            org.mozilla.interfaces.IExtPackManager retVal = getTypedWrapped().getExtensionPackManager();
            return (retVal != null) ? new org.virtualbox_4_3.IExtPackManager(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getInternalNetworks()
    {
        try
        {
            String[] retVal = getTypedWrapped().getInternalNetworks(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getGenericNetworkDrivers()
    {
        try
        {
            String[] retVal = getTypedWrapped().getGenericNetworkDrivers(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IVirtualBox queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IVirtualBox qiobj = Helper.queryInterface(nsobj, "{fafa4e17-1ee2-4905-a10e-fe7c18bf5554}", org.mozilla.interfaces.IVirtualBox.class);
        return qiobj == null ? null : new IVirtualBox(qiobj);
    }
    public String composeMachineFilename(String name, String group, String createFlags, String baseFolder)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().composeMachineFilename(name, group, createFlags, baseFolder);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMachine createMachine(String settingsFile, String name, List<String> groups, String osTypeId, String flags)
    {
        try
        {
            org.mozilla.interfaces.IMachine retVal;
            retVal = getTypedWrapped().createMachine(settingsFile, name, groups != null ? groups.size() : 0, Helper.unwrapStr(groups), osTypeId, flags);
            return (retVal != null) ? new org.virtualbox_4_3.IMachine(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMachine openMachine(String settingsFile)
    {
        try
        {
            org.mozilla.interfaces.IMachine retVal;
            retVal = getTypedWrapped().openMachine(settingsFile);
            return (retVal != null) ? new org.virtualbox_4_3.IMachine(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void registerMachine(org.virtualbox_4_3.IMachine machine)
    {
        try
        {
            getTypedWrapped().registerMachine((machine != null) ? machine.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMachine findMachine(String nameOrId)
    {
        try
        {
            org.mozilla.interfaces.IMachine retVal;
            retVal = getTypedWrapped().findMachine(nameOrId);
            return (retVal != null) ? new org.virtualbox_4_3.IMachine(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMachine> getMachinesByGroups(List<String> groups)
    {
        try
        {
            org.mozilla.interfaces.IMachine[] retVal;
            retVal = getTypedWrapped().getMachinesByGroups(groups != null ? groups.size() : 0, Helper.unwrapStr(groups), null);
            return Helper.wrap2(org.virtualbox_4_3.IMachine.class, org.mozilla.interfaces.IMachine.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.MachineState> getMachineStates(List<org.virtualbox_4_3.IMachine> machines)
    {
        try
        {
            long[] retVal;
            retVal = getTypedWrapped().getMachineStates(machines != null ? machines.size() : 0, Helper.unwrap2(org.virtualbox_4_3.IMachine.class, org.mozilla.interfaces.IMachine.class, machines), null);
            return Helper.wrapEnum(org.virtualbox_4_3.MachineState.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IAppliance createAppliance()
    {
        try
        {
            org.mozilla.interfaces.IAppliance retVal;
            retVal = getTypedWrapped().createAppliance();
            return (retVal != null) ? new org.virtualbox_4_3.IAppliance(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMedium createHardDisk(String format, String location)
    {
        try
        {
            org.mozilla.interfaces.IMedium retVal;
            retVal = getTypedWrapped().createHardDisk(format, location);
            return (retVal != null) ? new org.virtualbox_4_3.IMedium(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMedium openMedium(String location, org.virtualbox_4_3.DeviceType deviceType, org.virtualbox_4_3.AccessMode accessMode, Boolean forceNewUuid)
    {
        try
        {
            org.mozilla.interfaces.IMedium retVal;
            retVal = getTypedWrapped().openMedium(location, deviceType.value(), accessMode.value(), forceNewUuid);
            return (retVal != null) ? new org.virtualbox_4_3.IMedium(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestOSType getGuestOSType(String id)
    {
        try
        {
            org.mozilla.interfaces.IGuestOSType retVal;
            retVal = getTypedWrapped().getGuestOSType(id);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestOSType(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void createSharedFolder(String name, String hostPath, Boolean writable, Boolean automount)
    {
        try
        {
            getTypedWrapped().createSharedFolder(name, hostPath, writable, automount);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeSharedFolder(String name)
    {
        try
        {
            getTypedWrapped().removeSharedFolder(name);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getExtraDataKeys()
    {
        try
        {
            String[] retVal;
            retVal = getTypedWrapped().getExtraDataKeys(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getExtraData(String key)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().getExtraData(key);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setExtraData(String key, String value)
    {
        try
        {
            getTypedWrapped().setExtraData(key, value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setSettingsSecret(String password)
    {
        try
        {
            getTypedWrapped().setSettingsSecret(password);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IDHCPServer createDHCPServer(String name)
    {
        try
        {
            org.mozilla.interfaces.IDHCPServer retVal;
            retVal = getTypedWrapped().createDHCPServer(name);
            return (retVal != null) ? new org.virtualbox_4_3.IDHCPServer(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IDHCPServer findDHCPServerByNetworkName(String name)
    {
        try
        {
            org.mozilla.interfaces.IDHCPServer retVal;
            retVal = getTypedWrapped().findDHCPServerByNetworkName(name);
            return (retVal != null) ? new org.virtualbox_4_3.IDHCPServer(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeDHCPServer(org.virtualbox_4_3.IDHCPServer server)
    {
        try
        {
            getTypedWrapped().removeDHCPServer((server != null) ? server.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.INATNetwork createNATNetwork(String networkName)
    {
        try
        {
            org.mozilla.interfaces.INATNetwork retVal;
            retVal = getTypedWrapped().createNATNetwork(networkName);
            return (retVal != null) ? new org.virtualbox_4_3.INATNetwork(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.INATNetwork findNATNetworkByName(String networkName)
    {
        try
        {
            org.mozilla.interfaces.INATNetwork retVal;
            retVal = getTypedWrapped().findNATNetworkByName(networkName);
            return (retVal != null) ? new org.virtualbox_4_3.INATNetwork(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeNATNetwork(org.virtualbox_4_3.INATNetwork network)
    {
        try
        {
            getTypedWrapped().removeNATNetwork((network != null) ? network.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean checkFirmwarePresent(org.virtualbox_4_3.FirmwareType firmwareType, String version, Holder<String> url, Holder<String> file)
    {
        try
        {
        String[] tmp_url = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
        String[] tmp_file = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
            boolean retVal;
            retVal = getTypedWrapped().checkFirmwarePresent(firmwareType.value(), version, tmp_url, tmp_file);
        url.value = tmp_url[0];
        file.value = tmp_file[0];
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
