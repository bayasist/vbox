/** @file
 *
 * VirtualBox API class wrapper code for INATNetwork.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_NATNETWORK

#include "NATNetworkWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(NATNetworkWrap)

//
// INATNetwork properties
//

STDMETHODIMP NATNetworkWrap::COMGETTER(NetworkName)(BSTR *aNetworkName)
{
    LogRelFlow(("{%p} %s: enter aNetworkName=%p\n", this, "NATNetwork::getNetworkName", aNetworkName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetworkName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetworkName(BSTROutConverter(aNetworkName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNetworkName=%ls hrc=%Rhrc\n", this, "NATNetwork::getNetworkName", *aNetworkName, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMSETTER(NetworkName)(IN_BSTR aNetworkName)
{
    LogRelFlow(("{%p} %s: enter aNetworkName=%ls\n", this, "NATNetwork::setNetworkName", aNetworkName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setNetworkName(BSTRInConverter(aNetworkName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::setNetworkName", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(Enabled)(BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%p\n", this, "NATNetwork::getEnabled", aEnabled));

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

    LogRelFlow(("{%p} %s: leave *aEnabled=%RTbool hrc=%Rhrc\n", this, "NATNetwork::getEnabled", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMSETTER(Enabled)(BOOL aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%RTbool\n", this, "NATNetwork::setEnabled", aEnabled));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::setEnabled", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(Network)(BSTR *aNetwork)
{
    LogRelFlow(("{%p} %s: enter aNetwork=%p\n", this, "NATNetwork::getNetwork", aNetwork));

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

    LogRelFlow(("{%p} %s: leave *aNetwork=%ls hrc=%Rhrc\n", this, "NATNetwork::getNetwork", *aNetwork, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMSETTER(Network)(IN_BSTR aNetwork)
{
    LogRelFlow(("{%p} %s: enter aNetwork=%ls\n", this, "NATNetwork::setNetwork", aNetwork));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::setNetwork", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(Gateway)(BSTR *aGateway)
{
    LogRelFlow(("{%p} %s: enter aGateway=%p\n", this, "NATNetwork::getGateway", aGateway));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGateway);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGateway(BSTROutConverter(aGateway).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGateway=%ls hrc=%Rhrc\n", this, "NATNetwork::getGateway", *aGateway, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(IPv6Enabled)(BOOL *aIPv6Enabled)
{
    LogRelFlow(("{%p} %s: enter aIPv6Enabled=%p\n", this, "NATNetwork::getIPv6Enabled", aIPv6Enabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIPv6Enabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIPv6Enabled(aIPv6Enabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIPv6Enabled=%RTbool hrc=%Rhrc\n", this, "NATNetwork::getIPv6Enabled", *aIPv6Enabled, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMSETTER(IPv6Enabled)(BOOL aIPv6Enabled)
{
    LogRelFlow(("{%p} %s: enter aIPv6Enabled=%RTbool\n", this, "NATNetwork::setIPv6Enabled", aIPv6Enabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIPv6Enabled(aIPv6Enabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::setIPv6Enabled", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(IPv6Prefix)(BSTR *aIPv6Prefix)
{
    LogRelFlow(("{%p} %s: enter aIPv6Prefix=%p\n", this, "NATNetwork::getIPv6Prefix", aIPv6Prefix));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIPv6Prefix);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIPv6Prefix(BSTROutConverter(aIPv6Prefix).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIPv6Prefix=%ls hrc=%Rhrc\n", this, "NATNetwork::getIPv6Prefix", *aIPv6Prefix, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMSETTER(IPv6Prefix)(IN_BSTR aIPv6Prefix)
{
    LogRelFlow(("{%p} %s: enter aIPv6Prefix=%ls\n", this, "NATNetwork::setIPv6Prefix", aIPv6Prefix));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIPv6Prefix(BSTRInConverter(aIPv6Prefix).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::setIPv6Prefix", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(AdvertiseDefaultIPv6RouteEnabled)(BOOL *aAdvertiseDefaultIPv6RouteEnabled)
{
    LogRelFlow(("{%p} %s: enter aAdvertiseDefaultIPv6RouteEnabled=%p\n", this, "NATNetwork::getAdvertiseDefaultIPv6RouteEnabled", aAdvertiseDefaultIPv6RouteEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdvertiseDefaultIPv6RouteEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdvertiseDefaultIPv6RouteEnabled(aAdvertiseDefaultIPv6RouteEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAdvertiseDefaultIPv6RouteEnabled=%RTbool hrc=%Rhrc\n", this, "NATNetwork::getAdvertiseDefaultIPv6RouteEnabled", *aAdvertiseDefaultIPv6RouteEnabled, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMSETTER(AdvertiseDefaultIPv6RouteEnabled)(BOOL aAdvertiseDefaultIPv6RouteEnabled)
{
    LogRelFlow(("{%p} %s: enter aAdvertiseDefaultIPv6RouteEnabled=%RTbool\n", this, "NATNetwork::setAdvertiseDefaultIPv6RouteEnabled", aAdvertiseDefaultIPv6RouteEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAdvertiseDefaultIPv6RouteEnabled(aAdvertiseDefaultIPv6RouteEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::setAdvertiseDefaultIPv6RouteEnabled", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(NeedDhcpServer)(BOOL *aNeedDhcpServer)
{
    LogRelFlow(("{%p} %s: enter aNeedDhcpServer=%p\n", this, "NATNetwork::getNeedDhcpServer", aNeedDhcpServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNeedDhcpServer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNeedDhcpServer(aNeedDhcpServer);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNeedDhcpServer=%RTbool hrc=%Rhrc\n", this, "NATNetwork::getNeedDhcpServer", *aNeedDhcpServer, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMSETTER(NeedDhcpServer)(BOOL aNeedDhcpServer)
{
    LogRelFlow(("{%p} %s: enter aNeedDhcpServer=%RTbool\n", this, "NATNetwork::setNeedDhcpServer", aNeedDhcpServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setNeedDhcpServer(aNeedDhcpServer);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::setNeedDhcpServer", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "NATNetwork::getEventSource", aEventSource));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEventSource);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEventSource(ComTypeOutConverter<IEventSource>(aEventSource).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "NATNetwork::getEventSource", *aEventSource, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(PortForwardRules4)(ComSafeArrayOut(BSTR, aPortForwardRules4))
{
    LogRelFlow(("{%p} %s: enter aPortForwardRules4=%p\n", this, "NATNetwork::getPortForwardRules4", aPortForwardRules4));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPortForwardRules4);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPortForwardRules4(ArrayBSTROutConverter(ComSafeArrayOutArg(aPortForwardRules4)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPortForwardRules4=%zu hrc=%Rhrc\n", this, "NATNetwork::getPortForwardRules4", ComSafeArraySize(*aPortForwardRules4), hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(LocalMappings)(ComSafeArrayOut(BSTR, aLocalMappings))
{
    LogRelFlow(("{%p} %s: enter aLocalMappings=%p\n", this, "NATNetwork::getLocalMappings", aLocalMappings));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLocalMappings);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLocalMappings(ArrayBSTROutConverter(ComSafeArrayOutArg(aLocalMappings)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLocalMappings=%zu hrc=%Rhrc\n", this, "NATNetwork::getLocalMappings", ComSafeArraySize(*aLocalMappings), hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(LoopbackIp6)(LONG *aLoopbackIp6)
{
    LogRelFlow(("{%p} %s: enter aLoopbackIp6=%p\n", this, "NATNetwork::getLoopbackIp6", aLoopbackIp6));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLoopbackIp6);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLoopbackIp6(aLoopbackIp6);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLoopbackIp6=%RI32 hrc=%Rhrc\n", this, "NATNetwork::getLoopbackIp6", *aLoopbackIp6, hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMSETTER(LoopbackIp6)(LONG aLoopbackIp6)
{
    LogRelFlow(("{%p} %s: enter aLoopbackIp6=%RI32\n", this, "NATNetwork::setLoopbackIp6", aLoopbackIp6));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLoopbackIp6(aLoopbackIp6);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::setLoopbackIp6", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::COMGETTER(PortForwardRules6)(ComSafeArrayOut(BSTR, aPortForwardRules6))
{
    LogRelFlow(("{%p} %s: enter aPortForwardRules6=%p\n", this, "NATNetwork::getPortForwardRules6", aPortForwardRules6));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPortForwardRules6);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPortForwardRules6(ArrayBSTROutConverter(ComSafeArrayOutArg(aPortForwardRules6)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPortForwardRules6=%zu hrc=%Rhrc\n", this, "NATNetwork::getPortForwardRules6", ComSafeArraySize(*aPortForwardRules6), hrc));
    return hrc;
}

//
// INATNetwork methods
//

STDMETHODIMP NATNetworkWrap::AddLocalMapping(IN_BSTR aHostid,
                                             LONG aOffset)
{
    LogRelFlow(("{%p} %s:enter aHostid=%ls aOffset=%RI32\n", this, "NATNetwork::addLocalMapping", aHostid, aOffset));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addLocalMapping(BSTRInConverter(aHostid).str(),
                              aOffset);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::addLocalMapping", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::AddPortForwardRule(BOOL aIsIpv6,
                                                IN_BSTR aRuleName,
                                                NATProtocol_T aProto,
                                                IN_BSTR aHostIP,
                                                USHORT aHostPort,
                                                IN_BSTR aGuestIP,
                                                USHORT aGuestPort)
{
    LogRelFlow(("{%p} %s:enter aIsIpv6=%RTbool aRuleName=%ls aProto=%RU32 aHostIP=%ls aHostPort=%RU16 aGuestIP=%ls aGuestPort=%RU16\n", this, "NATNetwork::addPortForwardRule", aIsIpv6, aRuleName, aProto, aHostIP, aHostPort, aGuestIP, aGuestPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addPortForwardRule(aIsIpv6,
                                 BSTRInConverter(aRuleName).str(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::addPortForwardRule", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::RemovePortForwardRule(BOOL aISipv6,
                                                   IN_BSTR aRuleName)
{
    LogRelFlow(("{%p} %s:enter aISipv6=%RTbool aRuleName=%ls\n", this, "NATNetwork::removePortForwardRule", aISipv6, aRuleName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removePortForwardRule(aISipv6,
                                    BSTRInConverter(aRuleName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::removePortForwardRule", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::Start(IN_BSTR aTrunkType)
{
    LogRelFlow(("{%p} %s:enter aTrunkType=%ls\n", this, "NATNetwork::start", aTrunkType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = start(BSTRInConverter(aTrunkType).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::start", hrc));
    return hrc;
}

STDMETHODIMP NATNetworkWrap::Stop()
{
    LogRelFlow(("{%p} %s:enter\n", this, "NATNetwork::stop"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = stop();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NATNetwork::stop", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(NATNetworkWrap, INATNetwork)
#endif // VBOX_WITH_XPCOM
