
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
 * IInternalMachineControl.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IInternalMachineControl extends IUnknown
{

    public IInternalMachineControl(org.mozilla.interfaces.IInternalMachineControl wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IInternalMachineControl getTypedWrapped()
    {
        return (org.mozilla.interfaces.IInternalMachineControl) getWrapped();
    }
    public static IInternalMachineControl queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IInternalMachineControl qiobj = Helper.queryInterface(nsobj, "{2d9ce4b7-0ab2-4931-ac4a-e45aa66465ef}", org.mozilla.interfaces.IInternalMachineControl.class);
        return qiobj == null ? null : new IInternalMachineControl(qiobj);
    }
    public void setRemoveSavedStateFile(Boolean remove)
    {
        try
        {
            getTypedWrapped().setRemoveSavedStateFile(remove);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void updateState(org.virtualbox_4_3.MachineState state)
    {
        try
        {
            getTypedWrapped().updateState(state.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void beginPowerUp(org.virtualbox_4_3.IProgress progress)
    {
        try
        {
            getTypedWrapped().beginPowerUp((progress != null) ? progress.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void endPowerUp(Integer result)
    {
        try
        {
            getTypedWrapped().endPowerUp(result);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void beginPoweringDown(Holder<org.virtualbox_4_3.IProgress> progress)
    {
        try
        {
        org.mozilla.interfaces.IProgress[] tmp_progress = (org.mozilla.interfaces.IProgress[])java.lang.reflect.Array.newInstance(org.mozilla.interfaces.IProgress.class, 1);
            getTypedWrapped().beginPoweringDown(tmp_progress);
        progress.value = (tmp_progress[0] != null) ? new org.virtualbox_4_3.IProgress(tmp_progress[0]) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void endPoweringDown(Integer result, String errMsg)
    {
        try
        {
            getTypedWrapped().endPoweringDown(result, errMsg);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void runUSBDeviceFilters(org.virtualbox_4_3.IUSBDevice device, Holder<Boolean> matched, Holder<Long> maskedInterfaces)
    {
        try
        {
        boolean[] tmp_matched = (boolean[])java.lang.reflect.Array.newInstance(boolean.class, 1);
        long[] tmp_maskedInterfaces = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            getTypedWrapped().runUSBDeviceFilters((device != null) ? device.getTypedWrapped() : null, tmp_matched, tmp_maskedInterfaces);
        matched.value = tmp_matched[0];
        maskedInterfaces.value = tmp_maskedInterfaces[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void captureUSBDevice(String id)
    {
        try
        {
            getTypedWrapped().captureUSBDevice(id);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void detachUSBDevice(String id, Boolean done)
    {
        try
        {
            getTypedWrapped().detachUSBDevice(id, done);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void autoCaptureUSBDevices()
    {
        try
        {
            getTypedWrapped().autoCaptureUSBDevices();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void detachAllUSBDevices(Boolean done)
    {
        try
        {
            getTypedWrapped().detachAllUSBDevices(done);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress onSessionEnd(org.virtualbox_4_3.ISession session)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().onSessionEnd((session != null) ? session.getTypedWrapped() : null);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void beginSavingState(Holder<org.virtualbox_4_3.IProgress> progress, Holder<String> stateFilePath)
    {
        try
        {
        org.mozilla.interfaces.IProgress[] tmp_progress = (org.mozilla.interfaces.IProgress[])java.lang.reflect.Array.newInstance(org.mozilla.interfaces.IProgress.class, 1);
        String[] tmp_stateFilePath = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
            getTypedWrapped().beginSavingState(tmp_progress, tmp_stateFilePath);
        progress.value = (tmp_progress[0] != null) ? new org.virtualbox_4_3.IProgress(tmp_progress[0]) : null;
        stateFilePath.value = tmp_stateFilePath[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void endSavingState(Integer result, String errMsg)
    {
        try
        {
            getTypedWrapped().endSavingState(result, errMsg);
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
    public void beginTakingSnapshot(org.virtualbox_4_3.IConsole initiator, String name, String description, org.virtualbox_4_3.IProgress consoleProgress, Boolean fTakingSnapshotOnline, Holder<String> stateFilePath)
    {
        try
        {
        String[] tmp_stateFilePath = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
            getTypedWrapped().beginTakingSnapshot((initiator != null) ? initiator.getTypedWrapped() : null, name, description, (consoleProgress != null) ? consoleProgress.getTypedWrapped() : null, fTakingSnapshotOnline, tmp_stateFilePath);
        stateFilePath.value = tmp_stateFilePath[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void endTakingSnapshot(Boolean success)
    {
        try
        {
            getTypedWrapped().endTakingSnapshot(success);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress deleteSnapshot(org.virtualbox_4_3.IConsole initiator, String startId, String endId, Boolean deleteAllChildren, Holder<org.virtualbox_4_3.MachineState> machineState)
    {
        try
        {
        long[] tmp_machineState = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().deleteSnapshot((initiator != null) ? initiator.getTypedWrapped() : null, startId, endId, deleteAllChildren, tmp_machineState);
        machineState.value = org.virtualbox_4_3.MachineState.fromValue(tmp_machineState[0]);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void finishOnlineMergeMedium()
    {
        try
        {
            getTypedWrapped().finishOnlineMergeMedium();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress restoreSnapshot(org.virtualbox_4_3.IConsole initiator, org.virtualbox_4_3.ISnapshot snapshot, Holder<org.virtualbox_4_3.MachineState> machineState)
    {
        try
        {
        long[] tmp_machineState = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().restoreSnapshot((initiator != null) ? initiator.getTypedWrapped() : null, (snapshot != null) ? snapshot.getTypedWrapped() : null, tmp_machineState);
        machineState.value = org.virtualbox_4_3.MachineState.fromValue(tmp_machineState[0]);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void pullGuestProperties(Holder<List<String>> names, Holder<List<String>> values, Holder<List<Long>> timestamps, Holder<List<String>> flags)
    {
        try
        {
        String[][] tmp_names = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_values = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        long[][] tmp_timestamps = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        String[][] tmp_flags = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            getTypedWrapped().pullGuestProperties(null, tmp_names, null, tmp_values, null, tmp_timestamps, null, tmp_flags);
        names.value = Helper.wrap(tmp_names[0]);
        values.value = Helper.wrap(tmp_values[0]);
        timestamps.value = Helper.wrap(tmp_timestamps[0]);
        flags.value = Helper.wrap(tmp_flags[0]);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void pushGuestProperty(String name, String value, Long timestamp, String flags)
    {
        try
        {
            getTypedWrapped().pushGuestProperty(name, value, timestamp, flags);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void lockMedia()
    {
        try
        {
            getTypedWrapped().lockMedia();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void unlockMedia()
    {
        try
        {
            getTypedWrapped().unlockMedia();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMediumAttachment ejectMedium(org.virtualbox_4_3.IMediumAttachment attachment)
    {
        try
        {
            org.mozilla.interfaces.IMediumAttachment retVal;
            retVal = getTypedWrapped().ejectMedium((attachment != null) ? attachment.getTypedWrapped() : null);
            return (retVal != null) ? new org.virtualbox_4_3.IMediumAttachment(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void reportVmStatistics(Long validStats, Long cpuUser, Long cpuKernel, Long cpuIdle, Long memTotal, Long memFree, Long memBalloon, Long memShared, Long memCache, Long pagedTotal, Long memAllocTotal, Long memFreeTotal, Long memBalloonTotal, Long memSharedTotal, Long vmNetRx, Long vmNetTx)
    {
        try
        {
            getTypedWrapped().reportVmStatistics(validStats, cpuUser, cpuKernel, cpuIdle, memTotal, memFree, memBalloon, memShared, memCache, pagedTotal, memAllocTotal, memFreeTotal, memBalloonTotal, memSharedTotal, vmNetRx, vmNetTx);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
