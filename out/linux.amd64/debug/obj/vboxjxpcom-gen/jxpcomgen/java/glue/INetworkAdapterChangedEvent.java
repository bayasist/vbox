
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
 * INetworkAdapterChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class INetworkAdapterChangedEvent extends IEvent
{

    public INetworkAdapterChangedEvent(org.mozilla.interfaces.INetworkAdapterChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.INetworkAdapterChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.INetworkAdapterChangedEvent) getWrapped();
    }
    public org.virtualbox_4_3.INetworkAdapter getNetworkAdapter()
    {
        try
        {
            org.mozilla.interfaces.INetworkAdapter retVal = getTypedWrapped().getNetworkAdapter();
            return (retVal != null) ? new org.virtualbox_4_3.INetworkAdapter(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static INetworkAdapterChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.INetworkAdapterChangedEvent qiobj = Helper.queryInterface(nsobj, "{08889892-1EC6-4883-801D-77F56CFD0103}", org.mozilla.interfaces.INetworkAdapterChangedEvent.class);
        return qiobj == null ? null : new INetworkAdapterChangedEvent(qiobj);
    }
}
