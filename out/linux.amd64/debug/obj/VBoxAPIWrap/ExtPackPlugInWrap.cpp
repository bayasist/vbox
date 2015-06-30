/** @file
 *
 * VirtualBox API class wrapper code for IExtPackPlugIn.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_EXTPACKPLUGIN

#include "ExtPackPlugInWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ExtPackPlugInWrap)

//
// IExtPackPlugIn properties
//

STDMETHODIMP ExtPackPlugInWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "ExtPackPlugIn::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "ExtPackPlugIn::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP ExtPackPlugInWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "ExtPackPlugIn::getDescription", aDescription));

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

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "ExtPackPlugIn::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP ExtPackPlugInWrap::COMGETTER(Frontend)(BSTR *aFrontend)
{
    LogRelFlow(("{%p} %s: enter aFrontend=%p\n", this, "ExtPackPlugIn::getFrontend", aFrontend));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFrontend);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFrontend(BSTROutConverter(aFrontend).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFrontend=%ls hrc=%Rhrc\n", this, "ExtPackPlugIn::getFrontend", *aFrontend, hrc));
    return hrc;
}

STDMETHODIMP ExtPackPlugInWrap::COMGETTER(ModulePath)(BSTR *aModulePath)
{
    LogRelFlow(("{%p} %s: enter aModulePath=%p\n", this, "ExtPackPlugIn::getModulePath", aModulePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aModulePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getModulePath(BSTROutConverter(aModulePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aModulePath=%ls hrc=%Rhrc\n", this, "ExtPackPlugIn::getModulePath", *aModulePath, hrc));
    return hrc;
}

//
// IExtPackPlugIn methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ExtPackPlugInWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(ExtPackPlugInWrap, IExtPackPlugIn)
#endif // VBOX_WITH_XPCOM
