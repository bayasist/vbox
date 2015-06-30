
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
 * IFsObjInfo.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IFsObjInfo extends nsISupports {

  public static final String IFSOBJINFO_IID =
    "{4047ba30-7006-4966-ae86-94164e5e20eb}";

  public long getAccessTime();

  public long getAllocatedSize();

  public long getBirthTime();

  public long getChangeTime();

  public long getDeviceNumber();

  public String getFileAttributes();

  public long getGenerationId();

  public long getGID();

  public String getGroupName();

  public long getHardLinks();

  public long getModificationTime();

  public String getName();

  public long getNodeId();

  public long getNodeIdDevice();

  public long getObjectSize();

  public long getType();

  public long getUID();

  public long getUserFlags();

  public String getUserName();

}

