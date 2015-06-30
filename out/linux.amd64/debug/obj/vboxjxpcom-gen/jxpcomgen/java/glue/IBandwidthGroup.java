
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
 * IBandwidthGroup.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IBandwidthGroup extends IUnknown
{

    public IBandwidthGroup(org.mozilla.interfaces.IBandwidthGroup wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IBandwidthGroup getTypedWrapped()
    {
        return (org.mozilla.interfaces.IBandwidthGroup) getWrapped();
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
    public org.virtualbox_4_3.BandwidthGroupType getType()
    {
        try
        {
            long retVal = getTypedWrapped().getType();
            return org.virtualbox_4_3.BandwidthGroupType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getReference()
    {
        try
        {
            long retVal = getTypedWrapped().getReference();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxBytesPerSec()
    {
        try
        {
            long retVal = getTypedWrapped().getMaxBytesPerSec();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setMaxBytesPerSec(Long value)
    {
        try
        {
            getTypedWrapped().setMaxBytesPerSec(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IBandwidthGroup queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IBandwidthGroup qiobj = Helper.queryInterface(nsobj, "{badea2d7-0261-4146-89f0-6a57cc34833d}", org.mozilla.interfaces.IBandwidthGroup.class);
        return qiobj == null ? null : new IBandwidthGroup(qiobj);
    }
}
