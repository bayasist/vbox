/** @file
 *
 * VirtualBox API class wrapper header for ISharedFolder.
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

#ifndef SharedFolderWrap_H_
#define SharedFolderWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SharedFolderWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(ISharedFolder)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SharedFolderWrap, ISharedFolder)
    DECLARE_NOT_AGGREGATABLE(SharedFolderWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SharedFolderWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISharedFolder)
        COM_INTERFACE_ENTRY2(IDispatch, ISharedFolder)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(SharedFolderWrap)

    // public ISharedFolder properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(HostPath))(BSTR *aHostPath);
    STDMETHOD(COMGETTER(Accessible))(BOOL *aAccessible);
    STDMETHOD(COMGETTER(Writable))(BOOL *aWritable);
    STDMETHOD(COMGETTER(AutoMount))(BOOL *aAutoMount);
    STDMETHOD(COMGETTER(LastAccessError))(BSTR *aLastAccessError);

    // public ISharedFolder methods

private:
    // wrapped ISharedFolder properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getHostPath(com::Utf8Str &aHostPath) = 0;
    virtual HRESULT getAccessible(BOOL *aAccessible) = 0;
    virtual HRESULT getWritable(BOOL *aWritable) = 0;
    virtual HRESULT getAutoMount(BOOL *aAutoMount) = 0;
    virtual HRESULT getLastAccessError(com::Utf8Str &aLastAccessError) = 0;

    // wrapped ISharedFolder methods
};

#endif // !SharedFolderWrap_H_
