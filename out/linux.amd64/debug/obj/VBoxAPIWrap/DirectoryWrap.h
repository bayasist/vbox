/** @file
 *
 * VirtualBox API class wrapper header for IDirectory.
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

#ifndef DirectoryWrap_H_
#define DirectoryWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DirectoryWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IDirectory)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DirectoryWrap, IDirectory)
    DECLARE_NOT_AGGREGATABLE(DirectoryWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DirectoryWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDirectory)
        COM_INTERFACE_ENTRY2(IDispatch, IDirectory)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(DirectoryWrap)

    // public IDirectory properties
    STDMETHOD(COMGETTER(DirectoryName))(BSTR *aDirectoryName);
    STDMETHOD(COMGETTER(Filter))(BSTR *aFilter);

    // public IDirectory methods
    STDMETHOD(Close)();
    STDMETHOD(Read)(IFsObjInfo **aObjInfo);

private:
    // wrapped IDirectory properties
    virtual HRESULT getDirectoryName(com::Utf8Str &aDirectoryName) = 0;
    virtual HRESULT getFilter(com::Utf8Str &aFilter) = 0;

    // wrapped IDirectory methods
    virtual HRESULT close() = 0;
    virtual HRESULT read(ComPtr<IFsObjInfo> &aObjInfo) = 0;
};

#endif // !DirectoryWrap_H_
