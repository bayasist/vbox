
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
 * IGuestOSType.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IGuestOSType extends IUnknown
{

    public IGuestOSType(org.mozilla.interfaces.IGuestOSType wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IGuestOSType getTypedWrapped()
    {
        return (org.mozilla.interfaces.IGuestOSType) getWrapped();
    }
    public String getFamilyId()
    {
        try
        {
            String retVal = getTypedWrapped().getFamilyId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getFamilyDescription()
    {
        try
        {
            String retVal = getTypedWrapped().getFamilyDescription();
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
    public Boolean getIs64Bit()
    {
        try
        {
            boolean retVal = getTypedWrapped().getIs64Bit();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommendedIOAPIC()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedIOAPIC();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommendedVirtEx()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedVirtEx();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getRecommendedRAM()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedRAM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getRecommendedVRAM()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedVRAM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommended2DVideoAcceleration()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommended2DVideoAcceleration();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommended3DAcceleration()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommended3DAcceleration();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getRecommendedHDD()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedHDD();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
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
    public Boolean getRecommendedPAE()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedPAE();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.StorageControllerType getRecommendedDVDStorageController()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedDVDStorageController();
            return org.virtualbox_4_3.StorageControllerType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.StorageBus getRecommendedDVDStorageBus()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedDVDStorageBus();
            return org.virtualbox_4_3.StorageBus.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.StorageControllerType getRecommendedHDStorageController()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedHDStorageController();
            return org.virtualbox_4_3.StorageControllerType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.StorageBus getRecommendedHDStorageBus()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedHDStorageBus();
            return org.virtualbox_4_3.StorageBus.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.FirmwareType getRecommendedFirmware()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedFirmware();
            return org.virtualbox_4_3.FirmwareType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommendedUSBHID()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedUSBHID();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommendedHPET()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedHPET();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommendedUSBTablet()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedUSBTablet();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommendedRTCUseUTC()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedRTCUseUTC();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ChipsetType getRecommendedChipset()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedChipset();
            return org.virtualbox_4_3.ChipsetType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.AudioControllerType getRecommendedAudioController()
    {
        try
        {
            long retVal = getTypedWrapped().getRecommendedAudioController();
            return org.virtualbox_4_3.AudioControllerType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommendedFloppy()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedFloppy();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecommendedUSB()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecommendedUSB();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IGuestOSType queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IGuestOSType qiobj = Helper.queryInterface(nsobj, "{6d968f9a-858b-4c50-bf17-241f069e94c2}", org.mozilla.interfaces.IGuestOSType.class);
        return qiobj == null ? null : new IGuestOSType(qiobj);
    }
}
