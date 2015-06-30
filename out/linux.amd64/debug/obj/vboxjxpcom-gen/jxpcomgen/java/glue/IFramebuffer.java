
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
 * IFramebuffer.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IFramebuffer extends IUnknown
{

    public IFramebuffer(org.mozilla.interfaces.IFramebuffer wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IFramebuffer getTypedWrapped()
    {
        return (org.mozilla.interfaces.IFramebuffer) getWrapped();
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
    public Long getBitsPerPixel()
    {
        try
        {
            long retVal = getTypedWrapped().getBitsPerPixel();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getBytesPerLine()
    {
        try
        {
            long retVal = getTypedWrapped().getBytesPerLine();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getPixelFormat()
    {
        try
        {
            long retVal = getTypedWrapped().getPixelFormat();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getUsesGuestVRAM()
    {
        try
        {
            boolean retVal = getTypedWrapped().getUsesGuestVRAM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getHeightReduction()
    {
        try
        {
            long retVal = getTypedWrapped().getHeightReduction();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IFramebufferOverlay getOverlay()
    {
        try
        {
            org.mozilla.interfaces.IFramebufferOverlay retVal = getTypedWrapped().getOverlay();
            return (retVal != null) ? new org.virtualbox_4_3.IFramebufferOverlay(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getWinId()
    {
        try
        {
            long retVal = getTypedWrapped().getWinId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IFramebuffer queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IFramebuffer qiobj = Helper.queryInterface(nsobj, "{e3f122c0-adab-4fc9-a8dc-da112fb48428}", org.mozilla.interfaces.IFramebuffer.class);
        return qiobj == null ? null : new IFramebuffer(qiobj);
    }
    public void lock()
    {
        try
        {
            getTypedWrapped().lock();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void unlock()
    {
        try
        {
            getTypedWrapped().unlock();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void notifyUpdate(Long x, Long y, Long width, Long height)
    {
        try
        {
            getTypedWrapped().notifyUpdate(x, y, width, height);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    // Skipping method requestResize for it has parameters with suppressed types
    public Boolean videoModeSupported(Long width, Long height, Long bpp)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().videoModeSupported(width, height, bpp);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    // Skipping method getVisibleRegion for it has parameters with suppressed types
    // Skipping method setVisibleRegion for it has parameters with suppressed types
    // Skipping method processVHWACommand for it has parameters with suppressed types
    // Skipping method notify3DEvent for it has parameters with suppressed types
}
