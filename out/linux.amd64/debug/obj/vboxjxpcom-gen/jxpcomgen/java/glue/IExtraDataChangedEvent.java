
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
 * IExtraDataChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IExtraDataChangedEvent extends IEvent
{

    public IExtraDataChangedEvent(org.mozilla.interfaces.IExtraDataChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IExtraDataChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IExtraDataChangedEvent) getWrapped();
    }
    public String getMachineId()
    {
        try
        {
            String retVal = getTypedWrapped().getMachineId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getKey()
    {
        try
        {
            String retVal = getTypedWrapped().getKey();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getValue()
    {
        try
        {
            String retVal = getTypedWrapped().getValue();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IExtraDataChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IExtraDataChangedEvent qiobj = Helper.queryInterface(nsobj, "{024F00CE-6E0B-492A-A8D0-968472A94DC7}", org.mozilla.interfaces.IExtraDataChangedEvent.class);
        return qiobj == null ? null : new IExtraDataChangedEvent(qiobj);
    }
}
