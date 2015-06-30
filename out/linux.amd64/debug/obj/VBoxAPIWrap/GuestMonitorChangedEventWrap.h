/** @file
 *
 * VirtualBox API class wrapper header for IGuestMonitorChangedEvent.
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

#ifndef GuestMonitorChangedEventWrap_H_
#define GuestMonitorChangedEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestMonitorChangedEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestMonitorChangedEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestMonitorChangedEventWrap, IGuestMonitorChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestMonitorChangedEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestMonitorChangedEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestMonitorChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestMonitorChangedEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestMonitorChangedEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IGuestMonitorChangedEvent properties
    STDMETHOD(COMGETTER(ChangeType))(GuestMonitorChangedEventType_T *aChangeType);
    STDMETHOD(COMGETTER(ScreenId))(ULONG *aScreenId);
    STDMETHOD(COMGETTER(OriginX))(ULONG *aOriginX);
    STDMETHOD(COMGETTER(OriginY))(ULONG *aOriginY);
    STDMETHOD(COMGETTER(Width))(ULONG *aWidth);
    STDMETHOD(COMGETTER(Height))(ULONG *aHeight);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IGuestMonitorChangedEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IGuestMonitorChangedEvent properties
    virtual HRESULT getChangeType(GuestMonitorChangedEventType_T *aChangeType) = 0;
    virtual HRESULT getScreenId(ULONG *aScreenId) = 0;
    virtual HRESULT getOriginX(ULONG *aOriginX) = 0;
    virtual HRESULT getOriginY(ULONG *aOriginY) = 0;
    virtual HRESULT getWidth(ULONG *aWidth) = 0;
    virtual HRESULT getHeight(ULONG *aHeight) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IGuestMonitorChangedEvent methods
};

#endif // !GuestMonitorChangedEventWrap_H_
