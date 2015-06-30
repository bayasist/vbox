/** @file
 *
 * VirtualBox API class wrapper header for IStorageController.
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

#ifndef StorageControllerWrap_H_
#define StorageControllerWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE StorageControllerWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IStorageController)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(StorageControllerWrap, IStorageController)
    DECLARE_NOT_AGGREGATABLE(StorageControllerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(StorageControllerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IStorageController)
        COM_INTERFACE_ENTRY2(IDispatch, IStorageController)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(StorageControllerWrap)

    // public IStorageController properties
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(MaxDevicesPerPortCount))(ULONG *aMaxDevicesPerPortCount);
    STDMETHOD(COMGETTER(MinPortCount))(ULONG *aMinPortCount);
    STDMETHOD(COMGETTER(MaxPortCount))(ULONG *aMaxPortCount);
    STDMETHOD(COMGETTER(Instance))(ULONG *aInstance);
    STDMETHOD(COMSETTER(Instance))(ULONG aInstance);
    STDMETHOD(COMGETTER(PortCount))(ULONG *aPortCount);
    STDMETHOD(COMSETTER(PortCount))(ULONG aPortCount);
    STDMETHOD(COMGETTER(Bus))(StorageBus_T *aBus);
    STDMETHOD(COMGETTER(ControllerType))(StorageControllerType_T *aControllerType);
    STDMETHOD(COMSETTER(ControllerType))(StorageControllerType_T aControllerType);
    STDMETHOD(COMGETTER(UseHostIOCache))(BOOL *aUseHostIOCache);
    STDMETHOD(COMSETTER(UseHostIOCache))(BOOL aUseHostIOCache);
    STDMETHOD(COMGETTER(Bootable))(BOOL *aBootable);

    // public IStorageController methods

private:
    // wrapped IStorageController properties
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getMaxDevicesPerPortCount(ULONG *aMaxDevicesPerPortCount) = 0;
    virtual HRESULT getMinPortCount(ULONG *aMinPortCount) = 0;
    virtual HRESULT getMaxPortCount(ULONG *aMaxPortCount) = 0;
    virtual HRESULT getInstance(ULONG *aInstance) = 0;
    virtual HRESULT setInstance(ULONG aInstance) = 0;
    virtual HRESULT getPortCount(ULONG *aPortCount) = 0;
    virtual HRESULT setPortCount(ULONG aPortCount) = 0;
    virtual HRESULT getBus(StorageBus_T *aBus) = 0;
    virtual HRESULT getControllerType(StorageControllerType_T *aControllerType) = 0;
    virtual HRESULT setControllerType(StorageControllerType_T aControllerType) = 0;
    virtual HRESULT getUseHostIOCache(BOOL *aUseHostIOCache) = 0;
    virtual HRESULT setUseHostIOCache(BOOL aUseHostIOCache) = 0;
    virtual HRESULT getBootable(BOOL *aBootable) = 0;

    // wrapped IStorageController methods
};

#endif // !StorageControllerWrap_H_
