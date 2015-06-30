
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
 * IPCIAddress.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IPCIAddress extends IUnknown
{

    public IPCIAddress(org.mozilla.interfaces.IPCIAddress wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IPCIAddress getTypedWrapped()
    {
        return (org.mozilla.interfaces.IPCIAddress) getWrapped();
    }
    public Short getBus()
    {
        try
        {
            short retVal = getTypedWrapped().getBus();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setBus(Short value)
    {
        try
        {
            getTypedWrapped().setBus(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Short getDevice()
    {
        try
        {
            short retVal = getTypedWrapped().getDevice();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDevice(Short value)
    {
        try
        {
            getTypedWrapped().setDevice(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Short getDevFunction()
    {
        try
        {
            short retVal = getTypedWrapped().getDevFunction();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDevFunction(Short value)
    {
        try
        {
            getTypedWrapped().setDevFunction(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IPCIAddress queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IPCIAddress qiobj = Helper.queryInterface(nsobj, "{c984d15f-e191-400b-840e-970f3dad7296}", org.mozilla.interfaces.IPCIAddress.class);
        return qiobj == null ? null : new IPCIAddress(qiobj);
    }
    public Integer asLong()
    {
        try
        {
            int retVal;
            retVal = getTypedWrapped().asLong();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void fromLong(Integer number)
    {
        try
        {
            getTypedWrapped().fromLong(number);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
