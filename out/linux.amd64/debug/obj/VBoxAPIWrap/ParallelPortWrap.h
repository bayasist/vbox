/** @file
 *
 * VirtualBox API class wrapper header for IParallelPort.
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

#ifndef ParallelPortWrap_H_
#define ParallelPortWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ParallelPortWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IParallelPort)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ParallelPortWrap, IParallelPort)
    DECLARE_NOT_AGGREGATABLE(ParallelPortWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ParallelPortWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IParallelPort)
        COM_INTERFACE_ENTRY2(IDispatch, IParallelPort)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ParallelPortWrap)

    // public IParallelPort properties
    STDMETHOD(COMGETTER(Slot))(ULONG *aSlot);
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled);
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled);
    STDMETHOD(COMGETTER(IOBase))(ULONG *aIOBase);
    STDMETHOD(COMSETTER(IOBase))(ULONG aIOBase);
    STDMETHOD(COMGETTER(IRQ))(ULONG *aIRQ);
    STDMETHOD(COMSETTER(IRQ))(ULONG aIRQ);
    STDMETHOD(COMGETTER(Path))(BSTR *aPath);
    STDMETHOD(COMSETTER(Path))(IN_BSTR aPath);

    // public IParallelPort methods

private:
    // wrapped IParallelPort properties
    virtual HRESULT getSlot(ULONG *aSlot) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getIOBase(ULONG *aIOBase) = 0;
    virtual HRESULT setIOBase(ULONG aIOBase) = 0;
    virtual HRESULT getIRQ(ULONG *aIRQ) = 0;
    virtual HRESULT setIRQ(ULONG aIRQ) = 0;
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT setPath(const com::Utf8Str &aPath) = 0;

    // wrapped IParallelPort methods
};

#endif // !ParallelPortWrap_H_
