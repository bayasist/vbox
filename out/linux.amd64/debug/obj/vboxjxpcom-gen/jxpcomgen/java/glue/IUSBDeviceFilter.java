
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
 * IUSBDeviceFilter.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IUSBDeviceFilter extends IUnknown
{

    public IUSBDeviceFilter(org.mozilla.interfaces.IUSBDeviceFilter wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IUSBDeviceFilter getTypedWrapped()
    {
        return (org.mozilla.interfaces.IUSBDeviceFilter) getWrapped();
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
    public Boolean getActive()
    {
        try
        {
            boolean retVal = getTypedWrapped().getActive();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setActive(Boolean value)
    {
        try
        {
            getTypedWrapped().setActive(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getVendorId()
    {
        try
        {
            String retVal = getTypedWrapped().getVendorId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVendorId(String value)
    {
        try
        {
            getTypedWrapped().setVendorId(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getProductId()
    {
        try
        {
            String retVal = getTypedWrapped().getProductId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setProductId(String value)
    {
        try
        {
            getTypedWrapped().setProductId(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getRevision()
    {
        try
        {
            String retVal = getTypedWrapped().getRevision();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setRevision(String value)
    {
        try
        {
            getTypedWrapped().setRevision(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getManufacturer()
    {
        try
        {
            String retVal = getTypedWrapped().getManufacturer();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setManufacturer(String value)
    {
        try
        {
            getTypedWrapped().setManufacturer(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getProduct()
    {
        try
        {
            String retVal = getTypedWrapped().getProduct();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setProduct(String value)
    {
        try
        {
            getTypedWrapped().setProduct(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getSerialNumber()
    {
        try
        {
            String retVal = getTypedWrapped().getSerialNumber();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setSerialNumber(String value)
    {
        try
        {
            getTypedWrapped().setSerialNumber(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getPort()
    {
        try
        {
            String retVal = getTypedWrapped().getPort();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setPort(String value)
    {
        try
        {
            getTypedWrapped().setPort(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getRemote()
    {
        try
        {
            String retVal = getTypedWrapped().getRemote();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setRemote(String value)
    {
        try
        {
            getTypedWrapped().setRemote(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaskedInterfaces()
    {
        try
        {
            long retVal = getTypedWrapped().getMaskedInterfaces();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setMaskedInterfaces(Long value)
    {
        try
        {
            getTypedWrapped().setMaskedInterfaces(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IUSBDeviceFilter queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IUSBDeviceFilter qiobj = Helper.queryInterface(nsobj, "{d6831fb4-1a94-4c2c-96ef-8d0d6192066d}", org.mozilla.interfaces.IUSBDeviceFilter.class);
        return qiobj == null ? null : new IUSBDeviceFilter(qiobj);
    }
}
