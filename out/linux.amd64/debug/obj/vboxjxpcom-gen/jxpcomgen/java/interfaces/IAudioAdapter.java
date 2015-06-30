
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
 * IAudioAdapter.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IAudioAdapter extends nsISupports {

  public static final String IAUDIOADAPTER_IID =
    "{921873db-5f3f-4b69-91f9-7be9e535a2cb}";

  public boolean getEnabled();

  public void setEnabled(boolean arg1);

  public long getAudioController();

  public void setAudioController(long arg1);

  public long getAudioDriver();

  public void setAudioDriver(long arg1);

}

