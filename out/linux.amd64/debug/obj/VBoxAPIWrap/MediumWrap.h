/** @file
 *
 * VirtualBox API class wrapper header for IMedium.
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

#ifndef MediumWrap_H_
#define MediumWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MediumWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IMedium)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MediumWrap, IMedium)
    DECLARE_NOT_AGGREGATABLE(MediumWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MediumWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMedium)
        COM_INTERFACE_ENTRY2(IDispatch, IMedium)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(MediumWrap)

    // public IMedium properties
    STDMETHOD(COMGETTER(Id))(BSTR *aId);
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription);
    STDMETHOD(COMSETTER(Description))(IN_BSTR aDescription);
    STDMETHOD(COMGETTER(State))(MediumState_T *aState);
    STDMETHOD(COMGETTER(Variant))(ComSafeArrayOut(MediumVariant_T, aVariant));
    STDMETHOD(COMGETTER(Location))(BSTR *aLocation);
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(DeviceType))(DeviceType_T *aDeviceType);
    STDMETHOD(COMGETTER(HostDrive))(BOOL *aHostDrive);
    STDMETHOD(COMGETTER(Size))(LONG64 *aSize);
    STDMETHOD(COMGETTER(Format))(BSTR *aFormat);
    STDMETHOD(COMGETTER(MediumFormat))(IMediumFormat **aMediumFormat);
    STDMETHOD(COMGETTER(Type))(MediumType_T *aType);
    STDMETHOD(COMSETTER(Type))(MediumType_T aType);
    STDMETHOD(COMGETTER(AllowedTypes))(ComSafeArrayOut(MediumType_T, aAllowedTypes));
    STDMETHOD(COMGETTER(Parent))(IMedium **aParent);
    STDMETHOD(COMGETTER(Children))(ComSafeArrayOut(IMedium *, aChildren));
    STDMETHOD(COMGETTER(Base))(IMedium **aBase);
    STDMETHOD(COMGETTER(ReadOnly))(BOOL *aReadOnly);
    STDMETHOD(COMGETTER(LogicalSize))(LONG64 *aLogicalSize);
    STDMETHOD(COMGETTER(AutoReset))(BOOL *aAutoReset);
    STDMETHOD(COMSETTER(AutoReset))(BOOL aAutoReset);
    STDMETHOD(COMGETTER(LastAccessError))(BSTR *aLastAccessError);
    STDMETHOD(COMGETTER(MachineIds))(ComSafeArrayOut(BSTR, aMachineIds));

    // public IMedium methods
    STDMETHOD(SetIds)(BOOL aSetImageId,
                      IN_BSTR aImageId,
                      BOOL aSetParentId,
                      IN_BSTR aParentId);
    STDMETHOD(RefreshState)(MediumState_T *aState);
    STDMETHOD(GetSnapshotIds)(IN_BSTR aMachineId,
                              ComSafeArrayOut(BSTR, aSnapshotIds));
    STDMETHOD(LockRead)(IToken **aToken);
    STDMETHOD(LockWrite)(IToken **aToken);
    STDMETHOD(Close)();
    STDMETHOD(GetProperty)(IN_BSTR aName,
                           BSTR *aValue);
    STDMETHOD(SetProperty)(IN_BSTR aName,
                           IN_BSTR aValue);
    STDMETHOD(GetProperties)(IN_BSTR aNames,
                             ComSafeArrayOut(BSTR, aReturnNames),
                             ComSafeArrayOut(BSTR, aReturnValues));
    STDMETHOD(SetProperties)(ComSafeArrayIn(IN_BSTR, aNames),
                             ComSafeArrayIn(IN_BSTR, aValues));
    STDMETHOD(CreateBaseStorage)(LONG64 aLogicalSize,
                                 ComSafeArrayIn(MediumVariant_T, aVariant),
                                 IProgress **aProgress);
    STDMETHOD(DeleteStorage)(IProgress **aProgress);
    STDMETHOD(CreateDiffStorage)(IMedium *aTarget,
                                 ComSafeArrayIn(MediumVariant_T, aVariant),
                                 IProgress **aProgress);
    STDMETHOD(MergeTo)(IMedium *aTarget,
                       IProgress **aProgress);
    STDMETHOD(CloneTo)(IMedium *aTarget,
                       ComSafeArrayIn(MediumVariant_T, aVariant),
                       IMedium *aParent,
                       IProgress **aProgress);
    STDMETHOD(CloneToBase)(IMedium *aTarget,
                           ComSafeArrayIn(MediumVariant_T, aVariant),
                           IProgress **aProgress);
    STDMETHOD(SetLocation)(IN_BSTR aLocation,
                           IProgress **aProgress);
    STDMETHOD(Compact)(IProgress **aProgress);
    STDMETHOD(Resize)(LONG64 aLogicalSize,
                      IProgress **aProgress);
    STDMETHOD(Reset)(IProgress **aProgress);

private:
    // wrapped IMedium properties
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT setDescription(const com::Utf8Str &aDescription) = 0;
    virtual HRESULT getState(MediumState_T *aState) = 0;
    virtual HRESULT getVariant(std::vector<MediumVariant_T> &aVariant) = 0;
    virtual HRESULT getLocation(com::Utf8Str &aLocation) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getDeviceType(DeviceType_T *aDeviceType) = 0;
    virtual HRESULT getHostDrive(BOOL *aHostDrive) = 0;
    virtual HRESULT getSize(LONG64 *aSize) = 0;
    virtual HRESULT getFormat(com::Utf8Str &aFormat) = 0;
    virtual HRESULT getMediumFormat(ComPtr<IMediumFormat> &aMediumFormat) = 0;
    virtual HRESULT getType(MediumType_T *aType) = 0;
    virtual HRESULT setType(MediumType_T aType) = 0;
    virtual HRESULT getAllowedTypes(std::vector<MediumType_T> &aAllowedTypes) = 0;
    virtual HRESULT getParent(ComPtr<IMedium> &aParent) = 0;
    virtual HRESULT getChildren(std::vector<ComPtr<IMedium> > &aChildren) = 0;
    virtual HRESULT getBase(ComPtr<IMedium> &aBase) = 0;
    virtual HRESULT getReadOnly(BOOL *aReadOnly) = 0;
    virtual HRESULT getLogicalSize(LONG64 *aLogicalSize) = 0;
    virtual HRESULT getAutoReset(BOOL *aAutoReset) = 0;
    virtual HRESULT setAutoReset(BOOL aAutoReset) = 0;
    virtual HRESULT getLastAccessError(com::Utf8Str &aLastAccessError) = 0;
    virtual HRESULT getMachineIds(std::vector<com::Guid> &aMachineIds) = 0;

    // wrapped IMedium methods
    virtual HRESULT setIds(BOOL aSetImageId,
                           const com::Guid &aImageId,
                           BOOL aSetParentId,
                           const com::Guid &aParentId) = 0;
    virtual HRESULT refreshState(MediumState_T *aState) = 0;
    virtual HRESULT getSnapshotIds(const com::Guid &aMachineId,
                                   std::vector<com::Guid> &aSnapshotIds) = 0;
    virtual HRESULT lockRead(ComPtr<IToken> &aToken) = 0;
    virtual HRESULT lockWrite(ComPtr<IToken> &aToken) = 0;
    virtual HRESULT close() = 0;
    virtual HRESULT getProperty(const com::Utf8Str &aName,
                                com::Utf8Str &aValue) = 0;
    virtual HRESULT setProperty(const com::Utf8Str &aName,
                                const com::Utf8Str &aValue) = 0;
    virtual HRESULT getProperties(const com::Utf8Str &aNames,
                                  std::vector<com::Utf8Str> &aReturnNames,
                                  std::vector<com::Utf8Str> &aReturnValues) = 0;
    virtual HRESULT setProperties(const std::vector<com::Utf8Str> &aNames,
                                  const std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT createBaseStorage(LONG64 aLogicalSize,
                                      const std::vector<MediumVariant_T> &aVariant,
                                      ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteStorage(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createDiffStorage(const ComPtr<IMedium> &aTarget,
                                      const std::vector<MediumVariant_T> &aVariant,
                                      ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT mergeTo(const ComPtr<IMedium> &aTarget,
                            ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cloneTo(const ComPtr<IMedium> &aTarget,
                            const std::vector<MediumVariant_T> &aVariant,
                            const ComPtr<IMedium> &aParent,
                            ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cloneToBase(const ComPtr<IMedium> &aTarget,
                                const std::vector<MediumVariant_T> &aVariant,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT setLocation(const com::Utf8Str &aLocation,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT compact(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT resize(LONG64 aLogicalSize,
                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT reset(ComPtr<IProgress> &aProgress) = 0;
};

#endif // !MediumWrap_H_
