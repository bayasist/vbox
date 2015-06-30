
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
 * IVetoEvent.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IVetoEvent extends IEvent
{

    public IVetoEvent(org.mozilla.interfaces.IVetoEvent wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IVetoEvent getTypedWrapped()
    {
        return (org.mozilla.interfaces.IVetoEvent) getWrapped();
    }
    public static IVetoEvent queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IVetoEvent qiobj = Helper.queryInterface(nsobj, "{9a1a4130-69fe-472f-ac10-c6fa25d75007}", org.mozilla.interfaces.IVetoEvent.class);
        return qiobj == null ? null : new IVetoEvent(qiobj);
    }
    public void addVeto(String reason)
    {
        try
        {
            getTypedWrapped().addVeto(reason);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean isVetoed()
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().isVetoed();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getVetos()
    {
        try
        {
            String[] retVal;
            retVal = getTypedWrapped().getVetos(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
