
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
 * IAppliance.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IAppliance extends IUnknown
{

    public IAppliance(org.mozilla.interfaces.IAppliance wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IAppliance getTypedWrapped()
    {
        return (org.mozilla.interfaces.IAppliance) getWrapped();
    }
    public String getPath()
    {
        try
        {
            String retVal = getTypedWrapped().getPath();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getDisks()
    {
        try
        {
            String[] retVal = getTypedWrapped().getDisks(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IVirtualSystemDescription> getVirtualSystemDescriptions()
    {
        try
        {
            org.mozilla.interfaces.IVirtualSystemDescription[] retVal = getTypedWrapped().getVirtualSystemDescriptions(null);
            return Helper.wrap2(org.virtualbox_4_3.IVirtualSystemDescription.class, org.mozilla.interfaces.IVirtualSystemDescription.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getMachines()
    {
        try
        {
            String[] retVal = getTypedWrapped().getMachines(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IAppliance queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IAppliance qiobj = Helper.queryInterface(nsobj, "{3059cf9e-25c7-4f0b-9fa5-3c42e441670b}", org.mozilla.interfaces.IAppliance.class);
        return qiobj == null ? null : new IAppliance(qiobj);
    }
    public org.virtualbox_4_3.IProgress read(String file)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().read(file);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void interpret()
    {
        try
        {
            getTypedWrapped().interpret();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress importMachines(List<org.virtualbox_4_3.ImportOptions> options)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().importMachines(options != null ? options.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.ImportOptions.class, options));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IVFSExplorer createVFSExplorer(String URI)
    {
        try
        {
            org.mozilla.interfaces.IVFSExplorer retVal;
            retVal = getTypedWrapped().createVFSExplorer(URI);
            return (retVal != null) ? new org.virtualbox_4_3.IVFSExplorer(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress write(String format, List<org.virtualbox_4_3.ExportOptions> options, String path)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().write(format, options != null ? options.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.ExportOptions.class, options), path);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getWarnings()
    {
        try
        {
            String[] retVal;
            retVal = getTypedWrapped().getWarnings(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
