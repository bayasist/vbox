
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
 * IMediumFormat.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IMediumFormat extends nsISupports {

  public static final String IMEDIUMFORMAT_IID =
    "{6238e1cf-a17d-4ec1-8172-418bfb22b93a}";

  public String getId();

  public String getName();

  public long[] getCapabilities(  long[] capabilitiesSize);

  public void describeFileExtensions(long[] extensionsSize, String[][] extensions, long[] typesSize, long[][] types);

  public void describeProperties(long[] namesSize, String[][] names, long[] descriptionsSize, String[][] descriptions, long[] typesSize, long[][] types, long[] flagsSize, long[][] flags, long[] defaultsSize, String[][] defaults);

}

