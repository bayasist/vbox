
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
 * IPerformanceMetric.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IPerformanceMetric extends IUnknown
{

    public IPerformanceMetric(org.mozilla.interfaces.IPerformanceMetric wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IPerformanceMetric getTypedWrapped()
    {
        return (org.mozilla.interfaces.IPerformanceMetric) getWrapped();
    }
    public String getMetricName()
    {
        try
        {
            String retVal = getTypedWrapped().getMetricName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public IUnknown getObject()
    {
        try
        {
            nsISupports retVal = getTypedWrapped().getObject();
            return (retVal != null) ? new IUnknown(retVal) : null;
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
    public Long getPeriod()
    {
        try
        {
            long retVal = getTypedWrapped().getPeriod();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getCount()
    {
        try
        {
            long retVal = getTypedWrapped().getCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getUnit()
    {
        try
        {
            String retVal = getTypedWrapped().getUnit();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getMinimumValue()
    {
        try
        {
            int retVal = getTypedWrapped().getMinimumValue();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getMaximumValue()
    {
        try
        {
            int retVal = getTypedWrapped().getMaximumValue();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IPerformanceMetric queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IPerformanceMetric qiobj = Helper.queryInterface(nsobj, "{2a1a60ae-9345-4019-ad53-d34ba41cbfe9}", org.mozilla.interfaces.IPerformanceMetric.class);
        return qiobj == null ? null : new IPerformanceMetric(qiobj);
    }
}
