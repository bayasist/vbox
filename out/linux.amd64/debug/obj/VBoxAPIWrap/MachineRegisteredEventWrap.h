/** @file
 *
 * VirtualBox API class wrapper header for IMachineRegisteredEvent.
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

#ifndef MachineRegisteredEventWrap_H_
#define MachineRegisteredEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MachineRegisteredEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IMachineRegisteredEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MachineRegisteredEventWrap, IMachineRegisteredEvent)
    DECLARE_NOT_AGGREGATABLE(MachineRegisteredEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MachineRegisteredEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMachineRegisteredEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IMachineRegisteredEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(MachineRegisteredEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IMachineEvent properties
    STDMETHOD(COMGETTER(MachineId))(BSTR *aMachineId);

    // public IMachineRegisteredEvent properties
    STDMETHOD(COMGETTER(Registered))(BOOL *aRegistered);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IMachineEvent methods

    // public IMachineRegisteredEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IMachineEvent properties
    virtual HRESULT getMachineId(com::Guid &aMachineId) = 0;

    // wrapped IMachineRegisteredEvent properties
    virtual HRESULT getRegistered(BOOL *aRegistered) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IMachineEvent methods

    // wrapped IMachineRegisteredEvent methods
};

#endif // !MachineRegisteredEventWrap_H_
