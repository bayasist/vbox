
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
 * VBoxException.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;

import org.mozilla.xpcom.*;

public class VBoxException extends RuntimeException
{
    private int resultCode;
    private IVirtualBoxErrorInfo errorInfo;

    public VBoxException(String message)
    {
        super(message);
        resultCode = -1;
        errorInfo = null;
    }

    public VBoxException(String message, Throwable cause)
    {
        super(message, cause);
        if (cause instanceof org.mozilla.xpcom.XPCOMException)
        {
            resultCode = (int)((org.mozilla.xpcom.XPCOMException)cause).errorcode;
            try
            {
                Mozilla mozilla = Mozilla.getInstance();
                nsIServiceManager sm = mozilla.getServiceManager();
                nsIExceptionService es = (nsIExceptionService)sm.getServiceByContractID("@mozilla.org/exceptionservice;1", nsIExceptionService.NS_IEXCEPTIONSERVICE_IID);
                nsIExceptionManager em = es.getCurrentExceptionManager();
                nsIException ex = em.getCurrentException();
                errorInfo = new IVirtualBoxErrorInfo((org.mozilla.interfaces.IVirtualBoxErrorInfo)ex.queryInterface(org.mozilla.interfaces.IVirtualBoxErrorInfo.IVIRTUALBOXERRORINFO_IID));
            }
            catch (NullPointerException e)
            {
                e.printStackTrace();
                // nothing we can do
                errorInfo = null;
            }
        }
        else
            resultCode = -1;
    }

    public int getResultCode()
    {
        return resultCode;
    }

    public IVirtualBoxErrorInfo getVirtualBoxErrorInfo()
    {
        return errorInfo;
    }
}
