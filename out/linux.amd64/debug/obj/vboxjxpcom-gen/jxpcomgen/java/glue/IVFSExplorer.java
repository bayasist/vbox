
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
 * IVFSExplorer.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IVFSExplorer extends IUnknown
{

    public IVFSExplorer(org.mozilla.interfaces.IVFSExplorer wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IVFSExplorer getTypedWrapped()
    {
        return (org.mozilla.interfaces.IVFSExplorer) getWrapped();
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
    public org.virtualbox_4_3.VFSType getType()
    {
        try
        {
            long retVal = getTypedWrapped().getType();
            return org.virtualbox_4_3.VFSType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IVFSExplorer queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IVFSExplorer qiobj = Helper.queryInterface(nsobj, "{fb220201-2fd3-47e2-a5dc-2c2431d833cc}", org.mozilla.interfaces.IVFSExplorer.class);
        return qiobj == null ? null : new IVFSExplorer(qiobj);
    }
    public org.virtualbox_4_3.IProgress update()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().update();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress cd(String dir)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().cd(dir);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress cdUp()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().cdUp();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void entryList(Holder<List<String>> names, Holder<List<Long>> types, Holder<List<Long>> sizes, Holder<List<Long>> modes)
    {
        try
        {
        String[][] tmp_names = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        long[][] tmp_types = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        long[][] tmp_sizes = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        long[][] tmp_modes = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
            getTypedWrapped().entryList(null, tmp_names, null, tmp_types, null, tmp_sizes, null, tmp_modes);
        names.value = Helper.wrap(tmp_names[0]);
        types.value = Helper.wrap(tmp_types[0]);
        sizes.value = Helper.wrap(tmp_sizes[0]);
        modes.value = Helper.wrap(tmp_modes[0]);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> exists(List<String> names)
    {
        try
        {
            String[] retVal;
            retVal = getTypedWrapped().exists(names != null ? names.size() : 0, Helper.unwrapStr(names), null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress remove(List<String> names)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().remove(names != null ? names.size() : 0, Helper.unwrapStr(names));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
