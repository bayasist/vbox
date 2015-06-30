/** @file
 *
 * VirtualBox API class wrapper header for IExtPack.
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

#ifndef ExtPackWrap_H_
#define ExtPackWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ExtPackWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IExtPack)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ExtPackWrap, IExtPack)
    DECLARE_NOT_AGGREGATABLE(ExtPackWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ExtPackWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IExtPack)
        COM_INTERFACE_ENTRY(IExtPackBase)
        COM_INTERFACE_ENTRY2(IDispatch, IExtPack)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ExtPackWrap)

    // public IExtPackBase properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription);
    STDMETHOD(COMGETTER(Version))(BSTR *aVersion);
    STDMETHOD(COMGETTER(Revision))(ULONG *aRevision);
    STDMETHOD(COMGETTER(Edition))(BSTR *aEdition);
    STDMETHOD(COMGETTER(VRDEModule))(BSTR *aVRDEModule);
    STDMETHOD(COMGETTER(PlugIns))(ComSafeArrayOut(IExtPackPlugIn *, aPlugIns));
    STDMETHOD(COMGETTER(Usable))(BOOL *aUsable);
    STDMETHOD(COMGETTER(WhyUnusable))(BSTR *aWhyUnusable);
    STDMETHOD(COMGETTER(ShowLicense))(BOOL *aShowLicense);
    STDMETHOD(COMGETTER(License))(BSTR *aLicense);

    // public IExtPack properties

    // public IExtPackBase methods
    STDMETHOD(QueryLicense)(IN_BSTR aPreferredLocale,
                            IN_BSTR aPreferredLanguage,
                            IN_BSTR aFormat,
                            BSTR *aLicenseText);

    // public IExtPack methods
    STDMETHOD(QueryObject)(IN_BSTR aObjUuid,
                           IUnknown **aReturnInterface);

private:
    // wrapped IExtPackBase properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getVersion(com::Utf8Str &aVersion) = 0;
    virtual HRESULT getRevision(ULONG *aRevision) = 0;
    virtual HRESULT getEdition(com::Utf8Str &aEdition) = 0;
    virtual HRESULT getVRDEModule(com::Utf8Str &aVRDEModule) = 0;
    virtual HRESULT getPlugIns(std::vector<ComPtr<IExtPackPlugIn> > &aPlugIns) = 0;
    virtual HRESULT getUsable(BOOL *aUsable) = 0;
    virtual HRESULT getWhyUnusable(com::Utf8Str &aWhyUnusable) = 0;
    virtual HRESULT getShowLicense(BOOL *aShowLicense) = 0;
    virtual HRESULT getLicense(com::Utf8Str &aLicense) = 0;

    // wrapped IExtPack properties

    // wrapped IExtPackBase methods
    virtual HRESULT queryLicense(const com::Utf8Str &aPreferredLocale,
                                 const com::Utf8Str &aPreferredLanguage,
                                 const com::Utf8Str &aFormat,
                                 com::Utf8Str &aLicenseText) = 0;

    // wrapped IExtPack methods
    virtual HRESULT queryObject(const com::Utf8Str &aObjUuid,
                                ComPtr<IUnknown> &aReturnInterface) = 0;
};

#endif // !ExtPackWrap_H_
