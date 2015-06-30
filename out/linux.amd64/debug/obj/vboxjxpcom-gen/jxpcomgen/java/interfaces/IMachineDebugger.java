
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
 * IMachineDebugger.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IMachineDebugger extends nsISupports {

  public static final String IMACHINEDEBUGGER_IID =
    "{5e4534dc-21b8-4f6b-8a08-eef50e1a0aa1}";

  public boolean getSingleStep();

  public void setSingleStep(boolean arg1);

  public boolean getRecompileUser();

  public void setRecompileUser(boolean arg1);

  public boolean getRecompileSupervisor();

  public void setRecompileSupervisor(boolean arg1);

  public boolean getExecuteAllInIEM();

  public void setExecuteAllInIEM(boolean arg1);

  public boolean getPATMEnabled();

  public void setPATMEnabled(boolean arg1);

  public boolean getCSAMEnabled();

  public void setCSAMEnabled(boolean arg1);

  public boolean getLogEnabled();

  public void setLogEnabled(boolean arg1);

  public String getLogDbgFlags();

  public String getLogDbgGroups();

  public String getLogDbgDestinations();

  public String getLogRelFlags();

  public String getLogRelGroups();

  public String getLogRelDestinations();

  public boolean getHWVirtExEnabled();

  public boolean getHWVirtExNestedPagingEnabled();

  public boolean getHWVirtExVPIDEnabled();

  public boolean getHWVirtExUXEnabled();

  public String getOSName();

  public String getOSVersion();

  public boolean getPAEEnabled();

  public long getVirtualTimeRate();

  public void setVirtualTimeRate(long arg1);

  public long getVM();

  public void dumpGuestCore(String filename, String compression);

  public void dumpHostProcessCore(String filename, String compression);

  public String info(String name, String args);

  public void injectNMI();

  public void modifyLogGroups(String settings);

  public void modifyLogFlags(String settings);

  public void modifyLogDestinations(String settings);

  public byte[] readPhysicalMemory(long address, long size, long[] bytes);

  public void writePhysicalMemory(long address, long size, byte[] bytes);

  public byte[] readVirtualMemory(long cpuId, long address, long size, long[] bytes);

  public void writeVirtualMemory(long cpuId, long address, long size, byte[] bytes);

  public String detectOS();

  public String getRegister(long cpuId, String name);

  public void getRegisters(long cpuId, long[] namesSize, String[][] names, long[] valuesSize, String[][] values);

  public void setRegister(long cpuId, String name, String value);

  public void setRegisters(long cpuId, long namesSize, String[] names, long valuesSize, String[] values);

  public String dumpGuestStack(long cpuId);

  public void resetStats(String pattern);

  public void dumpStats(String pattern);

  public String getStats(String pattern, boolean withDescriptions);

}

