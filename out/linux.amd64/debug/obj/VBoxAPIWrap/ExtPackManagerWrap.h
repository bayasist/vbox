/** @file
 *
 * VirtualBox API class wrapper header for IExtPackManager.
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

#ifndef ExtPackManagerWrap_H_
#define ExtPackManagerWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ExtPackManagerWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IExtPackManager)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ExtPackManagerWrap, IExtPackManager)
    DECLARE_NOT_AGGREGATABLE(ExtPackManagerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ExtPackManagerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IExtPackManager)
        COM_INTERFACE_ENTRY2(IDispatch, IExtPackManager)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ExtPackManagerWrap)

    // public IExtPackManager properties
    STDMETHOD(COMGETTER(InstalledExtPacks))(ComSafeArrayOut(IExtPack *, aInstalledExtPacks));

    // public IExtPackManager methods
    STDMETHOD(Find)(IN_BSTR aName,
                    IExtPack **aReturnData);
    STDMETHOD(OpenExtPackFile)(IN_BSTR aPath,
                               IExtPackFile **aFile);
    STDMETHOD(Uninstall)(IN_BSTR aName,
                         BOOL aForcedRemoval,
                         IN_BSTR aDisplayInfo,
                         IProgress **aProgess);
    STDMETHOD(Cleanup)();
    STDMETHOD(QueryAllPlugInsForFrontend)(IN_BSTR aFrontendName,
                                          ComSafeArrayOut(BSTR, aPlugInModules));
    STDMETHOD(IsExtPackUsable)(IN_BSTR aName,
                               BOOL *aUsable);

private:
    // wrapped IExtPackManager properties
    virtual HRESULT getInstalledExtPacks(std::vector<ComPtr<IExtPack> > &aInstalledExtPacks) = 0;

    // wrapped IExtPackManager methods
    virtual HRESULT find(const com::Utf8Str &aName,
                         ComPtr<IExtPack> &aReturnData) = 0;
    virtual HRESULT openExtPackFile(const com::Utf8Str &aPath,
                                    ComPtr<IExtPackFile> &aFile) = 0;
    virtual HRESULT uninstall(const com::Utf8Str &aName,
                              BOOL aForcedRemoval,
                              const com::Utf8Str &aDisplayInfo,
                              ComPtr<IProgress> &aProgess) = 0;
    virtual HRESULT cleanup() = 0;
    virtual HRESULT queryAllPlugInsForFrontend(const com::Utf8Str &aFrontendName,
                                               std::vector<com::Utf8Str> &aPlugInModules) = 0;
    virtual HRESULT isExtPackUsable(const com::Utf8Str &aName,
                                    BOOL *aUsable) = 0;
};

#endif // !ExtPackManagerWrap_H_
