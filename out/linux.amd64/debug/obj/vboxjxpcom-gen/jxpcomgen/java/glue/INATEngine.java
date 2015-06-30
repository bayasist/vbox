
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
 * INATEngine.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class INATEngine extends IUnknown
{

    public INATEngine(org.mozilla.interfaces.INATEngine wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.INATEngine getTypedWrapped()
    {
        return (org.mozilla.interfaces.INATEngine) getWrapped();
    }
    public String getNetwork()
    {
        try
        {
            String retVal = getTypedWrapped().getNetwork();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setNetwork(String value)
    {
        try
        {
            getTypedWrapped().setNetwork(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getHostIP()
    {
        try
        {
            String retVal = getTypedWrapped().getHostIP();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setHostIP(String value)
    {
        try
        {
            getTypedWrapped().setHostIP(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getTFTPPrefix()
    {
        try
        {
            String retVal = getTypedWrapped().getTFTPPrefix();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTFTPPrefix(String value)
    {
        try
        {
            getTypedWrapped().setTFTPPrefix(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getTFTPBootFile()
    {
        try
        {
            String retVal = getTypedWrapped().getTFTPBootFile();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTFTPBootFile(String value)
    {
        try
        {
            getTypedWrapped().setTFTPBootFile(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getTFTPNextServer()
    {
        try
        {
            String retVal = getTypedWrapped().getTFTPNextServer();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTFTPNextServer(String value)
    {
        try
        {
            getTypedWrapped().setTFTPNextServer(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getAliasMode()
    {
        try
        {
            long retVal = getTypedWrapped().getAliasMode();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAliasMode(Long value)
    {
        try
        {
            getTypedWrapped().setAliasMode(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getDNSPassDomain()
    {
        try
        {
            boolean retVal = getTypedWrapped().getDNSPassDomain();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDNSPassDomain(Boolean value)
    {
        try
        {
            getTypedWrapped().setDNSPassDomain(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getDNSProxy()
    {
        try
        {
            boolean retVal = getTypedWrapped().getDNSProxy();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDNSProxy(Boolean value)
    {
        try
        {
            getTypedWrapped().setDNSProxy(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getDNSUseHostResolver()
    {
        try
        {
            boolean retVal = getTypedWrapped().getDNSUseHostResolver();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setDNSUseHostResolver(Boolean value)
    {
        try
        {
            getTypedWrapped().setDNSUseHostResolver(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<String> getRedirects()
    {
        try
        {
            String[] retVal = getTypedWrapped().getRedirects(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static INATEngine queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.INATEngine qiobj = Helper.queryInterface(nsobj, "{26451b99-3b2d-4dcb-8e4b-d63654218175}", org.mozilla.interfaces.INATEngine.class);
        return qiobj == null ? null : new INATEngine(qiobj);
    }
    public void setNetworkSettings(Long mtu, Long sockSnd, Long sockRcv, Long TcpWndSnd, Long TcpWndRcv)
    {
        try
        {
            getTypedWrapped().setNetworkSettings(mtu, sockSnd, sockRcv, TcpWndSnd, TcpWndRcv);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void getNetworkSettings(Holder<Long> mtu, Holder<Long> sockSnd, Holder<Long> sockRcv, Holder<Long> TcpWndSnd, Holder<Long> TcpWndRcv)
    {
        try
        {
        long[] tmp_mtu = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_sockSnd = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_sockRcv = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_TcpWndSnd = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_TcpWndRcv = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            getTypedWrapped().getNetworkSettings(tmp_mtu, tmp_sockSnd, tmp_sockRcv, tmp_TcpWndSnd, tmp_TcpWndRcv);
        mtu.value = tmp_mtu[0];
        sockSnd.value = tmp_sockSnd[0];
        sockRcv.value = tmp_sockRcv[0];
        TcpWndSnd.value = tmp_TcpWndSnd[0];
        TcpWndRcv.value = tmp_TcpWndRcv[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void addRedirect(String name, org.virtualbox_4_3.NATProtocol proto, String hostIP, Integer hostPort, String guestIP, Integer guestPort)
    {
        try
        {
            getTypedWrapped().addRedirect(name, proto.value(), hostIP, hostPort, guestIP, guestPort);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void removeRedirect(String name)
    {
        try
        {
            getTypedWrapped().removeRedirect(name);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
