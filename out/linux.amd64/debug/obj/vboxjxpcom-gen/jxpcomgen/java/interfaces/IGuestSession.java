
/**
 *  Copyright (C) 2010-2013 Oracle Corporation
 *
 *  This file is part of VirtualBox Open Source Edition (OSE), as
 *  available from http://www.virtualbox.org. This file is free software;
 *  you can redistribute it and/or modify it under the terms of the GNU
 *  General Public License (GPL) as published by the Free Software
 *  Foundation, in version 2 as it comes in the "COPYING" file of the
 *  VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 *  hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 *
 * IGuestSession.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IGuestSession extends nsISupports {

  public static final String IGUESTSESSION_IID =
    "{5b28703c-07b6-4fcb-afba-ac199b309752}";

  public String getUser();

  public String getDomain();

  public String getName();

  public long getId();

  public long getTimeout();

  public void setTimeout(long arg1);

  public long getProtocolVersion();

  public long getStatus();

  public String[] getEnvironment(  long[] environmentSize);

  public void setEnvironment(String[] arg1);

  public IGuestProcess[] getProcesses(  long[] processesSize);

  public IGuestDirectory[] getDirectories(  long[] directoriesSize);

  public IGuestFile[] getFiles(  long[] filesSize);

  public IEventSource getEventSource();

  public void close();

  public IProgress copyFrom(String source, String dest, long flagsSize, long[] flags);

  public IProgress copyTo(String source, String dest, long flagsSize, long[] flags);

  public void directoryCreate(String path, long mode, long flagsSize, long[] flags);

  public String directoryCreateTemp(String templateName, long mode, String path, boolean secure);

  public boolean directoryExists(String path);

  public IGuestDirectory directoryOpen(String path, String filter, long flagsSize, long[] flags);

  public IGuestFsObjInfo directoryQueryInfo(String path);

  public void directoryRemove(String path);

  public IProgress directoryRemoveRecursive(String path, long flagsSize, long[] flags);

  public void directoryRename(String source, String dest, long flagsSize, long[] flags);

  public void directorySetACL(String path, String acl);

  public void environmentClear();

  public String environmentGet(String name);

  public void environmentSet(String name, String value);

  public void environmentUnset(String name);

  public IGuestFile fileCreateTemp(String templateName, long mode, String path, boolean secure);

  public boolean fileExists(String path);

  public void fileRemove(String path);

  public IGuestFile fileOpen(String path, String openMode, String disposition, long creationMode);

  public IGuestFile fileOpenEx(String path, String openMode, String disposition, String sharingMode, long creationMode, long offset);

  public IGuestFsObjInfo fileQueryInfo(String path);

  public long fileQuerySize(String path);

  public void fileRename(String source, String dest, long flagsSize, long[] flags);

  public void fileSetACL(String file, String acl);

  public IGuestProcess processCreate(String command, long argumentsSize, String[] arguments, long environmentSize, String[] environment, long flagsSize, long[] flags, long timeoutMS);

  public IGuestProcess processCreateEx(String command, long argumentsSize, String[] arguments, long environmentSize, String[] environment, long flagsSize, long[] flags, long timeoutMS, long priority, long affinitySize, int[] affinity);

  public IGuestProcess processGet(long pid);

  public void symlinkCreate(String source, String target, long type);

  public boolean symlinkExists(String symlink);

  public String symlinkRead(String symlink, long flagsSize, long[] flags);

  public void symlinkRemoveDirectory(String path);

  public void symlinkRemoveFile(String file);

  public long waitFor(long waitFor, long timeoutMS);

  public long waitForArray(long waitForSize, long[] waitFor, long timeoutMS);

}

