/** @file
 *
 * VirtualBox API class wrapper header for INetworkAdapter.
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

#ifndef NetworkAdapterWrap_H_
#define NetworkAdapterWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NetworkAdapterWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(INetworkAdapter)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NetworkAdapterWrap, INetworkAdapter)
    DECLARE_NOT_AGGREGATABLE(NetworkAdapterWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NetworkAdapterWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INetworkAdapter)
        COM_INTERFACE_ENTRY2(IDispatch, INetworkAdapter)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(NetworkAdapterWrap)

    // public INetworkAdapter properties
    STDMETHOD(COMGETTER(AdapterType))(NetworkAdapterType_T *aAdapterType);
    STDMETHOD(COMSETTER(AdapterType))(NetworkAdapterType_T aAdapterType);
    STDMETHOD(COMGETTER(Slot))(ULONG *aSlot);
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled);
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled);
    STDMETHOD(COMGETTER(MACAddress))(BSTR *aMACAddress);
    STDMETHOD(COMSETTER(MACAddress))(IN_BSTR aMACAddress);
    STDMETHOD(COMGETTER(AttachmentType))(NetworkAttachmentType_T *aAttachmentType);
    STDMETHOD(COMSETTER(AttachmentType))(NetworkAttachmentType_T aAttachmentType);
    STDMETHOD(COMGETTER(BridgedInterface))(BSTR *aBridgedInterface);
    STDMETHOD(COMSETTER(BridgedInterface))(IN_BSTR aBridgedInterface);
    STDMETHOD(COMGETTER(HostOnlyInterface))(BSTR *aHostOnlyInterface);
    STDMETHOD(COMSETTER(HostOnlyInterface))(IN_BSTR aHostOnlyInterface);
    STDMETHOD(COMGETTER(InternalNetwork))(BSTR *aInternalNetwork);
    STDMETHOD(COMSETTER(InternalNetwork))(IN_BSTR aInternalNetwork);
    STDMETHOD(COMGETTER(NATNetwork))(BSTR *aNATNetwork);
    STDMETHOD(COMSETTER(NATNetwork))(IN_BSTR aNATNetwork);
    STDMETHOD(COMGETTER(GenericDriver))(BSTR *aGenericDriver);
    STDMETHOD(COMSETTER(GenericDriver))(IN_BSTR aGenericDriver);
    STDMETHOD(COMGETTER(CableConnected))(BOOL *aCableConnected);
    STDMETHOD(COMSETTER(CableConnected))(BOOL aCableConnected);
    STDMETHOD(COMGETTER(LineSpeed))(ULONG *aLineSpeed);
    STDMETHOD(COMSETTER(LineSpeed))(ULONG aLineSpeed);
    STDMETHOD(COMGETTER(PromiscModePolicy))(NetworkAdapterPromiscModePolicy_T *aPromiscModePolicy);
    STDMETHOD(COMSETTER(PromiscModePolicy))(NetworkAdapterPromiscModePolicy_T aPromiscModePolicy);
    STDMETHOD(COMGETTER(TraceEnabled))(BOOL *aTraceEnabled);
    STDMETHOD(COMSETTER(TraceEnabled))(BOOL aTraceEnabled);
    STDMETHOD(COMGETTER(TraceFile))(BSTR *aTraceFile);
    STDMETHOD(COMSETTER(TraceFile))(IN_BSTR aTraceFile);
    STDMETHOD(COMGETTER(NATEngine))(INATEngine **aNATEngine);
    STDMETHOD(COMGETTER(BootPriority))(ULONG *aBootPriority);
    STDMETHOD(COMSETTER(BootPriority))(ULONG aBootPriority);
    STDMETHOD(COMGETTER(BandwidthGroup))(IBandwidthGroup **aBandwidthGroup);
    STDMETHOD(COMSETTER(BandwidthGroup))(IBandwidthGroup *aBandwidthGroup);

    // public INetworkAdapter methods
    STDMETHOD(GetProperty)(IN_BSTR aKey,
                           BSTR *aValue);
    STDMETHOD(SetProperty)(IN_BSTR aKey,
                           IN_BSTR aValue);
    STDMETHOD(GetProperties)(IN_BSTR aNames,
                             ComSafeArrayOut(BSTR, aReturnNames),
                             ComSafeArrayOut(BSTR, aReturnValues));

private:
    // wrapped INetworkAdapter properties
    virtual HRESULT getAdapterType(NetworkAdapterType_T *aAdapterType) = 0;
    virtual HRESULT setAdapterType(NetworkAdapterType_T aAdapterType) = 0;
    virtual HRESULT getSlot(ULONG *aSlot) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getMACAddress(com::Utf8Str &aMACAddress) = 0;
    virtual HRESULT setMACAddress(const com::Utf8Str &aMACAddress) = 0;
    virtual HRESULT getAttachmentType(NetworkAttachmentType_T *aAttachmentType) = 0;
    virtual HRESULT setAttachmentType(NetworkAttachmentType_T aAttachmentType) = 0;
    virtual HRESULT getBridgedInterface(com::Utf8Str &aBridgedInterface) = 0;
    virtual HRESULT setBridgedInterface(const com::Utf8Str &aBridgedInterface) = 0;
    virtual HRESULT getHostOnlyInterface(com::Utf8Str &aHostOnlyInterface) = 0;
    virtual HRESULT setHostOnlyInterface(const com::Utf8Str &aHostOnlyInterface) = 0;
    virtual HRESULT getInternalNetwork(com::Utf8Str &aInternalNetwork) = 0;
    virtual HRESULT setInternalNetwork(const com::Utf8Str &aInternalNetwork) = 0;
    virtual HRESULT getNATNetwork(com::Utf8Str &aNATNetwork) = 0;
    virtual HRESULT setNATNetwork(const com::Utf8Str &aNATNetwork) = 0;
    virtual HRESULT getGenericDriver(com::Utf8Str &aGenericDriver) = 0;
    virtual HRESULT setGenericDriver(const com::Utf8Str &aGenericDriver) = 0;
    virtual HRESULT getCableConnected(BOOL *aCableConnected) = 0;
    virtual HRESULT setCableConnected(BOOL aCableConnected) = 0;
    virtual HRESULT getLineSpeed(ULONG *aLineSpeed) = 0;
    virtual HRESULT setLineSpeed(ULONG aLineSpeed) = 0;
    virtual HRESULT getPromiscModePolicy(NetworkAdapterPromiscModePolicy_T *aPromiscModePolicy) = 0;
    virtual HRESULT setPromiscModePolicy(NetworkAdapterPromiscModePolicy_T aPromiscModePolicy) = 0;
    virtual HRESULT getTraceEnabled(BOOL *aTraceEnabled) = 0;
    virtual HRESULT setTraceEnabled(BOOL aTraceEnabled) = 0;
    virtual HRESULT getTraceFile(com::Utf8Str &aTraceFile) = 0;
    virtual HRESULT setTraceFile(const com::Utf8Str &aTraceFile) = 0;
    virtual HRESULT getNATEngine(ComPtr<INATEngine> &aNATEngine) = 0;
    virtual HRESULT getBootPriority(ULONG *aBootPriority) = 0;
    virtual HRESULT setBootPriority(ULONG aBootPriority) = 0;
    virtual HRESULT getBandwidthGroup(ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    virtual HRESULT setBandwidthGroup(const ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;

    // wrapped INetworkAdapter methods
    virtual HRESULT getProperty(const com::Utf8Str &aKey,
                                com::Utf8Str &aValue) = 0;
    virtual HRESULT setProperty(const com::Utf8Str &aKey,
                                const com::Utf8Str &aValue) = 0;
    virtual HRESULT getProperties(const com::Utf8Str &aNames,
                                  std::vector<com::Utf8Str> &aReturnNames,
                                  std::vector<com::Utf8Str> &aReturnValues) = 0;
};

#endif // !NetworkAdapterWrap_H_
