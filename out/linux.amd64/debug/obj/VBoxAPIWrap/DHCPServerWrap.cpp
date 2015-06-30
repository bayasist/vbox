/** @file
 *
 * VirtualBox API class wrapper code for IDHCPServer.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_DHCPSERVER

#include "DHCPServerWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(DHCPServerWrap)

//
// IDHCPServer properties
//

STDMETHODIMP DHCPServerWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "DHCPServer::getEventSource", aEventSource));

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

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "DHCPServer::getEventSource", *aEventSource, hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMGETTER(Enabled)(BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%p\n", this, "DHCPServer::getEnabled", aEnabled));

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

    LogRelFlow(("{%p} %s: leave *aEnabled=%RTbool hrc=%Rhrc\n", this, "DHCPServer::getEnabled", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMSETTER(Enabled)(BOOL aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%RTbool\n", this, "DHCPServer::setEnabled", aEnabled));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "DHCPServer::setEnabled", hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMGETTER(IPAddress)(BSTR *aIPAddress)
{
    LogRelFlow(("{%p} %s: enter aIPAddress=%p\n", this, "DHCPServer::getIPAddress", aIPAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIPAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIPAddress(BSTROutConverter(aIPAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIPAddress=%ls hrc=%Rhrc\n", this, "DHCPServer::getIPAddress", *aIPAddress, hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMGETTER(NetworkMask)(BSTR *aNetworkMask)
{
    LogRelFlow(("{%p} %s: enter aNetworkMask=%p\n", this, "DHCPServer::getNetworkMask", aNetworkMask));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetworkMask);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetworkMask(BSTROutConverter(aNetworkMask).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNetworkMask=%ls hrc=%Rhrc\n", this, "DHCPServer::getNetworkMask", *aNetworkMask, hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMGETTER(NetworkName)(BSTR *aNetworkName)
{
    LogRelFlow(("{%p} %s: enter aNetworkName=%p\n", this, "DHCPServer::getNetworkName", aNetworkName));

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

    LogRelFlow(("{%p} %s: leave *aNetworkName=%ls hrc=%Rhrc\n", this, "DHCPServer::getNetworkName", *aNetworkName, hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMGETTER(LowerIP)(BSTR *aLowerIP)
{
    LogRelFlow(("{%p} %s: enter aLowerIP=%p\n", this, "DHCPServer::getLowerIP", aLowerIP));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLowerIP);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLowerIP(BSTROutConverter(aLowerIP).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLowerIP=%ls hrc=%Rhrc\n", this, "DHCPServer::getLowerIP", *aLowerIP, hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMGETTER(UpperIP)(BSTR *aUpperIP)
{
    LogRelFlow(("{%p} %s: enter aUpperIP=%p\n", this, "DHCPServer::getUpperIP", aUpperIP));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUpperIP);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUpperIP(BSTROutConverter(aUpperIP).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUpperIP=%ls hrc=%Rhrc\n", this, "DHCPServer::getUpperIP", *aUpperIP, hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMGETTER(GlobalOptions)(ComSafeArrayOut(BSTR, aGlobalOptions))
{
    LogRelFlow(("{%p} %s: enter aGlobalOptions=%p\n", this, "DHCPServer::getGlobalOptions", aGlobalOptions));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGlobalOptions);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGlobalOptions(ArrayBSTROutConverter(ComSafeArrayOutArg(aGlobalOptions)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGlobalOptions=%zu hrc=%Rhrc\n", this, "DHCPServer::getGlobalOptions", ComSafeArraySize(*aGlobalOptions), hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::COMGETTER(VmConfigs)(ComSafeArrayOut(BSTR, aVmConfigs))
{
    LogRelFlow(("{%p} %s: enter aVmConfigs=%p\n", this, "DHCPServer::getVmConfigs", aVmConfigs));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVmConfigs);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVmConfigs(ArrayBSTROutConverter(ComSafeArrayOutArg(aVmConfigs)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVmConfigs=%zu hrc=%Rhrc\n", this, "DHCPServer::getVmConfigs", ComSafeArraySize(*aVmConfigs), hrc));
    return hrc;
}

//
// IDHCPServer methods
//

STDMETHODIMP DHCPServerWrap::AddGlobalOption(DhcpOpt_T aOption,
                                             IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aOption=%RU32 aValue=%ls\n", this, "DHCPServer::addGlobalOption", aOption, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addGlobalOption(aOption,
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "DHCPServer::addGlobalOption", hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::AddVmSlotOption(IN_BSTR aVmname,
                                             LONG aSlot,
                                             DhcpOpt_T aOption,
                                             IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aVmname=%ls aSlot=%RI32 aOption=%RU32 aValue=%ls\n", this, "DHCPServer::addVmSlotOption", aVmname, aSlot, aOption, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addVmSlotOption(BSTRInConverter(aVmname).str(),
                              aSlot,
                              aOption,
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "DHCPServer::addVmSlotOption", hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::RemoveVmSlotOptions(IN_BSTR aVmname,
                                                 LONG aSlot)
{
    LogRelFlow(("{%p} %s:enter aVmname=%ls aSlot=%RI32\n", this, "DHCPServer::removeVmSlotOptions", aVmname, aSlot));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeVmSlotOptions(BSTRInConverter(aVmname).str(),
                                  aSlot);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "DHCPServer::removeVmSlotOptions", hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::GetVmSlotOptions(IN_BSTR aVmname,
                                              LONG aSlot,
                                              ComSafeArrayOut(BSTR, aOption))
{
    LogRelFlow(("{%p} %s:enter aVmname=%ls aSlot=%RI32 aOption=%p\n", this, "DHCPServer::getVmSlotOptions", aVmname, aSlot, aOption));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOption);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVmSlotOptions(BSTRInConverter(aVmname).str(),
                               aSlot,
                               ArrayBSTROutConverter(ComSafeArrayOutArg(aOption)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aOption=%zu hrc=%Rhrc\n", this, "DHCPServer::getVmSlotOptions", ComSafeArraySize(*aOption), hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::GetMacOptions(IN_BSTR aMac,
                                           ComSafeArrayOut(BSTR, aOption))
{
    LogRelFlow(("{%p} %s:enter aMac=%ls aOption=%p\n", this, "DHCPServer::getMacOptions", aMac, aOption));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOption);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMacOptions(BSTRInConverter(aMac).str(),
                            ArrayBSTROutConverter(ComSafeArrayOutArg(aOption)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aOption=%zu hrc=%Rhrc\n", this, "DHCPServer::getMacOptions", ComSafeArraySize(*aOption), hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::SetConfiguration(IN_BSTR aIPAddress,
                                              IN_BSTR aNetworkMask,
                                              IN_BSTR aFromIPAddress,
                                              IN_BSTR aToIPAddress)
{
    LogRelFlow(("{%p} %s:enter aIPAddress=%ls aNetworkMask=%ls aFromIPAddress=%ls aToIPAddress=%ls\n", this, "DHCPServer::setConfiguration", aIPAddress, aNetworkMask, aFromIPAddress, aToIPAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setConfiguration(BSTRInConverter(aIPAddress).str(),
                               BSTRInConverter(aNetworkMask).str(),
                               BSTRInConverter(aFromIPAddress).str(),
                               BSTRInConverter(aToIPAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "DHCPServer::setConfiguration", hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::Start(IN_BSTR aNetworkName,
                                   IN_BSTR aTrunkName,
                                   IN_BSTR aTrunkType)
{
    LogRelFlow(("{%p} %s:enter aNetworkName=%ls aTrunkName=%ls aTrunkType=%ls\n", this, "DHCPServer::start", aNetworkName, aTrunkName, aTrunkType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = start(BSTRInConverter(aNetworkName).str(),
                    BSTRInConverter(aTrunkName).str(),
                    BSTRInConverter(aTrunkType).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "DHCPServer::start", hrc));
    return hrc;
}

STDMETHODIMP DHCPServerWrap::Stop()
{
    LogRelFlow(("{%p} %s:enter\n", this, "DHCPServer::stop"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "DHCPServer::stop", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(DHCPServerWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(DHCPServerWrap, IDHCPServer)
#endif // VBOX_WITH_XPCOM
