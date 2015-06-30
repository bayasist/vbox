/** @file
 *
 * VirtualBox API class wrapper header for IFsObjInfo.
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

#ifndef FsObjInfoWrap_H_
#define FsObjInfoWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE FsObjInfoWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IFsObjInfo)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(FsObjInfoWrap, IFsObjInfo)
    DECLARE_NOT_AGGREGATABLE(FsObjInfoWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(FsObjInfoWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IFsObjInfo)
        COM_INTERFACE_ENTRY2(IDispatch, IFsObjInfo)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(FsObjInfoWrap)

    // public IFsObjInfo properties
    STDMETHOD(COMGETTER(AccessTime))(LONG64 *aAccessTime);
    STDMETHOD(COMGETTER(AllocatedSize))(LONG64 *aAllocatedSize);
    STDMETHOD(COMGETTER(BirthTime))(LONG64 *aBirthTime);
    STDMETHOD(COMGETTER(ChangeTime))(LONG64 *aChangeTime);
    STDMETHOD(COMGETTER(DeviceNumber))(ULONG *aDeviceNumber);
    STDMETHOD(COMGETTER(FileAttributes))(BSTR *aFileAttributes);
    STDMETHOD(COMGETTER(GenerationId))(ULONG *aGenerationId);
    STDMETHOD(COMGETTER(GID))(ULONG *aGID);
    STDMETHOD(COMGETTER(GroupName))(BSTR *aGroupName);
    STDMETHOD(COMGETTER(HardLinks))(ULONG *aHardLinks);
    STDMETHOD(COMGETTER(ModificationTime))(LONG64 *aModificationTime);
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(NodeId))(LONG64 *aNodeId);
    STDMETHOD(COMGETTER(NodeIdDevice))(ULONG *aNodeIdDevice);
    STDMETHOD(COMGETTER(ObjectSize))(LONG64 *aObjectSize);
    STDMETHOD(COMGETTER(Type))(FsObjType_T *aType);
    STDMETHOD(COMGETTER(UID))(ULONG *aUID);
    STDMETHOD(COMGETTER(UserFlags))(ULONG *aUserFlags);
    STDMETHOD(COMGETTER(UserName))(BSTR *aUserName);

    // public IFsObjInfo methods

private:
    // wrapped IFsObjInfo properties
    virtual HRESULT getAccessTime(LONG64 *aAccessTime) = 0;
    virtual HRESULT getAllocatedSize(LONG64 *aAllocatedSize) = 0;
    virtual HRESULT getBirthTime(LONG64 *aBirthTime) = 0;
    virtual HRESULT getChangeTime(LONG64 *aChangeTime) = 0;
    virtual HRESULT getDeviceNumber(ULONG *aDeviceNumber) = 0;
    virtual HRESULT getFileAttributes(com::Utf8Str &aFileAttributes) = 0;
    virtual HRESULT getGenerationId(ULONG *aGenerationId) = 0;
    virtual HRESULT getGID(ULONG *aGID) = 0;
    virtual HRESULT getGroupName(com::Utf8Str &aGroupName) = 0;
    virtual HRESULT getHardLinks(ULONG *aHardLinks) = 0;
    virtual HRESULT getModificationTime(LONG64 *aModificationTime) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getNodeId(LONG64 *aNodeId) = 0;
    virtual HRESULT getNodeIdDevice(ULONG *aNodeIdDevice) = 0;
    virtual HRESULT getObjectSize(LONG64 *aObjectSize) = 0;
    virtual HRESULT getType(FsObjType_T *aType) = 0;
    virtual HRESULT getUID(ULONG *aUID) = 0;
    virtual HRESULT getUserFlags(ULONG *aUserFlags) = 0;
    virtual HRESULT getUserName(com::Utf8Str &aUserName) = 0;

    // wrapped IFsObjInfo methods
};

#endif // !FsObjInfoWrap_H_
