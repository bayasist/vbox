/** @file
 *
 * VirtualBox API class wrapper header for IVetoEvent.
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

#ifndef VetoEventWrap_H_
#define VetoEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VetoEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IVetoEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VetoEventWrap, IVetoEvent)
    DECLARE_NOT_AGGREGATABLE(VetoEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VetoEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVetoEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IVetoEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(VetoEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IVetoEvent properties

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IVetoEvent methods
    STDMETHOD(AddVeto)(IN_BSTR aReason);
    STDMETHOD(IsVetoed)(BOOL *aResult);
    STDMETHOD(GetVetos)(ComSafeArrayOut(BSTR, aResult));

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IVetoEvent properties

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IVetoEvent methods
    virtual HRESULT addVeto(const com::Utf8Str &aReason) = 0;
    virtual HRESULT isVetoed(BOOL *aResult) = 0;
    virtual HRESULT getVetos(std::vector<com::Utf8Str> &aResult) = 0;
};

#endif // !VetoEventWrap_H_
