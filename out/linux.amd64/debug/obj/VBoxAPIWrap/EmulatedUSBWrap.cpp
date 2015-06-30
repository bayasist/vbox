/** @file
 *
 * VirtualBox API class wrapper code for IEmulatedUSB.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EMULATEDUSB

#include "EmulatedUSBWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(EmulatedUSBWrap)

//
// IEmulatedUSB properties
//

STDMETHODIMP EmulatedUSBWrap::COMGETTER(Webcams)(ComSafeArrayOut(BSTR, aWebcams))
{
    LogRelFlow(("{%p} %s: enter aWebcams=%p\n", this, "EmulatedUSB::getWebcams", aWebcams));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWebcams);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWebcams(ArrayBSTROutConverter(ComSafeArrayOutArg(aWebcams)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWebcams=%zu hrc=%Rhrc\n", this, "EmulatedUSB::getWebcams", ComSafeArraySize(*aWebcams), hrc));
    return hrc;
}

//
// IEmulatedUSB methods
//

STDMETHODIMP EmulatedUSBWrap::WebcamAttach(IN_BSTR aPath,
                                           IN_BSTR aSettings)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aSettings=%ls\n", this, "EmulatedUSB::webcamAttach", aPath, aSettings));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = webcamAttach(BSTRInConverter(aPath).str(),
                           BSTRInConverter(aSettings).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "EmulatedUSB::webcamAttach", hrc));
    return hrc;
}

STDMETHODIMP EmulatedUSBWrap::WebcamDetach(IN_BSTR aPath)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls\n", this, "EmulatedUSB::webcamDetach", aPath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = webcamDetach(BSTRInConverter(aPath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "EmulatedUSB::webcamDetach", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(EmulatedUSBWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(EmulatedUSBWrap, IEmulatedUSB)
#endif // VBOX_WITH_XPCOM
