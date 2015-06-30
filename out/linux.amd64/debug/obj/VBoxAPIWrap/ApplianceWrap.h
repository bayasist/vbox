/** @file
 *
 * VirtualBox API class wrapper header for IAppliance.
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

#ifndef ApplianceWrap_H_
#define ApplianceWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ApplianceWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IAppliance)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ApplianceWrap, IAppliance)
    DECLARE_NOT_AGGREGATABLE(ApplianceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ApplianceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IAppliance)
        COM_INTERFACE_ENTRY2(IDispatch, IAppliance)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ApplianceWrap)

    // public IAppliance properties
    STDMETHOD(COMGETTER(Path))(BSTR *aPath);
    STDMETHOD(COMGETTER(Disks))(ComSafeArrayOut(BSTR, aDisks));
    STDMETHOD(COMGETTER(VirtualSystemDescriptions))(ComSafeArrayOut(IVirtualSystemDescription *, aVirtualSystemDescriptions));
    STDMETHOD(COMGETTER(Machines))(ComSafeArrayOut(BSTR, aMachines));

    // public IAppliance methods
    STDMETHOD(Read)(IN_BSTR aFile,
                    IProgress **aProgress);
    STDMETHOD(Interpret)();
    STDMETHOD(ImportMachines)(ComSafeArrayIn(ImportOptions_T, aOptions),
                              IProgress **aProgress);
    STDMETHOD(CreateVFSExplorer)(IN_BSTR aURI,
                                 IVFSExplorer **aExplorer);
    STDMETHOD(Write)(IN_BSTR aFormat,
                     ComSafeArrayIn(ExportOptions_T, aOptions),
                     IN_BSTR aPath,
                     IProgress **aProgress);
    STDMETHOD(GetWarnings)(ComSafeArrayOut(BSTR, aWarnings));

private:
    // wrapped IAppliance properties
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT getDisks(std::vector<com::Utf8Str> &aDisks) = 0;
    virtual HRESULT getVirtualSystemDescriptions(std::vector<ComPtr<IVirtualSystemDescription> > &aVirtualSystemDescriptions) = 0;
    virtual HRESULT getMachines(std::vector<com::Utf8Str> &aMachines) = 0;

    // wrapped IAppliance methods
    virtual HRESULT read(const com::Utf8Str &aFile,
                         ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT interpret() = 0;
    virtual HRESULT importMachines(const std::vector<ImportOptions_T> &aOptions,
                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createVFSExplorer(const com::Utf8Str &aURI,
                                      ComPtr<IVFSExplorer> &aExplorer) = 0;
    virtual HRESULT write(const com::Utf8Str &aFormat,
                          const std::vector<ExportOptions_T> &aOptions,
                          const com::Utf8Str &aPath,
                          ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getWarnings(std::vector<com::Utf8Str> &aWarnings) = 0;
};

#endif // !ApplianceWrap_H_
