
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
 * IFramebufferOverlay.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IFramebufferOverlay extends IFramebuffer
{

    public IFramebufferOverlay(org.mozilla.interfaces.IFramebufferOverlay wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IFramebufferOverlay getTypedWrapped()
    {
        return (org.mozilla.interfaces.IFramebufferOverlay) getWrapped();
    }
    public Long getX()
    {
        try
        {
            long retVal = getTypedWrapped().getX();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getY()
    {
        try
        {
            long retVal = getTypedWrapped().getY();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
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
    public void setVisible(Boolean value)
    {
        try
        {
            getTypedWrapped().setVisible(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getAlpha()
    {
        try
        {
            long retVal = getTypedWrapped().getAlpha();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAlpha(Long value)
    {
        try
        {
            getTypedWrapped().setAlpha(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IFramebufferOverlay queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IFramebufferOverlay qiobj = Helper.queryInterface(nsobj, "{0bcc1c7e-e415-47d2-bfdb-e4c705fb0f47}", org.mozilla.interfaces.IFramebufferOverlay.class);
        return qiobj == null ? null : new IFramebufferOverlay(qiobj);
    }
    public void move(Long x, Long y)
    {
        try
        {
            getTypedWrapped().move(x, y);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
