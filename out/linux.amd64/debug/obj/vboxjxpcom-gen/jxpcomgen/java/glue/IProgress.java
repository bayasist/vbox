
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
 * IProgress.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IProgress extends IUnknown
{

    public IProgress(org.mozilla.interfaces.IProgress wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IProgress getTypedWrapped()
    {
        return (org.mozilla.interfaces.IProgress) getWrapped();
    }
    public String getId()
    {
        try
        {
            String retVal = getTypedWrapped().getId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDescription()
    {
        try
        {
            String retVal = getTypedWrapped().getDescription();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public IUnknown getInitiator()
    {
        try
        {
            nsISupports retVal = getTypedWrapped().getInitiator();
            return (retVal != null) ? new IUnknown(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCancelable()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCancelable();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getPercent()
    {
        try
        {
            long retVal = getTypedWrapped().getPercent();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getTimeRemaining()
    {
        try
        {
            int retVal = getTypedWrapped().getTimeRemaining();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCompleted()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCompleted();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCanceled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCanceled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Integer getResultCode()
    {
        try
        {
            int retVal = getTypedWrapped().getResultCode();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IVirtualBoxErrorInfo getErrorInfo()
    {
        try
        {
            org.mozilla.interfaces.IVirtualBoxErrorInfo retVal = getTypedWrapped().getErrorInfo();
            return (retVal != null) ? new org.virtualbox_4_3.IVirtualBoxErrorInfo(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getOperationCount()
    {
        try
        {
            long retVal = getTypedWrapped().getOperationCount();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getOperation()
    {
        try
        {
            long retVal = getTypedWrapped().getOperation();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getOperationDescription()
    {
        try
        {
            String retVal = getTypedWrapped().getOperationDescription();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getOperationPercent()
    {
        try
        {
            long retVal = getTypedWrapped().getOperationPercent();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getOperationWeight()
    {
        try
        {
            long retVal = getTypedWrapped().getOperationWeight();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getTimeout()
    {
        try
        {
            long retVal = getTypedWrapped().getTimeout();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setTimeout(Long value)
    {
        try
        {
            getTypedWrapped().setTimeout(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IProgress queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IProgress qiobj = Helper.queryInterface(nsobj, "{c20238e4-3221-4d3f-8891-81ce92d9f913}", org.mozilla.interfaces.IProgress.class);
        return qiobj == null ? null : new IProgress(qiobj);
    }
    public void setCurrentOperationProgress(Long percent)
    {
        try
        {
            getTypedWrapped().setCurrentOperationProgress(percent);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setNextOperation(String nextOperationDescription, Long nextOperationsWeight)
    {
        try
        {
            getTypedWrapped().setNextOperation(nextOperationDescription, nextOperationsWeight);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void waitForCompletion(Integer timeout)
    {
        try
        {
            getTypedWrapped().waitForCompletion(timeout);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void waitForOperationCompletion(Long operation, Integer timeout)
    {
        try
        {
            getTypedWrapped().waitForOperationCompletion(operation, timeout);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void waitForAsyncProgressCompletion(org.virtualbox_4_3.IProgress pProgressAsync)
    {
        try
        {
            getTypedWrapped().waitForAsyncProgressCompletion((pProgressAsync != null) ? pProgressAsync.getTypedWrapped() : null);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void cancel()
    {
        try
        {
            getTypedWrapped().cancel();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
