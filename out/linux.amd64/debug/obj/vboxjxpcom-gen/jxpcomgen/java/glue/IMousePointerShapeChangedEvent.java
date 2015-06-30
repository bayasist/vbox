
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
 * IMousePointerShapeChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IMousePointerShapeChangedEvent extends IEvent
{

    public IMousePointerShapeChangedEvent(org.mozilla.interfaces.IMousePointerShapeChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IMousePointerShapeChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IMousePointerShapeChangedEvent) getWrapped();
    }
    public Boolean getVisible()
    {
        try
        {
            boolean retVal = getTypedWrapped().getVisible();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAlpha()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAlpha();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getXhot()
    {
        try
        {
            long retVal = getTypedWrapped().getXhot();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getYhot()
    {
        try
        {
            long retVal = getTypedWrapped().getYhot();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getWidth()
    {
        try
        {
            long retVal = getTypedWrapped().getWidth();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getHeight()
    {
        try
        {
            long retVal = getTypedWrapped().getHeight();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] getShape()
    {
        try
        {
            byte[] retVal = getTypedWrapped().getShape(null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IMousePointerShapeChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IMousePointerShapeChangedEvent qiobj = Helper.queryInterface(nsobj, "{a6dcf6e8-416b-4181-8c4a-45ec95177aef}", org.mozilla.interfaces.IMousePointerShapeChangedEvent.class);
        return qiobj == null ? null : new IMousePointerShapeChangedEvent(qiobj);
    }
}
