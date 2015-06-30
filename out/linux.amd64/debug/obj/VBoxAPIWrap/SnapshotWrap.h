/** @file
 *
 * VirtualBox API class wrapper header for ISnapshot.
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

#ifndef SnapshotWrap_H_
#define SnapshotWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SnapshotWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(ISnapshot)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SnapshotWrap, ISnapshot)
    DECLARE_NOT_AGGREGATABLE(SnapshotWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SnapshotWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISnapshot)
        COM_INTERFACE_ENTRY2(IDispatch, ISnapshot)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(SnapshotWrap)

    // public ISnapshot properties
    STDMETHOD(COMGETTER(Id))(BSTR *aId);
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName);
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription);
    STDMETHOD(COMSETTER(Description))(IN_BSTR aDescription);
    STDMETHOD(COMGETTER(TimeStamp))(LONG64 *aTimeStamp);
    STDMETHOD(COMGETTER(Online))(BOOL *aOnline);
    STDMETHOD(COMGETTER(Machine))(IMachine **aMachine);
    STDMETHOD(COMGETTER(Parent))(ISnapshot **aParent);
    STDMETHOD(COMGETTER(Children))(ComSafeArrayOut(ISnapshot *, aChildren));

    // public ISnapshot methods
    STDMETHOD(GetChildrenCount)(ULONG *aChildrenCount);

private:
    // wrapped ISnapshot properties
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT setDescription(const com::Utf8Str &aDescription) = 0;
    virtual HRESULT getTimeStamp(LONG64 *aTimeStamp) = 0;
    virtual HRESULT getOnline(BOOL *aOnline) = 0;
    virtual HRESULT getMachine(ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getParent(ComPtr<ISnapshot> &aParent) = 0;
    virtual HRESULT getChildren(std::vector<ComPtr<ISnapshot> > &aChildren) = 0;

    // wrapped ISnapshot methods
    virtual HRESULT getChildrenCount(ULONG *aChildrenCount) = 0;
};

#endif // !SnapshotWrap_H_
