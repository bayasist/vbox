/** @file
 *
 * VirtualBox API class wrapper code for IVRDEServer.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_VRDESERVER

#include "VRDEServerWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(VRDEServerWrap)

//
// IVRDEServer properties
//

STDMETHODIMP VRDEServerWrap::COMGETTER(Enabled)(BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%p\n", this, "VRDEServer::getEnabled", aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEnabled(aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEnabled=%RTbool hrc=%Rhrc\n", this, "VRDEServer::getEnabled", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMSETTER(Enabled)(BOOL aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%RTbool\n", this, "VRDEServer::setEnabled", aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setEnabled(aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VRDEServer::setEnabled", hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMGETTER(AuthType)(AuthType_T *aAuthType)
{
    LogRelFlow(("{%p} %s: enter aAuthType=%p\n", this, "VRDEServer::getAuthType", aAuthType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAuthType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAuthType(aAuthType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAuthType=%RU32 hrc=%Rhrc\n", this, "VRDEServer::getAuthType", *aAuthType, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMSETTER(AuthType)(AuthType_T aAuthType)
{
    LogRelFlow(("{%p} %s: enter aAuthType=%RU32\n", this, "VRDEServer::setAuthType", aAuthType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAuthType(aAuthType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VRDEServer::setAuthType", hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMGETTER(AuthTimeout)(ULONG *aAuthTimeout)
{
    LogRelFlow(("{%p} %s: enter aAuthTimeout=%p\n", this, "VRDEServer::getAuthTimeout", aAuthTimeout));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAuthTimeout);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAuthTimeout(aAuthTimeout);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAuthTimeout=%RU32 hrc=%Rhrc\n", this, "VRDEServer::getAuthTimeout", *aAuthTimeout, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMSETTER(AuthTimeout)(ULONG aAuthTimeout)
{
    LogRelFlow(("{%p} %s: enter aAuthTimeout=%RU32\n", this, "VRDEServer::setAuthTimeout", aAuthTimeout));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAuthTimeout(aAuthTimeout);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VRDEServer::setAuthTimeout", hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMGETTER(AllowMultiConnection)(BOOL *aAllowMultiConnection)
{
    LogRelFlow(("{%p} %s: enter aAllowMultiConnection=%p\n", this, "VRDEServer::getAllowMultiConnection", aAllowMultiConnection));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAllowMultiConnection);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAllowMultiConnection(aAllowMultiConnection);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAllowMultiConnection=%RTbool hrc=%Rhrc\n", this, "VRDEServer::getAllowMultiConnection", *aAllowMultiConnection, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMSETTER(AllowMultiConnection)(BOOL aAllowMultiConnection)
{
    LogRelFlow(("{%p} %s: enter aAllowMultiConnection=%RTbool\n", this, "VRDEServer::setAllowMultiConnection", aAllowMultiConnection));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAllowMultiConnection(aAllowMultiConnection);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VRDEServer::setAllowMultiConnection", hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMGETTER(ReuseSingleConnection)(BOOL *aReuseSingleConnection)
{
    LogRelFlow(("{%p} %s: enter aReuseSingleConnection=%p\n", this, "VRDEServer::getReuseSingleConnection", aReuseSingleConnection));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReuseSingleConnection);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getReuseSingleConnection(aReuseSingleConnection);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aReuseSingleConnection=%RTbool hrc=%Rhrc\n", this, "VRDEServer::getReuseSingleConnection", *aReuseSingleConnection, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMSETTER(ReuseSingleConnection)(BOOL aReuseSingleConnection)
{
    LogRelFlow(("{%p} %s: enter aReuseSingleConnection=%RTbool\n", this, "VRDEServer::setReuseSingleConnection", aReuseSingleConnection));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setReuseSingleConnection(aReuseSingleConnection);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VRDEServer::setReuseSingleConnection", hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMGETTER(VRDEExtPack)(BSTR *aVRDEExtPack)
{
    LogRelFlow(("{%p} %s: enter aVRDEExtPack=%p\n", this, "VRDEServer::getVRDEExtPack", aVRDEExtPack));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVRDEExtPack);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVRDEExtPack(BSTROutConverter(aVRDEExtPack).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVRDEExtPack=%ls hrc=%Rhrc\n", this, "VRDEServer::getVRDEExtPack", *aVRDEExtPack, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMSETTER(VRDEExtPack)(IN_BSTR aVRDEExtPack)
{
    LogRelFlow(("{%p} %s: enter aVRDEExtPack=%ls\n", this, "VRDEServer::setVRDEExtPack", aVRDEExtPack));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVRDEExtPack(BSTRInConverter(aVRDEExtPack).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VRDEServer::setVRDEExtPack", hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMGETTER(AuthLibrary)(BSTR *aAuthLibrary)
{
    LogRelFlow(("{%p} %s: enter aAuthLibrary=%p\n", this, "VRDEServer::getAuthLibrary", aAuthLibrary));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAuthLibrary);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAuthLibrary(BSTROutConverter(aAuthLibrary).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAuthLibrary=%ls hrc=%Rhrc\n", this, "VRDEServer::getAuthLibrary", *aAuthLibrary, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMSETTER(AuthLibrary)(IN_BSTR aAuthLibrary)
{
    LogRelFlow(("{%p} %s: enter aAuthLibrary=%ls\n", this, "VRDEServer::setAuthLibrary", aAuthLibrary));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAuthLibrary(BSTRInConverter(aAuthLibrary).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VRDEServer::setAuthLibrary", hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::COMGETTER(VRDEProperties)(ComSafeArrayOut(BSTR, aVRDEProperties))
{
    LogRelFlow(("{%p} %s: enter aVRDEProperties=%p\n", this, "VRDEServer::getVRDEProperties", aVRDEProperties));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVRDEProperties);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVRDEProperties(ArrayBSTROutConverter(ComSafeArrayOutArg(aVRDEProperties)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVRDEProperties=%zu hrc=%Rhrc\n", this, "VRDEServer::getVRDEProperties", ComSafeArraySize(*aVRDEProperties), hrc));
    return hrc;
}

//
// IVRDEServer methods
//

STDMETHODIMP VRDEServerWrap::SetVRDEProperty(IN_BSTR aKey,
                                             IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aKey=%ls aValue=%ls\n", this, "VRDEServer::setVRDEProperty", aKey, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVRDEProperty(BSTRInConverter(aKey).str(),
                              BSTRInConverter(aValue).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VRDEServer::setVRDEProperty", hrc));
    return hrc;
}

STDMETHODIMP VRDEServerWrap::GetVRDEProperty(IN_BSTR aKey,
                                             BSTR *aValue)
{
    LogRelFlow(("{%p} %s:enter aKey=%ls aValue=%p\n", this, "VRDEServer::getVRDEProperty", aKey, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVRDEProperty(BSTRInConverter(aKey).str(),
                              BSTROutConverter(aValue).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aValue=%ls hrc=%Rhrc\n", this, "VRDEServer::getVRDEProperty", *aValue, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VRDEServerWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(VRDEServerWrap, IVRDEServer)
#endif // VBOX_WITH_XPCOM
