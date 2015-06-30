
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
 * IVirtualSystemDescription.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IVirtualSystemDescription extends IUnknown
{

    public IVirtualSystemDescription(org.mozilla.interfaces.IVirtualSystemDescription wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IVirtualSystemDescription getTypedWrapped()
    {
        return (org.mozilla.interfaces.IVirtualSystemDescription) getWrapped();
    }
    public Long getCount()
    {
        try
        {
            long retVal = getTypedWrapped().getCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IVirtualSystemDescription queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IVirtualSystemDescription qiobj = Helper.queryInterface(nsobj, "{d7525e6c-531a-4c51-8e04-41235083a3d8}", org.mozilla.interfaces.IVirtualSystemDescription.class);
        return qiobj == null ? null : new IVirtualSystemDescription(qiobj);
    }
    public void getDescription(Holder<List<org.virtualbox_4_3.VirtualSystemDescriptionType>> types, Holder<List<String>> refs, Holder<List<String>> OVFValues, Holder<List<String>> VBoxValues, Holder<List<String>> extraConfigValues)
    {
        try
        {
        long[][] tmp_types = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        String[][] tmp_refs = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_OVFValues = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_VBoxValues = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_extraConfigValues = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            getTypedWrapped().getDescription(null, tmp_types, null, tmp_refs, null, tmp_OVFValues, null, tmp_VBoxValues, null, tmp_extraConfigValues);
        types.value = Helper.wrapEnum(org.virtualbox_4_3.VirtualSystemDescriptionType.class, tmp_types[0]);
        refs.value = Helper.wrap(tmp_refs[0]);
        OVFValues.value = Helper.wrap(tmp_OVFValues[0]);
        VBoxValues.value = Helper.wrap(tmp_VBoxValues[0]);
        extraConfigValues.value = Helper.wrap(tmp_extraConfigValues[0]);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void getDescriptionByType(org.virtualbox_4_3.VirtualSystemDescriptionType type, Holder<List<org.virtualbox_4_3.VirtualSystemDescriptionType>> types, Holder<List<String>> refs, Holder<List<String>> OVFValues, Holder<List<String>> VBoxValues, Holder<List<String>> extraConfigValues)
    {
        try
        {
        long[][] tmp_types = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
        String[][] tmp_refs = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_OVFValues = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_VBoxValues = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_extraConfigValues = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            getTypedWrapped().getDescriptionByType(type.value(), null, tmp_types, null, tmp_refs, null, tmp_OVFValues, null, tmp_VBoxValues, null, tmp_extraConfigValues);
        types.value = Helper.wrapEnum(org.virtualbox_4_3.VirtualSystemDescriptionType.class, tmp_types[0]);
        refs.value = Helper.wrap(tmp_refs[0]);
        OVFValues.value = Helper.wrap(tmp_OVFValues[0]);
        VBoxValues.value = Helper.wrap(tmp_VBoxValues[0]);
        extraConfigValues.value = Helper.wrap(tmp_extraConfigValues[0]);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getValuesByType(org.virtualbox_4_3.VirtualSystemDescriptionType type, org.virtualbox_4_3.VirtualSystemDescriptionValueType which)
    {
        try
        {
            String[] retVal;
            retVal = getTypedWrapped().getValuesByType(type.value(), which.value(), null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setFinalValues(List<Boolean> enabled, List<String> VBoxValues, List<String> extraConfigValues)
    {
        try
        {
            getTypedWrapped().setFinalValues(enabled != null ? enabled.size() : 0, Helper.unwrapBoolean(enabled), VBoxValues != null ? VBoxValues.size() : 0, Helper.unwrapStr(VBoxValues), extraConfigValues != null ? extraConfigValues.size() : 0, Helper.unwrapStr(extraConfigValues));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void addDescription(org.virtualbox_4_3.VirtualSystemDescriptionType type, String VBoxValue, String extraConfigValue)
    {
        try
        {
            getTypedWrapped().addDescription(type.value(), VBoxValue, extraConfigValue);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
