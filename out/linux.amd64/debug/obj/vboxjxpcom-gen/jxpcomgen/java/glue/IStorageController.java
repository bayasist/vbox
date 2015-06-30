
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
 * IStorageController.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IStorageController extends IUnknown
{

    public IStorageController(org.mozilla.interfaces.IStorageController wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IStorageController getTypedWrapped()
    {
        return (org.mozilla.interfaces.IStorageController) getWrapped();
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
    public Long getMaxDevicesPerPortCount()
    {
        try
        {
            long retVal = getTypedWrapped().getMaxDevicesPerPortCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMinPortCount()
    {
        try
        {
            long retVal = getTypedWrapped().getMinPortCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMaxPortCount()
    {
        try
        {
            long retVal = getTypedWrapped().getMaxPortCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getInstance()
    {
        try
        {
            long retVal = getTypedWrapped().getInstance();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setInstance(Long value)
    {
        try
        {
            getTypedWrapped().setInstance(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getPortCount()
    {
        try
        {
            long retVal = getTypedWrapped().getPortCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setPortCount(Long value)
    {
        try
        {
            getTypedWrapped().setPortCount(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.StorageBus getBus()
    {
        try
        {
            long retVal = getTypedWrapped().getBus();
            return org.virtualbox_4_3.StorageBus.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.StorageControllerType getControllerType()
    {
        try
        {
            long retVal = getTypedWrapped().getControllerType();
            return org.virtualbox_4_3.StorageControllerType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setControllerType(org.virtualbox_4_3.StorageControllerType value)
    {
        try
        {
            getTypedWrapped().setControllerType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getUseHostIOCache()
    {
        try
        {
            boolean retVal = getTypedWrapped().getUseHostIOCache();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setUseHostIOCache(Boolean value)
    {
        try
        {
            getTypedWrapped().setUseHostIOCache(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getBootable()
    {
        try
        {
            boolean retVal = getTypedWrapped().getBootable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IStorageController queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IStorageController qiobj = Helper.queryInterface(nsobj, "{a1556333-09b6-46d9-bfb7-fc239b7fbe1e}", org.mozilla.interfaces.IStorageController.class);
        return qiobj == null ? null : new IStorageController(qiobj);
    }
}
