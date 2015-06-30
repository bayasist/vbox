/** @file
 *
 * VirtualBox API class wrapper header for IMediumAttachment.
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

#ifndef MediumAttachmentWrap_H_
#define MediumAttachmentWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MediumAttachmentWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IMediumAttachment)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MediumAttachmentWrap, IMediumAttachment)
    DECLARE_NOT_AGGREGATABLE(MediumAttachmentWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MediumAttachmentWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMediumAttachment)
        COM_INTERFACE_ENTRY2(IDispatch, IMediumAttachment)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(MediumAttachmentWrap)

    // public IMediumAttachment properties
    STDMETHOD(COMGETTER(Medium))(IMedium **aMedium);
    STDMETHOD(COMGETTER(Controller))(BSTR *aController);
    STDMETHOD(COMGETTER(Port))(LONG *aPort);
    STDMETHOD(COMGETTER(Device))(LONG *aDevice);
    STDMETHOD(COMGETTER(Type))(DeviceType_T *aType);
    STDMETHOD(COMGETTER(Passthrough))(BOOL *aPassthrough);
    STDMETHOD(COMGETTER(TemporaryEject))(BOOL *aTemporaryEject);
    STDMETHOD(COMGETTER(IsEjected))(BOOL *aIsEjected);
    STDMETHOD(COMGETTER(NonRotational))(BOOL *aNonRotational);
    STDMETHOD(COMGETTER(Discard))(BOOL *aDiscard);
    STDMETHOD(COMGETTER(HotPluggable))(BOOL *aHotPluggable);
    STDMETHOD(COMGETTER(BandwidthGroup))(IBandwidthGroup **aBandwidthGroup);

    // public IMediumAttachment methods

private:
    // wrapped IMediumAttachment properties
    virtual HRESULT getMedium(ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT getController(com::Utf8Str &aController) = 0;
    virtual HRESULT getPort(LONG *aPort) = 0;
    virtual HRESULT getDevice(LONG *aDevice) = 0;
    virtual HRESULT getType(DeviceType_T *aType) = 0;
    virtual HRESULT getPassthrough(BOOL *aPassthrough) = 0;
    virtual HRESULT getTemporaryEject(BOOL *aTemporaryEject) = 0;
    virtual HRESULT getIsEjected(BOOL *aIsEjected) = 0;
    virtual HRESULT getNonRotational(BOOL *aNonRotational) = 0;
    virtual HRESULT getDiscard(BOOL *aDiscard) = 0;
    virtual HRESULT getHotPluggable(BOOL *aHotPluggable) = 0;
    virtual HRESULT getBandwidthGroup(ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;

    // wrapped IMediumAttachment methods
};

#endif // !MediumAttachmentWrap_H_
