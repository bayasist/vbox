/** @file
 *
 * VirtualBox API class wrapper header for IGuestOSType.
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

#ifndef GuestOSTypeWrap_H_
#define GuestOSTypeWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestOSTypeWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestOSType)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestOSTypeWrap, IGuestOSType)
    DECLARE_NOT_AGGREGATABLE(GuestOSTypeWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestOSTypeWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestOSType)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestOSType)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestOSTypeWrap)

    // public IGuestOSType properties
    STDMETHOD(COMGETTER(FamilyId))(BSTR *aFamilyId);
    STDMETHOD(COMGETTER(FamilyDescription))(BSTR *aFamilyDescription);
    STDMETHOD(COMGETTER(Id))(BSTR *aId);
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription);
    STDMETHOD(COMGETTER(Is64Bit))(BOOL *aIs64Bit);
    STDMETHOD(COMGETTER(RecommendedIOAPIC))(BOOL *aRecommendedIOAPIC);
    STDMETHOD(COMGETTER(RecommendedVirtEx))(BOOL *aRecommendedVirtEx);
    STDMETHOD(COMGETTER(RecommendedRAM))(ULONG *aRecommendedRAM);
    STDMETHOD(COMGETTER(RecommendedVRAM))(ULONG *aRecommendedVRAM);
    STDMETHOD(COMGETTER(Recommended2DVideoAcceleration))(BOOL *aRecommended2DVideoAcceleration);
    STDMETHOD(COMGETTER(Recommended3DAcceleration))(BOOL *aRecommended3DAcceleration);
    STDMETHOD(COMGETTER(RecommendedHDD))(LONG64 *aRecommendedHDD);
    STDMETHOD(COMGETTER(AdapterType))(NetworkAdapterType_T *aAdapterType);
    STDMETHOD(COMGETTER(RecommendedPAE))(BOOL *aRecommendedPAE);
    STDMETHOD(COMGETTER(RecommendedDVDStorageController))(StorageControllerType_T *aRecommendedDVDStorageController);
    STDMETHOD(COMGETTER(RecommendedDVDStorageBus))(StorageBus_T *aRecommendedDVDStorageBus);
    STDMETHOD(COMGETTER(RecommendedHDStorageController))(StorageControllerType_T *aRecommendedHDStorageController);
    STDMETHOD(COMGETTER(RecommendedHDStorageBus))(StorageBus_T *aRecommendedHDStorageBus);
    STDMETHOD(COMGETTER(RecommendedFirmware))(FirmwareType_T *aRecommendedFirmware);
    STDMETHOD(COMGETTER(RecommendedUSBHID))(BOOL *aRecommendedUSBHID);
    STDMETHOD(COMGETTER(RecommendedHPET))(BOOL *aRecommendedHPET);
    STDMETHOD(COMGETTER(RecommendedUSBTablet))(BOOL *aRecommendedUSBTablet);
    STDMETHOD(COMGETTER(RecommendedRTCUseUTC))(BOOL *aRecommendedRTCUseUTC);
    STDMETHOD(COMGETTER(RecommendedChipset))(ChipsetType_T *aRecommendedChipset);
    STDMETHOD(COMGETTER(RecommendedAudioController))(AudioControllerType_T *aRecommendedAudioController);
    STDMETHOD(COMGETTER(RecommendedFloppy))(BOOL *aRecommendedFloppy);
    STDMETHOD(COMGETTER(RecommendedUSB))(BOOL *aRecommendedUSB);

    // public IGuestOSType methods

private:
    // wrapped IGuestOSType properties
    virtual HRESULT getFamilyId(com::Utf8Str &aFamilyId) = 0;
    virtual HRESULT getFamilyDescription(com::Utf8Str &aFamilyDescription) = 0;
    virtual HRESULT getId(com::Utf8Str &aId) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getIs64Bit(BOOL *aIs64Bit) = 0;
    virtual HRESULT getRecommendedIOAPIC(BOOL *aRecommendedIOAPIC) = 0;
    virtual HRESULT getRecommendedVirtEx(BOOL *aRecommendedVirtEx) = 0;
    virtual HRESULT getRecommendedRAM(ULONG *aRecommendedRAM) = 0;
    virtual HRESULT getRecommendedVRAM(ULONG *aRecommendedVRAM) = 0;
    virtual HRESULT getRecommended2DVideoAcceleration(BOOL *aRecommended2DVideoAcceleration) = 0;
    virtual HRESULT getRecommended3DAcceleration(BOOL *aRecommended3DAcceleration) = 0;
    virtual HRESULT getRecommendedHDD(LONG64 *aRecommendedHDD) = 0;
    virtual HRESULT getAdapterType(NetworkAdapterType_T *aAdapterType) = 0;
    virtual HRESULT getRecommendedPAE(BOOL *aRecommendedPAE) = 0;
    virtual HRESULT getRecommendedDVDStorageController(StorageControllerType_T *aRecommendedDVDStorageController) = 0;
    virtual HRESULT getRecommendedDVDStorageBus(StorageBus_T *aRecommendedDVDStorageBus) = 0;
    virtual HRESULT getRecommendedHDStorageController(StorageControllerType_T *aRecommendedHDStorageController) = 0;
    virtual HRESULT getRecommendedHDStorageBus(StorageBus_T *aRecommendedHDStorageBus) = 0;
    virtual HRESULT getRecommendedFirmware(FirmwareType_T *aRecommendedFirmware) = 0;
    virtual HRESULT getRecommendedUSBHID(BOOL *aRecommendedUSBHID) = 0;
    virtual HRESULT getRecommendedHPET(BOOL *aRecommendedHPET) = 0;
    virtual HRESULT getRecommendedUSBTablet(BOOL *aRecommendedUSBTablet) = 0;
    virtual HRESULT getRecommendedRTCUseUTC(BOOL *aRecommendedRTCUseUTC) = 0;
    virtual HRESULT getRecommendedChipset(ChipsetType_T *aRecommendedChipset) = 0;
    virtual HRESULT getRecommendedAudioController(AudioControllerType_T *aRecommendedAudioController) = 0;
    virtual HRESULT getRecommendedFloppy(BOOL *aRecommendedFloppy) = 0;
    virtual HRESULT getRecommendedUSB(BOOL *aRecommendedUSB) = 0;

    // wrapped IGuestOSType methods
};

#endif // !GuestOSTypeWrap_H_
