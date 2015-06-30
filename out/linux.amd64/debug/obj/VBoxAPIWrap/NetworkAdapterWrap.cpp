/** @file
 *
 * VirtualBox API class wrapper code for INetworkAdapter.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_NETWORKADAPTER

#include "NetworkAdapterWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(NetworkAdapterWrap)

//
// INetworkAdapter properties
//

STDMETHODIMP NetworkAdapterWrap::COMGETTER(AdapterType)(NetworkAdapterType_T *aAdapterType)
{
    LogRelFlow(("{%p} %s: enter aAdapterType=%p\n", this, "NetworkAdapter::getAdapterType", aAdapterType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdapterType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdapterType(aAdapterType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAdapterType=%RU32 hrc=%Rhrc\n", this, "NetworkAdapter::getAdapterType", *aAdapterType, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(AdapterType)(NetworkAdapterType_T aAdapterType)
{
    LogRelFlow(("{%p} %s: enter aAdapterType=%RU32\n", this, "NetworkAdapter::setAdapterType", aAdapterType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAdapterType(aAdapterType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setAdapterType", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(Slot)(ULONG *aSlot)
{
    LogRelFlow(("{%p} %s: enter aSlot=%p\n", this, "NetworkAdapter::getSlot", aSlot));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSlot);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSlot(aSlot);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSlot=%RU32 hrc=%Rhrc\n", this, "NetworkAdapter::getSlot", *aSlot, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(Enabled)(BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%p\n", this, "NetworkAdapter::getEnabled", aEnabled));

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

    LogRelFlow(("{%p} %s: leave *aEnabled=%RTbool hrc=%Rhrc\n", this, "NetworkAdapter::getEnabled", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(Enabled)(BOOL aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%RTbool\n", this, "NetworkAdapter::setEnabled", aEnabled));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setEnabled", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(MACAddress)(BSTR *aMACAddress)
{
    LogRelFlow(("{%p} %s: enter aMACAddress=%p\n", this, "NetworkAdapter::getMACAddress", aMACAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMACAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMACAddress(BSTROutConverter(aMACAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMACAddress=%ls hrc=%Rhrc\n", this, "NetworkAdapter::getMACAddress", *aMACAddress, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(MACAddress)(IN_BSTR aMACAddress)
{
    LogRelFlow(("{%p} %s: enter aMACAddress=%ls\n", this, "NetworkAdapter::setMACAddress", aMACAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setMACAddress(BSTRInConverter(aMACAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setMACAddress", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(AttachmentType)(NetworkAttachmentType_T *aAttachmentType)
{
    LogRelFlow(("{%p} %s: enter aAttachmentType=%p\n", this, "NetworkAdapter::getAttachmentType", aAttachmentType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAttachmentType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAttachmentType(aAttachmentType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAttachmentType=%RU32 hrc=%Rhrc\n", this, "NetworkAdapter::getAttachmentType", *aAttachmentType, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(AttachmentType)(NetworkAttachmentType_T aAttachmentType)
{
    LogRelFlow(("{%p} %s: enter aAttachmentType=%RU32\n", this, "NetworkAdapter::setAttachmentType", aAttachmentType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAttachmentType(aAttachmentType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setAttachmentType", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(BridgedInterface)(BSTR *aBridgedInterface)
{
    LogRelFlow(("{%p} %s: enter aBridgedInterface=%p\n", this, "NetworkAdapter::getBridgedInterface", aBridgedInterface));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBridgedInterface);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBridgedInterface(BSTROutConverter(aBridgedInterface).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBridgedInterface=%ls hrc=%Rhrc\n", this, "NetworkAdapter::getBridgedInterface", *aBridgedInterface, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(BridgedInterface)(IN_BSTR aBridgedInterface)
{
    LogRelFlow(("{%p} %s: enter aBridgedInterface=%ls\n", this, "NetworkAdapter::setBridgedInterface", aBridgedInterface));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setBridgedInterface(BSTRInConverter(aBridgedInterface).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setBridgedInterface", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(HostOnlyInterface)(BSTR *aHostOnlyInterface)
{
    LogRelFlow(("{%p} %s: enter aHostOnlyInterface=%p\n", this, "NetworkAdapter::getHostOnlyInterface", aHostOnlyInterface));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostOnlyInterface);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostOnlyInterface(BSTROutConverter(aHostOnlyInterface).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostOnlyInterface=%ls hrc=%Rhrc\n", this, "NetworkAdapter::getHostOnlyInterface", *aHostOnlyInterface, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(HostOnlyInterface)(IN_BSTR aHostOnlyInterface)
{
    LogRelFlow(("{%p} %s: enter aHostOnlyInterface=%ls\n", this, "NetworkAdapter::setHostOnlyInterface", aHostOnlyInterface));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setHostOnlyInterface(BSTRInConverter(aHostOnlyInterface).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setHostOnlyInterface", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(InternalNetwork)(BSTR *aInternalNetwork)
{
    LogRelFlow(("{%p} %s: enter aInternalNetwork=%p\n", this, "NetworkAdapter::getInternalNetwork", aInternalNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInternalNetwork);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getInternalNetwork(BSTROutConverter(aInternalNetwork).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aInternalNetwork=%ls hrc=%Rhrc\n", this, "NetworkAdapter::getInternalNetwork", *aInternalNetwork, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(InternalNetwork)(IN_BSTR aInternalNetwork)
{
    LogRelFlow(("{%p} %s: enter aInternalNetwork=%ls\n", this, "NetworkAdapter::setInternalNetwork", aInternalNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setInternalNetwork(BSTRInConverter(aInternalNetwork).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setInternalNetwork", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(NATNetwork)(BSTR *aNATNetwork)
{
    LogRelFlow(("{%p} %s: enter aNATNetwork=%p\n", this, "NetworkAdapter::getNATNetwork", aNATNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNATNetwork);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNATNetwork(BSTROutConverter(aNATNetwork).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNATNetwork=%ls hrc=%Rhrc\n", this, "NetworkAdapter::getNATNetwork", *aNATNetwork, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(NATNetwork)(IN_BSTR aNATNetwork)
{
    LogRelFlow(("{%p} %s: enter aNATNetwork=%ls\n", this, "NetworkAdapter::setNATNetwork", aNATNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setNATNetwork(BSTRInConverter(aNATNetwork).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setNATNetwork", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(GenericDriver)(BSTR *aGenericDriver)
{
    LogRelFlow(("{%p} %s: enter aGenericDriver=%p\n", this, "NetworkAdapter::getGenericDriver", aGenericDriver));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGenericDriver);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGenericDriver(BSTROutConverter(aGenericDriver).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGenericDriver=%ls hrc=%Rhrc\n", this, "NetworkAdapter::getGenericDriver", *aGenericDriver, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(GenericDriver)(IN_BSTR aGenericDriver)
{
    LogRelFlow(("{%p} %s: enter aGenericDriver=%ls\n", this, "NetworkAdapter::setGenericDriver", aGenericDriver));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setGenericDriver(BSTRInConverter(aGenericDriver).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setGenericDriver", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(CableConnected)(BOOL *aCableConnected)
{
    LogRelFlow(("{%p} %s: enter aCableConnected=%p\n", this, "NetworkAdapter::getCableConnected", aCableConnected));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCableConnected);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCableConnected(aCableConnected);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCableConnected=%RTbool hrc=%Rhrc\n", this, "NetworkAdapter::getCableConnected", *aCableConnected, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(CableConnected)(BOOL aCableConnected)
{
    LogRelFlow(("{%p} %s: enter aCableConnected=%RTbool\n", this, "NetworkAdapter::setCableConnected", aCableConnected));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCableConnected(aCableConnected);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setCableConnected", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(LineSpeed)(ULONG *aLineSpeed)
{
    LogRelFlow(("{%p} %s: enter aLineSpeed=%p\n", this, "NetworkAdapter::getLineSpeed", aLineSpeed));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLineSpeed);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLineSpeed(aLineSpeed);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLineSpeed=%RU32 hrc=%Rhrc\n", this, "NetworkAdapter::getLineSpeed", *aLineSpeed, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(LineSpeed)(ULONG aLineSpeed)
{
    LogRelFlow(("{%p} %s: enter aLineSpeed=%RU32\n", this, "NetworkAdapter::setLineSpeed", aLineSpeed));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLineSpeed(aLineSpeed);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setLineSpeed", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(PromiscModePolicy)(NetworkAdapterPromiscModePolicy_T *aPromiscModePolicy)
{
    LogRelFlow(("{%p} %s: enter aPromiscModePolicy=%p\n", this, "NetworkAdapter::getPromiscModePolicy", aPromiscModePolicy));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPromiscModePolicy);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPromiscModePolicy(aPromiscModePolicy);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPromiscModePolicy=%RU32 hrc=%Rhrc\n", this, "NetworkAdapter::getPromiscModePolicy", *aPromiscModePolicy, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(PromiscModePolicy)(NetworkAdapterPromiscModePolicy_T aPromiscModePolicy)
{
    LogRelFlow(("{%p} %s: enter aPromiscModePolicy=%RU32\n", this, "NetworkAdapter::setPromiscModePolicy", aPromiscModePolicy));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setPromiscModePolicy(aPromiscModePolicy);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setPromiscModePolicy", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(TraceEnabled)(BOOL *aTraceEnabled)
{
    LogRelFlow(("{%p} %s: enter aTraceEnabled=%p\n", this, "NetworkAdapter::getTraceEnabled", aTraceEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTraceEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTraceEnabled(aTraceEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTraceEnabled=%RTbool hrc=%Rhrc\n", this, "NetworkAdapter::getTraceEnabled", *aTraceEnabled, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(TraceEnabled)(BOOL aTraceEnabled)
{
    LogRelFlow(("{%p} %s: enter aTraceEnabled=%RTbool\n", this, "NetworkAdapter::setTraceEnabled", aTraceEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTraceEnabled(aTraceEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setTraceEnabled", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(TraceFile)(BSTR *aTraceFile)
{
    LogRelFlow(("{%p} %s: enter aTraceFile=%p\n", this, "NetworkAdapter::getTraceFile", aTraceFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTraceFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTraceFile(BSTROutConverter(aTraceFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTraceFile=%ls hrc=%Rhrc\n", this, "NetworkAdapter::getTraceFile", *aTraceFile, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(TraceFile)(IN_BSTR aTraceFile)
{
    LogRelFlow(("{%p} %s: enter aTraceFile=%ls\n", this, "NetworkAdapter::setTraceFile", aTraceFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTraceFile(BSTRInConverter(aTraceFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setTraceFile", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(NATEngine)(INATEngine **aNATEngine)
{
    LogRelFlow(("{%p} %s: enter aNATEngine=%p\n", this, "NetworkAdapter::getNATEngine", aNATEngine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNATEngine);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNATEngine(ComTypeOutConverter<INATEngine>(aNATEngine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNATEngine=%p hrc=%Rhrc\n", this, "NetworkAdapter::getNATEngine", *aNATEngine, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(BootPriority)(ULONG *aBootPriority)
{
    LogRelFlow(("{%p} %s: enter aBootPriority=%p\n", this, "NetworkAdapter::getBootPriority", aBootPriority));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBootPriority);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBootPriority(aBootPriority);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBootPriority=%RU32 hrc=%Rhrc\n", this, "NetworkAdapter::getBootPriority", *aBootPriority, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(BootPriority)(ULONG aBootPriority)
{
    LogRelFlow(("{%p} %s: enter aBootPriority=%RU32\n", this, "NetworkAdapter::setBootPriority", aBootPriority));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setBootPriority(aBootPriority);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setBootPriority", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMGETTER(BandwidthGroup)(IBandwidthGroup **aBandwidthGroup)
{
    LogRelFlow(("{%p} %s: enter aBandwidthGroup=%p\n", this, "NetworkAdapter::getBandwidthGroup", aBandwidthGroup));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBandwidthGroup);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBandwidthGroup(ComTypeOutConverter<IBandwidthGroup>(aBandwidthGroup).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBandwidthGroup=%p hrc=%Rhrc\n", this, "NetworkAdapter::getBandwidthGroup", *aBandwidthGroup, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::COMSETTER(BandwidthGroup)(IBandwidthGroup *aBandwidthGroup)
{
    LogRelFlow(("{%p} %s: enter aBandwidthGroup=%p\n", this, "NetworkAdapter::setBandwidthGroup", aBandwidthGroup));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setBandwidthGroup(ComTypeInConverter<IBandwidthGroup>(aBandwidthGroup).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setBandwidthGroup", hrc));
    return hrc;
}

//
// INetworkAdapter methods
//

STDMETHODIMP NetworkAdapterWrap::GetProperty(IN_BSTR aKey,
                                             BSTR *aValue)
{
    LogRelFlow(("{%p} %s:enter aKey=%ls aValue=%p\n", this, "NetworkAdapter::getProperty", aKey, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProperty(BSTRInConverter(aKey).str(),
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

    LogRelFlow(("{%p} %s: leave aValue=%ls hrc=%Rhrc\n", this, "NetworkAdapter::getProperty", *aValue, hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::SetProperty(IN_BSTR aKey,
                                             IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aKey=%ls aValue=%ls\n", this, "NetworkAdapter::setProperty", aKey, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setProperty(BSTRInConverter(aKey).str(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "NetworkAdapter::setProperty", hrc));
    return hrc;
}

STDMETHODIMP NetworkAdapterWrap::GetProperties(IN_BSTR aNames,
                                               ComSafeArrayOut(BSTR, aReturnNames),
                                               ComSafeArrayOut(BSTR, aReturnValues))
{
    LogRelFlow(("{%p} %s:enter aNames=%ls aReturnNames=%p aReturnValues=%p\n", this, "NetworkAdapter::getProperties", aNames, aReturnNames, aReturnValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReturnNames);
        CheckComArgOutPointerValidThrow(aReturnValues);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProperties(BSTRInConverter(aNames).str(),
                            ArrayBSTROutConverter(ComSafeArrayOutArg(aReturnNames)).array(),
                            ArrayBSTROutConverter(ComSafeArrayOutArg(aReturnValues)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aReturnNames=%zu aReturnValues=%zu hrc=%Rhrc\n", this, "NetworkAdapter::getProperties", ComSafeArraySize(*aReturnNames), ComSafeArraySize(*aReturnValues), hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NetworkAdapterWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(NetworkAdapterWrap, INetworkAdapter)
#endif // VBOX_WITH_XPCOM
