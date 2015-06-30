
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
 * IExtPackBase.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IExtPackBase extends IUnknown
{

    public IExtPackBase(org.mozilla.interfaces.IExtPackBase wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IExtPackBase getTypedWrapped()
    {
        return (org.mozilla.interfaces.IExtPackBase) getWrapped();
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
    public String getVersion()
    {
        try
        {
            String retVal = getTypedWrapped().getVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getRevision()
    {
        try
        {
            long retVal = getTypedWrapped().getRevision();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getEdition()
    {
        try
        {
            String retVal = getTypedWrapped().getEdition();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getVRDEModule()
    {
        try
        {
            String retVal = getTypedWrapped().getVRDEModule();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IExtPackPlugIn> getPlugIns()
    {
        try
        {
            org.mozilla.interfaces.IExtPackPlugIn[] retVal = getTypedWrapped().getPlugIns(null);
            return Helper.wrap2(org.virtualbox_4_3.IExtPackPlugIn.class, org.mozilla.interfaces.IExtPackPlugIn.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getUsable()
    {
        try
        {
            boolean retVal = getTypedWrapped().getUsable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getWhyUnusable()
    {
        try
        {
            String retVal = getTypedWrapped().getWhyUnusable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getShowLicense()
    {
        try
        {
            boolean retVal = getTypedWrapped().getShowLicense();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLicense()
    {
        try
        {
            String retVal = getTypedWrapped().getLicense();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IExtPackBase queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IExtPackBase qiobj = Helper.queryInterface(nsobj, "{f79b75d8-2890-4f34-ffff-ffffa144e82c}", org.mozilla.interfaces.IExtPackBase.class);
        return qiobj == null ? null : new IExtPackBase(qiobj);
    }
    public String queryLicense(String preferredLocale, String preferredLanguage, String format)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().queryLicense(preferredLocale, preferredLanguage, format);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
