
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
 * IProgress.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IProgress extends nsISupports {

  public static final String IPROGRESS_IID =
    "{c20238e4-3221-4d3f-8891-81ce92d9f913}";

  public String getId();

  public String getDescription();

  public nsISupports getInitiator();

  public boolean getCancelable();

  public long getPercent();

  public int getTimeRemaining();

  public boolean getCompleted();

  public boolean getCanceled();

  public int getResultCode();

  public IVirtualBoxErrorInfo getErrorInfo();

  public long getOperationCount();

  public long getOperation();

  public String getOperationDescription();

  public long getOperationPercent();

  public long getOperationWeight();

  public long getTimeout();

  public void setTimeout(long arg1);

  public void setCurrentOperationProgress(long percent);

  public void setNextOperation(String nextOperationDescription, long nextOperationsWeight);

  public void waitForCompletion(int timeout);

  public void waitForOperationCompletion(long operation, int timeout);

  public void waitForAsyncProgressCompletion(IProgress pProgressAsync);

  public void cancel();

}

