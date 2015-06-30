/** @file
 *
 * VirtualBox API class wrapper code for IVirtualSystemDescription.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_VIRTUALSYSTEMDESCRIPTION

#include "VirtualSystemDescriptionWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(VirtualSystemDescriptionWrap)

//
// IVirtualSystemDescription properties
//

STDMETHODIMP VirtualSystemDescriptionWrap::COMGETTER(Count)(ULONG *aCount)
{
    LogRelFlow(("{%p} %s: enter aCount=%p\n", this, "VirtualSystemDescription::getCount", aCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCount(aCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCount=%RU32 hrc=%Rhrc\n", this, "VirtualSystemDescription::getCount", *aCount, hrc));
    return hrc;
}

//
// IVirtualSystemDescription methods
//

STDMETHODIMP VirtualSystemDescriptionWrap::GetDescription(ComSafeArrayOut(VirtualSystemDescriptionType_T, aTypes),
                                                          ComSafeArrayOut(BSTR, aRefs),
                                                          ComSafeArrayOut(BSTR, aOVFValues),
                                                          ComSafeArrayOut(BSTR, aVBoxValues),
                                                          ComSafeArrayOut(BSTR, aExtraConfigValues))
{
    LogRelFlow(("{%p} %s:enter aTypes=%p aRefs=%p aOVFValues=%p aVBoxValues=%p aExtraConfigValues=%p\n", this, "VirtualSystemDescription::getDescription", aTypes, aRefs, aOVFValues, aVBoxValues, aExtraConfigValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTypes);
        CheckComArgOutPointerValidThrow(aRefs);
        CheckComArgOutPointerValidThrow(aOVFValues);
        CheckComArgOutPointerValidThrow(aVBoxValues);
        CheckComArgOutPointerValidThrow(aExtraConfigValues);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDescription(ArrayOutConverter<VirtualSystemDescriptionType_T>(ComSafeArrayOutArg(aTypes)).array(),
                             ArrayBSTROutConverter(ComSafeArrayOutArg(aRefs)).array(),
                             ArrayBSTROutConverter(ComSafeArrayOutArg(aOVFValues)).array(),
                             ArrayBSTROutConverter(ComSafeArrayOutArg(aVBoxValues)).array(),
                             ArrayBSTROutConverter(ComSafeArrayOutArg(aExtraConfigValues)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTypes=%zu *aRefs=%zu *aOVFValues=%zu *aVBoxValues=%zu *aExtraConfigValues=%zu hrc=%Rhrc\n", this, "VirtualSystemDescription::getDescription", ComSafeArraySize(*aTypes), ComSafeArraySize(*aRefs), ComSafeArraySize(*aOVFValues), ComSafeArraySize(*aVBoxValues), ComSafeArraySize(*aExtraConfigValues), hrc));
    return hrc;
}

STDMETHODIMP VirtualSystemDescriptionWrap::GetDescriptionByType(VirtualSystemDescriptionType_T aType,
                                                                ComSafeArrayOut(VirtualSystemDescriptionType_T, aTypes),
                                                                ComSafeArrayOut(BSTR, aRefs),
                                                                ComSafeArrayOut(BSTR, aOVFValues),
                                                                ComSafeArrayOut(BSTR, aVBoxValues),
                                                                ComSafeArrayOut(BSTR, aExtraConfigValues))
{
    LogRelFlow(("{%p} %s:enter aType=%RU32 aTypes=%p aRefs=%p aOVFValues=%p aVBoxValues=%p aExtraConfigValues=%p\n", this, "VirtualSystemDescription::getDescriptionByType", aType, aTypes, aRefs, aOVFValues, aVBoxValues, aExtraConfigValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTypes);
        CheckComArgOutPointerValidThrow(aRefs);
        CheckComArgOutPointerValidThrow(aOVFValues);
        CheckComArgOutPointerValidThrow(aVBoxValues);
        CheckComArgOutPointerValidThrow(aExtraConfigValues);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDescriptionByType(aType,
                                   ArrayOutConverter<VirtualSystemDescriptionType_T>(ComSafeArrayOutArg(aTypes)).array(),
                                   ArrayBSTROutConverter(ComSafeArrayOutArg(aRefs)).array(),
                                   ArrayBSTROutConverter(ComSafeArrayOutArg(aOVFValues)).array(),
                                   ArrayBSTROutConverter(ComSafeArrayOutArg(aVBoxValues)).array(),
                                   ArrayBSTROutConverter(ComSafeArrayOutArg(aExtraConfigValues)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTypes=%zu *aRefs=%zu *aOVFValues=%zu *aVBoxValues=%zu *aExtraConfigValues=%zu hrc=%Rhrc\n", this, "VirtualSystemDescription::getDescriptionByType", ComSafeArraySize(*aTypes), ComSafeArraySize(*aRefs), ComSafeArraySize(*aOVFValues), ComSafeArraySize(*aVBoxValues), ComSafeArraySize(*aExtraConfigValues), hrc));
    return hrc;
}

STDMETHODIMP VirtualSystemDescriptionWrap::GetValuesByType(VirtualSystemDescriptionType_T aType,
                                                           VirtualSystemDescriptionValueType_T aWhich,
                                                           ComSafeArrayOut(BSTR, aValues))
{
    LogRelFlow(("{%p} %s:enter aType=%RU32 aWhich=%RU32 aValues=%p\n", this, "VirtualSystemDescription::getValuesByType", aType, aWhich, aValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValues);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getValuesByType(aType,
                              aWhich,
                              ArrayBSTROutConverter(ComSafeArrayOutArg(aValues)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aValues=%zu hrc=%Rhrc\n", this, "VirtualSystemDescription::getValuesByType", ComSafeArraySize(*aValues), hrc));
    return hrc;
}

STDMETHODIMP VirtualSystemDescriptionWrap::SetFinalValues(ComSafeArrayIn(BOOL, aEnabled),
                                                          ComSafeArrayIn(IN_BSTR, aVBoxValues),
                                                          ComSafeArrayIn(IN_BSTR, aExtraConfigValues))
{
    LogRelFlow(("{%p} %s:enter aEnabled=%zu aVBoxValues=%zu aExtraConfigValues=%zu\n", this, "VirtualSystemDescription::setFinalValues", aEnabled, aVBoxValues, aExtraConfigValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFinalValues(ArrayInConverter<BOOL>(ComSafeArrayInArg(aEnabled)).array(),
                             ArrayBSTRInConverter(ComSafeArrayInArg(aVBoxValues)).array(),
                             ArrayBSTRInConverter(ComSafeArrayInArg(aExtraConfigValues)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualSystemDescription::setFinalValues", hrc));
    return hrc;
}

STDMETHODIMP VirtualSystemDescriptionWrap::AddDescription(VirtualSystemDescriptionType_T aType,
                                                          IN_BSTR aVBoxValue,
                                                          IN_BSTR aExtraConfigValue)
{
    LogRelFlow(("{%p} %s:enter aType=%RU32 aVBoxValue=%ls aExtraConfigValue=%ls\n", this, "VirtualSystemDescription::addDescription", aType, aVBoxValue, aExtraConfigValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addDescription(aType,
                             BSTRInConverter(aVBoxValue).str(),
                             BSTRInConverter(aExtraConfigValue).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualSystemDescription::addDescription", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VirtualSystemDescriptionWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(VirtualSystemDescriptionWrap, IVirtualSystemDescription)
#endif // VBOX_WITH_XPCOM
