/** @file
 *
 * VirtualBox API class wrapper header for IKeyboard.
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

#ifndef KeyboardWrap_H_
#define KeyboardWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE KeyboardWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IKeyboard)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(KeyboardWrap, IKeyboard)
    DECLARE_NOT_AGGREGATABLE(KeyboardWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(KeyboardWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IKeyboard)
        COM_INTERFACE_ENTRY2(IDispatch, IKeyboard)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(KeyboardWrap)

    // public IKeyboard properties
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);

    // public IKeyboard methods
    STDMETHOD(PutScancode)(LONG aScancode);
    STDMETHOD(PutScancodes)(ComSafeArrayIn(LONG, aScancodes),
                            ULONG *aCodesStored);
    STDMETHOD(PutCAD)();

private:
    // wrapped IKeyboard properties
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;

    // wrapped IKeyboard methods
    virtual HRESULT putScancode(LONG aScancode) = 0;
    virtual HRESULT putScancodes(const std::vector<LONG> &aScancodes,
                                 ULONG *aCodesStored) = 0;
    virtual HRESULT putCAD() = 0;
};

#endif // !KeyboardWrap_H_
