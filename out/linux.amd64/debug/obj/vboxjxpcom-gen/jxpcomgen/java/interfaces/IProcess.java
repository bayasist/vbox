
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
 * IProcess.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IProcess extends nsISupports {

  public static final String IPROCESS_IID =
    "{5a4fe06d-8cb1-40ff-ac9e-9676e32f706e}";

  public String[] getArguments(  long[] argumentsSize);

  public String[] getEnvironment(  long[] environmentSize);

  public IEventSource getEventSource();

  public String getExecutablePath();

  public int getExitCode();

  public String getName();

  public long getPID();

  public long getStatus();

  public long waitFor(long waitFor, long timeoutMS);

  public long waitForArray(long waitForSize, long[] waitFor, long timeoutMS);

  public byte[] read(long handle, long toRead, long timeoutMS, long[] data);

  public long write(long handle, long flags, byte[] data, long timeoutMS);

  public long writeArray(long handle, long flagsSize, long[] flags, byte[] data, long timeoutMS);

  public void terminate();

}

