/** @file
 *
 * VirtualBox API class wrapper code for IUSBController.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_USBCONTROLLER

#include "USBControllerWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(USBControllerWrap)

//
// IUSBController properties
//

STDMETHODIMP USBControllerWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "USBController::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "USBController::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP USBControllerWrap::COMGETTER(Type)(USBControllerType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "USBController::getType", aType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getType(aType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "USBController::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP USBControllerWrap::COMGETTER(USBStandard)(USHORT *aUSBStandard)
{
    LogRelFlow(("{%p} %s: enter aUSBStandard=%p\n", this, "USBController::getUSBStandard", aUSBStandard));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUSBStandard);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBStandard(aUSBStandard);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUSBStandard=%RU16 hrc=%Rhrc\n", this, "USBController::getUSBStandard", *aUSBStandard, hrc));
    return hrc;
}

//
// IUSBController methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(USBControllerWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(USBControllerWrap, IUSBController)
#endif // VBOX_WITH_XPCOM
