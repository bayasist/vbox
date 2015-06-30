
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
 * ISession.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class ISession extends IUnknown
{

    public ISession(org.mozilla.interfaces.ISession wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.ISession getTypedWrapped()
    {
        return (org.mozilla.interfaces.ISession) getWrapped();
    }
    public org.virtualbox_4_3.SessionState getState()
    {
        try
        {
            long retVal = getTypedWrapped().getState();
            return org.virtualbox_4_3.SessionState.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.SessionType getType()
    {
        try
        {
            long retVal = getTypedWrapped().getType();
            return org.virtualbox_4_3.SessionType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IMachine getMachine()
    {
        try
        {
            org.mozilla.interfaces.IMachine retVal = getTypedWrapped().getMachine();
            return (retVal != null) ? new org.virtualbox_4_3.IMachine(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IConsole getConsole()
    {
        try
        {
            org.mozilla.interfaces.IConsole retVal = getTypedWrapped().getConsole();
            return (retVal != null) ? new org.virtualbox_4_3.IConsole(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static ISession queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.ISession qiobj = Helper.queryInterface(nsobj, "{12F4DCDB-12B2-4EC1-B7CD-DDD9F6C5BF4D}", org.mozilla.interfaces.ISession.class);
        return qiobj == null ? null : new ISession(qiobj);
    }
    public void unlockMachine()
    {
        try
        {
            getTypedWrapped().unlockMachine();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
