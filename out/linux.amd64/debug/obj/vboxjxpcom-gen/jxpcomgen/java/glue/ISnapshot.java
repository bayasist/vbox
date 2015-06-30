
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
 * ISnapshot.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class ISnapshot extends IUnknown
{

    public ISnapshot(org.mozilla.interfaces.ISnapshot wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.ISnapshot getTypedWrapped()
    {
        return (org.mozilla.interfaces.ISnapshot) getWrapped();
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
    public Long getTimeStamp()
    {
        try
        {
            long retVal = getTypedWrapped().getTimeStamp();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getOnline()
    {
        try
        {
            boolean retVal = getTypedWrapped().getOnline();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMachine getMachine()
    {
        try
        {
            org.mozilla.interfaces.IMachine retVal = getTypedWrapped().getMachine();
            return (retVal != null) ? new org.virtualbox_4_3.IMachine(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ISnapshot getParent()
    {
        try
        {
            org.mozilla.interfaces.ISnapshot retVal = getTypedWrapped().getParent();
            return (retVal != null) ? new org.virtualbox_4_3.ISnapshot(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.ISnapshot> getChildren()
    {
        try
        {
            org.mozilla.interfaces.ISnapshot[] retVal = getTypedWrapped().getChildren(null);
            return Helper.wrap2(org.virtualbox_4_3.ISnapshot.class, org.mozilla.interfaces.ISnapshot.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static ISnapshot queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.ISnapshot qiobj = Helper.queryInterface(nsobj, "{0472823b-c6e7-472a-8e9f-d732e86b8463}", org.mozilla.interfaces.ISnapshot.class);
        return qiobj == null ? null : new ISnapshot(qiobj);
    }
    public Long getChildrenCount()
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().getChildrenCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
