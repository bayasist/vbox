
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
 * IConsole.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IConsole extends IUnknown
{

    public IConsole(org.mozilla.interfaces.IConsole wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IConsole getTypedWrapped()
    {
        return (org.mozilla.interfaces.IConsole) getWrapped();
    }
    public org.virtualbox_4_3.IMachine getMachine()
    {
        try
        {
            org.mozilla.interfaces.IMachine retVal = getTypedWrapped().getMachine();
            return (retVal != null) ? new org.virtualbox_4_3.IMachine(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.MachineState getState()
    {
        try
        {
            long retVal = getTypedWrapped().getState();
            return org.virtualbox_4_3.MachineState.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuest getGuest()
    {
        try
        {
            org.mozilla.interfaces.IGuest retVal = getTypedWrapped().getGuest();
            return (retVal != null) ? new org.virtualbox_4_3.IGuest(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IKeyboard getKeyboard()
    {
        try
        {
            org.mozilla.interfaces.IKeyboard retVal = getTypedWrapped().getKeyboard();
            return (retVal != null) ? new org.virtualbox_4_3.IKeyboard(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMouse getMouse()
    {
        try
        {
            org.mozilla.interfaces.IMouse retVal = getTypedWrapped().getMouse();
            return (retVal != null) ? new org.virtualbox_4_3.IMouse(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IDisplay getDisplay()
    {
        try
        {
            org.mozilla.interfaces.IDisplay retVal = getTypedWrapped().getDisplay();
            return (retVal != null) ? new org.virtualbox_4_3.IDisplay(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMachineDebugger getDebugger()
    {
        try
        {
            org.mozilla.interfaces.IMachineDebugger retVal = getTypedWrapped().getDebugger();
            return (retVal != null) ? new org.virtualbox_4_3.IMachineDebugger(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IUSBDevice> getUSBDevices()
    {
        try
        {
            org.mozilla.interfaces.IUSBDevice[] retVal = getTypedWrapped().getUSBDevices(null);
            return Helper.wrap2(org.virtualbox_4_3.IUSBDevice.class, org.mozilla.interfaces.IUSBDevice.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IHostUSBDevice> getRemoteUSBDevices()
    {
        try
        {
            org.mozilla.interfaces.IHostUSBDevice[] retVal = getTypedWrapped().getRemoteUSBDevices(null);
            return Helper.wrap2(org.virtualbox_4_3.IHostUSBDevice.class, org.mozilla.interfaces.IHostUSBDevice.class, retVal);
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
    public org.virtualbox_4_3.IVRDEServerInfo getVRDEServerInfo()
    {
        try
        {
            org.mozilla.interfaces.IVRDEServerInfo retVal = getTypedWrapped().getVRDEServerInfo();
            return (retVal != null) ? new org.virtualbox_4_3.IVRDEServerInfo(retVal) : null;
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
    public List<org.virtualbox_4_3.IPCIDeviceAttachment> getAttachedPCIDevices()
    {
        try
        {
            org.mozilla.interfaces.IPCIDeviceAttachment[] retVal = getTypedWrapped().getAttachedPCIDevices(null);
            return Helper.wrap2(org.virtualbox_4_3.IPCIDeviceAttachment.class, org.mozilla.interfaces.IPCIDeviceAttachment.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getUseHostClipboard()
    {
        try
        {
            boolean retVal = getTypedWrapped().getUseHostClipboard();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setUseHostClipboard(Boolean value)
    {
        try
        {
            getTypedWrapped().setUseHostClipboard(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IEmulatedUSB getEmulatedUSB()
    {
        try
        {
            org.mozilla.interfaces.IEmulatedUSB retVal = getTypedWrapped().getEmulatedUSB();
            return (retVal != null) ? new org.virtualbox_4_3.IEmulatedUSB(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IConsole queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IConsole qiobj = Helper.queryInterface(nsobj, "{8ab7c520-2442-4b66-8d74-4ff1e195d2b6}", org.mozilla.interfaces.IConsole.class);
        return qiobj == null ? null : new IConsole(qiobj);
    }
    public org.virtualbox_4_3.IProgress powerUp()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().powerUp();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress powerUpPaused()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().powerUpPaused();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress powerDown()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().powerDown();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void reset()
    {
        try
        {
            getTypedWrapped().reset();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void pause()
    {
        try
        {
            getTypedWrapped().pause();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void resume()
    {
        try
        {
            getTypedWrapped().resume();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void powerButton()
    {
        try
        {
            getTypedWrapped().powerButton();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void sleepButton()
    {
        try
        {
            getTypedWrapped().sleepButton();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getPowerButtonHandled()
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().getPowerButtonHandled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getGuestEnteredACPIMode()
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().getGuestEnteredACPIMode();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress saveState()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().saveState();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void adoptSavedState(String savedStateFile)
    {
        try
        {
            getTypedWrapped().adoptSavedState(savedStateFile);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void discardSavedState(Boolean fRemoveFile)
    {
        try
        {
            getTypedWrapped().discardSavedState(fRemoveFile);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.DeviceActivity getDeviceActivity(org.virtualbox_4_3.DeviceType type)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getDeviceActivity(type.value());
            return org.virtualbox_4_3.DeviceActivity.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void attachUSBDevice(String id)
    {
        try
        {
            getTypedWrapped().attachUSBDevice(id);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IUSBDevice detachUSBDevice(String id)
    {
        try
        {
            org.mozilla.interfaces.IUSBDevice retVal;
            retVal = getTypedWrapped().detachUSBDevice(id);
            return (retVal != null) ? new org.virtualbox_4_3.IUSBDevice(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IUSBDevice findUSBDeviceByAddress(String name)
    {
        try
        {
            org.mozilla.interfaces.IUSBDevice retVal;
            retVal = getTypedWrapped().findUSBDeviceByAddress(name);
            return (retVal != null) ? new org.virtualbox_4_3.IUSBDevice(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IUSBDevice findUSBDeviceById(String id)
    {
        try
        {
            org.mozilla.interfaces.IUSBDevice retVal;
            retVal = getTypedWrapped().findUSBDeviceById(id);
            return (retVal != null) ? new org.virtualbox_4_3.IUSBDevice(retVal) : null;
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
    public org.virtualbox_4_3.IProgress takeSnapshot(String name, String description)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().takeSnapshot(name, description);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress deleteSnapshot(String id)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().deleteSnapshot(id);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress deleteSnapshotAndAllChildren(String id)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().deleteSnapshotAndAllChildren(id);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress deleteSnapshotRange(String startId, String endId)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().deleteSnapshotRange(startId, endId);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress restoreSnapshot(org.virtualbox_4_3.ISnapshot snapshot)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().restoreSnapshot((snapshot != null) ? snapshot.getTypedWrapped() : null);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress teleport(String hostname, Long tcpport, String password, Long maxDowntime)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().teleport(hostname, tcpport, password, maxDowntime);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
