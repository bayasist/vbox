
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
 * IVRDEServer.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IVRDEServer extends IUnknown
{

    public IVRDEServer(org.mozilla.interfaces.IVRDEServer wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IVRDEServer getTypedWrapped()
    {
        return (org.mozilla.interfaces.IVRDEServer) getWrapped();
    }
    public Boolean getEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.AuthType getAuthType()
    {
        try
        {
            long retVal = getTypedWrapped().getAuthType();
            return org.virtualbox_4_3.AuthType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAuthType(org.virtualbox_4_3.AuthType value)
    {
        try
        {
            getTypedWrapped().setAuthType(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getAuthTimeout()
    {
        try
        {
            long retVal = getTypedWrapped().getAuthTimeout();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAuthTimeout(Long value)
    {
        try
        {
            getTypedWrapped().setAuthTimeout(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAllowMultiConnection()
    {
        try
        {
            boolean retVal = getTypedWrapped().getAllowMultiConnection();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAllowMultiConnection(Boolean value)
    {
        try
        {
            getTypedWrapped().setAllowMultiConnection(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getReuseSingleConnection()
    {
        try
        {
            boolean retVal = getTypedWrapped().getReuseSingleConnection();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setReuseSingleConnection(Boolean value)
    {
        try
        {
            getTypedWrapped().setReuseSingleConnection(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getVRDEExtPack()
    {
        try
        {
            String retVal = getTypedWrapped().getVRDEExtPack();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVRDEExtPack(String value)
    {
        try
        {
            getTypedWrapped().setVRDEExtPack(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getAuthLibrary()
    {
        try
        {
            String retVal = getTypedWrapped().getAuthLibrary();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAuthLibrary(String value)
    {
        try
        {
            getTypedWrapped().setAuthLibrary(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getVRDEProperties()
    {
        try
        {
            String[] retVal = getTypedWrapped().getVRDEProperties(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IVRDEServer queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IVRDEServer qiobj = Helper.queryInterface(nsobj, "{d38de40a-c2c1-4e95-b5a4-167b05f5694c}", org.mozilla.interfaces.IVRDEServer.class);
        return qiobj == null ? null : new IVRDEServer(qiobj);
    }
    public void setVRDEProperty(String key, String value)
    {
        try
        {
            getTypedWrapped().setVRDEProperty(key, value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getVRDEProperty(String key)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().getVRDEProperty(key);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
