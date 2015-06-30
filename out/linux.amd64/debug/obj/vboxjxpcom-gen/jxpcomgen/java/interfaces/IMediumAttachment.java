
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
 * IMediumAttachment.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IMediumAttachment extends nsISupports {

  public static final String IMEDIUMATTACHMENT_IID =
    "{4b252567-5d4e-4db8-b3c8-569ec1c9236c}";

  public IMedium getMedium();

  public String getController();

  public int getPort();

  public int getDevice();

  public long getType();

  public boolean getPassthrough();

  public boolean getTemporaryEject();

  public boolean getIsEjected();

  public boolean getNonRotational();

  public boolean getDiscard();

  public boolean getHotPluggable();

  public IBandwidthGroup getBandwidthGroup();

}

