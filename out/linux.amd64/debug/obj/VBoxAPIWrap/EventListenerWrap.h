/** @file
 *
 * VirtualBox API class wrapper header for IEventListener.
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

#ifndef EventListenerWrap_H_
#define EventListenerWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE EventListenerWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IEventListener)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(EventListenerWrap, IEventListener)
    DECLARE_NOT_AGGREGATABLE(EventListenerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(EventListenerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IEventListener)
        COM_INTERFACE_ENTRY2(IDispatch, IEventListener)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(EventListenerWrap)

    // public IEventListener properties

    // public IEventListener methods
    STDMETHOD(HandleEvent)(IEvent *aEvent);

private:
    // wrapped IEventListener properties

    // wrapped IEventListener methods
    virtual HRESULT handleEvent(const ComPtr<IEvent> &aEvent) = 0;
};

#endif // !EventListenerWrap_H_
