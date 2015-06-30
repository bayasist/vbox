/** @file
 *
 * VirtualBox API class wrapper header for IHostPCIDevicePlugEvent.
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

#ifndef HostPCIDevicePlugEventWrap_H_
#define HostPCIDevicePlugEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostPCIDevicePlugEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IHostPCIDevicePlugEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostPCIDevicePlugEventWrap, IHostPCIDevicePlugEvent)
    DECLARE_NOT_AGGREGATABLE(HostPCIDevicePlugEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostPCIDevicePlugEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostPCIDevicePlugEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IHostPCIDevicePlugEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(HostPCIDevicePlugEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IMachineEvent properties
    STDMETHOD(COMGETTER(MachineId))(BSTR *aMachineId);

    // public IHostPCIDevicePlugEvent properties
    STDMETHOD(COMGETTER(Plugged))(BOOL *aPlugged);
    STDMETHOD(COMGETTER(Success))(BOOL *aSuccess);
    STDMETHOD(COMGETTER(Attachment))(IPCIDeviceAttachment **aAttachment);
    STDMETHOD(COMGETTER(Message))(BSTR *aMessage);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IMachineEvent methods

    // public IHostPCIDevicePlugEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IMachineEvent properties
    virtual HRESULT getMachineId(com::Guid &aMachineId) = 0;

    // wrapped IHostPCIDevicePlugEvent properties
    virtual HRESULT getPlugged(BOOL *aPlugged) = 0;
    virtual HRESULT getSuccess(BOOL *aSuccess) = 0;
    virtual HRESULT getAttachment(ComPtr<IPCIDeviceAttachment> &aAttachment) = 0;
    virtual HRESULT getMessage(com::Utf8Str &aMessage) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IMachineEvent methods

    // wrapped IHostPCIDevicePlugEvent methods
};

#endif // !HostPCIDevicePlugEventWrap_H_
