/** @file
 *
 * VirtualBox API class wrapper header for IPCIAddress.
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

#ifndef PCIAddressWrap_H_
#define PCIAddressWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PCIAddressWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IPCIAddress)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PCIAddressWrap, IPCIAddress)
    DECLARE_NOT_AGGREGATABLE(PCIAddressWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PCIAddressWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPCIAddress)
        COM_INTERFACE_ENTRY2(IDispatch, IPCIAddress)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(PCIAddressWrap)

    // public IPCIAddress properties
    STDMETHOD(COMGETTER(Bus))(SHORT *aBus);
    STDMETHOD(COMSETTER(Bus))(SHORT aBus);
    STDMETHOD(COMGETTER(Device))(SHORT *aDevice);
    STDMETHOD(COMSETTER(Device))(SHORT aDevice);
    STDMETHOD(COMGETTER(DevFunction))(SHORT *aDevFunction);
    STDMETHOD(COMSETTER(DevFunction))(SHORT aDevFunction);

    // public IPCIAddress methods
    STDMETHOD(AsLong)(LONG *aResult);
    STDMETHOD(FromLong)(LONG aNumber);

private:
    // wrapped IPCIAddress properties
    virtual HRESULT getBus(SHORT *aBus) = 0;
    virtual HRESULT setBus(SHORT aBus) = 0;
    virtual HRESULT getDevice(SHORT *aDevice) = 0;
    virtual HRESULT setDevice(SHORT aDevice) = 0;
    virtual HRESULT getDevFunction(SHORT *aDevFunction) = 0;
    virtual HRESULT setDevFunction(SHORT aDevFunction) = 0;

    // wrapped IPCIAddress methods
    virtual HRESULT asLong(LONG *aResult) = 0;
    virtual HRESULT fromLong(LONG aNumber) = 0;
};

#endif // !PCIAddressWrap_H_
