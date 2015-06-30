/** @file
 *
 * VirtualBox API class wrapper code for IAdditionsFacility.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_ADDITIONSFACILITY

#include "AdditionsFacilityWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(AdditionsFacilityWrap)

//
// IAdditionsFacility properties
//

STDMETHODIMP AdditionsFacilityWrap::COMGETTER(ClassType)(AdditionsFacilityClass_T *aClassType)
{
    LogRelFlow(("{%p} %s: enter aClassType=%p\n", this, "AdditionsFacility::getClassType", aClassType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aClassType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getClassType(aClassType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aClassType=%RU32 hrc=%Rhrc\n", this, "AdditionsFacility::getClassType", *aClassType, hrc));
    return hrc;
}

STDMETHODIMP AdditionsFacilityWrap::COMGETTER(LastUpdated)(LONG64 *aLastUpdated)
{
    LogRelFlow(("{%p} %s: enter aLastUpdated=%p\n", this, "AdditionsFacility::getLastUpdated", aLastUpdated));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLastUpdated);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLastUpdated(aLastUpdated);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLastUpdated=%RI64 hrc=%Rhrc\n", this, "AdditionsFacility::getLastUpdated", *aLastUpdated, hrc));
    return hrc;
}

STDMETHODIMP AdditionsFacilityWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "AdditionsFacility::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "AdditionsFacility::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP AdditionsFacilityWrap::COMGETTER(Status)(AdditionsFacilityStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s: enter aStatus=%p\n", this, "AdditionsFacility::getStatus", aStatus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStatus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStatus(aStatus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStatus=%RU32 hrc=%Rhrc\n", this, "AdditionsFacility::getStatus", *aStatus, hrc));
    return hrc;
}

STDMETHODIMP AdditionsFacilityWrap::COMGETTER(Type)(AdditionsFacilityType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "AdditionsFacility::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "AdditionsFacility::getType", *aType, hrc));
    return hrc;
}

//
// IAdditionsFacility methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(AdditionsFacilityWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(AdditionsFacilityWrap, IAdditionsFacility)
#endif // VBOX_WITH_XPCOM
