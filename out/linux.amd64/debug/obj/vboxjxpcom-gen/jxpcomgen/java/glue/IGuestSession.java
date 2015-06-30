
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
 * IGuestSession.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
import java.util.List;

public class IGuestSession extends IUnknown
{

    public IGuestSession(org.mozilla.interfaces.IGuestSession wrapped)
    {
        super(wrapped);
    }
    public org.mozilla.interfaces.IGuestSession getTypedWrapped()
    {
        return (org.mozilla.interfaces.IGuestSession) getWrapped();
    }
    public String getUser()
    {
        try
        {
            String retVal = getTypedWrapped().getUser();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String getDomain()
    {
        try
        {
            String retVal = getTypedWrapped().getDomain();
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
    public Long getId()
    {
        try
        {
            long retVal = getTypedWrapped().getId();
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
    public Long getProtocolVersion()
    {
        try
        {
            long retVal = getTypedWrapped().getProtocolVersion();
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.GuestSessionStatus getStatus()
    {
        try
        {
            long retVal = getTypedWrapped().getStatus();
            return org.virtualbox_4_3.GuestSessionStatus.fromValue(retVal);
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
    public void setEnvironment(List<String> value)
    {
        try
        {
            getTypedWrapped().setEnvironment(Helper.unwrapStr(value));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IGuestProcess> getProcesses()
    {
        try
        {
            org.mozilla.interfaces.IGuestProcess[] retVal = getTypedWrapped().getProcesses(null);
            return Helper.wrap2(org.virtualbox_4_3.IGuestProcess.class, org.mozilla.interfaces.IGuestProcess.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IGuestDirectory> getDirectories()
    {
        try
        {
            org.mozilla.interfaces.IGuestDirectory[] retVal = getTypedWrapped().getDirectories(null);
            return Helper.wrap2(org.virtualbox_4_3.IGuestDirectory.class, org.mozilla.interfaces.IGuestDirectory.class, retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public List<org.virtualbox_4_3.IGuestFile> getFiles()
    {
        try
        {
            org.mozilla.interfaces.IGuestFile[] retVal = getTypedWrapped().getFiles(null);
            return Helper.wrap2(org.virtualbox_4_3.IGuestFile.class, org.mozilla.interfaces.IGuestFile.class, retVal);
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
    public static IGuestSession queryInterface(IUnknown obj)
    {
        nsISupports nsobj = obj != null ? (nsISupports)obj.getWrapped() : null;
        if (nsobj == null) return null;
        org.mozilla.interfaces.IGuestSession qiobj = Helper.queryInterface(nsobj, "{5b28703c-07b6-4fcb-afba-ac199b309752}", org.mozilla.interfaces.IGuestSession.class);
        return qiobj == null ? null : new IGuestSession(qiobj);
    }
    public void close()
    {
        try
        {
            getTypedWrapped().close();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress copyFrom(String source, String dest, List<org.virtualbox_4_3.CopyFileFlag> flags)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().copyFrom(source, dest, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.CopyFileFlag.class, flags));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress copyTo(String source, String dest, List<org.virtualbox_4_3.CopyFileFlag> flags)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().copyTo(source, dest, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.CopyFileFlag.class, flags));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void directoryCreate(String path, Long mode, List<org.virtualbox_4_3.DirectoryCreateFlag> flags)
    {
        try
        {
            getTypedWrapped().directoryCreate(path, mode, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.DirectoryCreateFlag.class, flags));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String directoryCreateTemp(String templateName, Long mode, String path, Boolean secure)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().directoryCreateTemp(templateName, mode, path, secure);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean directoryExists(String path)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().directoryExists(path);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestDirectory directoryOpen(String path, String filter, List<org.virtualbox_4_3.DirectoryOpenFlag> flags)
    {
        try
        {
            org.mozilla.interfaces.IGuestDirectory retVal;
            retVal = getTypedWrapped().directoryOpen(path, filter, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.DirectoryOpenFlag.class, flags));
            return (retVal != null) ? new org.virtualbox_4_3.IGuestDirectory(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestFsObjInfo directoryQueryInfo(String path)
    {
        try
        {
            org.mozilla.interfaces.IGuestFsObjInfo retVal;
            retVal = getTypedWrapped().directoryQueryInfo(path);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestFsObjInfo(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void directoryRemove(String path)
    {
        try
        {
            getTypedWrapped().directoryRemove(path);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IProgress directoryRemoveRecursive(String path, List<org.virtualbox_4_3.DirectoryRemoveRecFlag> flags)
    {
        try
        {
            org.mozilla.interfaces.IProgress retVal;
            retVal = getTypedWrapped().directoryRemoveRecursive(path, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.DirectoryRemoveRecFlag.class, flags));
            return (retVal != null) ? new org.virtualbox_4_3.IProgress(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void directoryRename(String source, String dest, List<org.virtualbox_4_3.PathRenameFlag> flags)
    {
        try
        {
            getTypedWrapped().directoryRename(source, dest, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.PathRenameFlag.class, flags));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void directorySetACL(String path, String acl)
    {
        try
        {
            getTypedWrapped().directorySetACL(path, acl);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void environmentClear()
    {
        try
        {
            getTypedWrapped().environmentClear();
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String environmentGet(String name)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().environmentGet(name);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void environmentSet(String name, String value)
    {
        try
        {
            getTypedWrapped().environmentSet(name, value);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void environmentUnset(String name)
    {
        try
        {
            getTypedWrapped().environmentUnset(name);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestFile fileCreateTemp(String templateName, Long mode, String path, Boolean secure)
    {
        try
        {
            org.mozilla.interfaces.IGuestFile retVal;
            retVal = getTypedWrapped().fileCreateTemp(templateName, mode, path, secure);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestFile(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean fileExists(String path)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().fileExists(path);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void fileRemove(String path)
    {
        try
        {
            getTypedWrapped().fileRemove(path);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestFile fileOpen(String path, String openMode, String disposition, Long creationMode)
    {
        try
        {
            org.mozilla.interfaces.IGuestFile retVal;
            retVal = getTypedWrapped().fileOpen(path, openMode, disposition, creationMode);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestFile(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestFile fileOpenEx(String path, String openMode, String disposition, String sharingMode, Long creationMode, Long offset)
    {
        try
        {
            org.mozilla.interfaces.IGuestFile retVal;
            retVal = getTypedWrapped().fileOpenEx(path, openMode, disposition, sharingMode, creationMode, offset);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestFile(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestFsObjInfo fileQueryInfo(String path)
    {
        try
        {
            org.mozilla.interfaces.IGuestFsObjInfo retVal;
            retVal = getTypedWrapped().fileQueryInfo(path);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestFsObjInfo(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Long fileQuerySize(String path)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().fileQuerySize(path);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void fileRename(String source, String dest, List<org.virtualbox_4_3.PathRenameFlag> flags)
    {
        try
        {
            getTypedWrapped().fileRename(source, dest, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.PathRenameFlag.class, flags));
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void fileSetACL(String file, String acl)
    {
        try
        {
            getTypedWrapped().fileSetACL(file, acl);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestProcess processCreate(String command, List<String> arguments, List<String> environment, List<org.virtualbox_4_3.ProcessCreateFlag> flags, Long timeoutMS)
    {
        try
        {
            org.mozilla.interfaces.IGuestProcess retVal;
            retVal = getTypedWrapped().processCreate(command, arguments != null ? arguments.size() : 0, Helper.unwrapStr(arguments), environment != null ? environment.size() : 0, Helper.unwrapStr(environment), flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.ProcessCreateFlag.class, flags), timeoutMS);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestProcess(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestProcess processCreateEx(String command, List<String> arguments, List<String> environment, List<org.virtualbox_4_3.ProcessCreateFlag> flags, Long timeoutMS, org.virtualbox_4_3.ProcessPriority priority, List<Integer> affinity)
    {
        try
        {
            org.mozilla.interfaces.IGuestProcess retVal;
            retVal = getTypedWrapped().processCreateEx(command, arguments != null ? arguments.size() : 0, Helper.unwrapStr(arguments), environment != null ? environment.size() : 0, Helper.unwrapStr(environment), flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.ProcessCreateFlag.class, flags), timeoutMS, priority.value(), affinity != null ? affinity.size() : 0, Helper.unwrapInteger(affinity));
            return (retVal != null) ? new org.virtualbox_4_3.IGuestProcess(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.IGuestProcess processGet(Long pid)
    {
        try
        {
            org.mozilla.interfaces.IGuestProcess retVal;
            retVal = getTypedWrapped().processGet(pid);
            return (retVal != null) ? new org.virtualbox_4_3.IGuestProcess(retVal) : null;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void symlinkCreate(String source, String target, org.virtualbox_4_3.SymlinkType type)
    {
        try
        {
            getTypedWrapped().symlinkCreate(source, target, type.value());
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public Boolean symlinkExists(String symlink)
    {
        try
        {
            boolean retVal;
            retVal = getTypedWrapped().symlinkExists(symlink);
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public String symlinkRead(String symlink, List<org.virtualbox_4_3.SymlinkReadFlag> flags)
    {
        try
        {
            String retVal;
            retVal = getTypedWrapped().symlinkRead(symlink, flags != null ? flags.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.SymlinkReadFlag.class, flags));
            return retVal;
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void symlinkRemoveDirectory(String path)
    {
        try
        {
            getTypedWrapped().symlinkRemoveDirectory(path);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public void symlinkRemoveFile(String file)
    {
        try
        {
            getTypedWrapped().symlinkRemoveFile(file);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.GuestSessionWaitResult waitFor(Long waitFor, Long timeoutMS)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().waitFor(waitFor, timeoutMS);
            return org.virtualbox_4_3.GuestSessionWaitResult.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
    public org.virtualbox_4_3.GuestSessionWaitResult waitForArray(List<org.virtualbox_4_3.GuestSessionWaitForFlag> waitFor, Long timeoutMS)
    {
        try
        {
            long retVal;
            retVal = getTypedWrapped().waitForArray(waitFor != null ? waitFor.size() : 0, Helper.unwrapEnum(org.virtualbox_4_3.GuestSessionWaitForFlag.class, waitFor), timeoutMS);
            return org.virtualbox_4_3.GuestSessionWaitResult.fromValue(retVal);
        }
        catch (org.mozilla.xpcom.XPCOMException e)
        {
            throw new VBoxException(e.getMessage(), e);
        }
    }
}
