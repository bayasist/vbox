
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
 * IExtPackFile.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IExtPackFile extends IExtPackBase
{

    public IExtPackFile(org.mozilla.interfaces.IExtPackFile wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IExtPackFile getTypedWrapped()
    {
        return (org.mozilla.interfaces.IExtPackFile) getWrapped();
    }
    public String getFilePath()
    {
        try
        {
            String retVal = getTypedWrapped().getFilePath();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IExtPackFile queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IExtPackFile qiobj = Helper.queryInterface(nsobj, "{b6b49f55-efcc-4f08-b486-56e8d8afb10b}", org.mozilla.interfaces.IExtPackFile.class);
        return qiobj == null ? null : new IExtPackFile(qiobj);
    }
    public org.virtualbox_4_3.IProgress install(Boolean replace, String displayInfo)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().install(replace, displayInfo);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
