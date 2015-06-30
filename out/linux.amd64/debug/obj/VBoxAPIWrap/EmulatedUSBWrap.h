/** @file
 *
 * VirtualBox API class wrapper header for IEmulatedUSB.
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

#ifndef EmulatedUSBWrap_H_
#define EmulatedUSBWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE EmulatedUSBWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IEmulatedUSB)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(EmulatedUSBWrap, IEmulatedUSB)
    DECLARE_NOT_AGGREGATABLE(EmulatedUSBWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(EmulatedUSBWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IEmulatedUSB)
        COM_INTERFACE_ENTRY2(IDispatch, IEmulatedUSB)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(EmulatedUSBWrap)

    // public IEmulatedUSB properties
    STDMETHOD(COMGETTER(Webcams))(ComSafeArrayOut(BSTR, aWebcams));

    // public IEmulatedUSB methods
    STDMETHOD(WebcamAttach)(IN_BSTR aPath,
                            IN_BSTR aSettings);
    STDMETHOD(WebcamDetach)(IN_BSTR aPath);

private:
    // wrapped IEmulatedUSB properties
    virtual HRESULT getWebcams(std::vector<com::Utf8Str> &aWebcams) = 0;

    // wrapped IEmulatedUSB methods
    virtual HRESULT webcamAttach(const com::Utf8Str &aPath,
                                 const com::Utf8Str &aSettings) = 0;
    virtual HRESULT webcamDetach(const com::Utf8Str &aPath) = 0;
};

#endif // !EmulatedUSBWrap_H_
