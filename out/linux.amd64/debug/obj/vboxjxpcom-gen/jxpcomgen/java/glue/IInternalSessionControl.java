
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
 * IInternalSessionControl.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IInternalSessionControl extends IUnknown
{

    public IInternalSessionControl(org.mozilla.interfaces.IInternalSessionControl wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IInternalSessionControl getTypedWrapped()
    {
        return (org.mozilla.interfaces.IInternalSessionControl) getWrapped();
    }
    public static IInternalSessionControl queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IInternalSessionControl qiobj = Helper.queryInterface(nsobj, "{2d2124a7-0f62-4907-ae21-eee5a559bdde}", org.mozilla.interfaces.IInternalSessionControl.class);
        return qiobj == null ? null : new IInternalSessionControl(qiobj);
    }
    public Long getPID()
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getPID();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IConsole getRemoteConsole()
    {
        try
        {
            org.mozilla.interfaces.IConsole retVal;
            retVal = getTypedWrapped().getRemoteConsole();
            return (retVal != null) ? new org.virtualbox_4_3.IConsole(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void assignRemoteMachine(org.virtualbox_4_3.IMachine machine, org.virtualbox_4_3.IConsole console)
    {
        try
        {
            getTypedWrapped().assignRemoteMachine((machine != null) ? machine.getTypedWrapped() : null, (console != null) ? console.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void updateMachineState(org.virtualbox_4_3.MachineState machineState)
    {
        try
        {
            getTypedWrapped().updateMachineState(machineState.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void uninitialize()
    {
        try
        {
            getTypedWrapped().uninitialize();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onNetworkAdapterChange(org.virtualbox_4_3.INetworkAdapter networkAdapter, Boolean changeAdapter)
    {
        try
        {
            getTypedWrapped().onNetworkAdapterChange((networkAdapter != null) ? networkAdapter.getTypedWrapped() : null, changeAdapter);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onSerialPortChange(org.virtualbox_4_3.ISerialPort serialPort)
    {
        try
        {
            getTypedWrapped().onSerialPortChange((serialPort != null) ? serialPort.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onParallelPortChange(org.virtualbox_4_3.IParallelPort parallelPort)
    {
        try
        {
            getTypedWrapped().onParallelPortChange((parallelPort != null) ? parallelPort.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onStorageControllerChange()
    {
        try
        {
            getTypedWrapped().onStorageControllerChange();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onMediumChange(org.virtualbox_4_3.IMediumAttachment mediumAttachment, Boolean force)
    {
        try
        {
            getTypedWrapped().onMediumChange((mediumAttachment != null) ? mediumAttachment.getTypedWrapped() : null, force);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onStorageDeviceChange(org.virtualbox_4_3.IMediumAttachment mediumAttachment, Boolean remove, Boolean silent)
    {
        try
        {
            getTypedWrapped().onStorageDeviceChange((mediumAttachment != null) ? mediumAttachment.getTypedWrapped() : null, remove, silent);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onClipboardModeChange(org.virtualbox_4_3.ClipboardMode clipboardMode)
    {
        try
        {
            getTypedWrapped().onClipboardModeChange(clipboardMode.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onDragAndDropModeChange(org.virtualbox_4_3.DragAndDropMode dragAndDropMode)
    {
        try
        {
            getTypedWrapped().onDragAndDropModeChange(dragAndDropMode.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onCPUChange(Long cpu, Boolean add)
    {
        try
        {
            getTypedWrapped().onCPUChange(cpu, add);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onCPUExecutionCapChange(Long executionCap)
    {
        try
        {
            getTypedWrapped().onCPUExecutionCapChange(executionCap);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onVRDEServerChange(Boolean restart)
    {
        try
        {
            getTypedWrapped().onVRDEServerChange(restart);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onVideoCaptureChange()
    {
        try
        {
            getTypedWrapped().onVideoCaptureChange();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onUSBControllerChange()
    {
        try
        {
            getTypedWrapped().onUSBControllerChange();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onSharedFolderChange(Boolean global)
    {
        try
        {
            getTypedWrapped().onSharedFolderChange(global);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onUSBDeviceAttach(org.virtualbox_4_3.IUSBDevice device, org.virtualbox_4_3.IVirtualBoxErrorInfo error, Long maskedInterfaces)
    {
        try
        {
            getTypedWrapped().onUSBDeviceAttach((device != null) ? device.getTypedWrapped() : null, (error != null) ? error.getTypedWrapped() : null, maskedInterfaces);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onUSBDeviceDetach(String id, org.virtualbox_4_3.IVirtualBoxErrorInfo error)
    {
        try
        {
            getTypedWrapped().onUSBDeviceDetach(id, (error != null) ? error.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onShowWindow(Boolean check, Holder<Boolean> canShow, Holder<Long> winId)
    {
        try
        {
        boolean[] tmp_canShow = (boolean[])java.lang.reflect.Array.newInstance(boolean.class, 1);
        long[] tmp_winId = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            getTypedWrapped().onShowWindow(check, tmp_canShow, tmp_winId);
        canShow.value = tmp_canShow[0];
        winId.value = tmp_winId[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onBandwidthGroupChange(org.virtualbox_4_3.IBandwidthGroup bandwidthGroup)
    {
        try
        {
            getTypedWrapped().onBandwidthGroupChange((bandwidthGroup != null) ? bandwidthGroup.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void accessGuestProperty(String name, String value, String flags, Boolean isSetter, Holder<String> retValue, Holder<Long> retTimestamp, Holder<String> retFlags)
    {
        try
        {
        String[] tmp_retValue = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
        long[] tmp_retTimestamp = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        String[] tmp_retFlags = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
            getTypedWrapped().accessGuestProperty(name, value, flags, isSetter, tmp_retValue, tmp_retTimestamp, tmp_retFlags);
        retValue.value = tmp_retValue[0];
        retTimestamp.value = tmp_retTimestamp[0];
        retFlags.value = tmp_retFlags[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void enumerateGuestProperties(String patterns, Holder<List<String>> keys, Holder<List<String>> values, Holder<List<Long>> timestamps, Holder<List<String>> flags)
    {
        try
        {
        String[][] tmp_keys = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_values = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        long[][] tmp_timestamps = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        String[][] tmp_flags = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            getTypedWrapped().enumerateGuestProperties(patterns, null, tmp_keys, null, tmp_values, null, tmp_timestamps, null, tmp_flags);
        keys.value = Helper.wrap(tmp_keys[0]);
        values.value = Helper.wrap(tmp_values[0]);
        timestamps.value = Helper.wrap(tmp_timestamps[0]);
        flags.value = Helper.wrap(tmp_flags[0]);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void onlineMergeMedium(org.virtualbox_4_3.IMediumAttachment mediumAttachment, Long sourceIdx, Long targetIdx, org.virtualbox_4_3.IProgress progress)
    {
        try
        {
            getTypedWrapped().onlineMergeMedium((mediumAttachment != null) ? mediumAttachment.getTypedWrapped() : null, sourceIdx, targetIdx, (progress != null) ? progress.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void enableVMMStatistics(Boolean enable)
    {
        try
        {
            getTypedWrapped().enableVMMStatistics(enable);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void pauseWithReason(org.virtualbox_4_3.Reason reason)
    {
        try
        {
            getTypedWrapped().pauseWithReason(reason.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void resumeWithReason(org.virtualbox_4_3.Reason reason)
    {
        try
        {
            getTypedWrapped().resumeWithReason(reason.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress saveStateWithReason(org.virtualbox_4_3.Reason reason)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().saveStateWithReason(reason.value());
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
