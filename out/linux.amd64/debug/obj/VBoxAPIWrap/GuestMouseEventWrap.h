/** @file
 *
 * VirtualBox API class wrapper header for IGuestMouseEvent.
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

#ifndef GuestMouseEventWrap_H_
#define GuestMouseEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestMouseEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestMouseEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestMouseEventWrap, IGuestMouseEvent)
    DECLARE_NOT_AGGREGATABLE(GuestMouseEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestMouseEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestMouseEvent)
        COM_INTERFACE_ENTRY(IReusableEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestMouseEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestMouseEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IReusableEvent properties
    STDMETHOD(COMGETTER(Generation))(ULONG *aGeneration);

    // public IGuestMouseEvent properties
    STDMETHOD(COMGETTER(Mode))(GuestMouseEventMode_T *aMode);
    STDMETHOD(COMGETTER(X))(LONG *aX);
    STDMETHOD(COMGETTER(Y))(LONG *aY);
    STDMETHOD(COMGETTER(Z))(LONG *aZ);
    STDMETHOD(COMGETTER(W))(LONG *aW);
    STDMETHOD(COMGETTER(Buttons))(LONG *aButtons);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IReusableEvent methods
    STDMETHOD(Reuse)();

    // public IGuestMouseEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IReusableEvent properties
    virtual HRESULT getGeneration(ULONG *aGeneration) = 0;

    // wrapped IGuestMouseEvent properties
    virtual HRESULT getMode(GuestMouseEventMode_T *aMode) = 0;
    virtual HRESULT getX(LONG *aX) = 0;
    virtual HRESULT getY(LONG *aY) = 0;
    virtual HRESULT getZ(LONG *aZ) = 0;
    virtual HRESULT getW(LONG *aW) = 0;
    virtual HRESULT getButtons(LONG *aButtons) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IReusableEvent methods
    virtual HRESULT reuse() = 0;

    // wrapped IGuestMouseEvent methods
};

#endif // !GuestMouseEventWrap_H_
