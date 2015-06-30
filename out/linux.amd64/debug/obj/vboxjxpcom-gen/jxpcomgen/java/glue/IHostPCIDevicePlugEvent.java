
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
 * IHostPCIDevicePlugEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IHostPCIDevicePlugEvent extends IMachineEvent
{

    public IHostPCIDevicePlugEvent(org.mozilla.interfaces.IHostPCIDevicePlugEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IHostPCIDevicePlugEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IHostPCIDevicePlugEvent) getWrapped();
    }
    public Boolean getPlugged()
    {
        try
        {
            boolean retVal = getTypedWrapped().getPlugged();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getSuccess()
    {
        try
        {
            boolean retVal = getTypedWrapped().getSuccess();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IPCIDeviceAttachment getAttachment()
    {
        try
        {
            org.mozilla.interfaces.IPCIDeviceAttachment retVal = getTypedWrapped().getAttachment();
            return (retVal != null) ? new org.virtualbox_4_3.IPCIDeviceAttachment(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getMessage()
    {
        try
        {
            String retVal = getTypedWrapped().getMessage();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IHostPCIDevicePlugEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IHostPCIDevicePlugEvent qiobj = Helper.queryInterface(nsobj, "{a0bad6df-d612-47d3-89d4-db3992533948}", org.mozilla.interfaces.IHostPCIDevicePlugEvent.class);
        return qiobj == null ? null : new IHostPCIDevicePlugEvent(qiobj);
    }
}
