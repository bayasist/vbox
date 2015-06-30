
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
 * USBDeviceState.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface USBDeviceState {

  public static final String USBDEVICESTATE_IID = 
     "{b99a2e65-67fb-4882-82fd-f3e5e8193ab4}";

  public static final long NotSupported = 0L;

  public static final long Unavailable = 1L;

  public static final long Busy = 2L;

  public static final long Available = 3L;

  public static final long Held = 4L;

  public static final long Captured = 5L;

}
