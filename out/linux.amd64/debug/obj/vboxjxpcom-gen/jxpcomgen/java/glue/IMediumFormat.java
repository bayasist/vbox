
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
 * IMediumFormat.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IMediumFormat extends IUnknown
{

    public IMediumFormat(org.mozilla.interfaces.IMediumFormat wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IMediumFormat getTypedWrapped()
    {
        return (org.mozilla.interfaces.IMediumFormat) getWrapped();
    }
    public String getId()
    {
        try
        {
            String retVal = getTypedWrapped().getId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
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
    public List<org.virtualbox_4_3.MediumFormatCapabilities> getCapabilities()
    {
        try
        {
            long[] retVal = getTypedWrapped().getCapabilities(null);
            return Helper.wrapEnum(org.virtualbox_4_3.MediumFormatCapabilities.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IMediumFormat queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IMediumFormat qiobj = Helper.queryInterface(nsobj, "{6238e1cf-a17d-4ec1-8172-418bfb22b93a}", org.mozilla.interfaces.IMediumFormat.class);
        return qiobj == null ? null : new IMediumFormat(qiobj);
    }
    public void describeFileExtensions(Holder<List<String>> extensions, Holder<List<org.virtualbox_4_3.DeviceType>> types)
    {
        try
        {
        String[][] tmp_extensions = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        long[][] tmp_types = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
            getTypedWrapped().describeFileExtensions(null, tmp_extensions, null, tmp_types);
        extensions.value = Helper.wrap(tmp_extensions[0]);
        types.value = Helper.wrapEnum(org.virtualbox_4_3.DeviceType.class, tmp_types[0]);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void describeProperties(Holder<List<String>> names, Holder<List<String>> descriptions, Holder<List<org.virtualbox_4_3.DataType>> types, Holder<List<Long>> flags, Holder<List<String>> defaults)
    {
        try
        {
        String[][] tmp_names = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_descriptions = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        long[][] tmp_types = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        long[][] tmp_flags = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        String[][] tmp_defaults = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            getTypedWrapped().describeProperties(null, tmp_names, null, tmp_descriptions, null, tmp_types, null, tmp_flags, null, tmp_defaults);
        names.value = Helper.wrap(tmp_names[0]);
        descriptions.value = Helper.wrap(tmp_descriptions[0]);
        types.value = Helper.wrapEnum(org.virtualbox_4_3.DataType.class, tmp_types[0]);
        flags.value = Helper.wrap(tmp_flags[0]);
        defaults.value = Helper.wrap(tmp_defaults[0]);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
