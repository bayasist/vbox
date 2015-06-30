
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
 * IDirectory.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IDirectory extends IUnknown
{

    public IDirectory(org.mozilla.interfaces.IDirectory wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IDirectory getTypedWrapped()
    {
        return (org.mozilla.interfaces.IDirectory) getWrapped();
    }
    public String getDirectoryName()
    {
        try
        {
            String retVal = getTypedWrapped().getDirectoryName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getFilter()
    {
        try
        {
            String retVal = getTypedWrapped().getFilter();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IDirectory queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IDirectory qiobj = Helper.queryInterface(nsobj, "{1b70dd03-26d7-483a-8877-89bbb0f87b70}", org.mozilla.interfaces.IDirectory.class);
        return qiobj == null ? null : new IDirectory(qiobj);
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
    public org.virtualbox_4_3.IFsObjInfo read()
    {
        try
        {
            org.mozilla.interfaces.IFsObjInfo retVal;
            retVal = getTypedWrapped().read();
            return (retVal != null) ? new org.virtualbox_4_3.IFsObjInfo(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
