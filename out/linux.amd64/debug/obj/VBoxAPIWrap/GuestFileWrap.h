/** @file
 *
 * VirtualBox API class wrapper header for IGuestFile.
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

#ifndef GuestFileWrap_H_
#define GuestFileWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestFileWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestFile)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestFileWrap, IGuestFile)
    DECLARE_NOT_AGGREGATABLE(GuestFileWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestFileWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestFile)
        COM_INTERFACE_ENTRY(IFile)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestFile)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestFileWrap)

    // public IFile properties
    STDMETHOD(COMGETTER(CreationMode))(ULONG *aCreationMode);
    STDMETHOD(COMGETTER(Disposition))(BSTR *aDisposition);
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);
    STDMETHOD(COMGETTER(FileName))(BSTR *aFileName);
    STDMETHOD(COMGETTER(Id))(ULONG *aId);
    STDMETHOD(COMGETTER(InitialSize))(LONG64 *aInitialSize);
    STDMETHOD(COMGETTER(OpenMode))(BSTR *aOpenMode);
    STDMETHOD(COMGETTER(Offset))(LONG64 *aOffset);
    STDMETHOD(COMGETTER(Status))(FileStatus_T *aStatus);

    // public IGuestFile properties

    // public IFile methods
    STDMETHOD(Close)();
    STDMETHOD(QueryInfo)(IFsObjInfo **aObjInfo);
    STDMETHOD(Read)(ULONG aToRead,
                    ULONG aTimeoutMS,
                    ComSafeArrayOut(BYTE, aData));
    STDMETHOD(ReadAt)(LONG64 aOffset,
                      ULONG aToRead,
                      ULONG aTimeoutMS,
                      ComSafeArrayOut(BYTE, aData));
    STDMETHOD(Seek)(LONG64 aOffset,
                    FileSeekType_T aWhence);
    STDMETHOD(SetACL)(IN_BSTR aAcl);
    STDMETHOD(Write)(ComSafeArrayIn(BYTE, aData),
                     ULONG aTimeoutMS,
                     ULONG *aWritten);
    STDMETHOD(WriteAt)(LONG64 aOffset,
                       ComSafeArrayIn(BYTE, aData),
                       ULONG aTimeoutMS,
                       ULONG *aWritten);

    // public IGuestFile methods

private:
    // wrapped IFile properties
    virtual HRESULT getCreationMode(ULONG *aCreationMode) = 0;
    virtual HRESULT getDisposition(com::Utf8Str &aDisposition) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getFileName(com::Utf8Str &aFileName) = 0;
    virtual HRESULT getId(ULONG *aId) = 0;
    virtual HRESULT getInitialSize(LONG64 *aInitialSize) = 0;
    virtual HRESULT getOpenMode(com::Utf8Str &aOpenMode) = 0;
    virtual HRESULT getOffset(LONG64 *aOffset) = 0;
    virtual HRESULT getStatus(FileStatus_T *aStatus) = 0;

    // wrapped IGuestFile properties

    // wrapped IFile methods
    virtual HRESULT close() = 0;
    virtual HRESULT queryInfo(ComPtr<IFsObjInfo> &aObjInfo) = 0;
    virtual HRESULT read(ULONG aToRead,
                         ULONG aTimeoutMS,
                         std::vector<BYTE> &aData) = 0;
    virtual HRESULT readAt(LONG64 aOffset,
                           ULONG aToRead,
                           ULONG aTimeoutMS,
                           std::vector<BYTE> &aData) = 0;
    virtual HRESULT seek(LONG64 aOffset,
                         FileSeekType_T aWhence) = 0;
    virtual HRESULT setACL(const com::Utf8Str &aAcl) = 0;
    virtual HRESULT write(const std::vector<BYTE> &aData,
                          ULONG aTimeoutMS,
                          ULONG *aWritten) = 0;
    virtual HRESULT writeAt(LONG64 aOffset,
                            const std::vector<BYTE> &aData,
                            ULONG aTimeoutMS,
                            ULONG *aWritten) = 0;

    // wrapped IGuestFile methods
};

#endif // !GuestFileWrap_H_
