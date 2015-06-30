
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
 * IUSBDeviceFilters.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IUSBDeviceFilters extends IUnknown
{

    public IUSBDeviceFilters(org.mozilla.interfaces.IUSBDeviceFilters wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IUSBDeviceFilters getTypedWrapped()
    {
        return (org.mozilla.interfaces.IUSBDeviceFilters) getWrapped();
    }
    public List<org.virtualbox_4_3.IUSBDeviceFilter> getDeviceFilters()
    {
        try
        {
            org.mozilla.interfaces.IUSBDeviceFilter[] retVal = getTypedWrapped().getDeviceFilters(null);
            return Helper.wrap2(org.virtualbox_4_3.IUSBDeviceFilter.class, org.mozilla.interfaces.IUSBDeviceFilter.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IUSBDeviceFilters queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IUSBDeviceFilters qiobj = Helper.queryInterface(nsobj, "{2ab550b2-53cc-4c2e-ae07-0adf4114e75c}", org.mozilla.interfaces.IUSBDeviceFilters.class);
        return qiobj == null ? null : new IUSBDeviceFilters(qiobj);
    }
    public org.virtualbox_4_3.IUSBDeviceFilter createDeviceFilter(String name)
    {
        try
        {
            org.mozilla.interfaces.IUSBDeviceFilter retVal;
            retVal = getTypedWrapped().createDeviceFilter(name);
            return (retVal != null) ? new org.virtualbox_4_3.IUSBDeviceFilter(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void insertDeviceFilter(Long position, org.virtualbox_4_3.IUSBDeviceFilter filter)
    {
        try
        {
            getTypedWrapped().insertDeviceFilter(position, (filter != null) ? filter.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IUSBDeviceFilter removeDeviceFilter(Long position)
    {
        try
        {
            org.mozilla.interfaces.IUSBDeviceFilter retVal;
            retVal = getTypedWrapped().removeDeviceFilter(position);
            return (retVal != null) ? new org.virtualbox_4_3.IUSBDeviceFilter(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
