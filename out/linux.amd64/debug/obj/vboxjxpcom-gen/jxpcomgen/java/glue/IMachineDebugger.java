
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
 * IMachineDebugger.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IMachineDebugger extends IUnknown
{

    public IMachineDebugger(org.mozilla.interfaces.IMachineDebugger wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IMachineDebugger getTypedWrapped()
    {
        return (org.mozilla.interfaces.IMachineDebugger) getWrapped();
    }
    public Boolean getSingleStep()
    {
        try
        {
            boolean retVal = getTypedWrapped().getSingleStep();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setSingleStep(Boolean value)
    {
        try
        {
            getTypedWrapped().setSingleStep(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecompileUser()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecompileUser();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setRecompileUser(Boolean value)
    {
        try
        {
            getTypedWrapped().setRecompileUser(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getRecompileSupervisor()
    {
        try
        {
            boolean retVal = getTypedWrapped().getRecompileSupervisor();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setRecompileSupervisor(Boolean value)
    {
        try
        {
            getTypedWrapped().setRecompileSupervisor(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getExecuteAllInIEM()
    {
        try
        {
            boolean retVal = getTypedWrapped().getExecuteAllInIEM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setExecuteAllInIEM(Boolean value)
    {
        try
        {
            getTypedWrapped().setExecuteAllInIEM(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getPATMEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getPATMEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setPATMEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setPATMEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getCSAMEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getCSAMEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setCSAMEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setCSAMEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getLogEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getLogEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setLogEnabled(Boolean value)
    {
        try
        {
            getTypedWrapped().setLogEnabled(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLogDbgFlags()
    {
        try
        {
            String retVal = getTypedWrapped().getLogDbgFlags();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLogDbgGroups()
    {
        try
        {
            String retVal = getTypedWrapped().getLogDbgGroups();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLogDbgDestinations()
    {
        try
        {
            String retVal = getTypedWrapped().getLogDbgDestinations();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLogRelFlags()
    {
        try
        {
            String retVal = getTypedWrapped().getLogRelFlags();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLogRelGroups()
    {
        try
        {
            String retVal = getTypedWrapped().getLogRelGroups();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getLogRelDestinations()
    {
        try
        {
            String retVal = getTypedWrapped().getLogRelDestinations();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getHWVirtExEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getHWVirtExEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getHWVirtExNestedPagingEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getHWVirtExNestedPagingEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getHWVirtExVPIDEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getHWVirtExVPIDEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getHWVirtExUXEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getHWVirtExUXEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getOSName()
    {
        try
        {
            String retVal = getTypedWrapped().getOSName();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getOSVersion()
    {
        try
        {
            String retVal = getTypedWrapped().getOSVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getPAEEnabled()
    {
        try
        {
            boolean retVal = getTypedWrapped().getPAEEnabled();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getVirtualTimeRate()
    {
        try
        {
            long retVal = getTypedWrapped().getVirtualTimeRate();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setVirtualTimeRate(Long value)
    {
        try
        {
            getTypedWrapped().setVirtualTimeRate(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getVM()
    {
        try
        {
            long retVal = getTypedWrapped().getVM();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IMachineDebugger queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IMachineDebugger qiobj = Helper.queryInterface(nsobj, "{5e4534dc-21b8-4f6b-8a08-eef50e1a0aa1}", org.mozilla.interfaces.IMachineDebugger.class);
        return qiobj == null ? null : new IMachineDebugger(qiobj);
    }
    public void dumpGuestCore(String filename, String compression)
    {
        try
        {
            getTypedWrapped().dumpGuestCore(filename, compression);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void dumpHostProcessCore(String filename, String compression)
    {
        try
        {
            getTypedWrapped().dumpHostProcessCore(filename, compression);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String info(String name, String args)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().info(name, args);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void injectNMI()
    {
        try
        {
            getTypedWrapped().injectNMI();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void modifyLogGroups(String settings)
    {
        try
        {
            getTypedWrapped().modifyLogGroups(settings);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void modifyLogFlags(String settings)
    {
        try
        {
            getTypedWrapped().modifyLogFlags(settings);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void modifyLogDestinations(String settings)
    {
        try
        {
            getTypedWrapped().modifyLogDestinations(settings);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] readPhysicalMemory(Long address, Long size)
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().readPhysicalMemory(address, size, null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void writePhysicalMemory(Long address, Long size, byte[] bytes)
    {
        try
        {
            getTypedWrapped().writePhysicalMemory(address, size, bytes);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] readVirtualMemory(Long cpuId, Long address, Long size)
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().readVirtualMemory(cpuId, address, size, null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void writeVirtualMemory(Long cpuId, Long address, Long size, byte[] bytes)
    {
        try
        {
            getTypedWrapped().writeVirtualMemory(cpuId, address, size, bytes);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String detectOS()
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().detectOS();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getRegister(Long cpuId, String name)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().getRegister(cpuId, name);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void getRegisters(Long cpuId, Holder<List<String>> names, Holder<List<String>> values)
    {
        try
        {
        String[][] tmp_names = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        String[][] tmp_values = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
            getTypedWrapped().getRegisters(cpuId, null, tmp_names, null, tmp_values);
        names.value = Helper.wrap(tmp_names[0]);
        values.value = Helper.wrap(tmp_values[0]);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setRegister(Long cpuId, String name, String value)
    {
        try
        {
            getTypedWrapped().setRegister(cpuId, name, value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setRegisters(Long cpuId, List<String> names, List<String> values)
    {
        try
        {
            getTypedWrapped().setRegisters(cpuId, names != null ? names.size() : 0, Helper.unwrapStr(names), values != null ? values.size() : 0, Helper.unwrapStr(values));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String dumpGuestStack(Long cpuId)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().dumpGuestStack(cpuId);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void resetStats(String pattern)
    {
        try
        {
            getTypedWrapped().resetStats(pattern);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void dumpStats(String pattern)
    {
        try
        {
            getTypedWrapped().dumpStats(pattern);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getStats(String pattern, Boolean withDescriptions)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().getStats(pattern, withDescriptions);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
