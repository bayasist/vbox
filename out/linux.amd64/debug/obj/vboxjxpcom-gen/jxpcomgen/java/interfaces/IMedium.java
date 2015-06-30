
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
 * IMedium.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IMedium extends nsISupports {

  public static final String IMEDIUM_IID =
    "{05f2bbb6-a3a6-4fb9-9b49-6d0dda7142ac}";

  public String getId();

  public String getDescription();

  public void setDescription(String arg1);

  public long getState();

  public long[] getVariant(  long[] variantSize);

  public String getLocation();

  public String getName();

  public long getDeviceType();

  public boolean getHostDrive();

  public long getSize();

  public String getFormat();

  public IMediumFormat getMediumFormat();

  public long getType();

  public void setType(long arg1);

  public long[] getAllowedTypes(  long[] allowedTypesSize);

  public IMedium getParent();

  public IMedium[] getChildren(  long[] childrenSize);

  public IMedium getBase();

  public boolean getReadOnly();

  public long getLogicalSize();

  public boolean getAutoReset();

  public void setAutoReset(boolean arg1);

  public String getLastAccessError();

  public String[] getMachineIds(  long[] machineIdsSize);

  public void setIds(boolean setImageId, String imageId, boolean setParentId, String parentId);

  public long refreshState();

  public String[] getSnapshotIds(String machineId, long[] snapshotIds);

  public IToken lockRead();

  public IToken lockWrite();

  public void close();

  public String getProperty(String name);

  public void setProperty(String name, String value);

  public String[] getProperties(String names, long[] returnNamesSize, String[][] returnNames, long[] returnValues);

  public void setProperties(long namesSize, String[] names, long valuesSize, String[] values);

  public IProgress createBaseStorage(long logicalSize, long variantSize, long[] variant);

  public IProgress deleteStorage();

  public IProgress createDiffStorage(IMedium target, long variantSize, long[] variant);

  public IProgress mergeTo(IMedium target);

  public IProgress cloneTo(IMedium target, long variantSize, long[] variant, IMedium parent);

  public IProgress cloneToBase(IMedium target, long variantSize, long[] variant);

  public IProgress setLocation(String location);

  public IProgress compact();

  public IProgress resize(long logicalSize);

  public IProgress reset();

}

