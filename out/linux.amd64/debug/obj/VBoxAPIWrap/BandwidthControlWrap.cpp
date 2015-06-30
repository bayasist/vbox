/** @file
 *
 * VirtualBox API class wrapper code for IBandwidthControl.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_BANDWIDTHCONTROL

#include "BandwidthControlWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(BandwidthControlWrap)

//
// IBandwidthControl properties
//

STDMETHODIMP BandwidthControlWrap::COMGETTER(NumGroups)(ULONG *aNumGroups)
{
    LogRelFlow(("{%p} %s: enter aNumGroups=%p\n", this, "BandwidthControl::getNumGroups", aNumGroups));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNumGroups);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNumGroups(aNumGroups);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNumGroups=%RU32 hrc=%Rhrc\n", this, "BandwidthControl::getNumGroups", *aNumGroups, hrc));
    return hrc;
}

//
// IBandwidthControl methods
//

STDMETHODIMP BandwidthControlWrap::CreateBandwidthGroup(IN_BSTR aName,
                                                        BandwidthGroupType_T aType,
                                                        LONG64 aMaxBytesPerSec)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aType=%RU32 aMaxBytesPerSec=%RI64\n", this, "BandwidthControl::createBandwidthGroup", aName, aType, aMaxBytesPerSec));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createBandwidthGroup(BSTRInConverter(aName).str(),
                                   aType,
                                   aMaxBytesPerSec);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BandwidthControl::createBandwidthGroup", hrc));
    return hrc;
}

STDMETHODIMP BandwidthControlWrap::DeleteBandwidthGroup(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "BandwidthControl::deleteBandwidthGroup", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = deleteBandwidthGroup(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BandwidthControl::deleteBandwidthGroup", hrc));
    return hrc;
}

STDMETHODIMP BandwidthControlWrap::GetBandwidthGroup(IN_BSTR aName,
                                                     IBandwidthGroup **aBandwidthGroup)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aBandwidthGroup=%p\n", this, "BandwidthControl::getBandwidthGroup", aName, aBandwidthGroup));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBandwidthGroup);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBandwidthGroup(BSTRInConverter(aName).str(),
                                ComTypeOutConverter<IBandwidthGroup>(aBandwidthGroup).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aBandwidthGroup=%p hrc=%Rhrc\n", this, "BandwidthControl::getBandwidthGroup", *aBandwidthGroup, hrc));
    return hrc;
}

STDMETHODIMP BandwidthControlWrap::GetAllBandwidthGroups(ComSafeArrayOut(IBandwidthGroup *, aBandwidthGroups))
{
    LogRelFlow(("{%p} %s:enter aBandwidthGroups=%p\n", this, "BandwidthControl::getAllBandwidthGroups", aBandwidthGroups));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBandwidthGroups);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAllBandwidthGroups(ArrayComTypeOutConverter<IBandwidthGroup>(ComSafeArrayOutArg(aBandwidthGroups)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aBandwidthGroups=%zu hrc=%Rhrc\n", this, "BandwidthControl::getAllBandwidthGroups", ComSafeArraySize(*aBandwidthGroups), hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(BandwidthControlWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(BandwidthControlWrap, IBandwidthControl)
#endif // VBOX_WITH_XPCOM
