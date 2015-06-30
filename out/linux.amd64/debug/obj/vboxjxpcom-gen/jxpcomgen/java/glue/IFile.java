
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
 * IFile.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IFile extends IUnknown
{

    public IFile(org.mozilla.interfaces.IFile wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IFile getTypedWrapped()
    {
        return (org.mozilla.interfaces.IFile) getWrapped();
    }
    public Long getCreationMode()
    {
        try
        {
            long retVal = getTypedWrapped().getCreationMode();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDisposition()
    {
        try
        {
            String retVal = getTypedWrapped().getDisposition();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IEventSource getEventSource()
    {
        try
        {
            org.mozilla.interfaces.IEventSource retVal = getTypedWrapped().getEventSource();
            return (retVal != null) ? new org.virtualbox_4_3.IEventSource(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getFileName()
    {
        try
        {
            String retVal = getTypedWrapped().getFileName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getId()
    {
        try
        {
            long retVal = getTypedWrapped().getId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getInitialSize()
    {
        try
        {
            long retVal = getTypedWrapped().getInitialSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getOpenMode()
    {
        try
        {
            String retVal = getTypedWrapped().getOpenMode();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getOffset()
    {
        try
        {
            long retVal = getTypedWrapped().getOffset();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.FileStatus getStatus()
    {
        try
        {
            long retVal = getTypedWrapped().getStatus();
            return org.virtualbox_4_3.FileStatus.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IFile queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IFile qiobj = Helper.queryInterface(nsobj, "{5ec56ea3-b55d-4bdb-8c4f-5f9fb26b894b}", org.mozilla.interfaces.IFile.class);
        return qiobj == null ? null : new IFile(qiobj);
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
    public org.virtualbox_4_3.IFsObjInfo queryInfo()
    {
        try
        {
            org.mozilla.interfaces.IFsObjInfo retVal;
            retVal = getTypedWrapped().queryInfo();
            return (retVal != null) ? new org.virtualbox_4_3.IFsObjInfo(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] read(Long toRead, Long timeoutMS)
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().read(toRead, timeoutMS, null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] readAt(Long offset, Long toRead, Long timeoutMS)
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().readAt(offset, toRead, timeoutMS, null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void seek(Long offset, org.virtualbox_4_3.FileSeekType whence)
    {
        try
        {
            getTypedWrapped().seek(offset, whence.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setACL(String acl)
    {
        try
        {
            getTypedWrapped().setACL(acl);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long write(byte[] data, Long timeoutMS)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().write(data, timeoutMS);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long writeAt(Long offset, byte[] data, Long timeoutMS)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().writeAt(offset, data, timeoutMS);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
