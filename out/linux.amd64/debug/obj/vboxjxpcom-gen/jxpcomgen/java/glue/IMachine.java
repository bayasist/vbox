
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
 * IMachine.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IMachine extends IUnknown
{

    public IMachine(org.mozilla.interfaces.IMachine wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IMachine getTypedWrapped()
    {
        return (org.mozilla.interfaces.IMachine) getWrapped();
    }
    public org.virtualbox_4_3.IVirtualBox getParent()
    {
        try
        {
            org.mozilla.interfaces.IVirtualBox retVal = getTypedWrapped().getParent();
            return (retVal != null) ? new org.virtualbox_4_3.IVirtualBox(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] getIcon()
    {
        try
        {
            byte[] retVal = getTypedWrapped().getIcon(null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setIcon(byte[] value)
    {
        try
        {
            getTypedWrapped().setIcon(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAccessible()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAccessible();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IVirtualBoxErrorInfo getAccessError()
    {
        try
        {
            org.mozilla.interfaces.IVirtualBoxErrorInfo retVal = getTypedWrapped().getAccessError();
            return (retVal != null) ? new org.virtualbox_4_3.IVirtualBoxErrorInfo(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
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
    public void setName(String value)
    {
        try
        {
            getTypedWrapped().setName(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDescription()
    {
        try
        {
            String retVal = getTypedWrapped().getDescription();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDescription(String value)
    {
        try
        {
            getTypedWrapped().setDescription(value);
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
    public List<String> getGroups()
    {
        try
        {
            String[] retVal = getTypedWrapped().getGroups(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setGroups(List<String> value)
    {
        try
        {
            getTypedWrapped().setGroups(Helper.unwrapStr(value));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getOSTypeId()
    {
        try
        {
            String retVal = getTypedWrapped().getOSTypeId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setOSTypeId(String value)
    {
        try
        {
            getTypedWrapped().setOSTypeId(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getHardwareVersion()
    {
        try
        {
            String retVal = getTypedWrapped().getHardwareVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setHardwareVersion(String value)
    {
        try
        {
            getTypedWrapped().setHardwareVersion(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getHardwareUUID()
    {
        try
        {
            String retVal = getTypedWrapped().getHardwareUUID();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setHardwareUUID(String value)
    {
        try
        {
            getTypedWrapped().setHardwareUUID(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getCPUCount()
    {
        try
        {
            long retVal = getTypedWrapped().getCPUCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setCPUCount(Long value)
    {
        try
        {
            getTypedWrapped().setCPUCount(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCPUHotPlugEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCPUHotPlugEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setCPUHotPlugEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setCPUHotPlugEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getCPUExecutionCap()
    {
        try
        {
            long retVal = getTypedWrapped().getCPUExecutionCap();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setCPUExecutionCap(Long value)
    {
        try
        {
            getTypedWrapped().setCPUExecutionCap(value);
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
    public void setMemorySize(Long value)
    {
        try
        {
            getTypedWrapped().setMemorySize(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMemoryBalloonSize()
    {
        try
        {
            long retVal = getTypedWrapped().getMemoryBalloonSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setMemoryBalloonSize(Long value)
    {
        try
        {
            getTypedWrapped().setMemoryBalloonSize(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getPageFusionEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getPageFusionEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setPageFusionEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setPageFusionEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.GraphicsControllerType getGraphicsControllerType()
    {
        try
        {
            long retVal = getTypedWrapped().getGraphicsControllerType();
            return org.virtualbox_4_3.GraphicsControllerType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setGraphicsControllerType(org.virtualbox_4_3.GraphicsControllerType value)
    {
        try
        {
            getTypedWrapped().setGraphicsControllerType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getVRAMSize()
    {
        try
        {
            long retVal = getTypedWrapped().getVRAMSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVRAMSize(Long value)
    {
        try
        {
            getTypedWrapped().setVRAMSize(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAccelerate3DEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAccelerate3DEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAccelerate3DEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setAccelerate3DEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAccelerate2DVideoEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAccelerate2DVideoEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAccelerate2DVideoEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setAccelerate2DVideoEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMonitorCount()
    {
        try
        {
            long retVal = getTypedWrapped().getMonitorCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setMonitorCount(Long value)
    {
        try
        {
            getTypedWrapped().setMonitorCount(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getVideoCaptureEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getVideoCaptureEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVideoCaptureEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setVideoCaptureEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<Boolean> getVideoCaptureScreens()
    {
        try
        {
            boolean[] retVal = getTypedWrapped().getVideoCaptureScreens(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVideoCaptureScreens(List<Boolean> value)
    {
        try
        {
            getTypedWrapped().setVideoCaptureScreens(Helper.unwrapBoolean(value));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getVideoCaptureFile()
    {
        try
        {
            String retVal = getTypedWrapped().getVideoCaptureFile();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVideoCaptureFile(String value)
    {
        try
        {
            getTypedWrapped().setVideoCaptureFile(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getVideoCaptureWidth()
    {
        try
        {
            long retVal = getTypedWrapped().getVideoCaptureWidth();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVideoCaptureWidth(Long value)
    {
        try
        {
            getTypedWrapped().setVideoCaptureWidth(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getVideoCaptureHeight()
    {
        try
        {
            long retVal = getTypedWrapped().getVideoCaptureHeight();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVideoCaptureHeight(Long value)
    {
        try
        {
            getTypedWrapped().setVideoCaptureHeight(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getVideoCaptureRate()
    {
        try
        {
            long retVal = getTypedWrapped().getVideoCaptureRate();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVideoCaptureRate(Long value)
    {
        try
        {
            getTypedWrapped().setVideoCaptureRate(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getVideoCaptureFPS()
    {
        try
        {
            long retVal = getTypedWrapped().getVideoCaptureFPS();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVideoCaptureFPS(Long value)
    {
        try
        {
            getTypedWrapped().setVideoCaptureFPS(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IBIOSSettings getBIOSSettings()
    {
        try
        {
            org.mozilla.interfaces.IBIOSSettings retVal = getTypedWrapped().getBIOSSettings();
            return (retVal != null) ? new org.virtualbox_4_3.IBIOSSettings(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.FirmwareType getFirmwareType()
    {
        try
        {
            long retVal = getTypedWrapped().getFirmwareType();
            return org.virtualbox_4_3.FirmwareType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFirmwareType(org.virtualbox_4_3.FirmwareType value)
    {
        try
        {
            getTypedWrapped().setFirmwareType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.PointingHIDType getPointingHIDType()
    {
        try
        {
            long retVal = getTypedWrapped().getPointingHIDType();
            return org.virtualbox_4_3.PointingHIDType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setPointingHIDType(org.virtualbox_4_3.PointingHIDType value)
    {
        try
        {
            getTypedWrapped().setPointingHIDType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.KeyboardHIDType getKeyboardHIDType()
    {
        try
        {
            long retVal = getTypedWrapped().getKeyboardHIDType();
            return org.virtualbox_4_3.KeyboardHIDType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setKeyboardHIDType(org.virtualbox_4_3.KeyboardHIDType value)
    {
        try
        {
            getTypedWrapped().setKeyboardHIDType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getHPETEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getHPETEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setHPETEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setHPETEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ChipsetType getChipsetType()
    {
        try
        {
            long retVal = getTypedWrapped().getChipsetType();
            return org.virtualbox_4_3.ChipsetType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setChipsetType(org.virtualbox_4_3.ChipsetType value)
    {
        try
        {
            getTypedWrapped().setChipsetType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getSnapshotFolder()
    {
        try
        {
            String retVal = getTypedWrapped().getSnapshotFolder();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setSnapshotFolder(String value)
    {
        try
        {
            getTypedWrapped().setSnapshotFolder(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IVRDEServer getVRDEServer()
    {
        try
        {
            org.mozilla.interfaces.IVRDEServer retVal = getTypedWrapped().getVRDEServer();
            return (retVal != null) ? new org.virtualbox_4_3.IVRDEServer(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getEmulatedUSBCardReaderEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getEmulatedUSBCardReaderEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setEmulatedUSBCardReaderEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setEmulatedUSBCardReaderEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMediumAttachment> getMediumAttachments()
    {
        try
        {
            org.mozilla.interfaces.IMediumAttachment[] retVal = getTypedWrapped().getMediumAttachments(null);
            return Helper.wrap2(org.virtualbox_4_3.IMediumAttachment.class, org.mozilla.interfaces.IMediumAttachment.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IUSBController> getUSBControllers()
    {
        try
        {
            org.mozilla.interfaces.IUSBController[] retVal = getTypedWrapped().getUSBControllers(null);
            return Helper.wrap2(org.virtualbox_4_3.IUSBController.class, org.mozilla.interfaces.IUSBController.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IUSBDeviceFilters getUSBDeviceFilters()
    {
        try
        {
            org.mozilla.interfaces.IUSBDeviceFilters retVal = getTypedWrapped().getUSBDeviceFilters();
            return (retVal != null) ? new org.virtualbox_4_3.IUSBDeviceFilters(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IAudioAdapter getAudioAdapter()
    {
        try
        {
            org.mozilla.interfaces.IAudioAdapter retVal = getTypedWrapped().getAudioAdapter();
            return (retVal != null) ? new org.virtualbox_4_3.IAudioAdapter(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IStorageController> getStorageControllers()
    {
        try
        {
            org.mozilla.interfaces.IStorageController[] retVal = getTypedWrapped().getStorageControllers(null);
            return Helper.wrap2(org.virtualbox_4_3.IStorageController.class, org.mozilla.interfaces.IStorageController.class, retVal);
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
    public Boolean getSettingsModified()
    {
        try
        {
            boolean retVal = getTypedWrapped().getSettingsModified();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.SessionState getSessionState()
    {
        try
        {
            long retVal = getTypedWrapped().getSessionState();
            return org.virtualbox_4_3.SessionState.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getSessionType()
    {
        try
        {
            String retVal = getTypedWrapped().getSessionType();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getSessionPID()
    {
        try
        {
            long retVal = getTypedWrapped().getSessionPID();
            return retVal;
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
    public Long getLastStateChange()
    {
        try
        {
            long retVal = getTypedWrapped().getLastStateChange();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getStateFilePath()
    {
        try
        {
            String retVal = getTypedWrapped().getStateFilePath();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLogFolder()
    {
        try
        {
            String retVal = getTypedWrapped().getLogFolder();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ISnapshot getCurrentSnapshot()
    {
        try
        {
            org.mozilla.interfaces.ISnapshot retVal = getTypedWrapped().getCurrentSnapshot();
            return (retVal != null) ? new org.virtualbox_4_3.ISnapshot(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getSnapshotCount()
    {
        try
        {
            long retVal = getTypedWrapped().getSnapshotCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCurrentStateModified()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCurrentStateModified();
            return retVal;
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
    public org.virtualbox_4_3.ClipboardMode getClipboardMode()
    {
        try
        {
            long retVal = getTypedWrapped().getClipboardMode();
            return org.virtualbox_4_3.ClipboardMode.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setClipboardMode(org.virtualbox_4_3.ClipboardMode value)
    {
        try
        {
            getTypedWrapped().setClipboardMode(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.DragAndDropMode getDragAndDropMode()
    {
        try
        {
            long retVal = getTypedWrapped().getDragAndDropMode();
            return org.virtualbox_4_3.DragAndDropMode.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDragAndDropMode(org.virtualbox_4_3.DragAndDropMode value)
    {
        try
        {
            getTypedWrapped().setDragAndDropMode(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getGuestPropertyNotificationPatterns()
    {
        try
        {
            String retVal = getTypedWrapped().getGuestPropertyNotificationPatterns();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setGuestPropertyNotificationPatterns(String value)
    {
        try
        {
            getTypedWrapped().setGuestPropertyNotificationPatterns(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getTeleporterEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getTeleporterEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTeleporterEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setTeleporterEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getTeleporterPort()
    {
        try
        {
            long retVal = getTypedWrapped().getTeleporterPort();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTeleporterPort(Long value)
    {
        try
        {
            getTypedWrapped().setTeleporterPort(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getTeleporterAddress()
    {
        try
        {
            String retVal = getTypedWrapped().getTeleporterAddress();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTeleporterAddress(String value)
    {
        try
        {
            getTypedWrapped().setTeleporterAddress(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getTeleporterPassword()
    {
        try
        {
            String retVal = getTypedWrapped().getTeleporterPassword();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTeleporterPassword(String value)
    {
        try
        {
            getTypedWrapped().setTeleporterPassword(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.FaultToleranceState getFaultToleranceState()
    {
        try
        {
            long retVal = getTypedWrapped().getFaultToleranceState();
            return org.virtualbox_4_3.FaultToleranceState.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFaultToleranceState(org.virtualbox_4_3.FaultToleranceState value)
    {
        try
        {
            getTypedWrapped().setFaultToleranceState(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getFaultTolerancePort()
    {
        try
        {
            long retVal = getTypedWrapped().getFaultTolerancePort();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFaultTolerancePort(Long value)
    {
        try
        {
            getTypedWrapped().setFaultTolerancePort(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getFaultToleranceAddress()
    {
        try
        {
            String retVal = getTypedWrapped().getFaultToleranceAddress();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFaultToleranceAddress(String value)
    {
        try
        {
            getTypedWrapped().setFaultToleranceAddress(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getFaultTolerancePassword()
    {
        try
        {
            String retVal = getTypedWrapped().getFaultTolerancePassword();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFaultTolerancePassword(String value)
    {
        try
        {
            getTypedWrapped().setFaultTolerancePassword(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getFaultToleranceSyncInterval()
    {
        try
        {
            long retVal = getTypedWrapped().getFaultToleranceSyncInterval();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFaultToleranceSyncInterval(Long value)
    {
        try
        {
            getTypedWrapped().setFaultToleranceSyncInterval(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRTCUseUTC()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRTCUseUTC();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setRTCUseUTC(Boolean value)
    {
        try
        {
            getTypedWrapped().setRTCUseUTC(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getIOCacheEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getIOCacheEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setIOCacheEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setIOCacheEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getIOCacheSize()
    {
        try
        {
            long retVal = getTypedWrapped().getIOCacheSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setIOCacheSize(Long value)
    {
        try
        {
            getTypedWrapped().setIOCacheSize(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IPCIDeviceAttachment> getPCIDeviceAssignments()
    {
        try
        {
            org.mozilla.interfaces.IPCIDeviceAttachment[] retVal = getTypedWrapped().getPCIDeviceAssignments(null);
            return Helper.wrap2(org.virtualbox_4_3.IPCIDeviceAttachment.class, org.mozilla.interfaces.IPCIDeviceAttachment.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IBandwidthControl getBandwidthControl()
    {
        try
        {
            org.mozilla.interfaces.IBandwidthControl retVal = getTypedWrapped().getBandwidthControl();
            return (retVal != null) ? new org.virtualbox_4_3.IBandwidthControl(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getTracingEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getTracingEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTracingEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setTracingEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getTracingConfig()
    {
        try
        {
            String retVal = getTypedWrapped().getTracingConfig();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTracingConfig(String value)
    {
        try
        {
            getTypedWrapped().setTracingConfig(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAllowTracingToAccessVM()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAllowTracingToAccessVM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAllowTracingToAccessVM(Boolean value)
    {
        try
        {
            getTypedWrapped().setAllowTracingToAccessVM(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAutostartEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAutostartEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAutostartEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setAutostartEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getAutostartDelay()
    {
        try
        {
            long retVal = getTypedWrapped().getAutostartDelay();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAutostartDelay(Long value)
    {
        try
        {
            getTypedWrapped().setAutostartDelay(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.AutostopType getAutostopType()
    {
        try
        {
            long retVal = getTypedWrapped().getAutostopType();
            return org.virtualbox_4_3.AutostopType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAutostopType(org.virtualbox_4_3.AutostopType value)
    {
        try
        {
            getTypedWrapped().setAutostopType(value.value());
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
    public Boolean getUSBProxyAvailable()
    {
        try
        {
            boolean retVal = getTypedWrapped().getUSBProxyAvailable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IMachine queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IMachine qiobj = Helper.queryInterface(nsobj, "{480cf695-2d8d-4256-9c7c-cce4184fa048}", org.mozilla.interfaces.IMachine.class);
        return qiobj == null ? null : new IMachine(qiobj);
    }
    public void lockMachine(org.virtualbox_4_3.ISession session, org.virtualbox_4_3.LockType lockType)
    {
        try
        {
            getTypedWrapped().lockMachine((session != null) ? session.getTypedWrapped() : null, lockType.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress launchVMProcess(org.virtualbox_4_3.ISession session, String type, String environment)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().launchVMProcess((session != null) ? session.getTypedWrapped() : null, type, environment);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setBootOrder(Long position, org.virtualbox_4_3.DeviceType device)
    {
        try
        {
            getTypedWrapped().setBootOrder(position, device.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.DeviceType getBootOrder(Long position)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getBootOrder(position);
            return org.virtualbox_4_3.DeviceType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void attachDevice(String name, Integer controllerPort, Integer device, org.virtualbox_4_3.DeviceType type, org.virtualbox_4_3.IMedium medium)
    {
        try
        {
            getTypedWrapped().attachDevice(name, controllerPort, device, type.value(), (medium != null) ? medium.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void attachDeviceWithoutMedium(String name, Integer controllerPort, Integer device, org.virtualbox_4_3.DeviceType type)
    {
        try
        {
            getTypedWrapped().attachDeviceWithoutMedium(name, controllerPort, device, type.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void detachDevice(String name, Integer controllerPort, Integer device)
    {
        try
        {
            getTypedWrapped().detachDevice(name, controllerPort, device);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void passthroughDevice(String name, Integer controllerPort, Integer device, Boolean passthrough)
    {
        try
        {
            getTypedWrapped().passthroughDevice(name, controllerPort, device, passthrough);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void temporaryEjectDevice(String name, Integer controllerPort, Integer device, Boolean temporaryEject)
    {
        try
        {
            getTypedWrapped().temporaryEjectDevice(name, controllerPort, device, temporaryEject);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void nonRotationalDevice(String name, Integer controllerPort, Integer device, Boolean nonRotational)
    {
        try
        {
            getTypedWrapped().nonRotationalDevice(name, controllerPort, device, nonRotational);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAutoDiscardForDevice(String name, Integer controllerPort, Integer device, Boolean discard)
    {
        try
        {
            getTypedWrapped().setAutoDiscardForDevice(name, controllerPort, device, discard);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setHotPluggableForDevice(String name, Integer controllerPort, Integer device, Boolean hotPluggable)
    {
        try
        {
            getTypedWrapped().setHotPluggableForDevice(name, controllerPort, device, hotPluggable);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setBandwidthGroupForDevice(String name, Integer controllerPort, Integer device, org.virtualbox_4_3.IBandwidthGroup bandwidthGroup)
    {
        try
        {
            getTypedWrapped().setBandwidthGroupForDevice(name, controllerPort, device, (bandwidthGroup != null) ? bandwidthGroup.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setNoBandwidthGroupForDevice(String name, Integer controllerPort, Integer device)
    {
        try
        {
            getTypedWrapped().setNoBandwidthGroupForDevice(name, controllerPort, device);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void unmountMedium(String name, Integer controllerPort, Integer device, Boolean force)
    {
        try
        {
            getTypedWrapped().unmountMedium(name, controllerPort, device, force);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void mountMedium(String name, Integer controllerPort, Integer device, org.virtualbox_4_3.IMedium medium, Boolean force)
    {
        try
        {
            getTypedWrapped().mountMedium(name, controllerPort, device, (medium != null) ? medium.getTypedWrapped() : null, force);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMedium getMedium(String name, Integer controllerPort, Integer device)
    {
        try
        {
            org.mozilla.interfaces.IMedium retVal;
            retVal = getTypedWrapped().getMedium(name, controllerPort, device);
            return (retVal != null) ? new org.virtualbox_4_3.IMedium(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMediumAttachment> getMediumAttachmentsOfController(String name)
    {
        try
        {
            org.mozilla.interfaces.IMediumAttachment[] retVal;
            retVal = getTypedWrapped().getMediumAttachmentsOfController(name, null);
            return Helper.wrap2(org.virtualbox_4_3.IMediumAttachment.class, org.mozilla.interfaces.IMediumAttachment.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMediumAttachment getMediumAttachment(String name, Integer controllerPort, Integer device)
    {
        try
        {
            org.mozilla.interfaces.IMediumAttachment retVal;
            retVal = getTypedWrapped().getMediumAttachment(name, controllerPort, device);
            return (retVal != null) ? new org.virtualbox_4_3.IMediumAttachment(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void attachHostPCIDevice(Integer hostAddress, Integer desiredGuestAddress, Boolean tryToUnbind)
    {
        try
        {
            getTypedWrapped().attachHostPCIDevice(hostAddress, desiredGuestAddress, tryToUnbind);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void detachHostPCIDevice(Integer hostAddress)
    {
        try
        {
            getTypedWrapped().detachHostPCIDevice(hostAddress);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.INetworkAdapter getNetworkAdapter(Long slot)
    {
        try
        {
            org.mozilla.interfaces.INetworkAdapter retVal;
            retVal = getTypedWrapped().getNetworkAdapter(slot);
            return (retVal != null) ? new org.virtualbox_4_3.INetworkAdapter(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IStorageController addStorageController(String name, org.virtualbox_4_3.StorageBus connectionType)
    {
        try
        {
            org.mozilla.interfaces.IStorageController retVal;
            retVal = getTypedWrapped().addStorageController(name, connectionType.value());
            return (retVal != null) ? new org.virtualbox_4_3.IStorageController(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IStorageController getStorageControllerByName(String name)
    {
        try
        {
            org.mozilla.interfaces.IStorageController retVal;
            retVal = getTypedWrapped().getStorageControllerByName(name);
            return (retVal != null) ? new org.virtualbox_4_3.IStorageController(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IStorageController getStorageControllerByInstance(Long instance)
    {
        try
        {
            org.mozilla.interfaces.IStorageController retVal;
            retVal = getTypedWrapped().getStorageControllerByInstance(instance);
            return (retVal != null) ? new org.virtualbox_4_3.IStorageController(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeStorageController(String name)
    {
        try
        {
            getTypedWrapped().removeStorageController(name);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setStorageControllerBootable(String name, Boolean bootable)
    {
        try
        {
            getTypedWrapped().setStorageControllerBootable(name, bootable);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IUSBController addUSBController(String name, org.virtualbox_4_3.USBControllerType type)
    {
        try
        {
            org.mozilla.interfaces.IUSBController retVal;
            retVal = getTypedWrapped().addUSBController(name, type.value());
            return (retVal != null) ? new org.virtualbox_4_3.IUSBController(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeUSBController(String name)
    {
        try
        {
            getTypedWrapped().removeUSBController(name);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IUSBController getUSBControllerByName(String name)
    {
        try
        {
            org.mozilla.interfaces.IUSBController retVal;
            retVal = getTypedWrapped().getUSBControllerByName(name);
            return (retVal != null) ? new org.virtualbox_4_3.IUSBController(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getUSBControllerCountByType(org.virtualbox_4_3.USBControllerType type)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getUSBControllerCountByType(type.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ISerialPort getSerialPort(Long slot)
    {
        try
        {
            org.mozilla.interfaces.ISerialPort retVal;
            retVal = getTypedWrapped().getSerialPort(slot);
            return (retVal != null) ? new org.virtualbox_4_3.ISerialPort(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IParallelPort getParallelPort(Long slot)
    {
        try
        {
            org.mozilla.interfaces.IParallelPort retVal;
            retVal = getTypedWrapped().getParallelPort(slot);
            return (retVal != null) ? new org.virtualbox_4_3.IParallelPort(retVal) : null;
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
    public Boolean getCPUProperty(org.virtualbox_4_3.CPUPropertyType property)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().getCPUProperty(property.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setCPUProperty(org.virtualbox_4_3.CPUPropertyType property, Boolean value)
    {
        try
        {
            getTypedWrapped().setCPUProperty(property.value(), value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void getCPUIDLeaf(Long id, Holder<Long> valEax, Holder<Long> valEbx, Holder<Long> valEcx, Holder<Long> valEdx)
    {
        try
        {
        long[] tmp_valEax = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_valEbx = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_valEcx = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_valEdx = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            getTypedWrapped().getCPUIDLeaf(id, tmp_valEax, tmp_valEbx, tmp_valEcx, tmp_valEdx);
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
    public void setCPUIDLeaf(Long id, Long valEax, Long valEbx, Long valEcx, Long valEdx)
    {
        try
        {
            getTypedWrapped().setCPUIDLeaf(id, valEax, valEbx, valEcx, valEdx);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeCPUIDLeaf(Long id)
    {
        try
        {
            getTypedWrapped().removeCPUIDLeaf(id);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeAllCPUIDLeaves()
    {
        try
        {
            getTypedWrapped().removeAllCPUIDLeaves();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getHWVirtExProperty(org.virtualbox_4_3.HWVirtExPropertyType property)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().getHWVirtExProperty(property.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setHWVirtExProperty(org.virtualbox_4_3.HWVirtExPropertyType property, Boolean value)
    {
        try
        {
            getTypedWrapped().setHWVirtExProperty(property.value(), value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress setSettingsFilePath(String settingsFilePath)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().setSettingsFilePath(settingsFilePath);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void saveSettings()
    {
        try
        {
            getTypedWrapped().saveSettings();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void discardSettings()
    {
        try
        {
            getTypedWrapped().discardSettings();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMedium> unregister(org.virtualbox_4_3.CleanupMode cleanupMode)
    {
        try
        {
            org.mozilla.interfaces.IMedium[] retVal;
            retVal = getTypedWrapped().unregister(cleanupMode.value(), null);
            return Helper.wrap2(org.virtualbox_4_3.IMedium.class, org.mozilla.interfaces.IMedium.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress deleteConfig(List<org.virtualbox_4_3.IMedium> media)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().deleteConfig(media != null ? media.size() : 0, Helper.unwrap2(org.virtualbox_4_3.IMedium.class, org.mozilla.interfaces.IMedium.class, media));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IVirtualSystemDescription exportTo(org.virtualbox_4_3.IAppliance appliance, String location)
    {
        try
        {
            org.mozilla.interfaces.IVirtualSystemDescription retVal;
            retVal = getTypedWrapped().exportTo((appliance != null) ? appliance.getTypedWrapped() : null, location);
            return (retVal != null) ? new org.virtualbox_4_3.IVirtualSystemDescription(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ISnapshot findSnapshot(String nameOrId)
    {
        try
        {
            org.mozilla.interfaces.ISnapshot retVal;
            retVal = getTypedWrapped().findSnapshot(nameOrId);
            return (retVal != null) ? new org.virtualbox_4_3.ISnapshot(retVal) : null;
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
    public Boolean canShowConsoleWindow()
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().canShowConsoleWindow();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long showConsoleWindow()
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().showConsoleWindow();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void getGuestProperty(String name, Holder<String> value, Holder<Long> timestamp, Holder<String> flags)
    {
        try
        {
        String[] tmp_value = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
        long[] tmp_timestamp = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        String[] tmp_flags = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
            getTypedWrapped().getGuestProperty(name, tmp_value, tmp_timestamp, tmp_flags);
        value.value = tmp_value[0];
        timestamp.value = tmp_timestamp[0];
        flags.value = tmp_flags[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getGuestPropertyValue(String property)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().getGuestPropertyValue(property);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getGuestPropertyTimestamp(String property)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getGuestPropertyTimestamp(property);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setGuestProperty(String property, String value, String flags)
    {
        try
        {
            getTypedWrapped().setGuestProperty(property, value, flags);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setGuestPropertyValue(String property, String value)
    {
        try
        {
            getTypedWrapped().setGuestPropertyValue(property, value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void deleteGuestProperty(String name)
    {
        try
        {
            getTypedWrapped().deleteGuestProperty(name);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void enumerateGuestProperties(String patterns, Holder<List<String>> names, Holder<List<String>> values, Holder<List<Long>> timestamps, Holder<List<String>> flags)
    {
        try
        {
        String[][] tmp_names = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_values = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        long[][] tmp_timestamps = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        String[][] tmp_flags = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            getTypedWrapped().enumerateGuestProperties(patterns, null, tmp_names, null, tmp_values, null, tmp_timestamps, null, tmp_flags);
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
    public void querySavedGuestScreenInfo(Long screenId, Holder<Long> originX, Holder<Long> originY, Holder<Long> width, Holder<Long> height, Holder<Boolean> enabled)
    {
        try
        {
        long[] tmp_originX = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_originY = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_width = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_height = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        boolean[] tmp_enabled = (boolean[])java.lang.reflect.Array.newInstance(boolean.class, 1);
            getTypedWrapped().querySavedGuestScreenInfo(screenId, tmp_originX, tmp_originY, tmp_width, tmp_height, tmp_enabled);
        originX.value = tmp_originX[0];
        originY.value = tmp_originY[0];
        width.value = tmp_width[0];
        height.value = tmp_height[0];
        enabled.value = tmp_enabled[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void querySavedThumbnailSize(Long screenId, Holder<Long> size, Holder<Long> width, Holder<Long> height)
    {
        try
        {
        long[] tmp_size = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_width = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_height = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            getTypedWrapped().querySavedThumbnailSize(screenId, tmp_size, tmp_width, tmp_height);
        size.value = tmp_size[0];
        width.value = tmp_width[0];
        height.value = tmp_height[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] readSavedThumbnailToArray(Long screenId, Boolean BGR, Holder<Long> width, Holder<Long> height)
    {
        try
        {
        long[] tmp_width = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_height = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            byte[] retVal;
            retVal = getTypedWrapped().readSavedThumbnailToArray(screenId, BGR, tmp_width, tmp_height, null);
        width.value = tmp_width[0];
        height.value = tmp_height[0];
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] readSavedThumbnailPNGToArray(Long screenId, Holder<Long> width, Holder<Long> height)
    {
        try
        {
        long[] tmp_width = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_height = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            byte[] retVal;
            retVal = getTypedWrapped().readSavedThumbnailPNGToArray(screenId, tmp_width, tmp_height, null);
        width.value = tmp_width[0];
        height.value = tmp_height[0];
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void querySavedScreenshotPNGSize(Long screenId, Holder<Long> size, Holder<Long> width, Holder<Long> height)
    {
        try
        {
        long[] tmp_size = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_width = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_height = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            getTypedWrapped().querySavedScreenshotPNGSize(screenId, tmp_size, tmp_width, tmp_height);
        size.value = tmp_size[0];
        width.value = tmp_width[0];
        height.value = tmp_height[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] readSavedScreenshotPNGToArray(Long screenId, Holder<Long> width, Holder<Long> height)
    {
        try
        {
        long[] tmp_width = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_height = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            byte[] retVal;
            retVal = getTypedWrapped().readSavedScreenshotPNGToArray(screenId, tmp_width, tmp_height, null);
        width.value = tmp_width[0];
        height.value = tmp_height[0];
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void hotPlugCPU(Long cpu)
    {
        try
        {
            getTypedWrapped().hotPlugCPU(cpu);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void hotUnplugCPU(Long cpu)
    {
        try
        {
            getTypedWrapped().hotUnplugCPU(cpu);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCPUStatus(Long cpu)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().getCPUStatus(cpu);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String queryLogFilename(Long idx)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().queryLogFilename(idx);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] readLog(Long idx, Long offset, Long size)
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().readLog(idx, offset, size, null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress cloneTo(org.virtualbox_4_3.IMachine target, org.virtualbox_4_3.CloneMode mode, List<org.virtualbox_4_3.CloneOptions> options)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().cloneTo((target != null) ? target.getTypedWrapped() : null, mode.value(), options != null ? options.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.CloneOptions.class, options));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
