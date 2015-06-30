/** @file
 *
 * VirtualBox API class wrapper header for IGuestProcessOutputEvent.
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

#ifndef GuestProcessOutputEventWrap_H_
#define GuestProcessOutputEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestProcessOutputEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestProcessOutputEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestProcessOutputEventWrap, IGuestProcessOutputEvent)
    DECLARE_NOT_AGGREGATABLE(GuestProcessOutputEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestProcessOutputEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestProcessOutputEvent)
        COM_INTERFACE_ENTRY(IGuestProcessIOEvent)
        COM_INTERFACE_ENTRY(IGuestProcessEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestProcessOutputEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestProcessOutputEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IGuestSessionEvent properties
    STDMETHOD(COMGETTER(Session))(IGuestSession **aSession);

    // public IGuestProcessEvent properties
    STDMETHOD(COMGETTER(Process))(IGuestProcess **aProcess);
    STDMETHOD(COMGETTER(Pid))(ULONG *aPid);

    // public IGuestProcessIOEvent properties
    STDMETHOD(COMGETTER(Handle))(ULONG *aHandle);
    STDMETHOD(COMGETTER(Processed))(ULONG *aProcessed);

    // public IGuestProcessOutputEvent properties
    STDMETHOD(COMGETTER(Data))(ComSafeArrayOut(BYTE, aData));

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IGuestSessionEvent methods

    // public IGuestProcessEvent methods

    // public IGuestProcessIOEvent methods

    // public IGuestProcessOutputEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IGuestSessionEvent properties
    virtual HRESULT getSession(ComPtr<IGuestSession> &aSession) = 0;

    // wrapped IGuestProcessEvent properties
    virtual HRESULT getProcess(ComPtr<IGuestProcess> &aProcess) = 0;
    virtual HRESULT getPid(ULONG *aPid) = 0;

    // wrapped IGuestProcessIOEvent properties
    virtual HRESULT getHandle(ULONG *aHandle) = 0;
    virtual HRESULT getProcessed(ULONG *aProcessed) = 0;

    // wrapped IGuestProcessOutputEvent properties
    virtual HRESULT getData(std::vector<BYTE> &aData) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IGuestSessionEvent methods

    // wrapped IGuestProcessEvent methods

    // wrapped IGuestProcessIOEvent methods

    // wrapped IGuestProcessOutputEvent methods
};

#endif // !GuestProcessOutputEventWrap_H_
