
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
 * IGuest.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IGuest extends IUnknown
{

    public IGuest(org.mozilla.interfaces.IGuest wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IGuest getTypedWrapped()
    {
        return (org.mozilla.interfaces.IGuest) getWrapped();
    }
    public String getOSTypeId()
    {
        try
        {
            String retVal = getTypedWrapped().getOSTypeId();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.AdditionsRunLevelType getAdditionsRunLevel()
    {
        try
        {
            long retVal = getTypedWrapped().getAdditionsRunLevel();
            return org.virtualbox_4_3.AdditionsRunLevelType.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getAdditionsVersion()
    {
        try
        {
            String retVal = getTypedWrapped().getAdditionsVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getAdditionsRevision()
    {
        try
        {
            long retVal = getTypedWrapped().getAdditionsRevision();
            return retVal;
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
    public List<org.virtualbox_4_3.IAdditionsFacility> getFacilities()
    {
        try
        {
            org.mozilla.interfaces.IAdditionsFacility[] retVal = getTypedWrapped().getFacilities(null);
            return Helper.wrap2(org.virtualbox_4_3.IAdditionsFacility.class, org.mozilla.interfaces.IAdditionsFacility.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IGuestSession> getSessions()
    {
        try
        {
            org.mozilla.interfaces.IGuestSession[] retVal = getTypedWrapped().getSessions(null);
            return Helper.wrap2(org.virtualbox_4_3.IGuestSession.class, org.mozilla.interfaces.IGuestSession.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getMemoryBalloonSize()
    {
        try
        {
            long retVal = getTypedWrapped().getMemoryBalloonSize();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setMemoryBalloonSize(Long value)
    {
        try
        {
            getTypedWrapped().setMemoryBalloonSize(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long getStatisticsUpdateInterval()
    {
        try
        {
            long retVal = getTypedWrapped().getStatisticsUpdateInterval();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setStatisticsUpdateInterval(Long value)
    {
        try
        {
            getTypedWrapped().setStatisticsUpdateInterval(value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public static IGuest queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IGuest qiobj = Helper.queryInterface(nsobj, "{8011a1b1-6adb-4ffb-a37e-20abdaee4650}", org.mozilla.interfaces.IGuest.class);
        return qiobj == null ? null : new IGuest(qiobj);
    }
    public void internalGetStatistics(Holder<Long> cpuUser, Holder<Long> cpuKernel, Holder<Long> cpuIdle, Holder<Long> memTotal, Holder<Long> memFree, Holder<Long> memBalloon, Holder<Long> memShared, Holder<Long> memCache, Holder<Long> pagedTotal, Holder<Long> memAllocTotal, Holder<Long> memFreeTotal, Holder<Long> memBalloonTotal, Holder<Long> memSharedTotal)
    {
        try
        {
        long[] tmp_cpuUser = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_cpuKernel = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_cpuIdle = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memTotal = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memFree = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memBalloon = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memShared = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memCache = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_pagedTotal = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memAllocTotal = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memFreeTotal = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memBalloonTotal = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
        long[] tmp_memSharedTotal = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            getTypedWrapped().internalGetStatistics(tmp_cpuUser, tmp_cpuKernel, tmp_cpuIdle, tmp_memTotal, tmp_memFree, tmp_memBalloon, tmp_memShared, tmp_memCache, tmp_pagedTotal, tmp_memAllocTotal, tmp_memFreeTotal, tmp_memBalloonTotal, tmp_memSharedTotal);
        cpuUser.value = tmp_cpuUser[0];
        cpuKernel.value = tmp_cpuKernel[0];
        cpuIdle.value = tmp_cpuIdle[0];
        memTotal.value = tmp_memTotal[0];
        memFree.value = tmp_memFree[0];
        memBalloon.value = tmp_memBalloon[0];
        memShared.value = tmp_memShared[0];
        memCache.value = tmp_memCache[0];
        pagedTotal.value = tmp_pagedTotal[0];
        memAllocTotal.value = tmp_memAllocTotal[0];
        memFreeTotal.value = tmp_memFreeTotal[0];
        memBalloonTotal.value = tmp_memBalloonTotal[0];
        memSharedTotal.value = tmp_memSharedTotal[0];
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.AdditionsFacilityStatus getFacilityStatus(org.virtualbox_4_3.AdditionsFacilityType facility, Holder<Long> timestamp)
    {
        try
        {
        long[] tmp_timestamp = (long[])java.lang.reflect.Array.newInstance(long.class, 1);
            long retVal;
            retVal = getTypedWrapped().getFacilityStatus(facility.value(), tmp_timestamp);
        timestamp.value = tmp_timestamp[0];
            return org.virtualbox_4_3.AdditionsFacilityStatus.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean getAdditionsStatus(org.virtualbox_4_3.AdditionsRunLevelType level)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().getAdditionsStatus(level.value());
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void setCredentials(String userName, String password, String domain, Boolean allowInteractiveLogon)
    {
        try
        {
            getTypedWrapped().setCredentials(userName, password, domain, allowInteractiveLogon);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.DragAndDropAction dragHGEnter(Long screenId, Long y, Long x, org.virtualbox_4_3.DragAndDropAction defaultAction, List<org.virtualbox_4_3.DragAndDropAction> allowedActions, List<String> formats)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().dragHGEnter(screenId, y, x, defaultAction.value(), allowedActions != null ? allowedActions.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.DragAndDropAction.class, allowedActions), formats != null ? formats.size() : 0, Helper.unwrapStr(formats));
            return org.virtualbox_4_3.DragAndDropAction.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.DragAndDropAction dragHGMove(Long screenId, Long x, Long y, org.virtualbox_4_3.DragAndDropAction defaultAction, List<org.virtualbox_4_3.DragAndDropAction> allowedActions, List<String> formats)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().dragHGMove(screenId, x, y, defaultAction.value(), allowedActions != null ? allowedActions.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.DragAndDropAction.class, allowedActions), formats != null ? formats.size() : 0, Helper.unwrapStr(formats));
            return org.virtualbox_4_3.DragAndDropAction.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void dragHGLeave(Long screenId)
    {
        try
        {
            getTypedWrapped().dragHGLeave(screenId);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.DragAndDropAction dragHGDrop(Long screenId, Long x, Long y, org.virtualbox_4_3.DragAndDropAction defaultAction, List<org.virtualbox_4_3.DragAndDropAction> allowedActions, List<String> formats, Holder<String> format)
    {
        try
        {
        String[] tmp_format = (String[])java.lang.reflect.Array.newInstance(String.class, 1);
            long retVal;
            retVal = getTypedWrapped().dragHGDrop(screenId, x, y, defaultAction.value(), allowedActions != null ? allowedActions.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.DragAndDropAction.class, allowedActions), formats != null ? formats.size() : 0, Helper.unwrapStr(formats), tmp_format);
        format.value = tmp_format[0];
            return org.virtualbox_4_3.DragAndDropAction.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress dragHGPutData(Long screenId, String format, byte[] data)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().dragHGPutData(screenId, format, data);
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.DragAndDropAction dragGHPending(Long screenId, Holder<List<String>> formats, Holder<List<org.virtualbox_4_3.DragAndDropAction>> allowedActions)
    {
        try
        {
        String[][] tmp_formats = (String[][])java.lang.reflect.Array.newInstance(String[].class, 1);
        long[][] tmp_allowedActions = (long[][])java.lang.reflect.Array.newInstance(long[].class, 1);
            long retVal;
            retVal = getTypedWrapped().dragGHPending(screenId, null, tmp_formats, null, tmp_allowedActions);
        formats.value = Helper.wrap(tmp_formats[0]);
        allowedActions.value = Helper.wrapEnum(org.virtualbox_4_3.DragAndDropAction.class, tmp_allowedActions[0]);
            return org.virtualbox_4_3.DragAndDropAction.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress dragGHDropped(String format, org.virtualbox_4_3.DragAndDropAction action)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().dragGHDropped(format, action.value());
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public byte[] dragGHGetData()
    {
        try
        {
            byte[] retVal;
            retVal = getTypedWrapped().dragGHGetData(null);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestSession createSession(String user, String password, String domain, String sessionName)
    {
        try
        {
            org.mozilla.interfaces.IGuestSession retVal;
            retVal = getTypedWrapped().createSession(user, password, domain, sessionName);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestSession(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IGuestSession> findSession(String sessionName)
    {
        try
        {
            org.mozilla.interfaces.IGuestSession[] retVal;
            retVal = getTypedWrapped().findSession(sessionName, null);
            return Helper.wrap2(org.virtualbox_4_3.IGuestSession.class, org.mozilla.interfaces.IGuestSession.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress updateGuestAdditions(String source, List<String> arguments, List<org.virtualbox_4_3.AdditionsUpdateFlag> flags)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().updateGuestAdditions(source, arguments != null ? arguments.size() : 0, Helper.unwrapStr(arguments), flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.AdditionsUpdateFlag.class, flags));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
