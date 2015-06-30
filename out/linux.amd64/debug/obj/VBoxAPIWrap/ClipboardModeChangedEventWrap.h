/** @file
 *
 * VirtualBox API class wrapper header for IClipboardModeChangedEvent.
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

#ifndef ClipboardModeChangedEventWrap_H_
#define ClipboardModeChangedEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ClipboardModeChangedEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IClipboardModeChangedEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ClipboardModeChangedEventWrap, IClipboardModeChangedEvent)
    DECLARE_NOT_AGGREGATABLE(ClipboardModeChangedEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ClipboardModeChangedEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IClipboardModeChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IClipboardModeChangedEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ClipboardModeChangedEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IClipboardModeChangedEvent properties
    STDMETHOD(COMGETTER(ClipboardMode))(ClipboardMode_T *aClipboardMode);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IClipboardModeChangedEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IClipboardModeChangedEvent properties
    virtual HRESULT getClipboardMode(ClipboardMode_T *aClipboardMode) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IClipboardModeChangedEvent methods
};

#endif // !ClipboardModeChangedEventWrap_H_