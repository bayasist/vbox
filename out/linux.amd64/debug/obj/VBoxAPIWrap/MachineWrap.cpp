/** @file
 *
 * VirtualBox API class wrapper code for IMachine.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MACHINE

#include "MachineWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MachineWrap)

//
// IMachine properties
//

STDMETHODIMP MachineWrap::COMGETTER(Parent)(IVirtualBox **aParent)
{
    LogRelFlow(("{%p} %s: enter aParent=%p\n", this, "Machine::getParent", aParent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aParent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getParent(ComTypeOutConverter<IVirtualBox>(aParent).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aParent=%p hrc=%Rhrc\n", this, "Machine::getParent", *aParent, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(Icon)(ComSafeArrayOut(BYTE, aIcon))
{
    LogRelFlow(("{%p} %s: enter aIcon=%p\n", this, "Machine::getIcon", aIcon));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIcon);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIcon(ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aIcon)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIcon=%zu hrc=%Rhrc\n", this, "Machine::getIcon", ComSafeArraySize(*aIcon), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(Icon)(ComSafeArrayIn(BYTE, aIcon))
{
    LogRelFlow(("{%p} %s: enter aIcon=%zu\n", this, "Machine::setIcon", ComSafeArraySize(aIcon)));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIcon(ArrayInConverter<BYTE>(ComSafeArrayInArg(aIcon)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setIcon", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(Accessible)(BOOL *aAccessible)
{
    LogRelFlow(("{%p} %s: enter aAccessible=%p\n", this, "Machine::getAccessible", aAccessible));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAccessible);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAccessible(aAccessible);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAccessible=%RTbool hrc=%Rhrc\n", this, "Machine::getAccessible", *aAccessible, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(AccessError)(IVirtualBoxErrorInfo **aAccessError)
{
    LogRelFlow(("{%p} %s: enter aAccessError=%p\n", this, "Machine::getAccessError", aAccessError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAccessError);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAccessError(ComTypeOutConverter<IVirtualBoxErrorInfo>(aAccessError).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAccessError=%p hrc=%Rhrc\n", this, "Machine::getAccessError", *aAccessError, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "Machine::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "Machine::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(Name)(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s: enter aName=%ls\n", this, "Machine::setName", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setName(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setName", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "Machine::getDescription", aDescription));

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

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "Machine::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(Description)(IN_BSTR aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%ls\n", this, "Machine::setDescription", aDescription));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setDescription", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(Id)(BSTR *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "Machine::getId", aId));

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

    LogRelFlow(("{%p} %s: leave *aId=%ls hrc=%Rhrc\n", this, "Machine::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(Groups)(ComSafeArrayOut(BSTR, aGroups))
{
    LogRelFlow(("{%p} %s: enter aGroups=%p\n", this, "Machine::getGroups", aGroups));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGroups);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGroups(ArrayBSTROutConverter(ComSafeArrayOutArg(aGroups)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGroups=%zu hrc=%Rhrc\n", this, "Machine::getGroups", ComSafeArraySize(*aGroups), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(Groups)(ComSafeArrayIn(IN_BSTR, aGroups))
{
    LogRelFlow(("{%p} %s: enter aGroups=%zu\n", this, "Machine::setGroups", ComSafeArraySize(aGroups)));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setGroups(ArrayBSTRInConverter(ComSafeArrayInArg(aGroups)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setGroups", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(OSTypeId)(BSTR *aOSTypeId)
{
    LogRelFlow(("{%p} %s: enter aOSTypeId=%p\n", this, "Machine::getOSTypeId", aOSTypeId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOSTypeId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOSTypeId(BSTROutConverter(aOSTypeId).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOSTypeId=%ls hrc=%Rhrc\n", this, "Machine::getOSTypeId", *aOSTypeId, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(OSTypeId)(IN_BSTR aOSTypeId)
{
    LogRelFlow(("{%p} %s: enter aOSTypeId=%ls\n", this, "Machine::setOSTypeId", aOSTypeId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setOSTypeId(BSTRInConverter(aOSTypeId).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setOSTypeId", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(HardwareVersion)(BSTR *aHardwareVersion)
{
    LogRelFlow(("{%p} %s: enter aHardwareVersion=%p\n", this, "Machine::getHardwareVersion", aHardwareVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHardwareVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHardwareVersion(BSTROutConverter(aHardwareVersion).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHardwareVersion=%ls hrc=%Rhrc\n", this, "Machine::getHardwareVersion", *aHardwareVersion, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(HardwareVersion)(IN_BSTR aHardwareVersion)
{
    LogRelFlow(("{%p} %s: enter aHardwareVersion=%ls\n", this, "Machine::setHardwareVersion", aHardwareVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setHardwareVersion(BSTRInConverter(aHardwareVersion).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setHardwareVersion", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(HardwareUUID)(BSTR *aHardwareUUID)
{
    LogRelFlow(("{%p} %s: enter aHardwareUUID=%p\n", this, "Machine::getHardwareUUID", aHardwareUUID));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHardwareUUID);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHardwareUUID(UuidOutConverter(aHardwareUUID).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHardwareUUID=%ls hrc=%Rhrc\n", this, "Machine::getHardwareUUID", *aHardwareUUID, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(HardwareUUID)(IN_BSTR aHardwareUUID)
{
    LogRelFlow(("{%p} %s: enter aHardwareUUID=%ls\n", this, "Machine::setHardwareUUID", aHardwareUUID));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setHardwareUUID(UuidInConverter(aHardwareUUID).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setHardwareUUID", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(CPUCount)(ULONG *aCPUCount)
{
    LogRelFlow(("{%p} %s: enter aCPUCount=%p\n", this, "Machine::getCPUCount", aCPUCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCPUCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCPUCount(aCPUCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCPUCount=%RU32 hrc=%Rhrc\n", this, "Machine::getCPUCount", *aCPUCount, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(CPUCount)(ULONG aCPUCount)
{
    LogRelFlow(("{%p} %s: enter aCPUCount=%RU32\n", this, "Machine::setCPUCount", aCPUCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCPUCount(aCPUCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setCPUCount", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(CPUHotPlugEnabled)(BOOL *aCPUHotPlugEnabled)
{
    LogRelFlow(("{%p} %s: enter aCPUHotPlugEnabled=%p\n", this, "Machine::getCPUHotPlugEnabled", aCPUHotPlugEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCPUHotPlugEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCPUHotPlugEnabled(aCPUHotPlugEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCPUHotPlugEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getCPUHotPlugEnabled", *aCPUHotPlugEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(CPUHotPlugEnabled)(BOOL aCPUHotPlugEnabled)
{
    LogRelFlow(("{%p} %s: enter aCPUHotPlugEnabled=%RTbool\n", this, "Machine::setCPUHotPlugEnabled", aCPUHotPlugEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCPUHotPlugEnabled(aCPUHotPlugEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setCPUHotPlugEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(CPUExecutionCap)(ULONG *aCPUExecutionCap)
{
    LogRelFlow(("{%p} %s: enter aCPUExecutionCap=%p\n", this, "Machine::getCPUExecutionCap", aCPUExecutionCap));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCPUExecutionCap);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCPUExecutionCap(aCPUExecutionCap);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCPUExecutionCap=%RU32 hrc=%Rhrc\n", this, "Machine::getCPUExecutionCap", *aCPUExecutionCap, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(CPUExecutionCap)(ULONG aCPUExecutionCap)
{
    LogRelFlow(("{%p} %s: enter aCPUExecutionCap=%RU32\n", this, "Machine::setCPUExecutionCap", aCPUExecutionCap));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCPUExecutionCap(aCPUExecutionCap);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setCPUExecutionCap", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(MemorySize)(ULONG *aMemorySize)
{
    LogRelFlow(("{%p} %s: enter aMemorySize=%p\n", this, "Machine::getMemorySize", aMemorySize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMemorySize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMemorySize(aMemorySize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMemorySize=%RU32 hrc=%Rhrc\n", this, "Machine::getMemorySize", *aMemorySize, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(MemorySize)(ULONG aMemorySize)
{
    LogRelFlow(("{%p} %s: enter aMemorySize=%RU32\n", this, "Machine::setMemorySize", aMemorySize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setMemorySize(aMemorySize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setMemorySize", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(MemoryBalloonSize)(ULONG *aMemoryBalloonSize)
{
    LogRelFlow(("{%p} %s: enter aMemoryBalloonSize=%p\n", this, "Machine::getMemoryBalloonSize", aMemoryBalloonSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMemoryBalloonSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMemoryBalloonSize(aMemoryBalloonSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMemoryBalloonSize=%RU32 hrc=%Rhrc\n", this, "Machine::getMemoryBalloonSize", *aMemoryBalloonSize, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(MemoryBalloonSize)(ULONG aMemoryBalloonSize)
{
    LogRelFlow(("{%p} %s: enter aMemoryBalloonSize=%RU32\n", this, "Machine::setMemoryBalloonSize", aMemoryBalloonSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setMemoryBalloonSize(aMemoryBalloonSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setMemoryBalloonSize", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(PageFusionEnabled)(BOOL *aPageFusionEnabled)
{
    LogRelFlow(("{%p} %s: enter aPageFusionEnabled=%p\n", this, "Machine::getPageFusionEnabled", aPageFusionEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPageFusionEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPageFusionEnabled(aPageFusionEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPageFusionEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getPageFusionEnabled", *aPageFusionEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(PageFusionEnabled)(BOOL aPageFusionEnabled)
{
    LogRelFlow(("{%p} %s: enter aPageFusionEnabled=%RTbool\n", this, "Machine::setPageFusionEnabled", aPageFusionEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setPageFusionEnabled(aPageFusionEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setPageFusionEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(GraphicsControllerType)(GraphicsControllerType_T *aGraphicsControllerType)
{
    LogRelFlow(("{%p} %s: enter aGraphicsControllerType=%p\n", this, "Machine::getGraphicsControllerType", aGraphicsControllerType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGraphicsControllerType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGraphicsControllerType(aGraphicsControllerType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGraphicsControllerType=%RU32 hrc=%Rhrc\n", this, "Machine::getGraphicsControllerType", *aGraphicsControllerType, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(GraphicsControllerType)(GraphicsControllerType_T aGraphicsControllerType)
{
    LogRelFlow(("{%p} %s: enter aGraphicsControllerType=%RU32\n", this, "Machine::setGraphicsControllerType", aGraphicsControllerType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setGraphicsControllerType(aGraphicsControllerType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setGraphicsControllerType", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VRAMSize)(ULONG *aVRAMSize)
{
    LogRelFlow(("{%p} %s: enter aVRAMSize=%p\n", this, "Machine::getVRAMSize", aVRAMSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVRAMSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVRAMSize(aVRAMSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVRAMSize=%RU32 hrc=%Rhrc\n", this, "Machine::getVRAMSize", *aVRAMSize, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(VRAMSize)(ULONG aVRAMSize)
{
    LogRelFlow(("{%p} %s: enter aVRAMSize=%RU32\n", this, "Machine::setVRAMSize", aVRAMSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVRAMSize(aVRAMSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setVRAMSize", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(Accelerate3DEnabled)(BOOL *aAccelerate3DEnabled)
{
    LogRelFlow(("{%p} %s: enter aAccelerate3DEnabled=%p\n", this, "Machine::getAccelerate3DEnabled", aAccelerate3DEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAccelerate3DEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAccelerate3DEnabled(aAccelerate3DEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAccelerate3DEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getAccelerate3DEnabled", *aAccelerate3DEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(Accelerate3DEnabled)(BOOL aAccelerate3DEnabled)
{
    LogRelFlow(("{%p} %s: enter aAccelerate3DEnabled=%RTbool\n", this, "Machine::setAccelerate3DEnabled", aAccelerate3DEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAccelerate3DEnabled(aAccelerate3DEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setAccelerate3DEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(Accelerate2DVideoEnabled)(BOOL *aAccelerate2DVideoEnabled)
{
    LogRelFlow(("{%p} %s: enter aAccelerate2DVideoEnabled=%p\n", this, "Machine::getAccelerate2DVideoEnabled", aAccelerate2DVideoEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAccelerate2DVideoEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAccelerate2DVideoEnabled(aAccelerate2DVideoEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAccelerate2DVideoEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getAccelerate2DVideoEnabled", *aAccelerate2DVideoEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(Accelerate2DVideoEnabled)(BOOL aAccelerate2DVideoEnabled)
{
    LogRelFlow(("{%p} %s: enter aAccelerate2DVideoEnabled=%RTbool\n", this, "Machine::setAccelerate2DVideoEnabled", aAccelerate2DVideoEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAccelerate2DVideoEnabled(aAccelerate2DVideoEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setAccelerate2DVideoEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(MonitorCount)(ULONG *aMonitorCount)
{
    LogRelFlow(("{%p} %s: enter aMonitorCount=%p\n", this, "Machine::getMonitorCount", aMonitorCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMonitorCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMonitorCount(aMonitorCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMonitorCount=%RU32 hrc=%Rhrc\n", this, "Machine::getMonitorCount", *aMonitorCount, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(MonitorCount)(ULONG aMonitorCount)
{
    LogRelFlow(("{%p} %s: enter aMonitorCount=%RU32\n", this, "Machine::setMonitorCount", aMonitorCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setMonitorCount(aMonitorCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setMonitorCount", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VideoCaptureEnabled)(BOOL *aVideoCaptureEnabled)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureEnabled=%p\n", this, "Machine::getVideoCaptureEnabled", aVideoCaptureEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVideoCaptureEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVideoCaptureEnabled(aVideoCaptureEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVideoCaptureEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getVideoCaptureEnabled", *aVideoCaptureEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(VideoCaptureEnabled)(BOOL aVideoCaptureEnabled)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureEnabled=%RTbool\n", this, "Machine::setVideoCaptureEnabled", aVideoCaptureEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVideoCaptureEnabled(aVideoCaptureEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setVideoCaptureEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VideoCaptureScreens)(ComSafeArrayOut(BOOL, aVideoCaptureScreens))
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureScreens=%p\n", this, "Machine::getVideoCaptureScreens", aVideoCaptureScreens));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVideoCaptureScreens);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVideoCaptureScreens(ArrayOutConverter<BOOL>(ComSafeArrayOutArg(aVideoCaptureScreens)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVideoCaptureScreens=%zu hrc=%Rhrc\n", this, "Machine::getVideoCaptureScreens", ComSafeArraySize(*aVideoCaptureScreens), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(VideoCaptureScreens)(ComSafeArrayIn(BOOL, aVideoCaptureScreens))
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureScreens=%zu\n", this, "Machine::setVideoCaptureScreens", ComSafeArraySize(aVideoCaptureScreens)));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVideoCaptureScreens(ArrayInConverter<BOOL>(ComSafeArrayInArg(aVideoCaptureScreens)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setVideoCaptureScreens", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VideoCaptureFile)(BSTR *aVideoCaptureFile)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureFile=%p\n", this, "Machine::getVideoCaptureFile", aVideoCaptureFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVideoCaptureFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVideoCaptureFile(BSTROutConverter(aVideoCaptureFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVideoCaptureFile=%ls hrc=%Rhrc\n", this, "Machine::getVideoCaptureFile", *aVideoCaptureFile, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(VideoCaptureFile)(IN_BSTR aVideoCaptureFile)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureFile=%ls\n", this, "Machine::setVideoCaptureFile", aVideoCaptureFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVideoCaptureFile(BSTRInConverter(aVideoCaptureFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setVideoCaptureFile", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VideoCaptureWidth)(ULONG *aVideoCaptureWidth)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureWidth=%p\n", this, "Machine::getVideoCaptureWidth", aVideoCaptureWidth));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVideoCaptureWidth);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVideoCaptureWidth(aVideoCaptureWidth);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVideoCaptureWidth=%RU32 hrc=%Rhrc\n", this, "Machine::getVideoCaptureWidth", *aVideoCaptureWidth, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(VideoCaptureWidth)(ULONG aVideoCaptureWidth)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureWidth=%RU32\n", this, "Machine::setVideoCaptureWidth", aVideoCaptureWidth));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVideoCaptureWidth(aVideoCaptureWidth);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setVideoCaptureWidth", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VideoCaptureHeight)(ULONG *aVideoCaptureHeight)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureHeight=%p\n", this, "Machine::getVideoCaptureHeight", aVideoCaptureHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVideoCaptureHeight);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVideoCaptureHeight(aVideoCaptureHeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVideoCaptureHeight=%RU32 hrc=%Rhrc\n", this, "Machine::getVideoCaptureHeight", *aVideoCaptureHeight, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(VideoCaptureHeight)(ULONG aVideoCaptureHeight)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureHeight=%RU32\n", this, "Machine::setVideoCaptureHeight", aVideoCaptureHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVideoCaptureHeight(aVideoCaptureHeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setVideoCaptureHeight", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VideoCaptureRate)(ULONG *aVideoCaptureRate)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureRate=%p\n", this, "Machine::getVideoCaptureRate", aVideoCaptureRate));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVideoCaptureRate);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVideoCaptureRate(aVideoCaptureRate);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVideoCaptureRate=%RU32 hrc=%Rhrc\n", this, "Machine::getVideoCaptureRate", *aVideoCaptureRate, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(VideoCaptureRate)(ULONG aVideoCaptureRate)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureRate=%RU32\n", this, "Machine::setVideoCaptureRate", aVideoCaptureRate));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVideoCaptureRate(aVideoCaptureRate);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setVideoCaptureRate", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VideoCaptureFPS)(ULONG *aVideoCaptureFPS)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureFPS=%p\n", this, "Machine::getVideoCaptureFPS", aVideoCaptureFPS));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVideoCaptureFPS);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVideoCaptureFPS(aVideoCaptureFPS);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVideoCaptureFPS=%RU32 hrc=%Rhrc\n", this, "Machine::getVideoCaptureFPS", *aVideoCaptureFPS, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(VideoCaptureFPS)(ULONG aVideoCaptureFPS)
{
    LogRelFlow(("{%p} %s: enter aVideoCaptureFPS=%RU32\n", this, "Machine::setVideoCaptureFPS", aVideoCaptureFPS));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVideoCaptureFPS(aVideoCaptureFPS);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setVideoCaptureFPS", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(BIOSSettings)(IBIOSSettings **aBIOSSettings)
{
    LogRelFlow(("{%p} %s: enter aBIOSSettings=%p\n", this, "Machine::getBIOSSettings", aBIOSSettings));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBIOSSettings);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBIOSSettings(ComTypeOutConverter<IBIOSSettings>(aBIOSSettings).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBIOSSettings=%p hrc=%Rhrc\n", this, "Machine::getBIOSSettings", *aBIOSSettings, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(FirmwareType)(FirmwareType_T *aFirmwareType)
{
    LogRelFlow(("{%p} %s: enter aFirmwareType=%p\n", this, "Machine::getFirmwareType", aFirmwareType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFirmwareType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFirmwareType(aFirmwareType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFirmwareType=%RU32 hrc=%Rhrc\n", this, "Machine::getFirmwareType", *aFirmwareType, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(FirmwareType)(FirmwareType_T aFirmwareType)
{
    LogRelFlow(("{%p} %s: enter aFirmwareType=%RU32\n", this, "Machine::setFirmwareType", aFirmwareType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFirmwareType(aFirmwareType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setFirmwareType", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(PointingHIDType)(PointingHIDType_T *aPointingHIDType)
{
    LogRelFlow(("{%p} %s: enter aPointingHIDType=%p\n", this, "Machine::getPointingHIDType", aPointingHIDType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPointingHIDType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPointingHIDType(aPointingHIDType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPointingHIDType=%RU32 hrc=%Rhrc\n", this, "Machine::getPointingHIDType", *aPointingHIDType, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(PointingHIDType)(PointingHIDType_T aPointingHIDType)
{
    LogRelFlow(("{%p} %s: enter aPointingHIDType=%RU32\n", this, "Machine::setPointingHIDType", aPointingHIDType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setPointingHIDType(aPointingHIDType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setPointingHIDType", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(KeyboardHIDType)(KeyboardHIDType_T *aKeyboardHIDType)
{
    LogRelFlow(("{%p} %s: enter aKeyboardHIDType=%p\n", this, "Machine::getKeyboardHIDType", aKeyboardHIDType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aKeyboardHIDType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getKeyboardHIDType(aKeyboardHIDType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aKeyboardHIDType=%RU32 hrc=%Rhrc\n", this, "Machine::getKeyboardHIDType", *aKeyboardHIDType, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(KeyboardHIDType)(KeyboardHIDType_T aKeyboardHIDType)
{
    LogRelFlow(("{%p} %s: enter aKeyboardHIDType=%RU32\n", this, "Machine::setKeyboardHIDType", aKeyboardHIDType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setKeyboardHIDType(aKeyboardHIDType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setKeyboardHIDType", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(HPETEnabled)(BOOL *aHPETEnabled)
{
    LogRelFlow(("{%p} %s: enter aHPETEnabled=%p\n", this, "Machine::getHPETEnabled", aHPETEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHPETEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHPETEnabled(aHPETEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHPETEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getHPETEnabled", *aHPETEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(HPETEnabled)(BOOL aHPETEnabled)
{
    LogRelFlow(("{%p} %s: enter aHPETEnabled=%RTbool\n", this, "Machine::setHPETEnabled", aHPETEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setHPETEnabled(aHPETEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setHPETEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(ChipsetType)(ChipsetType_T *aChipsetType)
{
    LogRelFlow(("{%p} %s: enter aChipsetType=%p\n", this, "Machine::getChipsetType", aChipsetType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aChipsetType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getChipsetType(aChipsetType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aChipsetType=%RU32 hrc=%Rhrc\n", this, "Machine::getChipsetType", *aChipsetType, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(ChipsetType)(ChipsetType_T aChipsetType)
{
    LogRelFlow(("{%p} %s: enter aChipsetType=%RU32\n", this, "Machine::setChipsetType", aChipsetType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setChipsetType(aChipsetType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setChipsetType", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(SnapshotFolder)(BSTR *aSnapshotFolder)
{
    LogRelFlow(("{%p} %s: enter aSnapshotFolder=%p\n", this, "Machine::getSnapshotFolder", aSnapshotFolder));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSnapshotFolder);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSnapshotFolder(BSTROutConverter(aSnapshotFolder).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSnapshotFolder=%ls hrc=%Rhrc\n", this, "Machine::getSnapshotFolder", *aSnapshotFolder, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(SnapshotFolder)(IN_BSTR aSnapshotFolder)
{
    LogRelFlow(("{%p} %s: enter aSnapshotFolder=%ls\n", this, "Machine::setSnapshotFolder", aSnapshotFolder));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setSnapshotFolder(BSTRInConverter(aSnapshotFolder).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setSnapshotFolder", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(VRDEServer)(IVRDEServer **aVRDEServer)
{
    LogRelFlow(("{%p} %s: enter aVRDEServer=%p\n", this, "Machine::getVRDEServer", aVRDEServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVRDEServer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVRDEServer(ComTypeOutConverter<IVRDEServer>(aVRDEServer).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVRDEServer=%p hrc=%Rhrc\n", this, "Machine::getVRDEServer", *aVRDEServer, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(EmulatedUSBCardReaderEnabled)(BOOL *aEmulatedUSBCardReaderEnabled)
{
    LogRelFlow(("{%p} %s: enter aEmulatedUSBCardReaderEnabled=%p\n", this, "Machine::getEmulatedUSBCardReaderEnabled", aEmulatedUSBCardReaderEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEmulatedUSBCardReaderEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEmulatedUSBCardReaderEnabled(aEmulatedUSBCardReaderEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEmulatedUSBCardReaderEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getEmulatedUSBCardReaderEnabled", *aEmulatedUSBCardReaderEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(EmulatedUSBCardReaderEnabled)(BOOL aEmulatedUSBCardReaderEnabled)
{
    LogRelFlow(("{%p} %s: enter aEmulatedUSBCardReaderEnabled=%RTbool\n", this, "Machine::setEmulatedUSBCardReaderEnabled", aEmulatedUSBCardReaderEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setEmulatedUSBCardReaderEnabled(aEmulatedUSBCardReaderEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setEmulatedUSBCardReaderEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(MediumAttachments)(ComSafeArrayOut(IMediumAttachment *, aMediumAttachments))
{
    LogRelFlow(("{%p} %s: enter aMediumAttachments=%p\n", this, "Machine::getMediumAttachments", aMediumAttachments));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMediumAttachments);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMediumAttachments(ArrayComTypeOutConverter<IMediumAttachment>(ComSafeArrayOutArg(aMediumAttachments)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMediumAttachments=%zu hrc=%Rhrc\n", this, "Machine::getMediumAttachments", ComSafeArraySize(*aMediumAttachments), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(USBControllers)(ComSafeArrayOut(IUSBController *, aUSBControllers))
{
    LogRelFlow(("{%p} %s: enter aUSBControllers=%p\n", this, "Machine::getUSBControllers", aUSBControllers));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUSBControllers);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBControllers(ArrayComTypeOutConverter<IUSBController>(ComSafeArrayOutArg(aUSBControllers)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUSBControllers=%zu hrc=%Rhrc\n", this, "Machine::getUSBControllers", ComSafeArraySize(*aUSBControllers), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(USBDeviceFilters)(IUSBDeviceFilters **aUSBDeviceFilters)
{
    LogRelFlow(("{%p} %s: enter aUSBDeviceFilters=%p\n", this, "Machine::getUSBDeviceFilters", aUSBDeviceFilters));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUSBDeviceFilters);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBDeviceFilters(ComTypeOutConverter<IUSBDeviceFilters>(aUSBDeviceFilters).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUSBDeviceFilters=%p hrc=%Rhrc\n", this, "Machine::getUSBDeviceFilters", *aUSBDeviceFilters, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(AudioAdapter)(IAudioAdapter **aAudioAdapter)
{
    LogRelFlow(("{%p} %s: enter aAudioAdapter=%p\n", this, "Machine::getAudioAdapter", aAudioAdapter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAudioAdapter);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAudioAdapter(ComTypeOutConverter<IAudioAdapter>(aAudioAdapter).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAudioAdapter=%p hrc=%Rhrc\n", this, "Machine::getAudioAdapter", *aAudioAdapter, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(StorageControllers)(ComSafeArrayOut(IStorageController *, aStorageControllers))
{
    LogRelFlow(("{%p} %s: enter aStorageControllers=%p\n", this, "Machine::getStorageControllers", aStorageControllers));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStorageControllers);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStorageControllers(ArrayComTypeOutConverter<IStorageController>(ComSafeArrayOutArg(aStorageControllers)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStorageControllers=%zu hrc=%Rhrc\n", this, "Machine::getStorageControllers", ComSafeArraySize(*aStorageControllers), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(SettingsFilePath)(BSTR *aSettingsFilePath)
{
    LogRelFlow(("{%p} %s: enter aSettingsFilePath=%p\n", this, "Machine::getSettingsFilePath", aSettingsFilePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSettingsFilePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSettingsFilePath(BSTROutConverter(aSettingsFilePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSettingsFilePath=%ls hrc=%Rhrc\n", this, "Machine::getSettingsFilePath", *aSettingsFilePath, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(SettingsModified)(BOOL *aSettingsModified)
{
    LogRelFlow(("{%p} %s: enter aSettingsModified=%p\n", this, "Machine::getSettingsModified", aSettingsModified));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSettingsModified);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSettingsModified(aSettingsModified);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSettingsModified=%RTbool hrc=%Rhrc\n", this, "Machine::getSettingsModified", *aSettingsModified, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(SessionState)(SessionState_T *aSessionState)
{
    LogRelFlow(("{%p} %s: enter aSessionState=%p\n", this, "Machine::getSessionState", aSessionState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSessionState);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSessionState(aSessionState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSessionState=%RU32 hrc=%Rhrc\n", this, "Machine::getSessionState", *aSessionState, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(SessionType)(BSTR *aSessionType)
{
    LogRelFlow(("{%p} %s: enter aSessionType=%p\n", this, "Machine::getSessionType", aSessionType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSessionType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSessionType(BSTROutConverter(aSessionType).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSessionType=%ls hrc=%Rhrc\n", this, "Machine::getSessionType", *aSessionType, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(SessionPID)(ULONG *aSessionPID)
{
    LogRelFlow(("{%p} %s: enter aSessionPID=%p\n", this, "Machine::getSessionPID", aSessionPID));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSessionPID);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSessionPID(aSessionPID);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSessionPID=%RU32 hrc=%Rhrc\n", this, "Machine::getSessionPID", *aSessionPID, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(State)(MachineState_T *aState)
{
    LogRelFlow(("{%p} %s: enter aState=%p\n", this, "Machine::getState", aState));

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

    LogRelFlow(("{%p} %s: leave *aState=%RU32 hrc=%Rhrc\n", this, "Machine::getState", *aState, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(LastStateChange)(LONG64 *aLastStateChange)
{
    LogRelFlow(("{%p} %s: enter aLastStateChange=%p\n", this, "Machine::getLastStateChange", aLastStateChange));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLastStateChange);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLastStateChange(aLastStateChange);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLastStateChange=%RI64 hrc=%Rhrc\n", this, "Machine::getLastStateChange", *aLastStateChange, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(StateFilePath)(BSTR *aStateFilePath)
{
    LogRelFlow(("{%p} %s: enter aStateFilePath=%p\n", this, "Machine::getStateFilePath", aStateFilePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStateFilePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStateFilePath(BSTROutConverter(aStateFilePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStateFilePath=%ls hrc=%Rhrc\n", this, "Machine::getStateFilePath", *aStateFilePath, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(LogFolder)(BSTR *aLogFolder)
{
    LogRelFlow(("{%p} %s: enter aLogFolder=%p\n", this, "Machine::getLogFolder", aLogFolder));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogFolder);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogFolder(BSTROutConverter(aLogFolder).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogFolder=%ls hrc=%Rhrc\n", this, "Machine::getLogFolder", *aLogFolder, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(CurrentSnapshot)(ISnapshot **aCurrentSnapshot)
{
    LogRelFlow(("{%p} %s: enter aCurrentSnapshot=%p\n", this, "Machine::getCurrentSnapshot", aCurrentSnapshot));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCurrentSnapshot);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCurrentSnapshot(ComTypeOutConverter<ISnapshot>(aCurrentSnapshot).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCurrentSnapshot=%p hrc=%Rhrc\n", this, "Machine::getCurrentSnapshot", *aCurrentSnapshot, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(SnapshotCount)(ULONG *aSnapshotCount)
{
    LogRelFlow(("{%p} %s: enter aSnapshotCount=%p\n", this, "Machine::getSnapshotCount", aSnapshotCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSnapshotCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSnapshotCount(aSnapshotCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSnapshotCount=%RU32 hrc=%Rhrc\n", this, "Machine::getSnapshotCount", *aSnapshotCount, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(CurrentStateModified)(BOOL *aCurrentStateModified)
{
    LogRelFlow(("{%p} %s: enter aCurrentStateModified=%p\n", this, "Machine::getCurrentStateModified", aCurrentStateModified));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCurrentStateModified);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCurrentStateModified(aCurrentStateModified);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCurrentStateModified=%RTbool hrc=%Rhrc\n", this, "Machine::getCurrentStateModified", *aCurrentStateModified, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(SharedFolders)(ComSafeArrayOut(ISharedFolder *, aSharedFolders))
{
    LogRelFlow(("{%p} %s: enter aSharedFolders=%p\n", this, "Machine::getSharedFolders", aSharedFolders));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSharedFolders);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSharedFolders(ArrayComTypeOutConverter<ISharedFolder>(ComSafeArrayOutArg(aSharedFolders)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSharedFolders=%zu hrc=%Rhrc\n", this, "Machine::getSharedFolders", ComSafeArraySize(*aSharedFolders), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(ClipboardMode)(ClipboardMode_T *aClipboardMode)
{
    LogRelFlow(("{%p} %s: enter aClipboardMode=%p\n", this, "Machine::getClipboardMode", aClipboardMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aClipboardMode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getClipboardMode(aClipboardMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aClipboardMode=%RU32 hrc=%Rhrc\n", this, "Machine::getClipboardMode", *aClipboardMode, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(ClipboardMode)(ClipboardMode_T aClipboardMode)
{
    LogRelFlow(("{%p} %s: enter aClipboardMode=%RU32\n", this, "Machine::setClipboardMode", aClipboardMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setClipboardMode(aClipboardMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setClipboardMode", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(DragAndDropMode)(DragAndDropMode_T *aDragAndDropMode)
{
    LogRelFlow(("{%p} %s: enter aDragAndDropMode=%p\n", this, "Machine::getDragAndDropMode", aDragAndDropMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDragAndDropMode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDragAndDropMode(aDragAndDropMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDragAndDropMode=%RU32 hrc=%Rhrc\n", this, "Machine::getDragAndDropMode", *aDragAndDropMode, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(DragAndDropMode)(DragAndDropMode_T aDragAndDropMode)
{
    LogRelFlow(("{%p} %s: enter aDragAndDropMode=%RU32\n", this, "Machine::setDragAndDropMode", aDragAndDropMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDragAndDropMode(aDragAndDropMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setDragAndDropMode", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(GuestPropertyNotificationPatterns)(BSTR *aGuestPropertyNotificationPatterns)
{
    LogRelFlow(("{%p} %s: enter aGuestPropertyNotificationPatterns=%p\n", this, "Machine::getGuestPropertyNotificationPatterns", aGuestPropertyNotificationPatterns));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestPropertyNotificationPatterns);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestPropertyNotificationPatterns(BSTROutConverter(aGuestPropertyNotificationPatterns).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGuestPropertyNotificationPatterns=%ls hrc=%Rhrc\n", this, "Machine::getGuestPropertyNotificationPatterns", *aGuestPropertyNotificationPatterns, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(GuestPropertyNotificationPatterns)(IN_BSTR aGuestPropertyNotificationPatterns)
{
    LogRelFlow(("{%p} %s: enter aGuestPropertyNotificationPatterns=%ls\n", this, "Machine::setGuestPropertyNotificationPatterns", aGuestPropertyNotificationPatterns));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setGuestPropertyNotificationPatterns(BSTRInConverter(aGuestPropertyNotificationPatterns).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setGuestPropertyNotificationPatterns", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(TeleporterEnabled)(BOOL *aTeleporterEnabled)
{
    LogRelFlow(("{%p} %s: enter aTeleporterEnabled=%p\n", this, "Machine::getTeleporterEnabled", aTeleporterEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTeleporterEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTeleporterEnabled(aTeleporterEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTeleporterEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getTeleporterEnabled", *aTeleporterEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(TeleporterEnabled)(BOOL aTeleporterEnabled)
{
    LogRelFlow(("{%p} %s: enter aTeleporterEnabled=%RTbool\n", this, "Machine::setTeleporterEnabled", aTeleporterEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTeleporterEnabled(aTeleporterEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setTeleporterEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(TeleporterPort)(ULONG *aTeleporterPort)
{
    LogRelFlow(("{%p} %s: enter aTeleporterPort=%p\n", this, "Machine::getTeleporterPort", aTeleporterPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTeleporterPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTeleporterPort(aTeleporterPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTeleporterPort=%RU32 hrc=%Rhrc\n", this, "Machine::getTeleporterPort", *aTeleporterPort, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(TeleporterPort)(ULONG aTeleporterPort)
{
    LogRelFlow(("{%p} %s: enter aTeleporterPort=%RU32\n", this, "Machine::setTeleporterPort", aTeleporterPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTeleporterPort(aTeleporterPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setTeleporterPort", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(TeleporterAddress)(BSTR *aTeleporterAddress)
{
    LogRelFlow(("{%p} %s: enter aTeleporterAddress=%p\n", this, "Machine::getTeleporterAddress", aTeleporterAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTeleporterAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTeleporterAddress(BSTROutConverter(aTeleporterAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTeleporterAddress=%ls hrc=%Rhrc\n", this, "Machine::getTeleporterAddress", *aTeleporterAddress, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(TeleporterAddress)(IN_BSTR aTeleporterAddress)
{
    LogRelFlow(("{%p} %s: enter aTeleporterAddress=%ls\n", this, "Machine::setTeleporterAddress", aTeleporterAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTeleporterAddress(BSTRInConverter(aTeleporterAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setTeleporterAddress", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(TeleporterPassword)(BSTR *aTeleporterPassword)
{
    LogRelFlow(("{%p} %s: enter aTeleporterPassword=%p\n", this, "Machine::getTeleporterPassword", aTeleporterPassword));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTeleporterPassword);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTeleporterPassword(BSTROutConverter(aTeleporterPassword).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTeleporterPassword=%ls hrc=%Rhrc\n", this, "Machine::getTeleporterPassword", *aTeleporterPassword, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(TeleporterPassword)(IN_BSTR aTeleporterPassword)
{
    LogRelFlow(("{%p} %s: enter aTeleporterPassword=%ls\n", this, "Machine::setTeleporterPassword", aTeleporterPassword));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTeleporterPassword(BSTRInConverter(aTeleporterPassword).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setTeleporterPassword", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(FaultToleranceState)(FaultToleranceState_T *aFaultToleranceState)
{
    LogRelFlow(("{%p} %s: enter aFaultToleranceState=%p\n", this, "Machine::getFaultToleranceState", aFaultToleranceState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFaultToleranceState);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFaultToleranceState(aFaultToleranceState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFaultToleranceState=%RU32 hrc=%Rhrc\n", this, "Machine::getFaultToleranceState", *aFaultToleranceState, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(FaultToleranceState)(FaultToleranceState_T aFaultToleranceState)
{
    LogRelFlow(("{%p} %s: enter aFaultToleranceState=%RU32\n", this, "Machine::setFaultToleranceState", aFaultToleranceState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFaultToleranceState(aFaultToleranceState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setFaultToleranceState", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(FaultTolerancePort)(ULONG *aFaultTolerancePort)
{
    LogRelFlow(("{%p} %s: enter aFaultTolerancePort=%p\n", this, "Machine::getFaultTolerancePort", aFaultTolerancePort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFaultTolerancePort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFaultTolerancePort(aFaultTolerancePort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFaultTolerancePort=%RU32 hrc=%Rhrc\n", this, "Machine::getFaultTolerancePort", *aFaultTolerancePort, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(FaultTolerancePort)(ULONG aFaultTolerancePort)
{
    LogRelFlow(("{%p} %s: enter aFaultTolerancePort=%RU32\n", this, "Machine::setFaultTolerancePort", aFaultTolerancePort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFaultTolerancePort(aFaultTolerancePort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setFaultTolerancePort", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(FaultToleranceAddress)(BSTR *aFaultToleranceAddress)
{
    LogRelFlow(("{%p} %s: enter aFaultToleranceAddress=%p\n", this, "Machine::getFaultToleranceAddress", aFaultToleranceAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFaultToleranceAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFaultToleranceAddress(BSTROutConverter(aFaultToleranceAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFaultToleranceAddress=%ls hrc=%Rhrc\n", this, "Machine::getFaultToleranceAddress", *aFaultToleranceAddress, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(FaultToleranceAddress)(IN_BSTR aFaultToleranceAddress)
{
    LogRelFlow(("{%p} %s: enter aFaultToleranceAddress=%ls\n", this, "Machine::setFaultToleranceAddress", aFaultToleranceAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFaultToleranceAddress(BSTRInConverter(aFaultToleranceAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setFaultToleranceAddress", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(FaultTolerancePassword)(BSTR *aFaultTolerancePassword)
{
    LogRelFlow(("{%p} %s: enter aFaultTolerancePassword=%p\n", this, "Machine::getFaultTolerancePassword", aFaultTolerancePassword));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFaultTolerancePassword);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFaultTolerancePassword(BSTROutConverter(aFaultTolerancePassword).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFaultTolerancePassword=%ls hrc=%Rhrc\n", this, "Machine::getFaultTolerancePassword", *aFaultTolerancePassword, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(FaultTolerancePassword)(IN_BSTR aFaultTolerancePassword)
{
    LogRelFlow(("{%p} %s: enter aFaultTolerancePassword=%ls\n", this, "Machine::setFaultTolerancePassword", aFaultTolerancePassword));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFaultTolerancePassword(BSTRInConverter(aFaultTolerancePassword).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setFaultTolerancePassword", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(FaultToleranceSyncInterval)(ULONG *aFaultToleranceSyncInterval)
{
    LogRelFlow(("{%p} %s: enter aFaultToleranceSyncInterval=%p\n", this, "Machine::getFaultToleranceSyncInterval", aFaultToleranceSyncInterval));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFaultToleranceSyncInterval);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFaultToleranceSyncInterval(aFaultToleranceSyncInterval);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFaultToleranceSyncInterval=%RU32 hrc=%Rhrc\n", this, "Machine::getFaultToleranceSyncInterval", *aFaultToleranceSyncInterval, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(FaultToleranceSyncInterval)(ULONG aFaultToleranceSyncInterval)
{
    LogRelFlow(("{%p} %s: enter aFaultToleranceSyncInterval=%RU32\n", this, "Machine::setFaultToleranceSyncInterval", aFaultToleranceSyncInterval));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFaultToleranceSyncInterval(aFaultToleranceSyncInterval);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setFaultToleranceSyncInterval", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(RTCUseUTC)(BOOL *aRTCUseUTC)
{
    LogRelFlow(("{%p} %s: enter aRTCUseUTC=%p\n", this, "Machine::getRTCUseUTC", aRTCUseUTC));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRTCUseUTC);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRTCUseUTC(aRTCUseUTC);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRTCUseUTC=%RTbool hrc=%Rhrc\n", this, "Machine::getRTCUseUTC", *aRTCUseUTC, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(RTCUseUTC)(BOOL aRTCUseUTC)
{
    LogRelFlow(("{%p} %s: enter aRTCUseUTC=%RTbool\n", this, "Machine::setRTCUseUTC", aRTCUseUTC));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setRTCUseUTC(aRTCUseUTC);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setRTCUseUTC", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(IOCacheEnabled)(BOOL *aIOCacheEnabled)
{
    LogRelFlow(("{%p} %s: enter aIOCacheEnabled=%p\n", this, "Machine::getIOCacheEnabled", aIOCacheEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIOCacheEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIOCacheEnabled(aIOCacheEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIOCacheEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getIOCacheEnabled", *aIOCacheEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(IOCacheEnabled)(BOOL aIOCacheEnabled)
{
    LogRelFlow(("{%p} %s: enter aIOCacheEnabled=%RTbool\n", this, "Machine::setIOCacheEnabled", aIOCacheEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIOCacheEnabled(aIOCacheEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setIOCacheEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(IOCacheSize)(ULONG *aIOCacheSize)
{
    LogRelFlow(("{%p} %s: enter aIOCacheSize=%p\n", this, "Machine::getIOCacheSize", aIOCacheSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIOCacheSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIOCacheSize(aIOCacheSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIOCacheSize=%RU32 hrc=%Rhrc\n", this, "Machine::getIOCacheSize", *aIOCacheSize, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(IOCacheSize)(ULONG aIOCacheSize)
{
    LogRelFlow(("{%p} %s: enter aIOCacheSize=%RU32\n", this, "Machine::setIOCacheSize", aIOCacheSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIOCacheSize(aIOCacheSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setIOCacheSize", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(PCIDeviceAssignments)(ComSafeArrayOut(IPCIDeviceAttachment *, aPCIDeviceAssignments))
{
    LogRelFlow(("{%p} %s: enter aPCIDeviceAssignments=%p\n", this, "Machine::getPCIDeviceAssignments", aPCIDeviceAssignments));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPCIDeviceAssignments);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPCIDeviceAssignments(ArrayComTypeOutConverter<IPCIDeviceAttachment>(ComSafeArrayOutArg(aPCIDeviceAssignments)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPCIDeviceAssignments=%zu hrc=%Rhrc\n", this, "Machine::getPCIDeviceAssignments", ComSafeArraySize(*aPCIDeviceAssignments), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(BandwidthControl)(IBandwidthControl **aBandwidthControl)
{
    LogRelFlow(("{%p} %s: enter aBandwidthControl=%p\n", this, "Machine::getBandwidthControl", aBandwidthControl));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBandwidthControl);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBandwidthControl(ComTypeOutConverter<IBandwidthControl>(aBandwidthControl).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBandwidthControl=%p hrc=%Rhrc\n", this, "Machine::getBandwidthControl", *aBandwidthControl, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(TracingEnabled)(BOOL *aTracingEnabled)
{
    LogRelFlow(("{%p} %s: enter aTracingEnabled=%p\n", this, "Machine::getTracingEnabled", aTracingEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTracingEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTracingEnabled(aTracingEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTracingEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getTracingEnabled", *aTracingEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(TracingEnabled)(BOOL aTracingEnabled)
{
    LogRelFlow(("{%p} %s: enter aTracingEnabled=%RTbool\n", this, "Machine::setTracingEnabled", aTracingEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTracingEnabled(aTracingEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setTracingEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(TracingConfig)(BSTR *aTracingConfig)
{
    LogRelFlow(("{%p} %s: enter aTracingConfig=%p\n", this, "Machine::getTracingConfig", aTracingConfig));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTracingConfig);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTracingConfig(BSTROutConverter(aTracingConfig).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTracingConfig=%ls hrc=%Rhrc\n", this, "Machine::getTracingConfig", *aTracingConfig, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(TracingConfig)(IN_BSTR aTracingConfig)
{
    LogRelFlow(("{%p} %s: enter aTracingConfig=%ls\n", this, "Machine::setTracingConfig", aTracingConfig));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTracingConfig(BSTRInConverter(aTracingConfig).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setTracingConfig", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(AllowTracingToAccessVM)(BOOL *aAllowTracingToAccessVM)
{
    LogRelFlow(("{%p} %s: enter aAllowTracingToAccessVM=%p\n", this, "Machine::getAllowTracingToAccessVM", aAllowTracingToAccessVM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAllowTracingToAccessVM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAllowTracingToAccessVM(aAllowTracingToAccessVM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAllowTracingToAccessVM=%RTbool hrc=%Rhrc\n", this, "Machine::getAllowTracingToAccessVM", *aAllowTracingToAccessVM, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(AllowTracingToAccessVM)(BOOL aAllowTracingToAccessVM)
{
    LogRelFlow(("{%p} %s: enter aAllowTracingToAccessVM=%RTbool\n", this, "Machine::setAllowTracingToAccessVM", aAllowTracingToAccessVM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAllowTracingToAccessVM(aAllowTracingToAccessVM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setAllowTracingToAccessVM", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(AutostartEnabled)(BOOL *aAutostartEnabled)
{
    LogRelFlow(("{%p} %s: enter aAutostartEnabled=%p\n", this, "Machine::getAutostartEnabled", aAutostartEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAutostartEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAutostartEnabled(aAutostartEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAutostartEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::getAutostartEnabled", *aAutostartEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(AutostartEnabled)(BOOL aAutostartEnabled)
{
    LogRelFlow(("{%p} %s: enter aAutostartEnabled=%RTbool\n", this, "Machine::setAutostartEnabled", aAutostartEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAutostartEnabled(aAutostartEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setAutostartEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(AutostartDelay)(ULONG *aAutostartDelay)
{
    LogRelFlow(("{%p} %s: enter aAutostartDelay=%p\n", this, "Machine::getAutostartDelay", aAutostartDelay));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAutostartDelay);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAutostartDelay(aAutostartDelay);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAutostartDelay=%RU32 hrc=%Rhrc\n", this, "Machine::getAutostartDelay", *aAutostartDelay, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(AutostartDelay)(ULONG aAutostartDelay)
{
    LogRelFlow(("{%p} %s: enter aAutostartDelay=%RU32\n", this, "Machine::setAutostartDelay", aAutostartDelay));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAutostartDelay(aAutostartDelay);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setAutostartDelay", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(AutostopType)(AutostopType_T *aAutostopType)
{
    LogRelFlow(("{%p} %s: enter aAutostopType=%p\n", this, "Machine::getAutostopType", aAutostopType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAutostopType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAutostopType(aAutostopType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAutostopType=%RU32 hrc=%Rhrc\n", this, "Machine::getAutostopType", *aAutostopType, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(AutostopType)(AutostopType_T aAutostopType)
{
    LogRelFlow(("{%p} %s: enter aAutostopType=%RU32\n", this, "Machine::setAutostopType", aAutostopType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAutostopType(aAutostopType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setAutostopType", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(DefaultFrontend)(BSTR *aDefaultFrontend)
{
    LogRelFlow(("{%p} %s: enter aDefaultFrontend=%p\n", this, "Machine::getDefaultFrontend", aDefaultFrontend));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDefaultFrontend);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDefaultFrontend(BSTROutConverter(aDefaultFrontend).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDefaultFrontend=%ls hrc=%Rhrc\n", this, "Machine::getDefaultFrontend", *aDefaultFrontend, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMSETTER(DefaultFrontend)(IN_BSTR aDefaultFrontend)
{
    LogRelFlow(("{%p} %s: enter aDefaultFrontend=%ls\n", this, "Machine::setDefaultFrontend", aDefaultFrontend));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDefaultFrontend(BSTRInConverter(aDefaultFrontend).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setDefaultFrontend", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::COMGETTER(USBProxyAvailable)(BOOL *aUSBProxyAvailable)
{
    LogRelFlow(("{%p} %s: enter aUSBProxyAvailable=%p\n", this, "Machine::getUSBProxyAvailable", aUSBProxyAvailable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUSBProxyAvailable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBProxyAvailable(aUSBProxyAvailable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUSBProxyAvailable=%RTbool hrc=%Rhrc\n", this, "Machine::getUSBProxyAvailable", *aUSBProxyAvailable, hrc));
    return hrc;
}

//
// IMachine methods
//

STDMETHODIMP MachineWrap::LockMachine(ISession *aSession,
                                      LockType_T aLockType)
{
    LogRelFlow(("{%p} %s:enter aSession=%p aLockType=%RU32\n", this, "Machine::lockMachine", aSession, aLockType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = lockMachine(ComTypeInConverter<ISession>(aSession).ptr(),
                          aLockType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::lockMachine", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::LaunchVMProcess(ISession *aSession,
                                          IN_BSTR aType,
                                          IN_BSTR aEnvironment,
                                          IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aSession=%p aType=%ls aEnvironment=%ls aProgress=%p\n", this, "Machine::launchVMProcess", aSession, aType, aEnvironment, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = launchVMProcess(ComTypeInConverter<ISession>(aSession).ptr(),
                              BSTRInConverter(aType).str(),
                              BSTRInConverter(aEnvironment).str(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Machine::launchVMProcess", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetBootOrder(ULONG aPosition,
                                       DeviceType_T aDevice)
{
    LogRelFlow(("{%p} %s:enter aPosition=%RU32 aDevice=%RU32\n", this, "Machine::setBootOrder", aPosition, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setBootOrder(aPosition,
                           aDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setBootOrder", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetBootOrder(ULONG aPosition,
                                       DeviceType_T *aDevice)
{
    LogRelFlow(("{%p} %s:enter aPosition=%RU32 aDevice=%p\n", this, "Machine::getBootOrder", aPosition, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBootOrder(aPosition,
                           aDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDevice=%RU32 hrc=%Rhrc\n", this, "Machine::getBootOrder", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::AttachDevice(IN_BSTR aName,
                                       LONG aControllerPort,
                                       LONG aDevice,
                                       DeviceType_T aType,
                                       IMedium *aMedium)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aType=%RU32 aMedium=%p\n", this, "Machine::attachDevice", aName, aControllerPort, aDevice, aType, aMedium));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = attachDevice(BSTRInConverter(aName).str(),
                           aControllerPort,
                           aDevice,
                           aType,
                           ComTypeInConverter<IMedium>(aMedium).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::attachDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::AttachDeviceWithoutMedium(IN_BSTR aName,
                                                    LONG aControllerPort,
                                                    LONG aDevice,
                                                    DeviceType_T aType)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aType=%RU32\n", this, "Machine::attachDeviceWithoutMedium", aName, aControllerPort, aDevice, aType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = attachDeviceWithoutMedium(BSTRInConverter(aName).str(),
                                        aControllerPort,
                                        aDevice,
                                        aType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::attachDeviceWithoutMedium", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::DetachDevice(IN_BSTR aName,
                                       LONG aControllerPort,
                                       LONG aDevice)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32\n", this, "Machine::detachDevice", aName, aControllerPort, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = detachDevice(BSTRInConverter(aName).str(),
                           aControllerPort,
                           aDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::detachDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::PassthroughDevice(IN_BSTR aName,
                                            LONG aControllerPort,
                                            LONG aDevice,
                                            BOOL aPassthrough)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aPassthrough=%RTbool\n", this, "Machine::passthroughDevice", aName, aControllerPort, aDevice, aPassthrough));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = passthroughDevice(BSTRInConverter(aName).str(),
                                aControllerPort,
                                aDevice,
                                aPassthrough);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::passthroughDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::TemporaryEjectDevice(IN_BSTR aName,
                                               LONG aControllerPort,
                                               LONG aDevice,
                                               BOOL aTemporaryEject)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aTemporaryEject=%RTbool\n", this, "Machine::temporaryEjectDevice", aName, aControllerPort, aDevice, aTemporaryEject));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = temporaryEjectDevice(BSTRInConverter(aName).str(),
                                   aControllerPort,
                                   aDevice,
                                   aTemporaryEject);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::temporaryEjectDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::NonRotationalDevice(IN_BSTR aName,
                                              LONG aControllerPort,
                                              LONG aDevice,
                                              BOOL aNonRotational)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aNonRotational=%RTbool\n", this, "Machine::nonRotationalDevice", aName, aControllerPort, aDevice, aNonRotational));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = nonRotationalDevice(BSTRInConverter(aName).str(),
                                  aControllerPort,
                                  aDevice,
                                  aNonRotational);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::nonRotationalDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetAutoDiscardForDevice(IN_BSTR aName,
                                                  LONG aControllerPort,
                                                  LONG aDevice,
                                                  BOOL aDiscard)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aDiscard=%RTbool\n", this, "Machine::setAutoDiscardForDevice", aName, aControllerPort, aDevice, aDiscard));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAutoDiscardForDevice(BSTRInConverter(aName).str(),
                                      aControllerPort,
                                      aDevice,
                                      aDiscard);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setAutoDiscardForDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetHotPluggableForDevice(IN_BSTR aName,
                                                   LONG aControllerPort,
                                                   LONG aDevice,
                                                   BOOL aHotPluggable)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aHotPluggable=%RTbool\n", this, "Machine::setHotPluggableForDevice", aName, aControllerPort, aDevice, aHotPluggable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setHotPluggableForDevice(BSTRInConverter(aName).str(),
                                       aControllerPort,
                                       aDevice,
                                       aHotPluggable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setHotPluggableForDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetBandwidthGroupForDevice(IN_BSTR aName,
                                                     LONG aControllerPort,
                                                     LONG aDevice,
                                                     IBandwidthGroup *aBandwidthGroup)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aBandwidthGroup=%p\n", this, "Machine::setBandwidthGroupForDevice", aName, aControllerPort, aDevice, aBandwidthGroup));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setBandwidthGroupForDevice(BSTRInConverter(aName).str(),
                                         aControllerPort,
                                         aDevice,
                                         ComTypeInConverter<IBandwidthGroup>(aBandwidthGroup).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setBandwidthGroupForDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetNoBandwidthGroupForDevice(IN_BSTR aName,
                                                       LONG aControllerPort,
                                                       LONG aDevice)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32\n", this, "Machine::setNoBandwidthGroupForDevice", aName, aControllerPort, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setNoBandwidthGroupForDevice(BSTRInConverter(aName).str(),
                                           aControllerPort,
                                           aDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setNoBandwidthGroupForDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::UnmountMedium(IN_BSTR aName,
                                        LONG aControllerPort,
                                        LONG aDevice,
                                        BOOL aForce)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aForce=%RTbool\n", this, "Machine::unmountMedium", aName, aControllerPort, aDevice, aForce));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = unmountMedium(BSTRInConverter(aName).str(),
                            aControllerPort,
                            aDevice,
                            aForce);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::unmountMedium", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::MountMedium(IN_BSTR aName,
                                      LONG aControllerPort,
                                      LONG aDevice,
                                      IMedium *aMedium,
                                      BOOL aForce)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aMedium=%p aForce=%RTbool\n", this, "Machine::mountMedium", aName, aControllerPort, aDevice, aMedium, aForce));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = mountMedium(BSTRInConverter(aName).str(),
                          aControllerPort,
                          aDevice,
                          ComTypeInConverter<IMedium>(aMedium).ptr(),
                          aForce);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::mountMedium", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetMedium(IN_BSTR aName,
                                    LONG aControllerPort,
                                    LONG aDevice,
                                    IMedium **aMedium)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aMedium=%p\n", this, "Machine::getMedium", aName, aControllerPort, aDevice, aMedium));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMedium);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMedium(BSTRInConverter(aName).str(),
                        aControllerPort,
                        aDevice,
                        ComTypeOutConverter<IMedium>(aMedium).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMedium=%p hrc=%Rhrc\n", this, "Machine::getMedium", *aMedium, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetMediumAttachmentsOfController(IN_BSTR aName,
                                                           ComSafeArrayOut(IMediumAttachment *, aMediumAttachments))
{
    LogRelFlow(("{%p} %s:enter aName=%ls aMediumAttachments=%p\n", this, "Machine::getMediumAttachmentsOfController", aName, aMediumAttachments));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMediumAttachments);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMediumAttachmentsOfController(BSTRInConverter(aName).str(),
                                               ArrayComTypeOutConverter<IMediumAttachment>(ComSafeArrayOutArg(aMediumAttachments)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMediumAttachments=%zu hrc=%Rhrc\n", this, "Machine::getMediumAttachmentsOfController", ComSafeArraySize(*aMediumAttachments), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetMediumAttachment(IN_BSTR aName,
                                              LONG aControllerPort,
                                              LONG aDevice,
                                              IMediumAttachment **aAttachment)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aControllerPort=%RI32 aDevice=%RI32 aAttachment=%p\n", this, "Machine::getMediumAttachment", aName, aControllerPort, aDevice, aAttachment));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAttachment);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMediumAttachment(BSTRInConverter(aName).str(),
                                  aControllerPort,
                                  aDevice,
                                  ComTypeOutConverter<IMediumAttachment>(aAttachment).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aAttachment=%p hrc=%Rhrc\n", this, "Machine::getMediumAttachment", *aAttachment, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::AttachHostPCIDevice(LONG aHostAddress,
                                              LONG aDesiredGuestAddress,
                                              BOOL aTryToUnbind)
{
    LogRelFlow(("{%p} %s:enter aHostAddress=%RI32 aDesiredGuestAddress=%RI32 aTryToUnbind=%RTbool\n", this, "Machine::attachHostPCIDevice", aHostAddress, aDesiredGuestAddress, aTryToUnbind));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = attachHostPCIDevice(aHostAddress,
                                  aDesiredGuestAddress,
                                  aTryToUnbind);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::attachHostPCIDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::DetachHostPCIDevice(LONG aHostAddress)
{
    LogRelFlow(("{%p} %s:enter aHostAddress=%RI32\n", this, "Machine::detachHostPCIDevice", aHostAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = detachHostPCIDevice(aHostAddress);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::detachHostPCIDevice", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetNetworkAdapter(ULONG aSlot,
                                            INetworkAdapter **aAdapter)
{
    LogRelFlow(("{%p} %s:enter aSlot=%RU32 aAdapter=%p\n", this, "Machine::getNetworkAdapter", aSlot, aAdapter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdapter);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetworkAdapter(aSlot,
                                ComTypeOutConverter<INetworkAdapter>(aAdapter).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aAdapter=%p hrc=%Rhrc\n", this, "Machine::getNetworkAdapter", *aAdapter, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::AddStorageController(IN_BSTR aName,
                                               StorageBus_T aConnectionType,
                                               IStorageController **aController)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aConnectionType=%RU32 aController=%p\n", this, "Machine::addStorageController", aName, aConnectionType, aController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addStorageController(BSTRInConverter(aName).str(),
                                   aConnectionType,
                                   ComTypeOutConverter<IStorageController>(aController).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aController=%p hrc=%Rhrc\n", this, "Machine::addStorageController", *aController, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetStorageControllerByName(IN_BSTR aName,
                                                     IStorageController **aStorageController)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aStorageController=%p\n", this, "Machine::getStorageControllerByName", aName, aStorageController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStorageController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStorageControllerByName(BSTRInConverter(aName).str(),
                                         ComTypeOutConverter<IStorageController>(aStorageController).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aStorageController=%p hrc=%Rhrc\n", this, "Machine::getStorageControllerByName", *aStorageController, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetStorageControllerByInstance(ULONG aInstance,
                                                         IStorageController **aStorageController)
{
    LogRelFlow(("{%p} %s:enter aInstance=%RU32 aStorageController=%p\n", this, "Machine::getStorageControllerByInstance", aInstance, aStorageController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStorageController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStorageControllerByInstance(aInstance,
                                             ComTypeOutConverter<IStorageController>(aStorageController).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aStorageController=%p hrc=%Rhrc\n", this, "Machine::getStorageControllerByInstance", *aStorageController, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::RemoveStorageController(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "Machine::removeStorageController", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeStorageController(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::removeStorageController", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetStorageControllerBootable(IN_BSTR aName,
                                                       BOOL aBootable)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aBootable=%RTbool\n", this, "Machine::setStorageControllerBootable", aName, aBootable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setStorageControllerBootable(BSTRInConverter(aName).str(),
                                           aBootable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setStorageControllerBootable", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::AddUSBController(IN_BSTR aName,
                                           USBControllerType_T aType,
                                           IUSBController **aController)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aType=%RU32 aController=%p\n", this, "Machine::addUSBController", aName, aType, aController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = addUSBController(BSTRInConverter(aName).str(),
                               aType,
                               ComTypeOutConverter<IUSBController>(aController).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aController=%p hrc=%Rhrc\n", this, "Machine::addUSBController", *aController, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::RemoveUSBController(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "Machine::removeUSBController", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeUSBController(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::removeUSBController", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetUSBControllerByName(IN_BSTR aName,
                                                 IUSBController **aController)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aController=%p\n", this, "Machine::getUSBControllerByName", aName, aController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBControllerByName(BSTRInConverter(aName).str(),
                                     ComTypeOutConverter<IUSBController>(aController).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aController=%p hrc=%Rhrc\n", this, "Machine::getUSBControllerByName", *aController, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetUSBControllerCountByType(USBControllerType_T aType,
                                                      ULONG *aControllers)
{
    LogRelFlow(("{%p} %s:enter aType=%RU32 aControllers=%p\n", this, "Machine::getUSBControllerCountByType", aType, aControllers));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aControllers);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBControllerCountByType(aType,
                                          aControllers);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aControllers=%RU32 hrc=%Rhrc\n", this, "Machine::getUSBControllerCountByType", *aControllers, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetSerialPort(ULONG aSlot,
                                        ISerialPort **aPort)
{
    LogRelFlow(("{%p} %s:enter aSlot=%RU32 aPort=%p\n", this, "Machine::getSerialPort", aSlot, aPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSerialPort(aSlot,
                            ComTypeOutConverter<ISerialPort>(aPort).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aPort=%p hrc=%Rhrc\n", this, "Machine::getSerialPort", *aPort, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetParallelPort(ULONG aSlot,
                                          IParallelPort **aPort)
{
    LogRelFlow(("{%p} %s:enter aSlot=%RU32 aPort=%p\n", this, "Machine::getParallelPort", aSlot, aPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getParallelPort(aSlot,
                              ComTypeOutConverter<IParallelPort>(aPort).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aPort=%p hrc=%Rhrc\n", this, "Machine::getParallelPort", *aPort, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetExtraDataKeys(ComSafeArrayOut(BSTR, aKeys))
{
    LogRelFlow(("{%p} %s:enter aKeys=%p\n", this, "Machine::getExtraDataKeys", aKeys));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aKeys);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExtraDataKeys(ArrayBSTROutConverter(ComSafeArrayOutArg(aKeys)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aKeys=%zu hrc=%Rhrc\n", this, "Machine::getExtraDataKeys", ComSafeArraySize(*aKeys), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetExtraData(IN_BSTR aKey,
                                       BSTR *aValue)
{
    LogRelFlow(("{%p} %s:enter aKey=%ls aValue=%p\n", this, "Machine::getExtraData", aKey, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExtraData(BSTRInConverter(aKey).str(),
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

    LogRelFlow(("{%p} %s: leave aValue=%ls hrc=%Rhrc\n", this, "Machine::getExtraData", *aValue, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetExtraData(IN_BSTR aKey,
                                       IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aKey=%ls aValue=%ls\n", this, "Machine::setExtraData", aKey, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setExtraData(BSTRInConverter(aKey).str(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setExtraData", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetCPUProperty(CPUPropertyType_T aProperty,
                                         BOOL *aValue)
{
    LogRelFlow(("{%p} %s:enter aProperty=%RU32 aValue=%p\n", this, "Machine::getCPUProperty", aProperty, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCPUProperty(aProperty,
                             aValue);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aValue=%RTbool hrc=%Rhrc\n", this, "Machine::getCPUProperty", *aValue, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetCPUProperty(CPUPropertyType_T aProperty,
                                         BOOL aValue)
{
    LogRelFlow(("{%p} %s:enter aProperty=%RU32 aValue=%RTbool\n", this, "Machine::setCPUProperty", aProperty, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCPUProperty(aProperty,
                             aValue);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setCPUProperty", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetCPUIDLeaf(ULONG aId,
                                       ULONG *aValEax,
                                       ULONG *aValEbx,
                                       ULONG *aValEcx,
                                       ULONG *aValEdx)
{
    LogRelFlow(("{%p} %s:enter aId=%RU32 aValEax=%p aValEbx=%p aValEcx=%p aValEdx=%p\n", this, "Machine::getCPUIDLeaf", aId, aValEax, aValEbx, aValEcx, aValEdx));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValEax);
        CheckComArgOutPointerValidThrow(aValEbx);
        CheckComArgOutPointerValidThrow(aValEcx);
        CheckComArgOutPointerValidThrow(aValEdx);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCPUIDLeaf(aId,
                           aValEax,
                           aValEbx,
                           aValEcx,
                           aValEdx);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aValEax=%RU32 *aValEbx=%RU32 *aValEcx=%RU32 *aValEdx=%RU32 hrc=%Rhrc\n", this, "Machine::getCPUIDLeaf", *aValEax, *aValEbx, *aValEcx, *aValEdx, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetCPUIDLeaf(ULONG aId,
                                       ULONG aValEax,
                                       ULONG aValEbx,
                                       ULONG aValEcx,
                                       ULONG aValEdx)
{
    LogRelFlow(("{%p} %s:enter aId=%RU32 aValEax=%RU32 aValEbx=%RU32 aValEcx=%RU32 aValEdx=%RU32\n", this, "Machine::setCPUIDLeaf", aId, aValEax, aValEbx, aValEcx, aValEdx));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCPUIDLeaf(aId,
                           aValEax,
                           aValEbx,
                           aValEcx,
                           aValEdx);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setCPUIDLeaf", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::RemoveCPUIDLeaf(ULONG aId)
{
    LogRelFlow(("{%p} %s:enter aId=%RU32\n", this, "Machine::removeCPUIDLeaf", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeCPUIDLeaf(aId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::removeCPUIDLeaf", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::RemoveAllCPUIDLeaves()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Machine::removeAllCPUIDLeaves"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeAllCPUIDLeaves();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::removeAllCPUIDLeaves", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetHWVirtExProperty(HWVirtExPropertyType_T aProperty,
                                              BOOL *aValue)
{
    LogRelFlow(("{%p} %s:enter aProperty=%RU32 aValue=%p\n", this, "Machine::getHWVirtExProperty", aProperty, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHWVirtExProperty(aProperty,
                                  aValue);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aValue=%RTbool hrc=%Rhrc\n", this, "Machine::getHWVirtExProperty", *aValue, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetHWVirtExProperty(HWVirtExPropertyType_T aProperty,
                                              BOOL aValue)
{
    LogRelFlow(("{%p} %s:enter aProperty=%RU32 aValue=%RTbool\n", this, "Machine::setHWVirtExProperty", aProperty, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setHWVirtExProperty(aProperty,
                                  aValue);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setHWVirtExProperty", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetSettingsFilePath(IN_BSTR aSettingsFilePath,
                                              IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aSettingsFilePath=%ls aProgress=%p\n", this, "Machine::setSettingsFilePath", aSettingsFilePath, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setSettingsFilePath(BSTRInConverter(aSettingsFilePath).str(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Machine::setSettingsFilePath", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SaveSettings()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Machine::saveSettings"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = saveSettings();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::saveSettings", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::DiscardSettings()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Machine::discardSettings"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = discardSettings();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::discardSettings", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::Unregister(CleanupMode_T aCleanupMode,
                                     ComSafeArrayOut(IMedium *, aMedia))
{
    LogRelFlow(("{%p} %s:enter aCleanupMode=%RU32 aMedia=%p\n", this, "Machine::unregister", aCleanupMode, aMedia));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMedia);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = unregister(aCleanupMode,
                         ArrayComTypeOutConverter<IMedium>(ComSafeArrayOutArg(aMedia)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMedia=%zu hrc=%Rhrc\n", this, "Machine::unregister", ComSafeArraySize(*aMedia), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::DeleteConfig(ComSafeArrayIn(IMedium *, aMedia),
                                       IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aMedia=%zu aProgress=%p\n", this, "Machine::deleteConfig", aMedia, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = deleteConfig(ArrayComTypeInConverter<IMedium>(ComSafeArrayInArg(aMedia)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Machine::deleteConfig", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::ExportTo(IAppliance *aAppliance,
                                   IN_BSTR aLocation,
                                   IVirtualSystemDescription **aDescription)
{
    LogRelFlow(("{%p} %s:enter aAppliance=%p aLocation=%ls aDescription=%p\n", this, "Machine::exportTo", aAppliance, aLocation, aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = exportTo(ComTypeInConverter<IAppliance>(aAppliance).ptr(),
                       BSTRInConverter(aLocation).str(),
                       ComTypeOutConverter<IVirtualSystemDescription>(aDescription).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDescription=%p hrc=%Rhrc\n", this, "Machine::exportTo", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::FindSnapshot(IN_BSTR aNameOrId,
                                       ISnapshot **aSnapshot)
{
    LogRelFlow(("{%p} %s:enter aNameOrId=%ls aSnapshot=%p\n", this, "Machine::findSnapshot", aNameOrId, aSnapshot));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSnapshot);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findSnapshot(BSTRInConverter(aNameOrId).str(),
                           ComTypeOutConverter<ISnapshot>(aSnapshot).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aSnapshot=%p hrc=%Rhrc\n", this, "Machine::findSnapshot", *aSnapshot, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::CreateSharedFolder(IN_BSTR aName,
                                             IN_BSTR aHostPath,
                                             BOOL aWritable,
                                             BOOL aAutomount)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aHostPath=%ls aWritable=%RTbool aAutomount=%RTbool\n", this, "Machine::createSharedFolder", aName, aHostPath, aWritable, aAutomount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createSharedFolder(BSTRInConverter(aName).str(),
                                 BSTRInConverter(aHostPath).str(),
                                 aWritable,
                                 aAutomount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::createSharedFolder", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::RemoveSharedFolder(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "Machine::removeSharedFolder", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeSharedFolder(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::removeSharedFolder", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::CanShowConsoleWindow(BOOL *aCanShow)
{
    LogRelFlow(("{%p} %s:enter aCanShow=%p\n", this, "Machine::canShowConsoleWindow", aCanShow));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCanShow);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = canShowConsoleWindow(aCanShow);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aCanShow=%RTbool hrc=%Rhrc\n", this, "Machine::canShowConsoleWindow", *aCanShow, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::ShowConsoleWindow(LONG64 *aWinId)
{
    LogRelFlow(("{%p} %s:enter aWinId=%p\n", this, "Machine::showConsoleWindow", aWinId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWinId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = showConsoleWindow(aWinId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aWinId=%RI64 hrc=%Rhrc\n", this, "Machine::showConsoleWindow", *aWinId, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetGuestProperty(IN_BSTR aName,
                                           BSTR *aValue,
                                           LONG64 *aTimestamp,
                                           BSTR *aFlags)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aValue=%p aTimestamp=%p aFlags=%p\n", this, "Machine::getGuestProperty", aName, aValue, aTimestamp, aFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);
        CheckComArgOutPointerValidThrow(aTimestamp);
        CheckComArgOutPointerValidThrow(aFlags);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestProperty(BSTRInConverter(aName).str(),
                               BSTROutConverter(aValue).str(),
                               aTimestamp,
                               BSTROutConverter(aFlags).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aValue=%ls *aTimestamp=%RI64 *aFlags=%ls hrc=%Rhrc\n", this, "Machine::getGuestProperty", *aValue, *aTimestamp, *aFlags, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetGuestPropertyValue(IN_BSTR aProperty,
                                                BSTR *aValue)
{
    LogRelFlow(("{%p} %s:enter aProperty=%ls aValue=%p\n", this, "Machine::getGuestPropertyValue", aProperty, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestPropertyValue(BSTRInConverter(aProperty).str(),
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

    LogRelFlow(("{%p} %s: leave aValue=%ls hrc=%Rhrc\n", this, "Machine::getGuestPropertyValue", *aValue, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetGuestPropertyTimestamp(IN_BSTR aProperty,
                                                    LONG64 *aValue)
{
    LogRelFlow(("{%p} %s:enter aProperty=%ls aValue=%p\n", this, "Machine::getGuestPropertyTimestamp", aProperty, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestPropertyTimestamp(BSTRInConverter(aProperty).str(),
                                        aValue);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aValue=%RI64 hrc=%Rhrc\n", this, "Machine::getGuestPropertyTimestamp", *aValue, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetGuestProperty(IN_BSTR aProperty,
                                           IN_BSTR aValue,
                                           IN_BSTR aFlags)
{
    LogRelFlow(("{%p} %s:enter aProperty=%ls aValue=%ls aFlags=%ls\n", this, "Machine::setGuestProperty", aProperty, aValue, aFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setGuestProperty(BSTRInConverter(aProperty).str(),
                               BSTRInConverter(aValue).str(),
                               BSTRInConverter(aFlags).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setGuestProperty", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::SetGuestPropertyValue(IN_BSTR aProperty,
                                                IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aProperty=%ls aValue=%ls\n", this, "Machine::setGuestPropertyValue", aProperty, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setGuestPropertyValue(BSTRInConverter(aProperty).str(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::setGuestPropertyValue", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::DeleteGuestProperty(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "Machine::deleteGuestProperty", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = deleteGuestProperty(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::deleteGuestProperty", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::EnumerateGuestProperties(IN_BSTR aPatterns,
                                                   ComSafeArrayOut(BSTR, aNames),
                                                   ComSafeArrayOut(BSTR, aValues),
                                                   ComSafeArrayOut(LONG64, aTimestamps),
                                                   ComSafeArrayOut(BSTR, aFlags))
{
    LogRelFlow(("{%p} %s:enter aPatterns=%ls aNames=%p aValues=%p aTimestamps=%p aFlags=%p\n", this, "Machine::enumerateGuestProperties", aPatterns, aNames, aValues, aTimestamps, aFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNames);
        CheckComArgOutPointerValidThrow(aValues);
        CheckComArgOutPointerValidThrow(aTimestamps);
        CheckComArgOutPointerValidThrow(aFlags);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = enumerateGuestProperties(BSTRInConverter(aPatterns).str(),
                                       ArrayBSTROutConverter(ComSafeArrayOutArg(aNames)).array(),
                                       ArrayBSTROutConverter(ComSafeArrayOutArg(aValues)).array(),
                                       ArrayOutConverter<LONG64>(ComSafeArrayOutArg(aTimestamps)).array(),
                                       ArrayBSTROutConverter(ComSafeArrayOutArg(aFlags)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNames=%zu *aValues=%zu *aTimestamps=%zu *aFlags=%zu hrc=%Rhrc\n", this, "Machine::enumerateGuestProperties", ComSafeArraySize(*aNames), ComSafeArraySize(*aValues), ComSafeArraySize(*aTimestamps), ComSafeArraySize(*aFlags), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::QuerySavedGuestScreenInfo(ULONG aScreenId,
                                                    ULONG *aOriginX,
                                                    ULONG *aOriginY,
                                                    ULONG *aWidth,
                                                    ULONG *aHeight,
                                                    BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aOriginX=%p aOriginY=%p aWidth=%p aHeight=%p aEnabled=%p\n", this, "Machine::querySavedGuestScreenInfo", aScreenId, aOriginX, aOriginY, aWidth, aHeight, aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOriginX);
        CheckComArgOutPointerValidThrow(aOriginY);
        CheckComArgOutPointerValidThrow(aWidth);
        CheckComArgOutPointerValidThrow(aHeight);
        CheckComArgOutPointerValidThrow(aEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = querySavedGuestScreenInfo(aScreenId,
                                        aOriginX,
                                        aOriginY,
                                        aWidth,
                                        aHeight,
                                        aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOriginX=%RU32 *aOriginY=%RU32 *aWidth=%RU32 *aHeight=%RU32 *aEnabled=%RTbool hrc=%Rhrc\n", this, "Machine::querySavedGuestScreenInfo", *aOriginX, *aOriginY, *aWidth, *aHeight, *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::QuerySavedThumbnailSize(ULONG aScreenId,
                                                  ULONG *aSize,
                                                  ULONG *aWidth,
                                                  ULONG *aHeight)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aSize=%p aWidth=%p aHeight=%p\n", this, "Machine::querySavedThumbnailSize", aScreenId, aSize, aWidth, aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSize);
        CheckComArgOutPointerValidThrow(aWidth);
        CheckComArgOutPointerValidThrow(aHeight);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = querySavedThumbnailSize(aScreenId,
                                      aSize,
                                      aWidth,
                                      aHeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSize=%RU32 *aWidth=%RU32 *aHeight=%RU32 hrc=%Rhrc\n", this, "Machine::querySavedThumbnailSize", *aSize, *aWidth, *aHeight, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::ReadSavedThumbnailToArray(ULONG aScreenId,
                                                    BOOL aBGR,
                                                    ULONG *aWidth,
                                                    ULONG *aHeight,
                                                    ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aBGR=%RTbool aWidth=%p aHeight=%p aData=%p\n", this, "Machine::readSavedThumbnailToArray", aScreenId, aBGR, aWidth, aHeight, aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWidth);
        CheckComArgOutPointerValidThrow(aHeight);
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = readSavedThumbnailToArray(aScreenId,
                                        aBGR,
                                        aWidth,
                                        aHeight,
                                        ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWidth=%RU32 *aHeight=%RU32 aData=%zu hrc=%Rhrc\n", this, "Machine::readSavedThumbnailToArray", *aWidth, *aHeight, ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::ReadSavedThumbnailPNGToArray(ULONG aScreenId,
                                                       ULONG *aWidth,
                                                       ULONG *aHeight,
                                                       ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aWidth=%p aHeight=%p aData=%p\n", this, "Machine::readSavedThumbnailPNGToArray", aScreenId, aWidth, aHeight, aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWidth);
        CheckComArgOutPointerValidThrow(aHeight);
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = readSavedThumbnailPNGToArray(aScreenId,
                                           aWidth,
                                           aHeight,
                                           ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWidth=%RU32 *aHeight=%RU32 aData=%zu hrc=%Rhrc\n", this, "Machine::readSavedThumbnailPNGToArray", *aWidth, *aHeight, ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::QuerySavedScreenshotPNGSize(ULONG aScreenId,
                                                      ULONG *aSize,
                                                      ULONG *aWidth,
                                                      ULONG *aHeight)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aSize=%p aWidth=%p aHeight=%p\n", this, "Machine::querySavedScreenshotPNGSize", aScreenId, aSize, aWidth, aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSize);
        CheckComArgOutPointerValidThrow(aWidth);
        CheckComArgOutPointerValidThrow(aHeight);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = querySavedScreenshotPNGSize(aScreenId,
                                          aSize,
                                          aWidth,
                                          aHeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSize=%RU32 *aWidth=%RU32 *aHeight=%RU32 hrc=%Rhrc\n", this, "Machine::querySavedScreenshotPNGSize", *aSize, *aWidth, *aHeight, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::ReadSavedScreenshotPNGToArray(ULONG aScreenId,
                                                        ULONG *aWidth,
                                                        ULONG *aHeight,
                                                        ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aWidth=%p aHeight=%p aData=%p\n", this, "Machine::readSavedScreenshotPNGToArray", aScreenId, aWidth, aHeight, aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWidth);
        CheckComArgOutPointerValidThrow(aHeight);
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = readSavedScreenshotPNGToArray(aScreenId,
                                            aWidth,
                                            aHeight,
                                            ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWidth=%RU32 *aHeight=%RU32 aData=%zu hrc=%Rhrc\n", this, "Machine::readSavedScreenshotPNGToArray", *aWidth, *aHeight, ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::HotPlugCPU(ULONG aCpu)
{
    LogRelFlow(("{%p} %s:enter aCpu=%RU32\n", this, "Machine::hotPlugCPU", aCpu));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = hotPlugCPU(aCpu);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::hotPlugCPU", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::HotUnplugCPU(ULONG aCpu)
{
    LogRelFlow(("{%p} %s:enter aCpu=%RU32\n", this, "Machine::hotUnplugCPU", aCpu));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = hotUnplugCPU(aCpu);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Machine::hotUnplugCPU", hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::GetCPUStatus(ULONG aCpu,
                                       BOOL *aAttached)
{
    LogRelFlow(("{%p} %s:enter aCpu=%RU32 aAttached=%p\n", this, "Machine::getCPUStatus", aCpu, aAttached));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAttached);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCPUStatus(aCpu,
                           aAttached);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aAttached=%RTbool hrc=%Rhrc\n", this, "Machine::getCPUStatus", *aAttached, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::QueryLogFilename(ULONG aIdx,
                                           BSTR *aFilename)
{
    LogRelFlow(("{%p} %s:enter aIdx=%RU32 aFilename=%p\n", this, "Machine::queryLogFilename", aIdx, aFilename));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFilename);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = queryLogFilename(aIdx,
                               BSTROutConverter(aFilename).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFilename=%ls hrc=%Rhrc\n", this, "Machine::queryLogFilename", *aFilename, hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::ReadLog(ULONG aIdx,
                                  LONG64 aOffset,
                                  LONG64 aSize,
                                  ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aIdx=%RU32 aOffset=%RI64 aSize=%RI64 aData=%p\n", this, "Machine::readLog", aIdx, aOffset, aSize, aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = readLog(aIdx,
                      aOffset,
                      aSize,
                      ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aData=%zu hrc=%Rhrc\n", this, "Machine::readLog", ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP MachineWrap::CloneTo(IMachine *aTarget,
                                  CloneMode_T aMode,
                                  ComSafeArrayIn(CloneOptions_T, aOptions),
                                  IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aTarget=%p aMode=%RU32 aOptions=%zu aProgress=%p\n", this, "Machine::cloneTo", aTarget, aMode, aOptions, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = cloneTo(ComTypeInConverter<IMachine>(aTarget).ptr(),
                      aMode,
                      ArrayInConverter<CloneOptions_T>(ComSafeArrayInArg(aOptions)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Machine::cloneTo", *aProgress, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MachineWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(MachineWrap, IMachine)
#endif // VBOX_WITH_XPCOM
