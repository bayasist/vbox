
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
 * ISnapshot.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface ISnapshot extends nsISupports {

  public static final String ISNAPSHOT_IID =
    "{0472823b-c6e7-472a-8e9f-d732e86b8463}";

  public String getId();

  public String getName();

  public void setName(String arg1);

  public String getDescription();

  public void setDescription(String arg1);

  public long getTimeStamp();

  public boolean getOnline();

  public IMachine getMachine();

  public ISnapshot getParent();

  public ISnapshot[] getChildren(  long[] childrenSize);

  public long getChildrenCount();

}

