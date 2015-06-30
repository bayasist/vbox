/** @file
 *
 * VirtualBox API class wrapper header for IEventSource.
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

#ifndef EventSourceWrap_H_
#define EventSourceWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE EventSourceWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IEventSource)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(EventSourceWrap, IEventSource)
    DECLARE_NOT_AGGREGATABLE(EventSourceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(EventSourceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IEventSource)
        COM_INTERFACE_ENTRY2(IDispatch, IEventSource)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(EventSourceWrap)

    // public IEventSource properties

    // public IEventSource methods
    STDMETHOD(CreateListener)(IEventListener **aListener);
    STDMETHOD(CreateAggregator)(ComSafeArrayIn(IEventSource *, aSubordinates),
                                IEventSource **aResult);
    STDMETHOD(RegisterListener)(IEventListener *aListener,
                                ComSafeArrayIn(VBoxEventType_T, aInteresting),
                                BOOL aActive);
    STDMETHOD(UnregisterListener)(IEventListener *aListener);
    STDMETHOD(FireEvent)(IEvent *aEvent,
                         LONG aTimeout,
                         BOOL *aResult);
    STDMETHOD(GetEvent)(IEventListener *aListener,
                        LONG aTimeout,
                        IEvent **aEvent);
    STDMETHOD(EventProcessed)(IEventListener *aListener,
                              IEvent *aEvent);

private:
    // wrapped IEventSource properties

    // wrapped IEventSource methods
    virtual HRESULT createListener(ComPtr<IEventListener> &aListener) = 0;
    virtual HRESULT createAggregator(const std::vector<ComPtr<IEventSource> > &aSubordinates,
                                     ComPtr<IEventSource> &aResult) = 0;
    virtual HRESULT registerListener(const ComPtr<IEventListener> &aListener,
                                     const std::vector<VBoxEventType_T> &aInteresting,
                                     BOOL aActive) = 0;
    virtual HRESULT unregisterListener(const ComPtr<IEventListener> &aListener) = 0;
    virtual HRESULT fireEvent(const ComPtr<IEvent> &aEvent,
                              LONG aTimeout,
                              BOOL *aResult) = 0;
    virtual HRESULT getEvent(const ComPtr<IEventListener> &aListener,
                             LONG aTimeout,
                             ComPtr<IEvent> &aEvent) = 0;
    virtual HRESULT eventProcessed(const ComPtr<IEventListener> &aListener,
                                   const ComPtr<IEvent> &aEvent) = 0;
};

#endif // !EventSourceWrap_H_
