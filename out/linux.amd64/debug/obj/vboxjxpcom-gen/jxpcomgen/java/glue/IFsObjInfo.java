
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
 * IFsObjInfo.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IFsObjInfo extends IUnknown
{

    public IFsObjInfo(org.mozilla.interfaces.IFsObjInfo wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IFsObjInfo getTypedWrapped()
    {
        return (org.mozilla.interfaces.IFsObjInfo) getWrapped();
    }
    public Long getAccessTime()
    {
        try
        {
            long retVal = getTypedWrapped().getAccessTime();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getAllocatedSize()
    {
        try
        {
            long retVal = getTypedWrapped().getAllocatedSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getBirthTime()
    {
        try
        {
            long retVal = getTypedWrapped().getBirthTime();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getChangeTime()
    {
        try
        {
            long retVal = getTypedWrapped().getChangeTime();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getDeviceNumber()
    {
        try
        {
            long retVal = getTypedWrapped().getDeviceNumber();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getFileAttributes()
    {
        try
        {
            String retVal = getTypedWrapped().getFileAttributes();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getGenerationId()
    {
        try
        {
            long retVal = getTypedWrapped().getGenerationId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getGID()
    {
        try
        {
            long retVal = getTypedWrapped().getGID();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getGroupName()
    {
        try
        {
            String retVal = getTypedWrapped().getGroupName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getHardLinks()
    {
        try
        {
            long retVal = getTypedWrapped().getHardLinks();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getModificationTime()
    {
        try
        {
            long retVal = getTypedWrapped().getModificationTime();
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
    public Long getNodeId()
    {
        try
        {
            long retVal = getTypedWrapped().getNodeId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getNodeIdDevice()
    {
        try
        {
            long retVal = getTypedWrapped().getNodeIdDevice();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getObjectSize()
    {
        try
        {
            long retVal = getTypedWrapped().getObjectSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.FsObjType getType()
    {
        try
        {
            long retVal = getTypedWrapped().getType();
            return org.virtualbox_4_3.FsObjType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getUID()
    {
        try
        {
            long retVal = getTypedWrapped().getUID();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getUserFlags()
    {
        try
        {
            long retVal = getTypedWrapped().getUserFlags();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getUserName()
    {
        try
        {
            String retVal = getTypedWrapped().getUserName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IFsObjInfo queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IFsObjInfo qiobj = Helper.queryInterface(nsobj, "{4047ba30-7006-4966-ae86-94164e5e20eb}", org.mozilla.interfaces.IFsObjInfo.class);
        return qiobj == null ? null : new IFsObjInfo(qiobj);
    }
}
