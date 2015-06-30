
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
 * IKeyboardLedsChangedEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IKeyboardLedsChangedEvent extends IEvent
{

    public IKeyboardLedsChangedEvent(org.mozilla.interfaces.IKeyboardLedsChangedEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IKeyboardLedsChangedEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IKeyboardLedsChangedEvent) getWrapped();
    }
    public Boolean getNumLock()
    {
        try
        {
            boolean retVal = getTypedWrapped().getNumLock();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCapsLock()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCapsLock();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getScrollLock()
    {
        try
        {
            boolean retVal = getTypedWrapped().getScrollLock();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IKeyboardLedsChangedEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IKeyboardLedsChangedEvent qiobj = Helper.queryInterface(nsobj, "{6DDEF35E-4737-457B-99FC-BC52C851A44F}", org.mozilla.interfaces.IKeyboardLedsChangedEvent.class);
        return qiobj == null ? null : new IKeyboardLedsChangedEvent(qiobj);
    }
}
