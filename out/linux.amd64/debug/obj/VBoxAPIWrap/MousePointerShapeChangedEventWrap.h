/** @file
 *
 * VirtualBox API class wrapper header for IMousePointerShapeChangedEvent.
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

#ifndef MousePointerShapeChangedEventWrap_H_
#define MousePointerShapeChangedEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MousePointerShapeChangedEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IMousePointerShapeChangedEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MousePointerShapeChangedEventWrap, IMousePointerShapeChangedEvent)
    DECLARE_NOT_AGGREGATABLE(MousePointerShapeChangedEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MousePointerShapeChangedEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMousePointerShapeChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IMousePointerShapeChangedEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(MousePointerShapeChangedEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IMousePointerShapeChangedEvent properties
    STDMETHOD(COMGETTER(Visible))(BOOL *aVisible);
    STDMETHOD(COMGETTER(Alpha))(BOOL *aAlpha);
    STDMETHOD(COMGETTER(Xhot))(ULONG *aXhot);
    STDMETHOD(COMGETTER(Yhot))(ULONG *aYhot);
    STDMETHOD(COMGETTER(Width))(ULONG *aWidth);
    STDMETHOD(COMGETTER(Height))(ULONG *aHeight);
    STDMETHOD(COMGETTER(Shape))(ComSafeArrayOut(BYTE, aShape));

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IMousePointerShapeChangedEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IMousePointerShapeChangedEvent properties
    virtual HRESULT getVisible(BOOL *aVisible) = 0;
    virtual HRESULT getAlpha(BOOL *aAlpha) = 0;
    virtual HRESULT getXhot(ULONG *aXhot) = 0;
    virtual HRESULT getYhot(ULONG *aYhot) = 0;
    virtual HRESULT getWidth(ULONG *aWidth) = 0;
    virtual HRESULT getHeight(ULONG *aHeight) = 0;
    virtual HRESULT getShape(std::vector<BYTE> &aShape) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IMousePointerShapeChangedEvent methods
};

#endif // !MousePointerShapeChangedEventWrap_H_
