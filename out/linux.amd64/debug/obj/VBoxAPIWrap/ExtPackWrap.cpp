/** @file
 *
 * VirtualBox API class wrapper code for IExtPack.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EXTPACK

#include "ExtPackWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ExtPackWrap)

//
// IExtPackBase properties
//

STDMETHODIMP ExtPackWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "ExtPack::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "ExtPack::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "ExtPack::getDescription", aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDescription(BSTROutConverter(aDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "ExtPack::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(Version)(BSTR *aVersion)
{
    LogRelFlow(("{%p} %s: enter aVersion=%p\n", this, "ExtPack::getVersion", aVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVersion(BSTROutConverter(aVersion).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVersion=%ls hrc=%Rhrc\n", this, "ExtPack::getVersion", *aVersion, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(Revision)(ULONG *aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%p\n", this, "ExtPack::getRevision", aRevision));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRevision);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRevision(aRevision);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRevision=%RU32 hrc=%Rhrc\n", this, "ExtPack::getRevision", *aRevision, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(Edition)(BSTR *aEdition)
{
    LogRelFlow(("{%p} %s: enter aEdition=%p\n", this, "ExtPack::getEdition", aEdition));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEdition);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEdition(BSTROutConverter(aEdition).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEdition=%ls hrc=%Rhrc\n", this, "ExtPack::getEdition", *aEdition, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(VRDEModule)(BSTR *aVRDEModule)
{
    LogRelFlow(("{%p} %s: enter aVRDEModule=%p\n", this, "ExtPack::getVRDEModule", aVRDEModule));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVRDEModule);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVRDEModule(BSTROutConverter(aVRDEModule).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVRDEModule=%ls hrc=%Rhrc\n", this, "ExtPack::getVRDEModule", *aVRDEModule, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(PlugIns)(ComSafeArrayOut(IExtPackPlugIn *, aPlugIns))
{
    LogRelFlow(("{%p} %s: enter aPlugIns=%p\n", this, "ExtPack::getPlugIns", aPlugIns));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPlugIns);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPlugIns(ArrayComTypeOutConverter<IExtPackPlugIn>(ComSafeArrayOutArg(aPlugIns)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPlugIns=%zu hrc=%Rhrc\n", this, "ExtPack::getPlugIns", ComSafeArraySize(*aPlugIns), hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(Usable)(BOOL *aUsable)
{
    LogRelFlow(("{%p} %s: enter aUsable=%p\n", this, "ExtPack::getUsable", aUsable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUsable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUsable(aUsable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUsable=%RTbool hrc=%Rhrc\n", this, "ExtPack::getUsable", *aUsable, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(WhyUnusable)(BSTR *aWhyUnusable)
{
    LogRelFlow(("{%p} %s: enter aWhyUnusable=%p\n", this, "ExtPack::getWhyUnusable", aWhyUnusable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWhyUnusable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWhyUnusable(BSTROutConverter(aWhyUnusable).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWhyUnusable=%ls hrc=%Rhrc\n", this, "ExtPack::getWhyUnusable", *aWhyUnusable, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(ShowLicense)(BOOL *aShowLicense)
{
    LogRelFlow(("{%p} %s: enter aShowLicense=%p\n", this, "ExtPack::getShowLicense", aShowLicense));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aShowLicense);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getShowLicense(aShowLicense);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aShowLicense=%RTbool hrc=%Rhrc\n", this, "ExtPack::getShowLicense", *aShowLicense, hrc));
    return hrc;
}

STDMETHODIMP ExtPackWrap::COMGETTER(License)(BSTR *aLicense)
{
    LogRelFlow(("{%p} %s: enter aLicense=%p\n", this, "ExtPack::getLicense", aLicense));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLicense);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLicense(BSTROutConverter(aLicense).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLicense=%ls hrc=%Rhrc\n", this, "ExtPack::getLicense", *aLicense, hrc));
    return hrc;
}

//
// IExtPack properties
//

//
// IExtPackBase methods
//

STDMETHODIMP ExtPackWrap::QueryLicense(IN_BSTR aPreferredLocale,
                                       IN_BSTR aPreferredLanguage,
                                       IN_BSTR aFormat,
                                       BSTR *aLicenseText)
{
    LogRelFlow(("{%p} %s:enter aPreferredLocale=%ls aPreferredLanguage=%ls aFormat=%ls aLicenseText=%p\n", this, "ExtPack::queryLicense", aPreferredLocale, aPreferredLanguage, aFormat, aLicenseText));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLicenseText);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = queryLicense(BSTRInConverter(aPreferredLocale).str(),
                           BSTRInConverter(aPreferredLanguage).str(),
                           BSTRInConverter(aFormat).str(),
                           BSTROutConverter(aLicenseText).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aLicenseText=%ls hrc=%Rhrc\n", this, "ExtPack::queryLicense", *aLicenseText, hrc));
    return hrc;
}

//
// IExtPack methods
//

STDMETHODIMP ExtPackWrap::QueryObject(IN_BSTR aObjUuid,
                                      IUnknown **aReturnInterface)
{
    LogRelFlow(("{%p} %s:enter aObjUuid=%ls aReturnInterface=%p\n", this, "ExtPack::queryObject", aObjUuid, aReturnInterface));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReturnInterface);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = queryObject(BSTRInConverter(aObjUuid).str(),
                          ComTypeOutConverter<IUnknown>(aReturnInterface).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aReturnInterface=%p hrc=%Rhrc\n", this, "ExtPack::queryObject", *aReturnInterface, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ExtPackWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(ExtPackWrap, IExtPack, IExtPackBase)
#endif // VBOX_WITH_XPCOM
