
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
 * IBandwidthControl.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IBandwidthControl extends IUnknown
{

    public IBandwidthControl(org.mozilla.interfaces.IBandwidthControl wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IBandwidthControl getTypedWrapped()
    {
        return (org.mozilla.interfaces.IBandwidthControl) getWrapped();
    }
    public Long getNumGroups()
    {
        try
        {
            long retVal = getTypedWrapped().getNumGroups();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IBandwidthControl queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IBandwidthControl qiobj = Helper.queryInterface(nsobj, "{e2eb3930-d2f4-4f87-be17-0707e30f019f}", org.mozilla.interfaces.IBandwidthControl.class);
        return qiobj == null ? null : new IBandwidthControl(qiobj);
    }
    public void createBandwidthGroup(String name, org.virtualbox_4_3.BandwidthGroupType type, Long maxBytesPerSec)
    {
        try
        {
            getTypedWrapped().createBandwidthGroup(name, type.value(), maxBytesPerSec);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void deleteBandwidthGroup(String name)
    {
        try
        {
            getTypedWrapped().deleteBandwidthGroup(name);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IBandwidthGroup getBandwidthGroup(String name)
    {
        try
        {
            org.mozilla.interfaces.IBandwidthGroup retVal;
            retVal = getTypedWrapped().getBandwidthGroup(name);
            return (retVal != null) ? new org.virtualbox_4_3.IBandwidthGroup(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IBandwidthGroup> getAllBandwidthGroups()
    {
        try
        {
            org.mozilla.interfaces.IBandwidthGroup[] retVal;
            retVal = getTypedWrapped().getAllBandwidthGroups(null);
            return Helper.wrap2(org.virtualbox_4_3.IBandwidthGroup.class, org.mozilla.interfaces.IBandwidthGroup.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
