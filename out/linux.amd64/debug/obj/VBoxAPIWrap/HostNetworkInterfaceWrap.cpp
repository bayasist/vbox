/** @file
 *
 * VirtualBox API class wrapper code for IHostNetworkInterface.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_HOSTNETWORKINTERFACE

#include "HostNetworkInterfaceWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(HostNetworkInterfaceWrap)

//
// IHostNetworkInterface properties
//

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "HostNetworkInterface::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "HostNetworkInterface::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(ShortName)(BSTR *aShortName)
{
    LogRelFlow(("{%p} %s: enter aShortName=%p\n", this, "HostNetworkInterface::getShortName", aShortName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aShortName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getShortName(BSTROutConverter(aShortName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aShortName=%ls hrc=%Rhrc\n", this, "HostNetworkInterface::getShortName", *aShortName, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(Id)(BSTR *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "HostNetworkInterface::getId", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getId(UuidOutConverter(aId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aId=%ls hrc=%Rhrc\n", this, "HostNetworkInterface::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(NetworkName)(BSTR *aNetworkName)
{
    LogRelFlow(("{%p} %s: enter aNetworkName=%p\n", this, "HostNetworkInterface::getNetworkName", aNetworkName));

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

    LogRelFlow(("{%p} %s: leave *aNetworkName=%ls hrc=%Rhrc\n", this, "HostNetworkInterface::getNetworkName", *aNetworkName, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(DHCPEnabled)(BOOL *aDHCPEnabled)
{
    LogRelFlow(("{%p} %s: enter aDHCPEnabled=%p\n", this, "HostNetworkInterface::getDHCPEnabled", aDHCPEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDHCPEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDHCPEnabled(aDHCPEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDHCPEnabled=%RTbool hrc=%Rhrc\n", this, "HostNetworkInterface::getDHCPEnabled", *aDHCPEnabled, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(IPAddress)(BSTR *aIPAddress)
{
    LogRelFlow(("{%p} %s: enter aIPAddress=%p\n", this, "HostNetworkInterface::getIPAddress", aIPAddress));

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

    LogRelFlow(("{%p} %s: leave *aIPAddress=%ls hrc=%Rhrc\n", this, "HostNetworkInterface::getIPAddress", *aIPAddress, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(NetworkMask)(BSTR *aNetworkMask)
{
    LogRelFlow(("{%p} %s: enter aNetworkMask=%p\n", this, "HostNetworkInterface::getNetworkMask", aNetworkMask));

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

    LogRelFlow(("{%p} %s: leave *aNetworkMask=%ls hrc=%Rhrc\n", this, "HostNetworkInterface::getNetworkMask", *aNetworkMask, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(IPV6Supported)(BOOL *aIPV6Supported)
{
    LogRelFlow(("{%p} %s: enter aIPV6Supported=%p\n", this, "HostNetworkInterface::getIPV6Supported", aIPV6Supported));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIPV6Supported);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIPV6Supported(aIPV6Supported);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIPV6Supported=%RTbool hrc=%Rhrc\n", this, "HostNetworkInterface::getIPV6Supported", *aIPV6Supported, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(IPV6Address)(BSTR *aIPV6Address)
{
    LogRelFlow(("{%p} %s: enter aIPV6Address=%p\n", this, "HostNetworkInterface::getIPV6Address", aIPV6Address));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIPV6Address);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIPV6Address(BSTROutConverter(aIPV6Address).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIPV6Address=%ls hrc=%Rhrc\n", this, "HostNetworkInterface::getIPV6Address", *aIPV6Address, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(IPV6NetworkMaskPrefixLength)(ULONG *aIPV6NetworkMaskPrefixLength)
{
    LogRelFlow(("{%p} %s: enter aIPV6NetworkMaskPrefixLength=%p\n", this, "HostNetworkInterface::getIPV6NetworkMaskPrefixLength", aIPV6NetworkMaskPrefixLength));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIPV6NetworkMaskPrefixLength);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIPV6NetworkMaskPrefixLength(aIPV6NetworkMaskPrefixLength);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIPV6NetworkMaskPrefixLength=%RU32 hrc=%Rhrc\n", this, "HostNetworkInterface::getIPV6NetworkMaskPrefixLength", *aIPV6NetworkMaskPrefixLength, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(HardwareAddress)(BSTR *aHardwareAddress)
{
    LogRelFlow(("{%p} %s: enter aHardwareAddress=%p\n", this, "HostNetworkInterface::getHardwareAddress", aHardwareAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHardwareAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHardwareAddress(BSTROutConverter(aHardwareAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHardwareAddress=%ls hrc=%Rhrc\n", this, "HostNetworkInterface::getHardwareAddress", *aHardwareAddress, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(MediumType)(HostNetworkInterfaceMediumType_T *aMediumType)
{
    LogRelFlow(("{%p} %s: enter aMediumType=%p\n", this, "HostNetworkInterface::getMediumType", aMediumType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMediumType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMediumType(aMediumType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMediumType=%RU32 hrc=%Rhrc\n", this, "HostNetworkInterface::getMediumType", *aMediumType, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(Status)(HostNetworkInterfaceStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s: enter aStatus=%p\n", this, "HostNetworkInterface::getStatus", aStatus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStatus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStatus(aStatus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStatus=%RU32 hrc=%Rhrc\n", this, "HostNetworkInterface::getStatus", *aStatus, hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::COMGETTER(InterfaceType)(HostNetworkInterfaceType_T *aInterfaceType)
{
    LogRelFlow(("{%p} %s: enter aInterfaceType=%p\n", this, "HostNetworkInterface::getInterfaceType", aInterfaceType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInterfaceType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getInterfaceType(aInterfaceType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aInterfaceType=%RU32 hrc=%Rhrc\n", this, "HostNetworkInterface::getInterfaceType", *aInterfaceType, hrc));
    return hrc;
}

//
// IHostNetworkInterface methods
//

STDMETHODIMP HostNetworkInterfaceWrap::EnableStaticIPConfig(IN_BSTR aIPAddress,
                                                            IN_BSTR aNetworkMask)
{
    LogRelFlow(("{%p} %s:enter aIPAddress=%ls aNetworkMask=%ls\n", this, "HostNetworkInterface::enableStaticIPConfig", aIPAddress, aNetworkMask));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = enableStaticIPConfig(BSTRInConverter(aIPAddress).str(),
                                   BSTRInConverter(aNetworkMask).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostNetworkInterface::enableStaticIPConfig", hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::EnableStaticIPConfigV6(IN_BSTR aIPV6Address,
                                                              ULONG aIPV6NetworkMaskPrefixLength)
{
    LogRelFlow(("{%p} %s:enter aIPV6Address=%ls aIPV6NetworkMaskPrefixLength=%RU32\n", this, "HostNetworkInterface::enableStaticIPConfigV6", aIPV6Address, aIPV6NetworkMaskPrefixLength));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = enableStaticIPConfigV6(BSTRInConverter(aIPV6Address).str(),
                                     aIPV6NetworkMaskPrefixLength);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostNetworkInterface::enableStaticIPConfigV6", hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::EnableDynamicIPConfig()
{
    LogRelFlow(("{%p} %s:enter\n", this, "HostNetworkInterface::enableDynamicIPConfig"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = enableDynamicIPConfig();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostNetworkInterface::enableDynamicIPConfig", hrc));
    return hrc;
}

STDMETHODIMP HostNetworkInterfaceWrap::DHCPRediscover()
{
    LogRelFlow(("{%p} %s:enter\n", this, "HostNetworkInterface::DHCPRediscover"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = DHCPRediscover();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "HostNetworkInterface::DHCPRediscover", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostNetworkInterfaceWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(HostNetworkInterfaceWrap, IHostNetworkInterface)
#endif // VBOX_WITH_XPCOM
