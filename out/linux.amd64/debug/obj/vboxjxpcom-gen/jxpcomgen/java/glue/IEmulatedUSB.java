
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
 * IEmulatedUSB.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IEmulatedUSB extends IUnknown
{

    public IEmulatedUSB(org.mozilla.interfaces.IEmulatedUSB wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IEmulatedUSB getTypedWrapped()
    {
        return (org.mozilla.interfaces.IEmulatedUSB) getWrapped();
    }
    public List<String> getWebcams()
    {
        try
        {
            String[] retVal = getTypedWrapped().getWebcams(null);
            return Helper.wrap(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IEmulatedUSB queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IEmulatedUSB qiobj = Helper.queryInterface(nsobj, "{38cc4dfd-8bb2-4d40-aebe-699eead8c2dd}", org.mozilla.interfaces.IEmulatedUSB.class);
        return qiobj == null ? null : new IEmulatedUSB(qiobj);
    }
    public void webcamAttach(String path, String settings)
    {
        try
        {
            getTypedWrapped().webcamAttach(path, settings);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void webcamDetach(String path)
    {
        try
        {
            getTypedWrapped().webcamDetach(path);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
