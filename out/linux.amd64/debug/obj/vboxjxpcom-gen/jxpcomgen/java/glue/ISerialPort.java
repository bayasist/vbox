
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
 * ISerialPort.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class ISerialPort extends IUnknown
{

    public ISerialPort(org.mozilla.interfaces.ISerialPort wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.ISerialPort getTypedWrapped()
    {
        return (org.mozilla.interfaces.ISerialPort) getWrapped();
    }
    public Long getSlot()
    {
        try
        {
            long retVal = getTypedWrapped().getSlot();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getIOBase()
    {
        try
        {
            long retVal = getTypedWrapped().getIOBase();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setIOBase(Long value)
    {
        try
        {
            getTypedWrapped().setIOBase(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getIRQ()
    {
        try
        {
            long retVal = getTypedWrapped().getIRQ();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setIRQ(Long value)
    {
        try
        {
            getTypedWrapped().setIRQ(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.PortMode getHostMode()
    {
        try
        {
            long retVal = getTypedWrapped().getHostMode();
            return org.virtualbox_4_3.PortMode.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setHostMode(org.virtualbox_4_3.PortMode value)
    {
        try
        {
            getTypedWrapped().setHostMode(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getServer()
    {
        try
        {
            boolean retVal = getTypedWrapped().getServer();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setServer(Boolean value)
    {
        try
        {
            getTypedWrapped().setServer(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getPath()
    {
        try
        {
            String retVal = getTypedWrapped().getPath();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setPath(String value)
    {
        try
        {
            getTypedWrapped().setPath(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static ISerialPort queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.ISerialPort qiobj = Helper.queryInterface(nsobj, "{937f6970-5103-4745-b78e-d28dcf1479a8}", org.mozilla.interfaces.ISerialPort.class);
        return qiobj == null ? null : new ISerialPort(qiobj);
    }
}
