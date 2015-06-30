
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
 * IVirtualBoxErrorInfo.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IVirtualBoxErrorInfo extends IUnknown
{

    public IVirtualBoxErrorInfo(org.mozilla.interfaces.IVirtualBoxErrorInfo wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IVirtualBoxErrorInfo getTypedWrapped()
    {
        return (org.mozilla.interfaces.IVirtualBoxErrorInfo) getWrapped();
    }
    public Integer getResultCode()
    {
        try
        {
            int retVal = getTypedWrapped().getResultCode();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getResultDetail()
    {
        try
        {
            int retVal = getTypedWrapped().getResultDetail();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getInterfaceID()
    {
        try
        {
            String retVal = getTypedWrapped().getInterfaceID();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getComponent()
    {
        try
        {
            String retVal = getTypedWrapped().getComponent();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getText()
    {
        try
        {
            String retVal = getTypedWrapped().getText();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IVirtualBoxErrorInfo getNext()
    {
        try
        {
            org.mozilla.interfaces.IVirtualBoxErrorInfo retVal = getTypedWrapped().getNext();
            return (retVal != null) ? new org.virtualbox_4_3.IVirtualBoxErrorInfo(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IVirtualBoxErrorInfo queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IVirtualBoxErrorInfo qiobj = Helper.queryInterface(nsobj, "{c1bcc6d5-7966-481d-ab0b-d0ed73e28135}", org.mozilla.interfaces.IVirtualBoxErrorInfo.class);
        return qiobj == null ? null : new IVirtualBoxErrorInfo(qiobj);
    }
}
