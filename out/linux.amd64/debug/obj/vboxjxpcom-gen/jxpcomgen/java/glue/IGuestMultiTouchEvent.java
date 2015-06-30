
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
 * IGuestMultiTouchEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IGuestMultiTouchEvent extends IEvent
{

    public IGuestMultiTouchEvent(org.mozilla.interfaces.IGuestMultiTouchEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IGuestMultiTouchEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IGuestMultiTouchEvent) getWrapped();
    }
    public Integer getContactCount()
    {
        try
        {
            int retVal = getTypedWrapped().getContactCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<Short> getXPositions()
    {
        try
        {
            short[] retVal = getTypedWrapped().getXPositions(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<Short> getYPositions()
    {
        try
        {
            short[] retVal = getTypedWrapped().getYPositions(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<Integer> getContactIds()
    {
        try
        {
            int[] retVal = getTypedWrapped().getContactIds(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<Integer> getContactFlags()
    {
        try
        {
            int[] retVal = getTypedWrapped().getContactFlags(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getScanTime()
    {
        try
        {
            long retVal = getTypedWrapped().getScanTime();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IGuestMultiTouchEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IGuestMultiTouchEvent qiobj = Helper.queryInterface(nsobj, "{be8a0eb5-f4f4-4dd0-9d30-c89b873247ec}", org.mozilla.interfaces.IGuestMultiTouchEvent.class);
        return qiobj == null ? null : new IGuestMultiTouchEvent(qiobj);
    }
}
