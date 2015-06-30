
/*
 * Copyright (C) 2010-2014 Oracle Corporation
 *
 * This file is part of the VirtualBox SDK, as available from
 * http://www.virtualbox.org.  This library is free software; you can
 * redistribute it and/or modify it under the terms of the GNU Lesser General
 * Public License as published by the Free Software Foundation, in version 2.1
 * as it comes in the "COPYING.LIB" file of the VirtualBox SDK distribution.
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * VirtualBoxManager.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;


import java.io.File;

import org.mozilla.xpcom.*;
import org.mozilla.interfaces.*;

public class VirtualBoxManager
{
    private Mozilla mozilla;
    private IVirtualBox vbox;
    private nsIComponentManager componentManager;

    private VirtualBoxManager(Mozilla mozilla)
    {
        this.mozilla = mozilla;
        this.componentManager = mozilla.getComponentManager();
        this.vbox = new IVirtualBox((org.mozilla.interfaces.IVirtualBox) this.componentManager
                    .createInstanceByContractID("@virtualbox.org/VirtualBox;1",
                                                null,
                                                org.mozilla.interfaces.IVirtualBox.IVIRTUALBOX_IID));
    }

    public void connect(String url, String username, String passwd)
    {
        throw new VBoxException("Connect doesn't make sense for local bindings");
    }

    public void disconnect()
    {
        throw new VBoxException("Disconnect doesn't make sense for local bindings");
    }

    public static void initPerThread()
    {
    }

    public static void deinitPerThread()
    {
    }

    public IVirtualBox getVBox()
    {
        return this.vbox;
    }

    public ISession getSessionObject()
    {
        return new ISession((org.mozilla.interfaces.ISession) componentManager
                .createInstanceByContractID("@virtualbox.org/Session;1", null,
                                            org.mozilla.interfaces.ISession.ISESSION_IID));
    }

    public ISession openMachineSession(IMachine m) throws Exception
    {
        ISession s = getSessionObject();
        m.lockMachine(s, LockType.Shared);
        return s;
    }

    public void closeMachineSession(ISession s)
    {
          if (s != null)
            s.unlockMachine();
    }

    private static boolean hasInstance = false;
    private static boolean isMozillaInited = false;

    public static synchronized VirtualBoxManager createInstance(String home)
    {
        if (hasInstance)
            throw new VBoxException("only one instance of VirtualBoxManager at a time allowed");
        if (home == null || home.equals(""))
            home = System.getProperty("vbox.home");

        if (home == null)
            throw new VBoxException("vbox.home Java property must be defined to use XPCOM bridge");

        File grePath = new File(home);

        Mozilla mozilla = Mozilla.getInstance();
        if (!isMozillaInited)
        {
            mozilla.initialize(grePath);
            try
            {
                mozilla.initXPCOM(grePath, null);
                isMozillaInited = true;
            }
            catch (Exception e)
            {
                e.printStackTrace();
                return null;
            }
        }

        hasInstance = true;

        return new VirtualBoxManager(mozilla);
    }

    public IEventListener createListener(Object sink)
    {
        return new IEventListener(new EventListenerImpl(sink));
    }

    public void cleanup()
    {
        deinitPerThread();
        // cleanup, we don't do that, as XPCOM bridge doesn't cleanly
        // shuts down, so we prefer to avoid native shutdown
        // mozilla.shutdownXPCOM(null);
        mozilla = null;
        hasInstance = false;
    }

    public void waitForEvents(long tmo)
    {
        mozilla.waitForEvents(tmo);
    }
}
