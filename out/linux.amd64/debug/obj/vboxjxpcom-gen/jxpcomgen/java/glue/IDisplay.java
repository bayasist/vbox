
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
 * IDisplay.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IDisplay extends IUnknown
{

    public IDisplay(org.mozilla.interfaces.IDisplay wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IDisplay getTypedWrapped()
    {
        return (org.mozilla.interfaces.IDisplay) getWrapped();
    }
    public static IDisplay queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IDisplay qiobj = Helper.queryInterface(nsobj, "{480b372c-c0b5-4c23-9bd7-dcbb85b1594c}", org.mozilla.interfaces.IDisplay.class);
        return qiobj == null ? null : new IDisplay(qiobj);
    }
    public void getScreenResolution(Long screenId, Holder<Long> width, Holder<Long> height, Holder<Long> bitsPerPixel, Holder<Integer> xOrigin, Holder<Integer> yOrigin)
    {
        try
        {
        long[] tmp_width = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_height = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_bitsPerPixel = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        int[] tmp_xOrigin = (int[])java.lang.reflect.Array.newInstance(int.class, 1);
        int[] tmp_yOrigin = (int[])java.lang.reflect.Array.newInstance(int.class, 1);
            getTypedWrapped().getScreenResolution(screenId, tmp_width, tmp_height, tmp_bitsPerPixel, tmp_xOrigin, tmp_yOrigin);
        width.value = tmp_width[0];
        height.value = tmp_height[0];
        bitsPerPixel.value = tmp_bitsPerPixel[0];
        xOrigin.value = tmp_xOrigin[0];
        yOrigin.value = tmp_yOrigin[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFramebuffer(Long screenId, org.virtualbox_4_3.IFramebuffer framebuffer)
    {
        try
        {
            getTypedWrapped().setFramebuffer(screenId, (framebuffer != null) ? framebuffer.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void getFramebuffer(Long screenId, Holder<org.virtualbox_4_3.IFramebuffer> framebuffer, Holder<Integer> xOrigin, Holder<Integer> yOrigin)
    {
        try
        {
        org.mozilla.interfaces.IFramebuffer[] tmp_framebuffer = (org.mozilla.interfaces.IFramebuffer[])java.lang.reflect.Array.newInstance(org.mozilla.interfaces.IFramebuffer.class, 1);
        int[] tmp_xOrigin = (int[])java.lang.reflect.Array.newInstance(int.class, 1);
        int[] tmp_yOrigin = (int[])java.lang.reflect.Array.newInstance(int.class, 1);
            getTypedWrapped().getFramebuffer(screenId, tmp_framebuffer, tmp_xOrigin, tmp_yOrigin);
        framebuffer.value = (tmp_framebuffer[0] != null) ? new org.virtualbox_4_3.IFramebuffer(tmp_framebuffer[0]) : null;
        xOrigin.value = tmp_xOrigin[0];
        yOrigin.value = tmp_yOrigin[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVideoModeHint(Long display, Boolean enabled, Boolean changeOrigin, Integer originX, Integer originY, Long width, Long height, Long bitsPerPixel)
    {
        try
        {
            getTypedWrapped().setVideoModeHint(display, enabled, changeOrigin, originX, originY, width, height, bitsPerPixel);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setSeamlessMode(Boolean enabled)
    {
        try
        {
            getTypedWrapped().setSeamlessMode(enabled);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    // Skipping method takeScreenShot for it has parameters with suppressed types
    public byte[] takeScreenShotToArray(Long screenId, Long width, Long height)
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().takeScreenShotToArray(screenId, width, height, null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] takeScreenShotPNGToArray(Long screenId, Long width, Long height)
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().takeScreenShotPNGToArray(screenId, width, height, null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    // Skipping method drawToScreen for it has parameters with suppressed types
    public void invalidateAndUpdate()
    {
        try
        {
            getTypedWrapped().invalidateAndUpdate();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void resizeCompleted(Long screenId)
    {
        try
        {
            getTypedWrapped().resizeCompleted(screenId);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    // Skipping method completeVHWACommand for it has parameters with suppressed types
    public void viewportChanged(Long screenId, Long x, Long y, Long width, Long height)
    {
        try
        {
            getTypedWrapped().viewportChanged(screenId, x, y, width, height);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
