/** @file
 *
 * VirtualBox API class wrapper header for IVRDEServerInfo.
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

#ifndef VRDEServerInfoWrap_H_
#define VRDEServerInfoWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VRDEServerInfoWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IVRDEServerInfo)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VRDEServerInfoWrap, IVRDEServerInfo)
    DECLARE_NOT_AGGREGATABLE(VRDEServerInfoWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VRDEServerInfoWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVRDEServerInfo)
        COM_INTERFACE_ENTRY2(IDispatch, IVRDEServerInfo)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(VRDEServerInfoWrap)

    // public IVRDEServerInfo properties
    STDMETHOD(COMGETTER(Active))(BOOL *aActive);
    STDMETHOD(COMGETTER(Port))(LONG *aPort);
    STDMETHOD(COMGETTER(NumberOfClients))(ULONG *aNumberOfClients);
    STDMETHOD(COMGETTER(BeginTime))(LONG64 *aBeginTime);
    STDMETHOD(COMGETTER(EndTime))(LONG64 *aEndTime);
    STDMETHOD(COMGETTER(BytesSent))(LONG64 *aBytesSent);
    STDMETHOD(COMGETTER(BytesSentTotal))(LONG64 *aBytesSentTotal);
    STDMETHOD(COMGETTER(BytesReceived))(LONG64 *aBytesReceived);
    STDMETHOD(COMGETTER(BytesReceivedTotal))(LONG64 *aBytesReceivedTotal);
    STDMETHOD(COMGETTER(User))(BSTR *aUser);
    STDMETHOD(COMGETTER(Domain))(BSTR *aDomain);
    STDMETHOD(COMGETTER(ClientName))(BSTR *aClientName);
    STDMETHOD(COMGETTER(ClientIP))(BSTR *aClientIP);
    STDMETHOD(COMGETTER(ClientVersion))(ULONG *aClientVersion);
    STDMETHOD(COMGETTER(EncryptionStyle))(ULONG *aEncryptionStyle);

    // public IVRDEServerInfo methods

private:
    // wrapped IVRDEServerInfo properties
    virtual HRESULT getActive(BOOL *aActive) = 0;
    virtual HRESULT getPort(LONG *aPort) = 0;
    virtual HRESULT getNumberOfClients(ULONG *aNumberOfClients) = 0;
    virtual HRESULT getBeginTime(LONG64 *aBeginTime) = 0;
    virtual HRESULT getEndTime(LONG64 *aEndTime) = 0;
    virtual HRESULT getBytesSent(LONG64 *aBytesSent) = 0;
    virtual HRESULT getBytesSentTotal(LONG64 *aBytesSentTotal) = 0;
    virtual HRESULT getBytesReceived(LONG64 *aBytesReceived) = 0;
    virtual HRESULT getBytesReceivedTotal(LONG64 *aBytesReceivedTotal) = 0;
    virtual HRESULT getUser(com::Utf8Str &aUser) = 0;
    virtual HRESULT getDomain(com::Utf8Str &aDomain) = 0;
    virtual HRESULT getClientName(com::Utf8Str &aClientName) = 0;
    virtual HRESULT getClientIP(com::Utf8Str &aClientIP) = 0;
    virtual HRESULT getClientVersion(ULONG *aClientVersion) = 0;
    virtual HRESULT getEncryptionStyle(ULONG *aEncryptionStyle) = 0;

    // wrapped IVRDEServerInfo methods
};

#endif // !VRDEServerInfoWrap_H_
