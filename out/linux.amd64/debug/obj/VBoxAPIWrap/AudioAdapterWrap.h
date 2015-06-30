/** @file
 *
 * VirtualBox API class wrapper header for IAudioAdapter.
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

#ifndef AudioAdapterWrap_H_
#define AudioAdapterWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE AudioAdapterWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IAudioAdapter)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(AudioAdapterWrap, IAudioAdapter)
    DECLARE_NOT_AGGREGATABLE(AudioAdapterWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(AudioAdapterWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IAudioAdapter)
        COM_INTERFACE_ENTRY2(IDispatch, IAudioAdapter)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(AudioAdapterWrap)

    // public IAudioAdapter properties
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled);
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled);
    STDMETHOD(COMGETTER(AudioController))(AudioControllerType_T *aAudioController);
    STDMETHOD(COMSETTER(AudioController))(AudioControllerType_T aAudioController);
    STDMETHOD(COMGETTER(AudioDriver))(AudioDriverType_T *aAudioDriver);
    STDMETHOD(COMSETTER(AudioDriver))(AudioDriverType_T aAudioDriver);

    // public IAudioAdapter methods

private:
    // wrapped IAudioAdapter properties
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getAudioController(AudioControllerType_T *aAudioController) = 0;
    virtual HRESULT setAudioController(AudioControllerType_T aAudioController) = 0;
    virtual HRESULT getAudioDriver(AudioDriverType_T *aAudioDriver) = 0;
    virtual HRESULT setAudioDriver(AudioDriverType_T aAudioDriver) = 0;

    // wrapped IAudioAdapter methods
};

#endif // !AudioAdapterWrap_H_
