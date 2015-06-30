
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
 * IKeyboard.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IKeyboard extends IUnknown
{

    public IKeyboard(org.mozilla.interfaces.IKeyboard wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IKeyboard getTypedWrapped()
    {
        return (org.mozilla.interfaces.IKeyboard) getWrapped();
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
    public static IKeyboard queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IKeyboard qiobj = Helper.queryInterface(nsobj, "{f6916ec5-a881-4237-898f-7de58cf88672}", org.mozilla.interfaces.IKeyboard.class);
        return qiobj == null ? null : new IKeyboard(qiobj);
    }
    public void putScancode(Integer scancode)
    {
        try
        {
            getTypedWrapped().putScancode(scancode);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long putScancodes(List<Integer> scancodes)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().putScancodes(scancodes != null ? scancodes.size() : 0, Helper.unwrapInteger(scancodes));
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void putCAD()
    {
        try
        {
            getTypedWrapped().putCAD();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
