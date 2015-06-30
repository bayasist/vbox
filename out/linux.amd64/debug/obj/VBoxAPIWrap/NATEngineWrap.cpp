/** @file
 *
 * VirtualBox API class wrapper code for INATEngine.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_NATENGINE

#include "NATEngineWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(NATEngineWrap)

//
// INATEngine properties
//

STDMETHODIMP NATEngineWrap::COMGETTER(Network)(BSTR *aNetwork)
{
    LogRelFlow(("{%p} %s: enter aNetwork=%p\n", this, "NATEngine::getNetwork", aNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetwork);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetwork(BSTROutConverter(aNetwork).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNetwork=%ls hrc=%Rhrc\n", this, "NATEngine::getNetwork", *aNetwork, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(Network)(IN_BSTR aNetwork)
{
    LogRelFlow(("{%p} %s: enter aNetwork=%ls\n", this, "NATEngine::setNetwork", aNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setNetwork(BSTRInConverter(aNetwork).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setNetwork", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(HostIP)(BSTR *aHostIP)
{
    LogRelFlow(("{%p} %s: enter aHostIP=%p\n", this, "NATEngine::getHostIP", aHostIP));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostIP);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostIP(BSTROutConverter(aHostIP).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostIP=%ls hrc=%Rhrc\n", this, "NATEngine::getHostIP", *aHostIP, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(HostIP)(IN_BSTR aHostIP)
{
    LogRelFlow(("{%p} %s: enter aHostIP=%ls\n", this, "NATEngine::setHostIP", aHostIP));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setHostIP(BSTRInConverter(aHostIP).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setHostIP", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(TFTPPrefix)(BSTR *aTFTPPrefix)
{
    LogRelFlow(("{%p} %s: enter aTFTPPrefix=%p\n", this, "NATEngine::getTFTPPrefix", aTFTPPrefix));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTFTPPrefix);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTFTPPrefix(BSTROutConverter(aTFTPPrefix).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTFTPPrefix=%ls hrc=%Rhrc\n", this, "NATEngine::getTFTPPrefix", *aTFTPPrefix, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(TFTPPrefix)(IN_BSTR aTFTPPrefix)
{
    LogRelFlow(("{%p} %s: enter aTFTPPrefix=%ls\n", this, "NATEngine::setTFTPPrefix", aTFTPPrefix));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTFTPPrefix(BSTRInConverter(aTFTPPrefix).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setTFTPPrefix", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(TFTPBootFile)(BSTR *aTFTPBootFile)
{
    LogRelFlow(("{%p} %s: enter aTFTPBootFile=%p\n", this, "NATEngine::getTFTPBootFile", aTFTPBootFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTFTPBootFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTFTPBootFile(BSTROutConverter(aTFTPBootFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTFTPBootFile=%ls hrc=%Rhrc\n", this, "NATEngine::getTFTPBootFile", *aTFTPBootFile, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(TFTPBootFile)(IN_BSTR aTFTPBootFile)
{
    LogRelFlow(("{%p} %s: enter aTFTPBootFile=%ls\n", this, "NATEngine::setTFTPBootFile", aTFTPBootFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTFTPBootFile(BSTRInConverter(aTFTPBootFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setTFTPBootFile", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(TFTPNextServer)(BSTR *aTFTPNextServer)
{
    LogRelFlow(("{%p} %s: enter aTFTPNextServer=%p\n", this, "NATEngine::getTFTPNextServer", aTFTPNextServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTFTPNextServer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTFTPNextServer(BSTROutConverter(aTFTPNextServer).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTFTPNextServer=%ls hrc=%Rhrc\n", this, "NATEngine::getTFTPNextServer", *aTFTPNextServer, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(TFTPNextServer)(IN_BSTR aTFTPNextServer)
{
    LogRelFlow(("{%p} %s: enter aTFTPNextServer=%ls\n", this, "NATEngine::setTFTPNextServer", aTFTPNextServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTFTPNextServer(BSTRInConverter(aTFTPNextServer).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setTFTPNextServer", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(AliasMode)(ULONG *aAliasMode)
{
    LogRelFlow(("{%p} %s: enter aAliasMode=%p\n", this, "NATEngine::getAliasMode", aAliasMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAliasMode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAliasMode(aAliasMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAliasMode=%RU32 hrc=%Rhrc\n", this, "NATEngine::getAliasMode", *aAliasMode, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(AliasMode)(ULONG aAliasMode)
{
    LogRelFlow(("{%p} %s: enter aAliasMode=%RU32\n", this, "NATEngine::setAliasMode", aAliasMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAliasMode(aAliasMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setAliasMode", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(DNSPassDomain)(BOOL *aDNSPassDomain)
{
    LogRelFlow(("{%p} %s: enter aDNSPassDomain=%p\n", this, "NATEngine::getDNSPassDomain", aDNSPassDomain));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDNSPassDomain);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDNSPassDomain(aDNSPassDomain);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDNSPassDomain=%RTbool hrc=%Rhrc\n", this, "NATEngine::getDNSPassDomain", *aDNSPassDomain, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(DNSPassDomain)(BOOL aDNSPassDomain)
{
    LogRelFlow(("{%p} %s: enter aDNSPassDomain=%RTbool\n", this, "NATEngine::setDNSPassDomain", aDNSPassDomain));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDNSPassDomain(aDNSPassDomain);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setDNSPassDomain", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(DNSProxy)(BOOL *aDNSProxy)
{
    LogRelFlow(("{%p} %s: enter aDNSProxy=%p\n", this, "NATEngine::getDNSProxy", aDNSProxy));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDNSProxy);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDNSProxy(aDNSProxy);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDNSProxy=%RTbool hrc=%Rhrc\n", this, "NATEngine::getDNSProxy", *aDNSProxy, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(DNSProxy)(BOOL aDNSProxy)
{
    LogRelFlow(("{%p} %s: enter aDNSProxy=%RTbool\n", this, "NATEngine::setDNSProxy", aDNSProxy));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDNSProxy(aDNSProxy);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setDNSProxy", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(DNSUseHostResolver)(BOOL *aDNSUseHostResolver)
{
    LogRelFlow(("{%p} %s: enter aDNSUseHostResolver=%p\n", this, "NATEngine::getDNSUseHostResolver", aDNSUseHostResolver));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDNSUseHostResolver);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDNSUseHostResolver(aDNSUseHostResolver);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDNSUseHostResolver=%RTbool hrc=%Rhrc\n", this, "NATEngine::getDNSUseHostResolver", *aDNSUseHostResolver, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMSETTER(DNSUseHostResolver)(BOOL aDNSUseHostResolver)
{
    LogRelFlow(("{%p} %s: enter aDNSUseHostResolver=%RTbool\n", this, "NATEngine::setDNSUseHostResolver", aDNSUseHostResolver));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDNSUseHostResolver(aDNSUseHostResolver);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setDNSUseHostResolver", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::COMGETTER(Redirects)(ComSafeArrayOut(BSTR, aRedirects))
{
    LogRelFlow(("{%p} %s: enter aRedirects=%p\n", this, "NATEngine::getRedirects", aRedirects));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRedirects);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRedirects(ArrayBSTROutConverter(ComSafeArrayOutArg(aRedirects)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRedirects=%zu hrc=%Rhrc\n", this, "NATEngine::getRedirects", ComSafeArraySize(*aRedirects), hrc));
    return hrc;
}

//
// INATEngine methods
//

STDMETHODIMP NATEngineWrap::SetNetworkSettings(ULONG aMtu,
                                               ULONG aSockSnd,
                                               ULONG aSockRcv,
                                               ULONG aTcpWndSnd,
                                               ULONG aTcpWndRcv)
{
    LogRelFlow(("{%p} %s:enter aMtu=%RU32 aSockSnd=%RU32 aSockRcv=%RU32 aTcpWndSnd=%RU32 aTcpWndRcv=%RU32\n", this, "NATEngine::setNetworkSettings", aMtu, aSockSnd, aSockRcv, aTcpWndSnd, aTcpWndRcv));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setNetworkSettings(aMtu,
                                 aSockSnd,
                                 aSockRcv,
                                 aTcpWndSnd,
                                 aTcpWndRcv);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::setNetworkSettings", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::GetNetworkSettings(ULONG *aMtu,
                                               ULONG *aSockSnd,
                                               ULONG *aSockRcv,
                                               ULONG *aTcpWndSnd,
                                               ULONG *aTcpWndRcv)
{
    LogRelFlow(("{%p} %s:enter aMtu=%p aSockSnd=%p aSockRcv=%p aTcpWndSnd=%p aTcpWndRcv=%p\n", this, "NATEngine::getNetworkSettings", aMtu, aSockSnd, aSockRcv, aTcpWndSnd, aTcpWndRcv));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMtu);
        CheckComArgOutPointerValidThrow(aSockSnd);
        CheckComArgOutPointerValidThrow(aSockRcv);
        CheckComArgOutPointerValidThrow(aTcpWndSnd);
        CheckComArgOutPointerValidThrow(aTcpWndRcv);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetworkSettings(aMtu,
                                 aSockSnd,
                                 aSockRcv,
                                 aTcpWndSnd,
                                 aTcpWndRcv);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMtu=%RU32 *aSockSnd=%RU32 *aSockRcv=%RU32 *aTcpWndSnd=%RU32 *aTcpWndRcv=%RU32 hrc=%Rhrc\n", this, "NATEngine::getNetworkSettings", *aMtu, *aSockSnd, *aSockRcv, *aTcpWndSnd, *aTcpWndRcv, hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::AddRedirect(IN_BSTR aName,
                                        NATProtocol_T aProto,
                                        IN_BSTR aHostIP,
                                        USHORT aHostPort,
                                        IN_BSTR aGuestIP,
                                        USHORT aGuestPort)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aProto=%RU32 aHostIP=%ls aHostPort=%RU16 aGuestIP=%ls aGuestPort=%RU16\n", this, "NATEngine::addRedirect", aName, aProto, aHostIP, aHostPort, aGuestIP, aGuestPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addRedirect(BSTRInConverter(aName).str(),
                          aProto,
                          BSTRInConverter(aHostIP).str(),
                          aHostPort,
                          BSTRInConverter(aGuestIP).str(),
                          aGuestPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::addRedirect", hrc));
    return hrc;
}

STDMETHODIMP NATEngineWrap::RemoveRedirect(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "NATEngine::removeRedirect", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeRedirect(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATEngine::removeRedirect", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATEngineWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(NATEngineWrap, INATEngine)
#endif // VBOX_WITH_XPCOM
