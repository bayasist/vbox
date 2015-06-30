
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
 * IEventSource.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/src/libs/xpcom18a4/java/tools/genjifaces.xsl
 */

package org.mozilla.interfaces;

public interface IEventSource extends nsISupports {

  public static final String IEVENTSOURCE_IID =
    "{9b6e1aee-35f3-4f4d-b5bb-ed0ecefd8538}";

  public IEventListener createListener();

  public IEventSource createAggregator(long subordinatesSize, IEventSource[] subordinates);

  public void registerListener(IEventListener listener, long interestingSize, long[] interesting, boolean active);

  public void unregisterListener(IEventListener listener);

  public boolean fireEvent(IEvent event, int timeout);

  public IEvent getEvent(IEventListener listener, int timeout);

  public void eventProcessed(IEventListener listener, IEvent event);

}

