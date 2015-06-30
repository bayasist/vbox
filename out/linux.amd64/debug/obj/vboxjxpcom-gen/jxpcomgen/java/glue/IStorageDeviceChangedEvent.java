
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
 * IStorageDeviceChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IStorageDeviceChangedEvent extends IEvent
{

    public IStorageDeviceChangedEvent(org.mozilla.interfaces.IStorageDeviceChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IStorageDeviceChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IStorageDeviceChangedEvent) getWrapped();
    }
    public org.virtualbox_4_3.IMediumAttachment getStorageDevice()
    {
        try
        {
            org.mozilla.interfaces.IMediumAttachment retVal = getTypedWrapped().getStorageDevice();
            return (retVal != null) ? new org.virtualbox_4_3.IMediumAttachment(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRemoved()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRemoved();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getSilent()
    {
        try
        {
            boolean retVal = getTypedWrapped().getSilent();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IStorageDeviceChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IStorageDeviceChangedEvent qiobj = Helper.queryInterface(nsobj, "{232e9151-ae84-4b8e-b0f3-5c20c35caac9}", org.mozilla.interfaces.IStorageDeviceChangedEvent.class);
        return qiobj == null ? null : new IStorageDeviceChangedEvent(qiobj);
    }
}
