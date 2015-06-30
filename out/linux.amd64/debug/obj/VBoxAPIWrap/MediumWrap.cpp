/** @file
 *
 * VirtualBox API class wrapper code for IMedium.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MEDIUM

#include "MediumWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MediumWrap)

//
// IMedium properties
//

STDMETHODIMP MediumWrap::COMGETTER(Id)(BSTR *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "Medium::getId", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getId(UuidOutConverter(aId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aId=%ls hrc=%Rhrc\n", this, "Medium::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "Medium::getDescription", aDescription));

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

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "Medium::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMSETTER(Description)(IN_BSTR aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%ls\n", this, "Medium::setDescription", aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDescription(BSTRInConverter(aDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Medium::setDescription", hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(State)(MediumState_T *aState)
{
    LogRelFlow(("{%p} %s: enter aState=%p\n", this, "Medium::getState", aState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aState);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getState(aState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aState=%RU32 hrc=%Rhrc\n", this, "Medium::getState", *aState, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Variant)(ComSafeArrayOut(MediumVariant_T, aVariant))
{
    LogRelFlow(("{%p} %s: enter aVariant=%p\n", this, "Medium::getVariant", aVariant));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVariant);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVariant(ArrayOutConverter<MediumVariant_T>(ComSafeArrayOutArg(aVariant)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVariant=%zu hrc=%Rhrc\n", this, "Medium::getVariant", ComSafeArraySize(*aVariant), hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Location)(BSTR *aLocation)
{
    LogRelFlow(("{%p} %s: enter aLocation=%p\n", this, "Medium::getLocation", aLocation));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLocation);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLocation(BSTROutConverter(aLocation).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLocation=%ls hrc=%Rhrc\n", this, "Medium::getLocation", *aLocation, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "Medium::getName", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getName(BSTROutConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "Medium::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(DeviceType)(DeviceType_T *aDeviceType)
{
    LogRelFlow(("{%p} %s: enter aDeviceType=%p\n", this, "Medium::getDeviceType", aDeviceType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDeviceType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDeviceType(aDeviceType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDeviceType=%RU32 hrc=%Rhrc\n", this, "Medium::getDeviceType", *aDeviceType, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(HostDrive)(BOOL *aHostDrive)
{
    LogRelFlow(("{%p} %s: enter aHostDrive=%p\n", this, "Medium::getHostDrive", aHostDrive));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostDrive);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostDrive(aHostDrive);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostDrive=%RTbool hrc=%Rhrc\n", this, "Medium::getHostDrive", *aHostDrive, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Size)(LONG64 *aSize)
{
    LogRelFlow(("{%p} %s: enter aSize=%p\n", this, "Medium::getSize", aSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSize(aSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSize=%RI64 hrc=%Rhrc\n", this, "Medium::getSize", *aSize, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Format)(BSTR *aFormat)
{
    LogRelFlow(("{%p} %s: enter aFormat=%p\n", this, "Medium::getFormat", aFormat));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFormat);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFormat(BSTROutConverter(aFormat).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFormat=%ls hrc=%Rhrc\n", this, "Medium::getFormat", *aFormat, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(MediumFormat)(IMediumFormat **aMediumFormat)
{
    LogRelFlow(("{%p} %s: enter aMediumFormat=%p\n", this, "Medium::getMediumFormat", aMediumFormat));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMediumFormat);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMediumFormat(ComTypeOutConverter<IMediumFormat>(aMediumFormat).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMediumFormat=%p hrc=%Rhrc\n", this, "Medium::getMediumFormat", *aMediumFormat, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Type)(MediumType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "Medium::getType", aType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getType(aType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "Medium::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMSETTER(Type)(MediumType_T aType)
{
    LogRelFlow(("{%p} %s: enter aType=%RU32\n", this, "Medium::setType", aType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setType(aType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Medium::setType", hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(AllowedTypes)(ComSafeArrayOut(MediumType_T, aAllowedTypes))
{
    LogRelFlow(("{%p} %s: enter aAllowedTypes=%p\n", this, "Medium::getAllowedTypes", aAllowedTypes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAllowedTypes);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAllowedTypes(ArrayOutConverter<MediumType_T>(ComSafeArrayOutArg(aAllowedTypes)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAllowedTypes=%zu hrc=%Rhrc\n", this, "Medium::getAllowedTypes", ComSafeArraySize(*aAllowedTypes), hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Parent)(IMedium **aParent)
{
    LogRelFlow(("{%p} %s: enter aParent=%p\n", this, "Medium::getParent", aParent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aParent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getParent(ComTypeOutConverter<IMedium>(aParent).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aParent=%p hrc=%Rhrc\n", this, "Medium::getParent", *aParent, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Children)(ComSafeArrayOut(IMedium *, aChildren))
{
    LogRelFlow(("{%p} %s: enter aChildren=%p\n", this, "Medium::getChildren", aChildren));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aChildren);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getChildren(ArrayComTypeOutConverter<IMedium>(ComSafeArrayOutArg(aChildren)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aChildren=%zu hrc=%Rhrc\n", this, "Medium::getChildren", ComSafeArraySize(*aChildren), hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(Base)(IMedium **aBase)
{
    LogRelFlow(("{%p} %s: enter aBase=%p\n", this, "Medium::getBase", aBase));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBase);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBase(ComTypeOutConverter<IMedium>(aBase).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBase=%p hrc=%Rhrc\n", this, "Medium::getBase", *aBase, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(ReadOnly)(BOOL *aReadOnly)
{
    LogRelFlow(("{%p} %s: enter aReadOnly=%p\n", this, "Medium::getReadOnly", aReadOnly));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReadOnly);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getReadOnly(aReadOnly);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aReadOnly=%RTbool hrc=%Rhrc\n", this, "Medium::getReadOnly", *aReadOnly, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(LogicalSize)(LONG64 *aLogicalSize)
{
    LogRelFlow(("{%p} %s: enter aLogicalSize=%p\n", this, "Medium::getLogicalSize", aLogicalSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogicalSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogicalSize(aLogicalSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogicalSize=%RI64 hrc=%Rhrc\n", this, "Medium::getLogicalSize", *aLogicalSize, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(AutoReset)(BOOL *aAutoReset)
{
    LogRelFlow(("{%p} %s: enter aAutoReset=%p\n", this, "Medium::getAutoReset", aAutoReset));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAutoReset);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAutoReset(aAutoReset);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAutoReset=%RTbool hrc=%Rhrc\n", this, "Medium::getAutoReset", *aAutoReset, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMSETTER(AutoReset)(BOOL aAutoReset)
{
    LogRelFlow(("{%p} %s: enter aAutoReset=%RTbool\n", this, "Medium::setAutoReset", aAutoReset));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAutoReset(aAutoReset);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Medium::setAutoReset", hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(LastAccessError)(BSTR *aLastAccessError)
{
    LogRelFlow(("{%p} %s: enter aLastAccessError=%p\n", this, "Medium::getLastAccessError", aLastAccessError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLastAccessError);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLastAccessError(BSTROutConverter(aLastAccessError).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLastAccessError=%ls hrc=%Rhrc\n", this, "Medium::getLastAccessError", *aLastAccessError, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::COMGETTER(MachineIds)(ComSafeArrayOut(BSTR, aMachineIds))
{
    LogRelFlow(("{%p} %s: enter aMachineIds=%p\n", this, "Medium::getMachineIds", aMachineIds));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachineIds);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachineIds(ArrayUuidOutConverter(ComSafeArrayOutArg(aMachineIds)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachineIds=%zu hrc=%Rhrc\n", this, "Medium::getMachineIds", ComSafeArraySize(*aMachineIds), hrc));
    return hrc;
}

//
// IMedium methods
//

STDMETHODIMP MediumWrap::SetIds(BOOL aSetImageId,
                                IN_BSTR aImageId,
                                BOOL aSetParentId,
                                IN_BSTR aParentId)
{
    LogRelFlow(("{%p} %s:enter aSetImageId=%RTbool aImageId=%ls aSetParentId=%RTbool aParentId=%ls\n", this, "Medium::setIds", aSetImageId, aImageId, aSetParentId, aParentId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIds(aSetImageId,
                     UuidInConverter(aImageId).uuid(),
                     aSetParentId,
                     UuidInConverter(aParentId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Medium::setIds", hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::RefreshState(MediumState_T *aState)
{
    LogRelFlow(("{%p} %s:enter aState=%p\n", this, "Medium::refreshState", aState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aState);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = refreshState(aState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aState=%RU32 hrc=%Rhrc\n", this, "Medium::refreshState", *aState, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::GetSnapshotIds(IN_BSTR aMachineId,
                                        ComSafeArrayOut(BSTR, aSnapshotIds))
{
    LogRelFlow(("{%p} %s:enter aMachineId=%ls aSnapshotIds=%p\n", this, "Medium::getSnapshotIds", aMachineId, aSnapshotIds));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSnapshotIds);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSnapshotIds(UuidInConverter(aMachineId).uuid(),
                             ArrayUuidOutConverter(ComSafeArrayOutArg(aSnapshotIds)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aSnapshotIds=%zu hrc=%Rhrc\n", this, "Medium::getSnapshotIds", ComSafeArraySize(*aSnapshotIds), hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::LockRead(IToken **aToken)
{
    LogRelFlow(("{%p} %s:enter aToken=%p\n", this, "Medium::lockRead", aToken));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aToken);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = lockRead(ComTypeOutConverter<IToken>(aToken).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aToken=%p hrc=%Rhrc\n", this, "Medium::lockRead", *aToken, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::LockWrite(IToken **aToken)
{
    LogRelFlow(("{%p} %s:enter aToken=%p\n", this, "Medium::lockWrite", aToken));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aToken);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = lockWrite(ComTypeOutConverter<IToken>(aToken).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aToken=%p hrc=%Rhrc\n", this, "Medium::lockWrite", *aToken, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::Close()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Medium::close"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = close();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Medium::close", hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::GetProperty(IN_BSTR aName,
                                     BSTR *aValue)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aValue=%p\n", this, "Medium::getProperty", aName, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProperty(BSTRInConverter(aName).str(),
                          BSTROutConverter(aValue).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aValue=%ls hrc=%Rhrc\n", this, "Medium::getProperty", *aValue, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::SetProperty(IN_BSTR aName,
                                     IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aValue=%ls\n", this, "Medium::setProperty", aName, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setProperty(BSTRInConverter(aName).str(),
                          BSTRInConverter(aValue).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Medium::setProperty", hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::GetProperties(IN_BSTR aNames,
                                       ComSafeArrayOut(BSTR, aReturnNames),
                                       ComSafeArrayOut(BSTR, aReturnValues))
{
    LogRelFlow(("{%p} %s:enter aNames=%ls aReturnNames=%p aReturnValues=%p\n", this, "Medium::getProperties", aNames, aReturnNames, aReturnValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReturnNames);
        CheckComArgOutPointerValidThrow(aReturnValues);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProperties(BSTRInConverter(aNames).str(),
                            ArrayBSTROutConverter(ComSafeArrayOutArg(aReturnNames)).array(),
                            ArrayBSTROutConverter(ComSafeArrayOutArg(aReturnValues)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aReturnNames=%zu aReturnValues=%zu hrc=%Rhrc\n", this, "Medium::getProperties", ComSafeArraySize(*aReturnNames), ComSafeArraySize(*aReturnValues), hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::SetProperties(ComSafeArrayIn(IN_BSTR, aNames),
                                       ComSafeArrayIn(IN_BSTR, aValues))
{
    LogRelFlow(("{%p} %s:enter aNames=%zu aValues=%zu\n", this, "Medium::setProperties", aNames, aValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setProperties(ArrayBSTRInConverter(ComSafeArrayInArg(aNames)).array(),
                            ArrayBSTRInConverter(ComSafeArrayInArg(aValues)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Medium::setProperties", hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::CreateBaseStorage(LONG64 aLogicalSize,
                                           ComSafeArrayIn(MediumVariant_T, aVariant),
                                           IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aLogicalSize=%RI64 aVariant=%zu aProgress=%p\n", this, "Medium::createBaseStorage", aLogicalSize, aVariant, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createBaseStorage(aLogicalSize,
                                ArrayInConverter<MediumVariant_T>(ComSafeArrayInArg(aVariant)).array(),
                                ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::createBaseStorage", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::DeleteStorage(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "Medium::deleteStorage", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = deleteStorage(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::deleteStorage", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::CreateDiffStorage(IMedium *aTarget,
                                           ComSafeArrayIn(MediumVariant_T, aVariant),
                                           IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aTarget=%p aVariant=%zu aProgress=%p\n", this, "Medium::createDiffStorage", aTarget, aVariant, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createDiffStorage(ComTypeInConverter<IMedium>(aTarget).ptr(),
                                ArrayInConverter<MediumVariant_T>(ComSafeArrayInArg(aVariant)).array(),
                                ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::createDiffStorage", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::MergeTo(IMedium *aTarget,
                                 IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aTarget=%p aProgress=%p\n", this, "Medium::mergeTo", aTarget, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = mergeTo(ComTypeInConverter<IMedium>(aTarget).ptr(),
                      ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::mergeTo", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::CloneTo(IMedium *aTarget,
                                 ComSafeArrayIn(MediumVariant_T, aVariant),
                                 IMedium *aParent,
                                 IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aTarget=%p aVariant=%zu aParent=%p aProgress=%p\n", this, "Medium::cloneTo", aTarget, aVariant, aParent, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = cloneTo(ComTypeInConverter<IMedium>(aTarget).ptr(),
                      ArrayInConverter<MediumVariant_T>(ComSafeArrayInArg(aVariant)).array(),
                      ComTypeInConverter<IMedium>(aParent).ptr(),
                      ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::cloneTo", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::CloneToBase(IMedium *aTarget,
                                     ComSafeArrayIn(MediumVariant_T, aVariant),
                                     IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aTarget=%p aVariant=%zu aProgress=%p\n", this, "Medium::cloneToBase", aTarget, aVariant, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = cloneToBase(ComTypeInConverter<IMedium>(aTarget).ptr(),
                          ArrayInConverter<MediumVariant_T>(ComSafeArrayInArg(aVariant)).array(),
                          ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::cloneToBase", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::SetLocation(IN_BSTR aLocation,
                                     IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aLocation=%ls aProgress=%p\n", this, "Medium::setLocation", aLocation, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLocation(BSTRInConverter(aLocation).str(),
                          ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::setLocation", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::Compact(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "Medium::compact", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = compact(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::compact", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::Resize(LONG64 aLogicalSize,
                                IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aLogicalSize=%RI64 aProgress=%p\n", this, "Medium::resize", aLogicalSize, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = resize(aLogicalSize,
                     ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::resize", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MediumWrap::Reset(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "Medium::reset", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = reset(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Medium::reset", *aProgress, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MediumWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(MediumWrap, IMedium)
#endif // VBOX_WITH_XPCOM
