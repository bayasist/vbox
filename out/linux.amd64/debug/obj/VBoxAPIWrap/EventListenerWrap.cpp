/** @file
 *
 * VirtualBox API class wrapper code for IEventListener.
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl
 * Generator: src/VBox/Main/idl/apiwrap-server.xsl
 */

/**
 * Copyright (C) 2010-2014 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EVENTLISTENER

#include "EventListenerWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(EventListenerWrap)

//
// IEventListener properties
//

//
// IEventListener methods
//

STDMETHODIMP EventListenerWrap::HandleEvent(IEvent *aEvent)
{
    LogRelFlow(("{%p} %s:enter aEvent=%p\n", this, "EventListener::handleEvent", aEvent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = handleEvent(ComTypeInConverter<IEvent>(aEvent).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "EventListener::handleEvent", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(EventListenerWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(EventListenerWrap, IEventListener)
#endif // VBOX_WITH_XPCOM
