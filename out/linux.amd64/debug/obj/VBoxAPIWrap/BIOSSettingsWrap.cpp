/** @file
 *
 * VirtualBox API class wrapper code for IBIOSSettings.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_BIOSSETTINGS

#include "BIOSSettingsWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(BIOSSettingsWrap)

//
// IBIOSSettings properties
//

STDMETHODIMP BIOSSettingsWrap::COMGETTER(LogoFadeIn)(BOOL *aLogoFadeIn)
{
    LogRelFlow(("{%p} %s: enter aLogoFadeIn=%p\n", this, "BIOSSettings::getLogoFadeIn", aLogoFadeIn));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogoFadeIn);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogoFadeIn(aLogoFadeIn);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogoFadeIn=%RTbool hrc=%Rhrc\n", this, "BIOSSettings::getLogoFadeIn", *aLogoFadeIn, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(LogoFadeIn)(BOOL aLogoFadeIn)
{
    LogRelFlow(("{%p} %s: enter aLogoFadeIn=%RTbool\n", this, "BIOSSettings::setLogoFadeIn", aLogoFadeIn));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLogoFadeIn(aLogoFadeIn);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setLogoFadeIn", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(LogoFadeOut)(BOOL *aLogoFadeOut)
{
    LogRelFlow(("{%p} %s: enter aLogoFadeOut=%p\n", this, "BIOSSettings::getLogoFadeOut", aLogoFadeOut));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogoFadeOut);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogoFadeOut(aLogoFadeOut);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogoFadeOut=%RTbool hrc=%Rhrc\n", this, "BIOSSettings::getLogoFadeOut", *aLogoFadeOut, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(LogoFadeOut)(BOOL aLogoFadeOut)
{
    LogRelFlow(("{%p} %s: enter aLogoFadeOut=%RTbool\n", this, "BIOSSettings::setLogoFadeOut", aLogoFadeOut));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLogoFadeOut(aLogoFadeOut);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setLogoFadeOut", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(LogoDisplayTime)(ULONG *aLogoDisplayTime)
{
    LogRelFlow(("{%p} %s: enter aLogoDisplayTime=%p\n", this, "BIOSSettings::getLogoDisplayTime", aLogoDisplayTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogoDisplayTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogoDisplayTime(aLogoDisplayTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogoDisplayTime=%RU32 hrc=%Rhrc\n", this, "BIOSSettings::getLogoDisplayTime", *aLogoDisplayTime, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(LogoDisplayTime)(ULONG aLogoDisplayTime)
{
    LogRelFlow(("{%p} %s: enter aLogoDisplayTime=%RU32\n", this, "BIOSSettings::setLogoDisplayTime", aLogoDisplayTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLogoDisplayTime(aLogoDisplayTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setLogoDisplayTime", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(LogoImagePath)(BSTR *aLogoImagePath)
{
    LogRelFlow(("{%p} %s: enter aLogoImagePath=%p\n", this, "BIOSSettings::getLogoImagePath", aLogoImagePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogoImagePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogoImagePath(BSTROutConverter(aLogoImagePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogoImagePath=%ls hrc=%Rhrc\n", this, "BIOSSettings::getLogoImagePath", *aLogoImagePath, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(LogoImagePath)(IN_BSTR aLogoImagePath)
{
    LogRelFlow(("{%p} %s: enter aLogoImagePath=%ls\n", this, "BIOSSettings::setLogoImagePath", aLogoImagePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLogoImagePath(BSTRInConverter(aLogoImagePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setLogoImagePath", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(BootMenuMode)(BIOSBootMenuMode_T *aBootMenuMode)
{
    LogRelFlow(("{%p} %s: enter aBootMenuMode=%p\n", this, "BIOSSettings::getBootMenuMode", aBootMenuMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBootMenuMode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBootMenuMode(aBootMenuMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBootMenuMode=%RU32 hrc=%Rhrc\n", this, "BIOSSettings::getBootMenuMode", *aBootMenuMode, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(BootMenuMode)(BIOSBootMenuMode_T aBootMenuMode)
{
    LogRelFlow(("{%p} %s: enter aBootMenuMode=%RU32\n", this, "BIOSSettings::setBootMenuMode", aBootMenuMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setBootMenuMode(aBootMenuMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setBootMenuMode", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(ACPIEnabled)(BOOL *aACPIEnabled)
{
    LogRelFlow(("{%p} %s: enter aACPIEnabled=%p\n", this, "BIOSSettings::getACPIEnabled", aACPIEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aACPIEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getACPIEnabled(aACPIEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aACPIEnabled=%RTbool hrc=%Rhrc\n", this, "BIOSSettings::getACPIEnabled", *aACPIEnabled, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(ACPIEnabled)(BOOL aACPIEnabled)
{
    LogRelFlow(("{%p} %s: enter aACPIEnabled=%RTbool\n", this, "BIOSSettings::setACPIEnabled", aACPIEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setACPIEnabled(aACPIEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setACPIEnabled", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(IOAPICEnabled)(BOOL *aIOAPICEnabled)
{
    LogRelFlow(("{%p} %s: enter aIOAPICEnabled=%p\n", this, "BIOSSettings::getIOAPICEnabled", aIOAPICEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIOAPICEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIOAPICEnabled(aIOAPICEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIOAPICEnabled=%RTbool hrc=%Rhrc\n", this, "BIOSSettings::getIOAPICEnabled", *aIOAPICEnabled, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(IOAPICEnabled)(BOOL aIOAPICEnabled)
{
    LogRelFlow(("{%p} %s: enter aIOAPICEnabled=%RTbool\n", this, "BIOSSettings::setIOAPICEnabled", aIOAPICEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIOAPICEnabled(aIOAPICEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setIOAPICEnabled", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(TimeOffset)(LONG64 *aTimeOffset)
{
    LogRelFlow(("{%p} %s: enter aTimeOffset=%p\n", this, "BIOSSettings::getTimeOffset", aTimeOffset));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTimeOffset);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTimeOffset(aTimeOffset);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTimeOffset=%RI64 hrc=%Rhrc\n", this, "BIOSSettings::getTimeOffset", *aTimeOffset, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(TimeOffset)(LONG64 aTimeOffset)
{
    LogRelFlow(("{%p} %s: enter aTimeOffset=%RI64\n", this, "BIOSSettings::setTimeOffset", aTimeOffset));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTimeOffset(aTimeOffset);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setTimeOffset", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(PXEDebugEnabled)(BOOL *aPXEDebugEnabled)
{
    LogRelFlow(("{%p} %s: enter aPXEDebugEnabled=%p\n", this, "BIOSSettings::getPXEDebugEnabled", aPXEDebugEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPXEDebugEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPXEDebugEnabled(aPXEDebugEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPXEDebugEnabled=%RTbool hrc=%Rhrc\n", this, "BIOSSettings::getPXEDebugEnabled", *aPXEDebugEnabled, hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMSETTER(PXEDebugEnabled)(BOOL aPXEDebugEnabled)
{
    LogRelFlow(("{%p} %s: enter aPXEDebugEnabled=%RTbool\n", this, "BIOSSettings::setPXEDebugEnabled", aPXEDebugEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setPXEDebugEnabled(aPXEDebugEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "BIOSSettings::setPXEDebugEnabled", hrc));
    return hrc;
}

STDMETHODIMP BIOSSettingsWrap::COMGETTER(NonVolatileStorageFile)(BSTR *aNonVolatileStorageFile)
{
    LogRelFlow(("{%p} %s: enter aNonVolatileStorageFile=%p\n", this, "BIOSSettings::getNonVolatileStorageFile", aNonVolatileStorageFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNonVolatileStorageFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNonVolatileStorageFile(BSTROutConverter(aNonVolatileStorageFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNonVolatileStorageFile=%ls hrc=%Rhrc\n", this, "BIOSSettings::getNonVolatileStorageFile", *aNonVolatileStorageFile, hrc));
    return hrc;
}

//
// IBIOSSettings methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(BIOSSettingsWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(BIOSSettingsWrap, IBIOSSettings)
#endif // VBOX_WITH_XPCOM
