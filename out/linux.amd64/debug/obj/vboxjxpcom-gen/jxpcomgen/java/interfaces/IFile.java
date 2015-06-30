
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
 * IFile.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IFile extends nsISupports {

  public static final String IFILE_IID =
    "{5ec56ea3-b55d-4bdb-8c4f-5f9fb26b894b}";

  public long getCreationMode();

  public String getDisposition();

  public IEventSource getEventSource();

  public String getFileName();

  public long getId();

  public long getInitialSize();

  public String getOpenMode();

  public long getOffset();

  public long getStatus();

  public void close();

  public IFsObjInfo queryInfo();

  public byte[] read(long toRead, long timeoutMS, long[] data);

  public byte[] readAt(long offset, long toRead, long timeoutMS, long[] data);

  public void seek(long offset, long whence);

  public void setACL(String acl);

  public long write(byte[] data, long timeoutMS);

  public long writeAt(long offset, byte[] data, long timeoutMS);

}

