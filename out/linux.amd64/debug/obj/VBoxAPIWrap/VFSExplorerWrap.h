/** @file
 *
 * VirtualBox API class wrapper header for IVFSExplorer.
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

#ifndef VFSExplorerWrap_H_
#define VFSExplorerWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VFSExplorerWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IVFSExplorer)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VFSExplorerWrap, IVFSExplorer)
    DECLARE_NOT_AGGREGATABLE(VFSExplorerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VFSExplorerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVFSExplorer)
        COM_INTERFACE_ENTRY2(IDispatch, IVFSExplorer)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(VFSExplorerWrap)

    // public IVFSExplorer properties
    STDMETHOD(COMGETTER(Path))(BSTR *aPath);
    STDMETHOD(COMGETTER(Type))(VFSType_T *aType);

    // public IVFSExplorer methods
    STDMETHOD(Update)(IProgress **aProgress);
    STDMETHOD(Cd)(IN_BSTR aDir,
                  IProgress **aProgress);
    STDMETHOD(CdUp)(IProgress **aProgress);
    STDMETHOD(EntryList)(ComSafeArrayOut(BSTR, aNames),
                         ComSafeArrayOut(ULONG, aTypes),
                         ComSafeArrayOut(LONG64, aSizes),
                         ComSafeArrayOut(ULONG, aModes));
    STDMETHOD(Exists)(ComSafeArrayIn(IN_BSTR, aNames),
                      ComSafeArrayOut(BSTR, aExists));
    STDMETHOD(Remove)(ComSafeArrayIn(IN_BSTR, aNames),
                      IProgress **aProgress);

private:
    // wrapped IVFSExplorer properties
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT getType(VFSType_T *aType) = 0;

    // wrapped IVFSExplorer methods
    virtual HRESULT update(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cd(const com::Utf8Str &aDir,
                       ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cdUp(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT entryList(std::vector<com::Utf8Str> &aNames,
                              std::vector<ULONG> &aTypes,
                              std::vector<LONG64> &aSizes,
                              std::vector<ULONG> &aModes) = 0;
    virtual HRESULT exists(const std::vector<com::Utf8Str> &aNames,
                           std::vector<com::Utf8Str> &aExists) = 0;
    virtual HRESULT remove(const std::vector<com::Utf8Str> &aNames,
                           ComPtr<IProgress> &aProgress) = 0;
};

#endif // !VFSExplorerWrap_H_
