
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
 * IMedium.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IMedium extends IUnknown
{

    public IMedium(org.mozilla.interfaces.IMedium wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IMedium getTypedWrapped()
    {
        return (org.mozilla.interfaces.IMedium) getWrapped();
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
    public void setDescription(String value)
    {
        try
        {
            getTypedWrapped().setDescription(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.MediumState getState()
    {
        try
        {
            long retVal = getTypedWrapped().getState();
            return org.virtualbox_4_3.MediumState.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.MediumVariant> getVariant()
    {
        try
        {
            long[] retVal = getTypedWrapped().getVariant(null);
            return Helper.wrapEnum(org.virtualbox_4_3.MediumVariant.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLocation()
    {
        try
        {
            String retVal = getTypedWrapped().getLocation();
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
    public org.virtualbox_4_3.DeviceType getDeviceType()
    {
        try
        {
            long retVal = getTypedWrapped().getDeviceType();
            return org.virtualbox_4_3.DeviceType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getHostDrive()
    {
        try
        {
            boolean retVal = getTypedWrapped().getHostDrive();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getSize()
    {
        try
        {
            long retVal = getTypedWrapped().getSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getFormat()
    {
        try
        {
            String retVal = getTypedWrapped().getFormat();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMediumFormat getMediumFormat()
    {
        try
        {
            org.mozilla.interfaces.IMediumFormat retVal = getTypedWrapped().getMediumFormat();
            return (retVal != null) ? new org.virtualbox_4_3.IMediumFormat(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.MediumType getType()
    {
        try
        {
            long retVal = getTypedWrapped().getType();
            return org.virtualbox_4_3.MediumType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setType(org.virtualbox_4_3.MediumType value)
    {
        try
        {
            getTypedWrapped().setType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.MediumType> getAllowedTypes()
    {
        try
        {
            long[] retVal = getTypedWrapped().getAllowedTypes(null);
            return Helper.wrapEnum(org.virtualbox_4_3.MediumType.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMedium getParent()
    {
        try
        {
            org.mozilla.interfaces.IMedium retVal = getTypedWrapped().getParent();
            return (retVal != null) ? new org.virtualbox_4_3.IMedium(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IMedium> getChildren()
    {
        try
        {
            org.mozilla.interfaces.IMedium[] retVal = getTypedWrapped().getChildren(null);
            return Helper.wrap2(org.virtualbox_4_3.IMedium.class, org.mozilla.interfaces.IMedium.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMedium getBase()
    {
        try
        {
            org.mozilla.interfaces.IMedium retVal = getTypedWrapped().getBase();
            return (retVal != null) ? new org.virtualbox_4_3.IMedium(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getReadOnly()
    {
        try
        {
            boolean retVal = getTypedWrapped().getReadOnly();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getLogicalSize()
    {
        try
        {
            long retVal = getTypedWrapped().getLogicalSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAutoReset()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAutoReset();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAutoReset(Boolean value)
    {
        try
        {
            getTypedWrapped().setAutoReset(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLastAccessError()
    {
        try
        {
            String retVal = getTypedWrapped().getLastAccessError();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getMachineIds()
    {
        try
        {
            String[] retVal = getTypedWrapped().getMachineIds(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IMedium queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IMedium qiobj = Helper.queryInterface(nsobj, "{05f2bbb6-a3a6-4fb9-9b49-6d0dda7142ac}", org.mozilla.interfaces.IMedium.class);
        return qiobj == null ? null : new IMedium(qiobj);
    }
    public void setIds(Boolean setImageId, String imageId, Boolean setParentId, String parentId)
    {
        try
        {
            getTypedWrapped().setIds(setImageId, imageId, setParentId, parentId);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.MediumState refreshState()
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().refreshState();
            return org.virtualbox_4_3.MediumState.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getSnapshotIds(String machineId)
    {
        try
        {
            String[] retVal;
            retVal = getTypedWrapped().getSnapshotIds(machineId, null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IToken lockRead()
    {
        try
        {
            org.mozilla.interfaces.IToken retVal;
            retVal = getTypedWrapped().lockRead();
            return (retVal != null) ? new org.virtualbox_4_3.IToken(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IToken lockWrite()
    {
        try
        {
            org.mozilla.interfaces.IToken retVal;
            retVal = getTypedWrapped().lockWrite();
            return (retVal != null) ? new org.virtualbox_4_3.IToken(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void close()
    {
        try
        {
            getTypedWrapped().close();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getProperty(String name)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().getProperty(name);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setProperty(String name, String value)
    {
        try
        {
            getTypedWrapped().setProperty(name, value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getProperties(String names, Holder<List<String>> returnNames)
    {
        try
        {
        String[][] tmp_returnNames = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            String[] retVal;
            retVal = getTypedWrapped().getProperties(names, null, tmp_returnNames, null);
        returnNames.value = Helper.wrap(tmp_returnNames[0]);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setProperties(List<String> names, List<String> values)
    {
        try
        {
            getTypedWrapped().setProperties(names != null ? names.size() : 0, Helper.unwrapStr(names), values != null ? values.size() : 0, Helper.unwrapStr(values));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress createBaseStorage(Long logicalSize, List<org.virtualbox_4_3.MediumVariant> variant)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().createBaseStorage(logicalSize, variant != null ? variant.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.MediumVariant.class, variant));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress deleteStorage()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().deleteStorage();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress createDiffStorage(org.virtualbox_4_3.IMedium target, List<org.virtualbox_4_3.MediumVariant> variant)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().createDiffStorage((target != null) ? target.getTypedWrapped() : null, variant != null ? variant.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.MediumVariant.class, variant));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress mergeTo(org.virtualbox_4_3.IMedium target)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().mergeTo((target != null) ? target.getTypedWrapped() : null);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress cloneTo(org.virtualbox_4_3.IMedium target, List<org.virtualbox_4_3.MediumVariant> variant, org.virtualbox_4_3.IMedium parent)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().cloneTo((target != null) ? target.getTypedWrapped() : null, variant != null ? variant.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.MediumVariant.class, variant), (parent != null) ? parent.getTypedWrapped() : null);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress cloneToBase(org.virtualbox_4_3.IMedium target, List<org.virtualbox_4_3.MediumVariant> variant)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().cloneToBase((target != null) ? target.getTypedWrapped() : null, variant != null ? variant.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.MediumVariant.class, variant));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress setLocation(String location)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().setLocation(location);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress compact()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().compact();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress resize(Long logicalSize)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().resize(logicalSize);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress reset()
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().reset();
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
