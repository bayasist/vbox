
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
 * IBandwidthGroupChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IBandwidthGroupChangedEvent extends IEvent
{

    public IBandwidthGroupChangedEvent(org.mozilla.interfaces.IBandwidthGroupChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IBandwidthGroupChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IBandwidthGroupChangedEvent) getWrapped();
    }
    public org.virtualbox_4_3.IBandwidthGroup getBandwidthGroup()
    {
        try
        {
            org.mozilla.interfaces.IBandwidthGroup retVal = getTypedWrapped().getBandwidthGroup();
            return (retVal != null) ? new org.virtualbox_4_3.IBandwidthGroup(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IBandwidthGroupChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IBandwidthGroupChangedEvent qiobj = Helper.queryInterface(nsobj, "{334df94a-7556-4cbc-8c04-043096b02d82}", org.mozilla.interfaces.IBandwidthGroupChangedEvent.class);
        return qiobj == null ? null : new IBandwidthGroupChangedEvent(qiobj);
    }
}
