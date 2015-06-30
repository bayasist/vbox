
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
 * IPCIDeviceAttachment.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IPCIDeviceAttachment extends IUnknown
{

    public IPCIDeviceAttachment(org.mozilla.interfaces.IPCIDeviceAttachment wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IPCIDeviceAttachment getTypedWrapped()
    {
        return (org.mozilla.interfaces.IPCIDeviceAttachment) getWrapped();
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
    public Boolean getIsPhysicalDevice()
    {
        try
        {
            boolean retVal = getTypedWrapped().getIsPhysicalDevice();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getHostAddress()
    {
        try
        {
            int retVal = getTypedWrapped().getHostAddress();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getGuestAddress()
    {
        try
        {
            int retVal = getTypedWrapped().getGuestAddress();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IPCIDeviceAttachment queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IPCIDeviceAttachment qiobj = Helper.queryInterface(nsobj, "{91f33d6f-e621-4f70-a77e-15f0e3c714d5}", org.mozilla.interfaces.IPCIDeviceAttachment.class);
        return qiobj == null ? null : new IPCIDeviceAttachment(qiobj);
    }
}
