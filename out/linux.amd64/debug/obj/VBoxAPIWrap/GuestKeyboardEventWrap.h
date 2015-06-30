/** @file
 *
 * VirtualBox API class wrapper header for IGuestKeyboardEvent.
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

#ifndef GuestKeyboardEventWrap_H_
#define GuestKeyboardEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestKeyboardEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestKeyboardEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestKeyboardEventWrap, IGuestKeyboardEvent)
    DECLARE_NOT_AGGREGATABLE(GuestKeyboardEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestKeyboardEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestKeyboardEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestKeyboardEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestKeyboardEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IGuestKeyboardEvent properties
    STDMETHOD(COMGETTER(Scancodes))(ComSafeArrayOut(LONG, aScancodes));

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IGuestKeyboardEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IGuestKeyboardEvent properties
    virtual HRESULT getScancodes(std::vector<LONG> &aScancodes) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IGuestKeyboardEvent methods
};

#endif // !GuestKeyboardEventWrap_H_
