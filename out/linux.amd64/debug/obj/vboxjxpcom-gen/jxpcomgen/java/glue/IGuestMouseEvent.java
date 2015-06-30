
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
 * IGuestMouseEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IGuestMouseEvent extends IReusableEvent
{

    public IGuestMouseEvent(org.mozilla.interfaces.IGuestMouseEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IGuestMouseEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IGuestMouseEvent) getWrapped();
    }
    public org.virtualbox_4_3.GuestMouseEventMode getMode()
    {
        try
        {
            long retVal = getTypedWrapped().getMode();
            return org.virtualbox_4_3.GuestMouseEventMode.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getX()
    {
        try
        {
            int retVal = getTypedWrapped().getX();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getY()
    {
        try
        {
            int retVal = getTypedWrapped().getY();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getZ()
    {
        try
        {
            int retVal = getTypedWrapped().getZ();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getW()
    {
        try
        {
            int retVal = getTypedWrapped().getW();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getButtons()
    {
        try
        {
            int retVal = getTypedWrapped().getButtons();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IGuestMouseEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IGuestMouseEvent qiobj = Helper.queryInterface(nsobj, "{179f8647-319c-4e7e-8150-c5837bd265f6}", org.mozilla.interfaces.IGuestMouseEvent.class);
        return qiobj == null ? null : new IGuestMouseEvent(qiobj);
    }
}
