/** @file
 *
 * VirtualBox API class wrapper header for IVRDEServer.
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

#ifndef VRDEServerWrap_H_
#define VRDEServerWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VRDEServerWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IVRDEServer)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VRDEServerWrap, IVRDEServer)
    DECLARE_NOT_AGGREGATABLE(VRDEServerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VRDEServerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVRDEServer)
        COM_INTERFACE_ENTRY2(IDispatch, IVRDEServer)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(VRDEServerWrap)

    // public IVRDEServer properties
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled);
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled);
    STDMETHOD(COMGETTER(AuthType))(AuthType_T *aAuthType);
    STDMETHOD(COMSETTER(AuthType))(AuthType_T aAuthType);
    STDMETHOD(COMGETTER(AuthTimeout))(ULONG *aAuthTimeout);
    STDMETHOD(COMSETTER(AuthTimeout))(ULONG aAuthTimeout);
    STDMETHOD(COMGETTER(AllowMultiConnection))(BOOL *aAllowMultiConnection);
    STDMETHOD(COMSETTER(AllowMultiConnection))(BOOL aAllowMultiConnection);
    STDMETHOD(COMGETTER(ReuseSingleConnection))(BOOL *aReuseSingleConnection);
    STDMETHOD(COMSETTER(ReuseSingleConnection))(BOOL aReuseSingleConnection);
    STDMETHOD(COMGETTER(VRDEExtPack))(BSTR *aVRDEExtPack);
    STDMETHOD(COMSETTER(VRDEExtPack))(IN_BSTR aVRDEExtPack);
    STDMETHOD(COMGETTER(AuthLibrary))(BSTR *aAuthLibrary);
    STDMETHOD(COMSETTER(AuthLibrary))(IN_BSTR aAuthLibrary);
    STDMETHOD(COMGETTER(VRDEProperties))(ComSafeArrayOut(BSTR, aVRDEProperties));

    // public IVRDEServer methods
    STDMETHOD(SetVRDEProperty)(IN_BSTR aKey,
                               IN_BSTR aValue);
    STDMETHOD(GetVRDEProperty)(IN_BSTR aKey,
                               BSTR *aValue);

private:
    // wrapped IVRDEServer properties
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getAuthType(AuthType_T *aAuthType) = 0;
    virtual HRESULT setAuthType(AuthType_T aAuthType) = 0;
    virtual HRESULT getAuthTimeout(ULONG *aAuthTimeout) = 0;
    virtual HRESULT setAuthTimeout(ULONG aAuthTimeout) = 0;
    virtual HRESULT getAllowMultiConnection(BOOL *aAllowMultiConnection) = 0;
    virtual HRESULT setAllowMultiConnection(BOOL aAllowMultiConnection) = 0;
    virtual HRESULT getReuseSingleConnection(BOOL *aReuseSingleConnection) = 0;
    virtual HRESULT setReuseSingleConnection(BOOL aReuseSingleConnection) = 0;
    virtual HRESULT getVRDEExtPack(com::Utf8Str &aVRDEExtPack) = 0;
    virtual HRESULT setVRDEExtPack(const com::Utf8Str &aVRDEExtPack) = 0;
    virtual HRESULT getAuthLibrary(com::Utf8Str &aAuthLibrary) = 0;
    virtual HRESULT setAuthLibrary(const com::Utf8Str &aAuthLibrary) = 0;
    virtual HRESULT getVRDEProperties(std::vector<com::Utf8Str> &aVRDEProperties) = 0;

    // wrapped IVRDEServer methods
    virtual HRESULT setVRDEProperty(const com::Utf8Str &aKey,
                                    const com::Utf8Str &aValue) = 0;
    virtual HRESULT getVRDEProperty(const com::Utf8Str &aKey,
                                    com::Utf8Str &aValue) = 0;
};

#endif // !VRDEServerWrap_H_
