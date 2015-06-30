/** @file
 *
 * VirtualBox API class wrapper header for IPCIDeviceAttachment.
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

#ifndef PCIDeviceAttachmentWrap_H_
#define PCIDeviceAttachmentWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PCIDeviceAttachmentWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IPCIDeviceAttachment)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PCIDeviceAttachmentWrap, IPCIDeviceAttachment)
    DECLARE_NOT_AGGREGATABLE(PCIDeviceAttachmentWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PCIDeviceAttachmentWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPCIDeviceAttachment)
        COM_INTERFACE_ENTRY2(IDispatch, IPCIDeviceAttachment)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(PCIDeviceAttachmentWrap)

    // public IPCIDeviceAttachment properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(IsPhysicalDevice))(BOOL *aIsPhysicalDevice);
    STDMETHOD(COMGETTER(HostAddress))(LONG *aHostAddress);
    STDMETHOD(COMGETTER(GuestAddress))(LONG *aGuestAddress);

    // public IPCIDeviceAttachment methods

private:
    // wrapped IPCIDeviceAttachment properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getIsPhysicalDevice(BOOL *aIsPhysicalDevice) = 0;
    virtual HRESULT getHostAddress(LONG *aHostAddress) = 0;
    virtual HRESULT getGuestAddress(LONG *aGuestAddress) = 0;

    // wrapped IPCIDeviceAttachment methods
};

#endif // !PCIDeviceAttachmentWrap_H_
