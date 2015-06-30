/** @file
 *
 * VirtualBox API class wrapper code for IExtPackManager.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EXTPACKMANAGER

#include "ExtPackManagerWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ExtPackManagerWrap)

//
// IExtPackManager properties
//

STDMETHODIMP ExtPackManagerWrap::COMGETTER(InstalledExtPacks)(ComSafeArrayOut(IExtPack *, aInstalledExtPacks))
{
    LogRelFlow(("{%p} %s: enter aInstalledExtPacks=%p\n", this, "ExtPackManager::getInstalledExtPacks", aInstalledExtPacks));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInstalledExtPacks);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getInstalledExtPacks(ArrayComTypeOutConverter<IExtPack>(ComSafeArrayOutArg(aInstalledExtPacks)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aInstalledExtPacks=%zu hrc=%Rhrc\n", this, "ExtPackManager::getInstalledExtPacks", ComSafeArraySize(*aInstalledExtPacks), hrc));
    return hrc;
}

//
// IExtPackManager methods
//

STDMETHODIMP ExtPackManagerWrap::Find(IN_BSTR aName,
                                      IExtPack **aReturnData)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aReturnData=%p\n", this, "ExtPackManager::find", aName, aReturnData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReturnData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = find(BSTRInConverter(aName).str(),
                   ComTypeOutConverter<IExtPack>(aReturnData).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aReturnData=%p hrc=%Rhrc\n", this, "ExtPackManager::find", *aReturnData, hrc));
    return hrc;
}

STDMETHODIMP ExtPackManagerWrap::OpenExtPackFile(IN_BSTR aPath,
                                                 IExtPackFile **aFile)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aFile=%p\n", this, "ExtPackManager::openExtPackFile", aPath, aFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = openExtPackFile(BSTRInConverter(aPath).str(),
                              ComTypeOutConverter<IExtPackFile>(aFile).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFile=%p hrc=%Rhrc\n", this, "ExtPackManager::openExtPackFile", *aFile, hrc));
    return hrc;
}

STDMETHODIMP ExtPackManagerWrap::Uninstall(IN_BSTR aName,
                                           BOOL aForcedRemoval,
                                           IN_BSTR aDisplayInfo,
                                           IProgress **aProgess)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aForcedRemoval=%RTbool aDisplayInfo=%ls aProgess=%p\n", this, "ExtPackManager::uninstall", aName, aForcedRemoval, aDisplayInfo, aProgess));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgess);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = uninstall(BSTRInConverter(aName).str(),
                        aForcedRemoval,
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

    LogRelFlow(("{%p} %s: leave aProgess=%p hrc=%Rhrc\n", this, "ExtPackManager::uninstall", *aProgess, hrc));
    return hrc;
}

STDMETHODIMP ExtPackManagerWrap::Cleanup()
{
    LogRelFlow(("{%p} %s:enter\n", this, "ExtPackManager::cleanup"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = cleanup();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "ExtPackManager::cleanup", hrc));
    return hrc;
}

STDMETHODIMP ExtPackManagerWrap::QueryAllPlugInsForFrontend(IN_BSTR aFrontendName,
                                                            ComSafeArrayOut(BSTR, aPlugInModules))
{
    LogRelFlow(("{%p} %s:enter aFrontendName=%ls aPlugInModules=%p\n", this, "ExtPackManager::queryAllPlugInsForFrontend", aFrontendName, aPlugInModules));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPlugInModules);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = queryAllPlugInsForFrontend(BSTRInConverter(aFrontendName).str(),
                                         ArrayBSTROutConverter(ComSafeArrayOutArg(aPlugInModules)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aPlugInModules=%zu hrc=%Rhrc\n", this, "ExtPackManager::queryAllPlugInsForFrontend", ComSafeArraySize(*aPlugInModules), hrc));
    return hrc;
}

STDMETHODIMP ExtPackManagerWrap::IsExtPackUsable(IN_BSTR aName,
                                                 BOOL *aUsable)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aUsable=%p\n", this, "ExtPackManager::isExtPackUsable", aName, aUsable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUsable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = isExtPackUsable(BSTRInConverter(aName).str(),
                              aUsable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aUsable=%RTbool hrc=%Rhrc\n", this, "ExtPackManager::isExtPackUsable", *aUsable, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ExtPackManagerWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(ExtPackManagerWrap, IExtPackManager)
#endif // VBOX_WITH_XPCOM
