
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
 * IProcess.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IProcess extends IUnknown
{

    public IProcess(org.mozilla.interfaces.IProcess wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IProcess getTypedWrapped()
    {
        return (org.mozilla.interfaces.IProcess) getWrapped();
    }
    public List<String> getArguments()
    {
        try
        {
            String[] retVal = getTypedWrapped().getArguments(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getEnvironment()
    {
        try
        {
            String[] retVal = getTypedWrapped().getEnvironment(null);
            return Helper.wrap(retVal);
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
    public String getExecutablePath()
    {
        try
        {
            String retVal = getTypedWrapped().getExecutablePath();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getExitCode()
    {
        try
        {
            int retVal = getTypedWrapped().getExitCode();
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
    public Long getPID()
    {
        try
        {
            long retVal = getTypedWrapped().getPID();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ProcessStatus getStatus()
    {
        try
        {
            long retVal = getTypedWrapped().getStatus();
            return org.virtualbox_4_3.ProcessStatus.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IProcess queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IProcess qiobj = Helper.queryInterface(nsobj, "{5a4fe06d-8cb1-40ff-ac9e-9676e32f706e}", org.mozilla.interfaces.IProcess.class);
        return qiobj == null ? null : new IProcess(qiobj);
    }
    public org.virtualbox_4_3.ProcessWaitResult waitFor(Long waitFor, Long timeoutMS)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().waitFor(waitFor, timeoutMS);
            return org.virtualbox_4_3.ProcessWaitResult.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.ProcessWaitResult waitForArray(List<org.virtualbox_4_3.ProcessWaitForFlag> waitFor, Long timeoutMS)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().waitForArray(waitFor != null ? waitFor.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.ProcessWaitForFlag.class, waitFor), timeoutMS);
            return org.virtualbox_4_3.ProcessWaitResult.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] read(Long handle, Long toRead, Long timeoutMS)
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().read(handle, toRead, timeoutMS, null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long write(Long handle, Long flags, byte[] data, Long timeoutMS)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().write(handle, flags, data, timeoutMS);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long writeArray(Long handle, List<org.virtualbox_4_3.ProcessInputFlag> flags, byte[] data, Long timeoutMS)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().writeArray(handle, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.ProcessInputFlag.class, flags), data, timeoutMS);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void terminate()
    {
        try
        {
            getTypedWrapped().terminate();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
