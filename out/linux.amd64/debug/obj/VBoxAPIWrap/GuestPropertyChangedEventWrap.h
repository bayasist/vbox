/** @file
 *
 * VirtualBox API class wrapper header for IGuestPropertyChangedEvent.
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

#ifndef GuestPropertyChangedEventWrap_H_
#define GuestPropertyChangedEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestPropertyChangedEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestPropertyChangedEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestPropertyChangedEventWrap, IGuestPropertyChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestPropertyChangedEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestPropertyChangedEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestPropertyChangedEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestPropertyChangedEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestPropertyChangedEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IMachineEvent properties
    STDMETHOD(COMGETTER(MachineId))(BSTR *aMachineId);

    // public IGuestPropertyChangedEvent properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Value))(BSTR *aValue);
    STDMETHOD(COMGETTER(Flags))(BSTR *aFlags);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IMachineEvent methods

    // public IGuestPropertyChangedEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IMachineEvent properties
    virtual HRESULT getMachineId(com::Guid &aMachineId) = 0;

    // wrapped IGuestPropertyChangedEvent properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getValue(com::Utf8Str &aValue) = 0;
    virtual HRESULT getFlags(com::Utf8Str &aFlags) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IMachineEvent methods

    // wrapped IGuestPropertyChangedEvent methods
};

#endif // !GuestPropertyChangedEventWrap_H_
