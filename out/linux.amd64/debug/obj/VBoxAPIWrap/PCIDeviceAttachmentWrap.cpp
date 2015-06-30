/** @file
 *
 * VirtualBox API class wrapper code for IPCIDeviceAttachment.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_PCIDEVICEATTACHMENT

#include "PCIDeviceAttachmentWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(PCIDeviceAttachmentWrap)

//
// IPCIDeviceAttachment properties
//

STDMETHODIMP PCIDeviceAttachmentWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "PCIDeviceAttachment::getName", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getName(BSTROutConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "PCIDeviceAttachment::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP PCIDeviceAttachmentWrap::COMGETTER(IsPhysicalDevice)(BOOL *aIsPhysicalDevice)
{
    LogRelFlow(("{%p} %s: enter aIsPhysicalDevice=%p\n", this, "PCIDeviceAttachment::getIsPhysicalDevice", aIsPhysicalDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIsPhysicalDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIsPhysicalDevice(aIsPhysicalDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIsPhysicalDevice=%RTbool hrc=%Rhrc\n", this, "PCIDeviceAttachment::getIsPhysicalDevice", *aIsPhysicalDevice, hrc));
    return hrc;
}

STDMETHODIMP PCIDeviceAttachmentWrap::COMGETTER(HostAddress)(LONG *aHostAddress)
{
    LogRelFlow(("{%p} %s: enter aHostAddress=%p\n", this, "PCIDeviceAttachment::getHostAddress", aHostAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostAddress(aHostAddress);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostAddress=%RI32 hrc=%Rhrc\n", this, "PCIDeviceAttachment::getHostAddress", *aHostAddress, hrc));
    return hrc;
}

STDMETHODIMP PCIDeviceAttachmentWrap::COMGETTER(GuestAddress)(LONG *aGuestAddress)
{
    LogRelFlow(("{%p} %s: enter aGuestAddress=%p\n", this, "PCIDeviceAttachment::getGuestAddress", aGuestAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestAddress(aGuestAddress);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGuestAddress=%RI32 hrc=%Rhrc\n", this, "PCIDeviceAttachment::getGuestAddress", *aGuestAddress, hrc));
    return hrc;
}

//
// IPCIDeviceAttachment methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(PCIDeviceAttachmentWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(PCIDeviceAttachmentWrap, IPCIDeviceAttachment)
#endif // VBOX_WITH_XPCOM
