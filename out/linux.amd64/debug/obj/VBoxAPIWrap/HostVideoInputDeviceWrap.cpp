/** @file
 *
 * VirtualBox API class wrapper code for IHostVideoInputDevice.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_HOSTVIDEOINPUTDEVICE

#include "HostVideoInputDeviceWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(HostVideoInputDeviceWrap)

//
// IHostVideoInputDevice properties
//

STDMETHODIMP HostVideoInputDeviceWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "HostVideoInputDevice::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "HostVideoInputDevice::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP HostVideoInputDeviceWrap::COMGETTER(Path)(BSTR *aPath)
{
    LogRelFlow(("{%p} %s: enter aPath=%p\n", this, "HostVideoInputDevice::getPath", aPath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPath(BSTROutConverter(aPath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPath=%ls hrc=%Rhrc\n", this, "HostVideoInputDevice::getPath", *aPath, hrc));
    return hrc;
}

STDMETHODIMP HostVideoInputDeviceWrap::COMGETTER(Alias)(BSTR *aAlias)
{
    LogRelFlow(("{%p} %s: enter aAlias=%p\n", this, "HostVideoInputDevice::getAlias", aAlias));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAlias);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAlias(BSTROutConverter(aAlias).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAlias=%ls hrc=%Rhrc\n", this, "HostVideoInputDevice::getAlias", *aAlias, hrc));
    return hrc;
}

//
// IHostVideoInputDevice methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostVideoInputDeviceWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(HostVideoInputDeviceWrap, IHostVideoInputDevice)
#endif // VBOX_WITH_XPCOM
