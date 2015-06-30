
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
 * IMediumAttachment.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IMediumAttachment extends IUnknown
{

    public IMediumAttachment(org.mozilla.interfaces.IMediumAttachment wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IMediumAttachment getTypedWrapped()
    {
        return (org.mozilla.interfaces.IMediumAttachment) getWrapped();
    }
    public org.virtualbox_4_3.IMedium getMedium()
    {
        try
        {
            org.mozilla.interfaces.IMedium retVal = getTypedWrapped().getMedium();
            return (retVal != null) ? new org.virtualbox_4_3.IMedium(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getController()
    {
        try
        {
            String retVal = getTypedWrapped().getController();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getPort()
    {
        try
        {
            int retVal = getTypedWrapped().getPort();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getDevice()
    {
        try
        {
            int retVal = getTypedWrapped().getDevice();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.DeviceType getType()
    {
        try
        {
            long retVal = getTypedWrapped().getType();
            return org.virtualbox_4_3.DeviceType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getPassthrough()
    {
        try
        {
            boolean retVal = getTypedWrapped().getPassthrough();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getTemporaryEject()
    {
        try
        {
            boolean retVal = getTypedWrapped().getTemporaryEject();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getIsEjected()
    {
        try
        {
            boolean retVal = getTypedWrapped().getIsEjected();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getNonRotational()
    {
        try
        {
            boolean retVal = getTypedWrapped().getNonRotational();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getDiscard()
    {
        try
        {
            boolean retVal = getTypedWrapped().getDiscard();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getHotPluggable()
    {
        try
        {
            boolean retVal = getTypedWrapped().getHotPluggable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IBandwidthGroup getBandwidthGroup()
    {
        try
        {
            org.mozilla.interfaces.IBandwidthGroup retVal = getTypedWrapped().getBandwidthGroup();
            return (retVal != null) ? new org.virtualbox_4_3.IBandwidthGroup(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IMediumAttachment queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IMediumAttachment qiobj = Helper.queryInterface(nsobj, "{4b252567-5d4e-4db8-b3c8-569ec1c9236c}", org.mozilla.interfaces.IMediumAttachment.class);
        return qiobj == null ? null : new IMediumAttachment(qiobj);
    }
}
