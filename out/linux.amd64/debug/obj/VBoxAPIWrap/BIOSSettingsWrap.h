/** @file
 *
 * VirtualBox API class wrapper header for IBIOSSettings.
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

#ifndef BIOSSettingsWrap_H_
#define BIOSSettingsWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE BIOSSettingsWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IBIOSSettings)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(BIOSSettingsWrap, IBIOSSettings)
    DECLARE_NOT_AGGREGATABLE(BIOSSettingsWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(BIOSSettingsWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IBIOSSettings)
        COM_INTERFACE_ENTRY2(IDispatch, IBIOSSettings)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(BIOSSettingsWrap)

    // public IBIOSSettings properties
    STDMETHOD(COMGETTER(LogoFadeIn))(BOOL *aLogoFadeIn);
    STDMETHOD(COMSETTER(LogoFadeIn))(BOOL aLogoFadeIn);
    STDMETHOD(COMGETTER(LogoFadeOut))(BOOL *aLogoFadeOut);
    STDMETHOD(COMSETTER(LogoFadeOut))(BOOL aLogoFadeOut);
    STDMETHOD(COMGETTER(LogoDisplayTime))(ULONG *aLogoDisplayTime);
    STDMETHOD(COMSETTER(LogoDisplayTime))(ULONG aLogoDisplayTime);
    STDMETHOD(COMGETTER(LogoImagePath))(BSTR *aLogoImagePath);
    STDMETHOD(COMSETTER(LogoImagePath))(IN_BSTR aLogoImagePath);
    STDMETHOD(COMGETTER(BootMenuMode))(BIOSBootMenuMode_T *aBootMenuMode);
    STDMETHOD(COMSETTER(BootMenuMode))(BIOSBootMenuMode_T aBootMenuMode);
    STDMETHOD(COMGETTER(ACPIEnabled))(BOOL *aACPIEnabled);
    STDMETHOD(COMSETTER(ACPIEnabled))(BOOL aACPIEnabled);
    STDMETHOD(COMGETTER(IOAPICEnabled))(BOOL *aIOAPICEnabled);
    STDMETHOD(COMSETTER(IOAPICEnabled))(BOOL aIOAPICEnabled);
    STDMETHOD(COMGETTER(TimeOffset))(LONG64 *aTimeOffset);
    STDMETHOD(COMSETTER(TimeOffset))(LONG64 aTimeOffset);
    STDMETHOD(COMGETTER(PXEDebugEnabled))(BOOL *aPXEDebugEnabled);
    STDMETHOD(COMSETTER(PXEDebugEnabled))(BOOL aPXEDebugEnabled);
    STDMETHOD(COMGETTER(NonVolatileStorageFile))(BSTR *aNonVolatileStorageFile);

    // public IBIOSSettings methods

private:
    // wrapped IBIOSSettings properties
    virtual HRESULT getLogoFadeIn(BOOL *aLogoFadeIn) = 0;
    virtual HRESULT setLogoFadeIn(BOOL aLogoFadeIn) = 0;
    virtual HRESULT getLogoFadeOut(BOOL *aLogoFadeOut) = 0;
    virtual HRESULT setLogoFadeOut(BOOL aLogoFadeOut) = 0;
    virtual HRESULT getLogoDisplayTime(ULONG *aLogoDisplayTime) = 0;
    virtual HRESULT setLogoDisplayTime(ULONG aLogoDisplayTime) = 0;
    virtual HRESULT getLogoImagePath(com::Utf8Str &aLogoImagePath) = 0;
    virtual HRESULT setLogoImagePath(const com::Utf8Str &aLogoImagePath) = 0;
    virtual HRESULT getBootMenuMode(BIOSBootMenuMode_T *aBootMenuMode) = 0;
    virtual HRESULT setBootMenuMode(BIOSBootMenuMode_T aBootMenuMode) = 0;
    virtual HRESULT getACPIEnabled(BOOL *aACPIEnabled) = 0;
    virtual HRESULT setACPIEnabled(BOOL aACPIEnabled) = 0;
    virtual HRESULT getIOAPICEnabled(BOOL *aIOAPICEnabled) = 0;
    virtual HRESULT setIOAPICEnabled(BOOL aIOAPICEnabled) = 0;
    virtual HRESULT getTimeOffset(LONG64 *aTimeOffset) = 0;
    virtual HRESULT setTimeOffset(LONG64 aTimeOffset) = 0;
    virtual HRESULT getPXEDebugEnabled(BOOL *aPXEDebugEnabled) = 0;
    virtual HRESULT setPXEDebugEnabled(BOOL aPXEDebugEnabled) = 0;
    virtual HRESULT getNonVolatileStorageFile(com::Utf8Str &aNonVolatileStorageFile) = 0;

    // wrapped IBIOSSettings methods
};

#endif // !BIOSSettingsWrap_H_
