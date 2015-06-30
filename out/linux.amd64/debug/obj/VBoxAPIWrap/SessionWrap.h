/** @file
 *
 * VirtualBox API class wrapper header for ISession.
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

#ifndef SessionWrap_H_
#define SessionWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SessionWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(ISession)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SessionWrap, ISession)
    DECLARE_NOT_AGGREGATABLE(SessionWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SessionWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISession)
        COM_INTERFACE_ENTRY2(IDispatch, ISession)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(SessionWrap)

    // public ISession properties
    STDMETHOD(COMGETTER(State))(SessionState_T *aState);
    STDMETHOD(COMGETTER(Type))(SessionType_T *aType);
    STDMETHOD(COMGETTER(Machine))(IMachine **aMachine);
    STDMETHOD(COMGETTER(Console))(IConsole **aConsole);

    // public ISession methods
    STDMETHOD(UnlockMachine)();

private:
    // wrapped ISession properties
    virtual HRESULT getState(SessionState_T *aState) = 0;
    virtual HRESULT getType(SessionType_T *aType) = 0;
    virtual HRESULT getMachine(ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getConsole(ComPtr<IConsole> &aConsole) = 0;

    // wrapped ISession methods
    virtual HRESULT unlockMachine() = 0;
};

#endif // !SessionWrap_H_
