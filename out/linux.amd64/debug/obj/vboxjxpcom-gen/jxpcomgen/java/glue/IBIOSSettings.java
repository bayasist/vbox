
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
 * IBIOSSettings.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IBIOSSettings extends IUnknown
{

    public IBIOSSettings(org.mozilla.interfaces.IBIOSSettings wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IBIOSSettings getTypedWrapped()
    {
        return (org.mozilla.interfaces.IBIOSSettings) getWrapped();
    }
    public Boolean getLogoFadeIn()
    {
        try
        {
            boolean retVal = getTypedWrapped().getLogoFadeIn();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLogoFadeIn(Boolean value)
    {
        try
        {
            getTypedWrapped().setLogoFadeIn(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getLogoFadeOut()
    {
        try
        {
            boolean retVal = getTypedWrapped().getLogoFadeOut();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLogoFadeOut(Boolean value)
    {
        try
        {
            getTypedWrapped().setLogoFadeOut(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getLogoDisplayTime()
    {
        try
        {
            long retVal = getTypedWrapped().getLogoDisplayTime();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLogoDisplayTime(Long value)
    {
        try
        {
            getTypedWrapped().setLogoDisplayTime(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLogoImagePath()
    {
        try
        {
            String retVal = getTypedWrapped().getLogoImagePath();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLogoImagePath(String value)
    {
        try
        {
            getTypedWrapped().setLogoImagePath(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.BIOSBootMenuMode getBootMenuMode()
    {
        try
        {
            long retVal = getTypedWrapped().getBootMenuMode();
            return org.virtualbox_4_3.BIOSBootMenuMode.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setBootMenuMode(org.virtualbox_4_3.BIOSBootMenuMode value)
    {
        try
        {
            getTypedWrapped().setBootMenuMode(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getACPIEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getACPIEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setACPIEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setACPIEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getIOAPICEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getIOAPICEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setIOAPICEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setIOAPICEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getTimeOffset()
    {
        try
        {
            long retVal = getTypedWrapped().getTimeOffset();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTimeOffset(Long value)
    {
        try
        {
            getTypedWrapped().setTimeOffset(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getPXEDebugEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getPXEDebugEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setPXEDebugEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setPXEDebugEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getNonVolatileStorageFile()
    {
        try
        {
            String retVal = getTypedWrapped().getNonVolatileStorageFile();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IBIOSSettings queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IBIOSSettings qiobj = Helper.queryInterface(nsobj, "{38b54279-dc35-4f5e-a431-835b867c6b5e}", org.mozilla.interfaces.IBIOSSettings.class);
        return qiobj == null ? null : new IBIOSSettings(qiobj);
    }
}
