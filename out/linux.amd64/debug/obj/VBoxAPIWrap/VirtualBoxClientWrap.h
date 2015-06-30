/** @file
 *
 * VirtualBox API class wrapper header for IVirtualBoxClient.
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

#ifndef VirtualBoxClientWrap_H_
#define VirtualBoxClientWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VirtualBoxClientWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IVirtualBoxClient)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VirtualBoxClientWrap, IVirtualBoxClient)
    DECLARE_NOT_AGGREGATABLE(VirtualBoxClientWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VirtualBoxClientWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVirtualBoxClient)
        COM_INTERFACE_ENTRY2(IDispatch, IVirtualBoxClient)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(VirtualBoxClientWrap)

    // public IVirtualBoxClient properties
    STDMETHOD(COMGETTER(VirtualBox))(IVirtualBox **aVirtualBox);
    STDMETHOD(COMGETTER(Session))(ISession **aSession);
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);

    // public IVirtualBoxClient methods
    STDMETHOD(CheckMachineError)(IMachine *aMachine);

private:
    // wrapped IVirtualBoxClient properties
    virtual HRESULT getVirtualBox(ComPtr<IVirtualBox> &aVirtualBox) = 0;
    virtual HRESULT getSession(ComPtr<ISession> &aSession) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;

    // wrapped IVirtualBoxClient methods
    virtual HRESULT checkMachineError(const ComPtr<IMachine> &aMachine) = 0;
};

#endif // !VirtualBoxClientWrap_H_
