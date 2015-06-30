
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
 * IAudioAdapter.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IAudioAdapter extends IUnknown
{

    public IAudioAdapter(org.mozilla.interfaces.IAudioAdapter wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IAudioAdapter getTypedWrapped()
    {
        return (org.mozilla.interfaces.IAudioAdapter) getWrapped();
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
    public org.virtualbox_4_3.AudioControllerType getAudioController()
    {
        try
        {
            long retVal = getTypedWrapped().getAudioController();
            return org.virtualbox_4_3.AudioControllerType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAudioController(org.virtualbox_4_3.AudioControllerType value)
    {
        try
        {
            getTypedWrapped().setAudioController(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.AudioDriverType getAudioDriver()
    {
        try
        {
            long retVal = getTypedWrapped().getAudioDriver();
            return org.virtualbox_4_3.AudioDriverType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setAudioDriver(org.virtualbox_4_3.AudioDriverType value)
    {
        try
        {
            getTypedWrapped().setAudioDriver(value.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IAudioAdapter queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IAudioAdapter qiobj = Helper.queryInterface(nsobj, "{921873db-5f3f-4b69-91f9-7be9e535a2cb}", org.mozilla.interfaces.IAudioAdapter.class);
        return qiobj == null ? null : new IAudioAdapter(qiobj);
    }
}
