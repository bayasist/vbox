/** @file
 *
 * VirtualBox API class wrapper code for IExtPackFile.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EXTPACKFILE

#include "ExtPackFileWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ExtPackFileWrap)

//
// IExtPackBase properties
//

STDMETHODIMP ExtPackFileWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "ExtPackFile::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "ExtPackFile::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "ExtPackFile::getDescription", aDescription));

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

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "ExtPackFile::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(Version)(BSTR *aVersion)
{
    LogRelFlow(("{%p} %s: enter aVersion=%p\n", this, "ExtPackFile::getVersion", aVersion));

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

    LogRelFlow(("{%p} %s: leave *aVersion=%ls hrc=%Rhrc\n", this, "ExtPackFile::getVersion", *aVersion, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(Revision)(ULONG *aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%p\n", this, "ExtPackFile::getRevision", aRevision));

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

    LogRelFlow(("{%p} %s: leave *aRevision=%RU32 hrc=%Rhrc\n", this, "ExtPackFile::getRevision", *aRevision, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(Edition)(BSTR *aEdition)
{
    LogRelFlow(("{%p} %s: enter aEdition=%p\n", this, "ExtPackFile::getEdition", aEdition));

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

    LogRelFlow(("{%p} %s: leave *aEdition=%ls hrc=%Rhrc\n", this, "ExtPackFile::getEdition", *aEdition, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(VRDEModule)(BSTR *aVRDEModule)
{
    LogRelFlow(("{%p} %s: enter aVRDEModule=%p\n", this, "ExtPackFile::getVRDEModule", aVRDEModule));

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

    LogRelFlow(("{%p} %s: leave *aVRDEModule=%ls hrc=%Rhrc\n", this, "ExtPackFile::getVRDEModule", *aVRDEModule, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(PlugIns)(ComSafeArrayOut(IExtPackPlugIn *, aPlugIns))
{
    LogRelFlow(("{%p} %s: enter aPlugIns=%p\n", this, "ExtPackFile::getPlugIns", aPlugIns));

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

    LogRelFlow(("{%p} %s: leave *aPlugIns=%zu hrc=%Rhrc\n", this, "ExtPackFile::getPlugIns", ComSafeArraySize(*aPlugIns), hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(Usable)(BOOL *aUsable)
{
    LogRelFlow(("{%p} %s: enter aUsable=%p\n", this, "ExtPackFile::getUsable", aUsable));

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

    LogRelFlow(("{%p} %s: leave *aUsable=%RTbool hrc=%Rhrc\n", this, "ExtPackFile::getUsable", *aUsable, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(WhyUnusable)(BSTR *aWhyUnusable)
{
    LogRelFlow(("{%p} %s: enter aWhyUnusable=%p\n", this, "ExtPackFile::getWhyUnusable", aWhyUnusable));

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

    LogRelFlow(("{%p} %s: leave *aWhyUnusable=%ls hrc=%Rhrc\n", this, "ExtPackFile::getWhyUnusable", *aWhyUnusable, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(ShowLicense)(BOOL *aShowLicense)
{
    LogRelFlow(("{%p} %s: enter aShowLicense=%p\n", this, "ExtPackFile::getShowLicense", aShowLicense));

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

    LogRelFlow(("{%p} %s: leave *aShowLicense=%RTbool hrc=%Rhrc\n", this, "ExtPackFile::getShowLicense", *aShowLicense, hrc));
    return hrc;
}

STDMETHODIMP ExtPackFileWrap::COMGETTER(License)(BSTR *aLicense)
{
    LogRelFlow(("{%p} %s: enter aLicense=%p\n", this, "ExtPackFile::getLicense", aLicense));

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

    LogRelFlow(("{%p} %s: leave *aLicense=%ls hrc=%Rhrc\n", this, "ExtPackFile::getLicense", *aLicense, hrc));
    return hrc;
}

//
// IExtPackFile properties
//

STDMETHODIMP ExtPackFileWrap::COMGETTER(FilePath)(BSTR *aFilePath)
{
    LogRelFlow(("{%p} %s: enter aFilePath=%p\n", this, "ExtPackFile::getFilePath", aFilePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFilePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFilePath(BSTROutConverter(aFilePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFilePath=%ls hrc=%Rhrc\n", this, "ExtPackFile::getFilePath", *aFilePath, hrc));
    return hrc;
}

//
// IExtPackBase methods
//

STDMETHODIMP ExtPackFileWrap::QueryLicense(IN_BSTR aPreferredLocale,
                                           IN_BSTR aPreferredLanguage,
                                           IN_BSTR aFormat,
                                           BSTR *aLicenseText)
{
    LogRelFlow(("{%p} %s:enter aPreferredLocale=%ls aPreferredLanguage=%ls aFormat=%ls aLicenseText=%p\n", this, "ExtPackFile::queryLicense", aPreferredLocale, aPreferredLanguage, aFormat, aLicenseText));

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

    LogRelFlow(("{%p} %s: leave aLicenseText=%ls hrc=%Rhrc\n", this, "ExtPackFile::queryLicense", *aLicenseText, hrc));
    return hrc;
}

//
// IExtPackFile methods
//

STDMETHODIMP ExtPackFileWrap::Install(BOOL aReplace,
                                      IN_BSTR aDisplayInfo,
                                      IProgress **aProgess)
{
    LogRelFlow(("{%p} %s:enter aReplace=%RTbool aDisplayInfo=%ls aProgess=%p\n", this, "ExtPackFile::install", aReplace, aDisplayInfo, aProgess));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgess);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = install(aReplace,
                      BSTRInConverter(aDisplayInfo).str(),
                      ComTypeOutConverter<IProgress>(aProgess).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgess=%p hrc=%Rhrc\n", this, "ExtPackFile::install", *aProgess, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ExtPackFileWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(ExtPackFileWrap, IExtPackFile, IExtPackBase)
#endif // VBOX_WITH_XPCOM
