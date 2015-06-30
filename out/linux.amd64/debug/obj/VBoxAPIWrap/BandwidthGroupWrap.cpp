/** @file
 *
 * VirtualBox API class wrapper code for IBandwidthGroup.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_BANDWIDTHGROUP

#include "BandwidthGroupWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(BandwidthGroupWrap)

//
// IBandwidthGroup properties
//

STDMETHODIMP BandwidthGroupWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "BandwidthGroup::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "BandwidthGroup::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP BandwidthGroupWrap::COMGETTER(Type)(BandwidthGroupType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "BandwidthGroup::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "BandwidthGroup::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP BandwidthGroupWrap::COMGETTER(Reference)(ULONG *aReference)
{
    LogRelFlow(("{%p} %s: enter aReference=%p\n", this, "BandwidthGroup::getReference", aReference));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReference);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getReference(aReference);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aReference=%RU32 hrc=%Rhrc\n", this, "BandwidthGroup::getReference", *aReference, hrc));
    return hrc;
}

STDMETHODIMP BandwidthGroupWrap::COMGETTER(MaxBytesPerSec)(LONG64 *aMaxBytesPerSec)
{
    LogRelFlow(("{%p} %s: enter aMaxBytesPerSec=%p\n", this, "BandwidthGroup::getMaxBytesPerSec", aMaxBytesPerSec));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxBytesPerSec);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxBytesPerSec(aMaxBytesPerSec);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaxBytesPerSec=%RI64 hrc=%Rhrc\n", this, "BandwidthGroup::getMaxBytesPerSec", *aMaxBytesPerSec, hrc));
    return hrc;
}

STDMETHODIMP BandwidthGroupWrap::COMSETTER(MaxBytesPerSec)(LONG64 aMaxBytesPerSec)
{
    LogRelFlow(("{%p} %s: enter aMaxBytesPerSec=%RI64\n", this, "BandwidthGroup::setMaxBytesPerSec", aMaxBytesPerSec));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setMaxBytesPerSec(aMaxBytesPerSec);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BandwidthGroup::setMaxBytesPerSec", hrc));
    return hrc;
}

//
// IBandwidthGroup methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(BandwidthGroupWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(BandwidthGroupWrap, IBandwidthGroup)
#endif // VBOX_WITH_XPCOM
