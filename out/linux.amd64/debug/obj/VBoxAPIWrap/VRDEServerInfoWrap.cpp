/** @file
 *
 * VirtualBox API class wrapper code for IVRDEServerInfo.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_VRDESERVERINFO

#include "VRDEServerInfoWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(VRDEServerInfoWrap)

//
// IVRDEServerInfo properties
//

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(Active)(BOOL *aActive)
{
    LogRelFlow(("{%p} %s: enter aActive=%p\n", this, "VRDEServerInfo::getActive", aActive));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aActive);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getActive(aActive);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aActive=%RTbool hrc=%Rhrc\n", this, "VRDEServerInfo::getActive", *aActive, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(Port)(LONG *aPort)
{
    LogRelFlow(("{%p} %s: enter aPort=%p\n", this, "VRDEServerInfo::getPort", aPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPort(aPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPort=%RI32 hrc=%Rhrc\n", this, "VRDEServerInfo::getPort", *aPort, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(NumberOfClients)(ULONG *aNumberOfClients)
{
    LogRelFlow(("{%p} %s: enter aNumberOfClients=%p\n", this, "VRDEServerInfo::getNumberOfClients", aNumberOfClients));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNumberOfClients);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNumberOfClients(aNumberOfClients);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNumberOfClients=%RU32 hrc=%Rhrc\n", this, "VRDEServerInfo::getNumberOfClients", *aNumberOfClients, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(BeginTime)(LONG64 *aBeginTime)
{
    LogRelFlow(("{%p} %s: enter aBeginTime=%p\n", this, "VRDEServerInfo::getBeginTime", aBeginTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBeginTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBeginTime(aBeginTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBeginTime=%RI64 hrc=%Rhrc\n", this, "VRDEServerInfo::getBeginTime", *aBeginTime, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(EndTime)(LONG64 *aEndTime)
{
    LogRelFlow(("{%p} %s: enter aEndTime=%p\n", this, "VRDEServerInfo::getEndTime", aEndTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEndTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEndTime(aEndTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEndTime=%RI64 hrc=%Rhrc\n", this, "VRDEServerInfo::getEndTime", *aEndTime, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(BytesSent)(LONG64 *aBytesSent)
{
    LogRelFlow(("{%p} %s: enter aBytesSent=%p\n", this, "VRDEServerInfo::getBytesSent", aBytesSent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBytesSent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBytesSent(aBytesSent);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBytesSent=%RI64 hrc=%Rhrc\n", this, "VRDEServerInfo::getBytesSent", *aBytesSent, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(BytesSentTotal)(LONG64 *aBytesSentTotal)
{
    LogRelFlow(("{%p} %s: enter aBytesSentTotal=%p\n", this, "VRDEServerInfo::getBytesSentTotal", aBytesSentTotal));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBytesSentTotal);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBytesSentTotal(aBytesSentTotal);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBytesSentTotal=%RI64 hrc=%Rhrc\n", this, "VRDEServerInfo::getBytesSentTotal", *aBytesSentTotal, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(BytesReceived)(LONG64 *aBytesReceived)
{
    LogRelFlow(("{%p} %s: enter aBytesReceived=%p\n", this, "VRDEServerInfo::getBytesReceived", aBytesReceived));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBytesReceived);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBytesReceived(aBytesReceived);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBytesReceived=%RI64 hrc=%Rhrc\n", this, "VRDEServerInfo::getBytesReceived", *aBytesReceived, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(BytesReceivedTotal)(LONG64 *aBytesReceivedTotal)
{
    LogRelFlow(("{%p} %s: enter aBytesReceivedTotal=%p\n", this, "VRDEServerInfo::getBytesReceivedTotal", aBytesReceivedTotal));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBytesReceivedTotal);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBytesReceivedTotal(aBytesReceivedTotal);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBytesReceivedTotal=%RI64 hrc=%Rhrc\n", this, "VRDEServerInfo::getBytesReceivedTotal", *aBytesReceivedTotal, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(User)(BSTR *aUser)
{
    LogRelFlow(("{%p} %s: enter aUser=%p\n", this, "VRDEServerInfo::getUser", aUser));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUser);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUser(BSTROutConverter(aUser).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUser=%ls hrc=%Rhrc\n", this, "VRDEServerInfo::getUser", *aUser, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(Domain)(BSTR *aDomain)
{
    LogRelFlow(("{%p} %s: enter aDomain=%p\n", this, "VRDEServerInfo::getDomain", aDomain));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDomain);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDomain(BSTROutConverter(aDomain).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDomain=%ls hrc=%Rhrc\n", this, "VRDEServerInfo::getDomain", *aDomain, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(ClientName)(BSTR *aClientName)
{
    LogRelFlow(("{%p} %s: enter aClientName=%p\n", this, "VRDEServerInfo::getClientName", aClientName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aClientName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getClientName(BSTROutConverter(aClientName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aClientName=%ls hrc=%Rhrc\n", this, "VRDEServerInfo::getClientName", *aClientName, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(ClientIP)(BSTR *aClientIP)
{
    LogRelFlow(("{%p} %s: enter aClientIP=%p\n", this, "VRDEServerInfo::getClientIP", aClientIP));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aClientIP);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getClientIP(BSTROutConverter(aClientIP).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aClientIP=%ls hrc=%Rhrc\n", this, "VRDEServerInfo::getClientIP", *aClientIP, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(ClientVersion)(ULONG *aClientVersion)
{
    LogRelFlow(("{%p} %s: enter aClientVersion=%p\n", this, "VRDEServerInfo::getClientVersion", aClientVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aClientVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getClientVersion(aClientVersion);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aClientVersion=%RU32 hrc=%Rhrc\n", this, "VRDEServerInfo::getClientVersion", *aClientVersion, hrc));
    return hrc;
}

STDMETHODIMP VRDEServerInfoWrap::COMGETTER(EncryptionStyle)(ULONG *aEncryptionStyle)
{
    LogRelFlow(("{%p} %s: enter aEncryptionStyle=%p\n", this, "VRDEServerInfo::getEncryptionStyle", aEncryptionStyle));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEncryptionStyle);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEncryptionStyle(aEncryptionStyle);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEncryptionStyle=%RU32 hrc=%Rhrc\n", this, "VRDEServerInfo::getEncryptionStyle", *aEncryptionStyle, hrc));
    return hrc;
}

//
// IVRDEServerInfo methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VRDEServerInfoWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(VRDEServerInfoWrap, IVRDEServerInfo)
#endif // VBOX_WITH_XPCOM
