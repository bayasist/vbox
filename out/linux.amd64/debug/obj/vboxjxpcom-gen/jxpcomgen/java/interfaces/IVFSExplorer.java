
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
 * IVFSExplorer.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IVFSExplorer extends nsISupports {

  public static final String IVFSEXPLORER_IID =
    "{fb220201-2fd3-47e2-a5dc-2c2431d833cc}";

  public String getPath();

  public long getType();

  public IProgress update();

  public IProgress cd(String dir);

  public IProgress cdUp();

  public void entryList(long[] namesSize, String[][] names, long[] typesSize, long[][] types, long[] sizesSize, long[][] sizes, long[] modesSize, long[][] modes);

  public String[] exists(long namesSize, String[] names, long[] exists);

  public IProgress remove(long namesSize, String[] names);

}

