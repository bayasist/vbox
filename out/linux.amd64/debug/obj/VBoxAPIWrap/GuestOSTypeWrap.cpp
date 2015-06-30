/** @file
 *
 * VirtualBox API class wrapper code for IGuestOSType.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTOSTYPE

#include "GuestOSTypeWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestOSTypeWrap)

//
// IGuestOSType properties
//

STDMETHODIMP GuestOSTypeWrap::COMGETTER(FamilyId)(BSTR *aFamilyId)
{
    LogRelFlow(("{%p} %s: enter aFamilyId=%p\n", this, "GuestOSType::getFamilyId", aFamilyId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFamilyId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFamilyId(BSTROutConverter(aFamilyId).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFamilyId=%ls hrc=%Rhrc\n", this, "GuestOSType::getFamilyId", *aFamilyId, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(FamilyDescription)(BSTR *aFamilyDescription)
{
    LogRelFlow(("{%p} %s: enter aFamilyDescription=%p\n", this, "GuestOSType::getFamilyDescription", aFamilyDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFamilyDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFamilyDescription(BSTROutConverter(aFamilyDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFamilyDescription=%ls hrc=%Rhrc\n", this, "GuestOSType::getFamilyDescription", *aFamilyDescription, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(Id)(BSTR *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "GuestOSType::getId", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getId(BSTROutConverter(aId).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aId=%ls hrc=%Rhrc\n", this, "GuestOSType::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "GuestOSType::getDescription", aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDescription(BSTROutConverter(aDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "GuestOSType::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(Is64Bit)(BOOL *aIs64Bit)
{
    LogRelFlow(("{%p} %s: enter aIs64Bit=%p\n", this, "GuestOSType::getIs64Bit", aIs64Bit));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIs64Bit);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIs64Bit(aIs64Bit);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIs64Bit=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getIs64Bit", *aIs64Bit, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedIOAPIC)(BOOL *aRecommendedIOAPIC)
{
    LogRelFlow(("{%p} %s: enter aRecommendedIOAPIC=%p\n", this, "GuestOSType::getRecommendedIOAPIC", aRecommendedIOAPIC));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedIOAPIC);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedIOAPIC(aRecommendedIOAPIC);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedIOAPIC=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedIOAPIC", *aRecommendedIOAPIC, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedVirtEx)(BOOL *aRecommendedVirtEx)
{
    LogRelFlow(("{%p} %s: enter aRecommendedVirtEx=%p\n", this, "GuestOSType::getRecommendedVirtEx", aRecommendedVirtEx));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedVirtEx);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedVirtEx(aRecommendedVirtEx);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedVirtEx=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedVirtEx", *aRecommendedVirtEx, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedRAM)(ULONG *aRecommendedRAM)
{
    LogRelFlow(("{%p} %s: enter aRecommendedRAM=%p\n", this, "GuestOSType::getRecommendedRAM", aRecommendedRAM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedRAM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedRAM(aRecommendedRAM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedRAM=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedRAM", *aRecommendedRAM, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedVRAM)(ULONG *aRecommendedVRAM)
{
    LogRelFlow(("{%p} %s: enter aRecommendedVRAM=%p\n", this, "GuestOSType::getRecommendedVRAM", aRecommendedVRAM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedVRAM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedVRAM(aRecommendedVRAM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedVRAM=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedVRAM", *aRecommendedVRAM, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(Recommended2DVideoAcceleration)(BOOL *aRecommended2DVideoAcceleration)
{
    LogRelFlow(("{%p} %s: enter aRecommended2DVideoAcceleration=%p\n", this, "GuestOSType::getRecommended2DVideoAcceleration", aRecommended2DVideoAcceleration));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommended2DVideoAcceleration);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommended2DVideoAcceleration(aRecommended2DVideoAcceleration);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommended2DVideoAcceleration=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommended2DVideoAcceleration", *aRecommended2DVideoAcceleration, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(Recommended3DAcceleration)(BOOL *aRecommended3DAcceleration)
{
    LogRelFlow(("{%p} %s: enter aRecommended3DAcceleration=%p\n", this, "GuestOSType::getRecommended3DAcceleration", aRecommended3DAcceleration));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommended3DAcceleration);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommended3DAcceleration(aRecommended3DAcceleration);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommended3DAcceleration=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommended3DAcceleration", *aRecommended3DAcceleration, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedHDD)(LONG64 *aRecommendedHDD)
{
    LogRelFlow(("{%p} %s: enter aRecommendedHDD=%p\n", this, "GuestOSType::getRecommendedHDD", aRecommendedHDD));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedHDD);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedHDD(aRecommendedHDD);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedHDD=%RI64 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedHDD", *aRecommendedHDD, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(AdapterType)(NetworkAdapterType_T *aAdapterType)
{
    LogRelFlow(("{%p} %s: enter aAdapterType=%p\n", this, "GuestOSType::getAdapterType", aAdapterType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdapterType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdapterType(aAdapterType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAdapterType=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getAdapterType", *aAdapterType, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedPAE)(BOOL *aRecommendedPAE)
{
    LogRelFlow(("{%p} %s: enter aRecommendedPAE=%p\n", this, "GuestOSType::getRecommendedPAE", aRecommendedPAE));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedPAE);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedPAE(aRecommendedPAE);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedPAE=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedPAE", *aRecommendedPAE, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedDVDStorageController)(StorageControllerType_T *aRecommendedDVDStorageController)
{
    LogRelFlow(("{%p} %s: enter aRecommendedDVDStorageController=%p\n", this, "GuestOSType::getRecommendedDVDStorageController", aRecommendedDVDStorageController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedDVDStorageController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedDVDStorageController(aRecommendedDVDStorageController);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedDVDStorageController=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedDVDStorageController", *aRecommendedDVDStorageController, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedDVDStorageBus)(StorageBus_T *aRecommendedDVDStorageBus)
{
    LogRelFlow(("{%p} %s: enter aRecommendedDVDStorageBus=%p\n", this, "GuestOSType::getRecommendedDVDStorageBus", aRecommendedDVDStorageBus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedDVDStorageBus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedDVDStorageBus(aRecommendedDVDStorageBus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedDVDStorageBus=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedDVDStorageBus", *aRecommendedDVDStorageBus, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedHDStorageController)(StorageControllerType_T *aRecommendedHDStorageController)
{
    LogRelFlow(("{%p} %s: enter aRecommendedHDStorageController=%p\n", this, "GuestOSType::getRecommendedHDStorageController", aRecommendedHDStorageController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedHDStorageController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedHDStorageController(aRecommendedHDStorageController);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedHDStorageController=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedHDStorageController", *aRecommendedHDStorageController, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedHDStorageBus)(StorageBus_T *aRecommendedHDStorageBus)
{
    LogRelFlow(("{%p} %s: enter aRecommendedHDStorageBus=%p\n", this, "GuestOSType::getRecommendedHDStorageBus", aRecommendedHDStorageBus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedHDStorageBus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedHDStorageBus(aRecommendedHDStorageBus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedHDStorageBus=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedHDStorageBus", *aRecommendedHDStorageBus, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedFirmware)(FirmwareType_T *aRecommendedFirmware)
{
    LogRelFlow(("{%p} %s: enter aRecommendedFirmware=%p\n", this, "GuestOSType::getRecommendedFirmware", aRecommendedFirmware));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedFirmware);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedFirmware(aRecommendedFirmware);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedFirmware=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedFirmware", *aRecommendedFirmware, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedUSBHID)(BOOL *aRecommendedUSBHID)
{
    LogRelFlow(("{%p} %s: enter aRecommendedUSBHID=%p\n", this, "GuestOSType::getRecommendedUSBHID", aRecommendedUSBHID));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedUSBHID);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedUSBHID(aRecommendedUSBHID);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedUSBHID=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedUSBHID", *aRecommendedUSBHID, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedHPET)(BOOL *aRecommendedHPET)
{
    LogRelFlow(("{%p} %s: enter aRecommendedHPET=%p\n", this, "GuestOSType::getRecommendedHPET", aRecommendedHPET));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedHPET);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedHPET(aRecommendedHPET);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedHPET=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedHPET", *aRecommendedHPET, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedUSBTablet)(BOOL *aRecommendedUSBTablet)
{
    LogRelFlow(("{%p} %s: enter aRecommendedUSBTablet=%p\n", this, "GuestOSType::getRecommendedUSBTablet", aRecommendedUSBTablet));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedUSBTablet);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedUSBTablet(aRecommendedUSBTablet);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedUSBTablet=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedUSBTablet", *aRecommendedUSBTablet, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedRTCUseUTC)(BOOL *aRecommendedRTCUseUTC)
{
    LogRelFlow(("{%p} %s: enter aRecommendedRTCUseUTC=%p\n", this, "GuestOSType::getRecommendedRTCUseUTC", aRecommendedRTCUseUTC));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedRTCUseUTC);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedRTCUseUTC(aRecommendedRTCUseUTC);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedRTCUseUTC=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedRTCUseUTC", *aRecommendedRTCUseUTC, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedChipset)(ChipsetType_T *aRecommendedChipset)
{
    LogRelFlow(("{%p} %s: enter aRecommendedChipset=%p\n", this, "GuestOSType::getRecommendedChipset", aRecommendedChipset));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedChipset);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedChipset(aRecommendedChipset);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedChipset=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedChipset", *aRecommendedChipset, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedAudioController)(AudioControllerType_T *aRecommendedAudioController)
{
    LogRelFlow(("{%p} %s: enter aRecommendedAudioController=%p\n", this, "GuestOSType::getRecommendedAudioController", aRecommendedAudioController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedAudioController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedAudioController(aRecommendedAudioController);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedAudioController=%RU32 hrc=%Rhrc\n", this, "GuestOSType::getRecommendedAudioController", *aRecommendedAudioController, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedFloppy)(BOOL *aRecommendedFloppy)
{
    LogRelFlow(("{%p} %s: enter aRecommendedFloppy=%p\n", this, "GuestOSType::getRecommendedFloppy", aRecommendedFloppy));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedFloppy);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedFloppy(aRecommendedFloppy);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedFloppy=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedFloppy", *aRecommendedFloppy, hrc));
    return hrc;
}

STDMETHODIMP GuestOSTypeWrap::COMGETTER(RecommendedUSB)(BOOL *aRecommendedUSB)
{
    LogRelFlow(("{%p} %s: enter aRecommendedUSB=%p\n", this, "GuestOSType::getRecommendedUSB", aRecommendedUSB));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecommendedUSB);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecommendedUSB(aRecommendedUSB);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecommendedUSB=%RTbool hrc=%Rhrc\n", this, "GuestOSType::getRecommendedUSB", *aRecommendedUSB, hrc));
    return hrc;
}

//
// IGuestOSType methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestOSTypeWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(GuestOSTypeWrap, IGuestOSType)
#endif // VBOX_WITH_XPCOM
