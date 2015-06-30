/** @file
 *
 * VirtualBox API class wrapper code for IGuest.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUEST

#include "GuestWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestWrap)

//
// IGuest properties
//

STDMETHODIMP GuestWrap::COMGETTER(OSTypeId)(BSTR *aOSTypeId)
{
    LogRelFlow(("{%p} %s: enter aOSTypeId=%p\n", this, "Guest::getOSTypeId", aOSTypeId));

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

    LogRelFlow(("{%p} %s: leave *aOSTypeId=%ls hrc=%Rhrc\n", this, "Guest::getOSTypeId", *aOSTypeId, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMGETTER(AdditionsRunLevel)(AdditionsRunLevelType_T *aAdditionsRunLevel)
{
    LogRelFlow(("{%p} %s: enter aAdditionsRunLevel=%p\n", this, "Guest::getAdditionsRunLevel", aAdditionsRunLevel));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdditionsRunLevel);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdditionsRunLevel(aAdditionsRunLevel);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAdditionsRunLevel=%RU32 hrc=%Rhrc\n", this, "Guest::getAdditionsRunLevel", *aAdditionsRunLevel, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMGETTER(AdditionsVersion)(BSTR *aAdditionsVersion)
{
    LogRelFlow(("{%p} %s: enter aAdditionsVersion=%p\n", this, "Guest::getAdditionsVersion", aAdditionsVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdditionsVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdditionsVersion(BSTROutConverter(aAdditionsVersion).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAdditionsVersion=%ls hrc=%Rhrc\n", this, "Guest::getAdditionsVersion", *aAdditionsVersion, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMGETTER(AdditionsRevision)(ULONG *aAdditionsRevision)
{
    LogRelFlow(("{%p} %s: enter aAdditionsRevision=%p\n", this, "Guest::getAdditionsRevision", aAdditionsRevision));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAdditionsRevision);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdditionsRevision(aAdditionsRevision);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAdditionsRevision=%RU32 hrc=%Rhrc\n", this, "Guest::getAdditionsRevision", *aAdditionsRevision, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "Guest::getEventSource", aEventSource));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEventSource);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEventSource(ComTypeOutConverter<IEventSource>(aEventSource).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "Guest::getEventSource", *aEventSource, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMGETTER(Facilities)(ComSafeArrayOut(IAdditionsFacility *, aFacilities))
{
    LogRelFlow(("{%p} %s: enter aFacilities=%p\n", this, "Guest::getFacilities", aFacilities));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFacilities);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFacilities(ArrayComTypeOutConverter<IAdditionsFacility>(ComSafeArrayOutArg(aFacilities)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFacilities=%zu hrc=%Rhrc\n", this, "Guest::getFacilities", ComSafeArraySize(*aFacilities), hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMGETTER(Sessions)(ComSafeArrayOut(IGuestSession *, aSessions))
{
    LogRelFlow(("{%p} %s: enter aSessions=%p\n", this, "Guest::getSessions", aSessions));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSessions);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSessions(ArrayComTypeOutConverter<IGuestSession>(ComSafeArrayOutArg(aSessions)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSessions=%zu hrc=%Rhrc\n", this, "Guest::getSessions", ComSafeArraySize(*aSessions), hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMGETTER(MemoryBalloonSize)(ULONG *aMemoryBalloonSize)
{
    LogRelFlow(("{%p} %s: enter aMemoryBalloonSize=%p\n", this, "Guest::getMemoryBalloonSize", aMemoryBalloonSize));

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

    LogRelFlow(("{%p} %s: leave *aMemoryBalloonSize=%RU32 hrc=%Rhrc\n", this, "Guest::getMemoryBalloonSize", *aMemoryBalloonSize, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMSETTER(MemoryBalloonSize)(ULONG aMemoryBalloonSize)
{
    LogRelFlow(("{%p} %s: enter aMemoryBalloonSize=%RU32\n", this, "Guest::setMemoryBalloonSize", aMemoryBalloonSize));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Guest::setMemoryBalloonSize", hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMGETTER(StatisticsUpdateInterval)(ULONG *aStatisticsUpdateInterval)
{
    LogRelFlow(("{%p} %s: enter aStatisticsUpdateInterval=%p\n", this, "Guest::getStatisticsUpdateInterval", aStatisticsUpdateInterval));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStatisticsUpdateInterval);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStatisticsUpdateInterval(aStatisticsUpdateInterval);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStatisticsUpdateInterval=%RU32 hrc=%Rhrc\n", this, "Guest::getStatisticsUpdateInterval", *aStatisticsUpdateInterval, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::COMSETTER(StatisticsUpdateInterval)(ULONG aStatisticsUpdateInterval)
{
    LogRelFlow(("{%p} %s: enter aStatisticsUpdateInterval=%RU32\n", this, "Guest::setStatisticsUpdateInterval", aStatisticsUpdateInterval));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setStatisticsUpdateInterval(aStatisticsUpdateInterval);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Guest::setStatisticsUpdateInterval", hrc));
    return hrc;
}

//
// IGuest methods
//

STDMETHODIMP GuestWrap::InternalGetStatistics(ULONG *aCpuUser,
                                              ULONG *aCpuKernel,
                                              ULONG *aCpuIdle,
                                              ULONG *aMemTotal,
                                              ULONG *aMemFree,
                                              ULONG *aMemBalloon,
                                              ULONG *aMemShared,
                                              ULONG *aMemCache,
                                              ULONG *aPagedTotal,
                                              ULONG *aMemAllocTotal,
                                              ULONG *aMemFreeTotal,
                                              ULONG *aMemBalloonTotal,
                                              ULONG *aMemSharedTotal)
{
    LogRelFlow(("{%p} %s:enter aCpuUser=%p aCpuKernel=%p aCpuIdle=%p aMemTotal=%p aMemFree=%p aMemBalloon=%p aMemShared=%p aMemCache=%p aPagedTotal=%p aMemAllocTotal=%p aMemFreeTotal=%p aMemBalloonTotal=%p aMemSharedTotal=%p\n", this, "Guest::internalGetStatistics", aCpuUser, aCpuKernel, aCpuIdle, aMemTotal, aMemFree, aMemBalloon, aMemShared, aMemCache, aPagedTotal, aMemAllocTotal, aMemFreeTotal, aMemBalloonTotal, aMemSharedTotal));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCpuUser);
        CheckComArgOutPointerValidThrow(aCpuKernel);
        CheckComArgOutPointerValidThrow(aCpuIdle);
        CheckComArgOutPointerValidThrow(aMemTotal);
        CheckComArgOutPointerValidThrow(aMemFree);
        CheckComArgOutPointerValidThrow(aMemBalloon);
        CheckComArgOutPointerValidThrow(aMemShared);
        CheckComArgOutPointerValidThrow(aMemCache);
        CheckComArgOutPointerValidThrow(aPagedTotal);
        CheckComArgOutPointerValidThrow(aMemAllocTotal);
        CheckComArgOutPointerValidThrow(aMemFreeTotal);
        CheckComArgOutPointerValidThrow(aMemBalloonTotal);
        CheckComArgOutPointerValidThrow(aMemSharedTotal);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = internalGetStatistics(aCpuUser,
                                    aCpuKernel,
                                    aCpuIdle,
                                    aMemTotal,
                                    aMemFree,
                                    aMemBalloon,
                                    aMemShared,
                                    aMemCache,
                                    aPagedTotal,
                                    aMemAllocTotal,
                                    aMemFreeTotal,
                                    aMemBalloonTotal,
                                    aMemSharedTotal);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCpuUser=%RU32 *aCpuKernel=%RU32 *aCpuIdle=%RU32 *aMemTotal=%RU32 *aMemFree=%RU32 *aMemBalloon=%RU32 *aMemShared=%RU32 *aMemCache=%RU32 *aPagedTotal=%RU32 *aMemAllocTotal=%RU32 *aMemFreeTotal=%RU32 *aMemBalloonTotal=%RU32 *aMemSharedTotal=%RU32 hrc=%Rhrc\n", this, "Guest::internalGetStatistics", *aCpuUser, *aCpuKernel, *aCpuIdle, *aMemTotal, *aMemFree, *aMemBalloon, *aMemShared, *aMemCache, *aPagedTotal, *aMemAllocTotal, *aMemFreeTotal, *aMemBalloonTotal, *aMemSharedTotal, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::GetFacilityStatus(AdditionsFacilityType_T aFacility,
                                          LONG64 *aTimestamp,
                                          AdditionsFacilityStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s:enter aFacility=%RU32 aTimestamp=%p aStatus=%p\n", this, "Guest::getFacilityStatus", aFacility, aTimestamp, aStatus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTimestamp);
        CheckComArgOutPointerValidThrow(aStatus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFacilityStatus(aFacility,
                                aTimestamp,
                                aStatus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTimestamp=%RI64 aStatus=%RU32 hrc=%Rhrc\n", this, "Guest::getFacilityStatus", *aTimestamp, *aStatus, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::GetAdditionsStatus(AdditionsRunLevelType_T aLevel,
                                           BOOL *aActive)
{
    LogRelFlow(("{%p} %s:enter aLevel=%RU32 aActive=%p\n", this, "Guest::getAdditionsStatus", aLevel, aActive));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aActive);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAdditionsStatus(aLevel,
                                 aActive);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aActive=%RTbool hrc=%Rhrc\n", this, "Guest::getAdditionsStatus", *aActive, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::SetCredentials(IN_BSTR aUserName,
                                       IN_BSTR aPassword,
                                       IN_BSTR aDomain,
                                       BOOL aAllowInteractiveLogon)
{
    LogRelFlow(("{%p} %s:enter aUserName=%ls aPassword=%ls aDomain=%ls aAllowInteractiveLogon=%RTbool\n", this, "Guest::setCredentials", aUserName, aPassword, aDomain, aAllowInteractiveLogon));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCredentials(BSTRInConverter(aUserName).str(),
                             BSTRInConverter(aPassword).str(),
                             BSTRInConverter(aDomain).str(),
                             aAllowInteractiveLogon);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Guest::setCredentials", hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::DragHGEnter(ULONG aScreenId,
                                    ULONG aY,
                                    ULONG aX,
                                    DragAndDropAction_T aDefaultAction,
                                    ComSafeArrayIn(DragAndDropAction_T, aAllowedActions),
                                    ComSafeArrayIn(IN_BSTR, aFormats),
                                    DragAndDropAction_T *aResultAction)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aY=%RU32 aX=%RU32 aDefaultAction=%RU32 aAllowedActions=%zu aFormats=%zu aResultAction=%p\n", this, "Guest::dragHGEnter", aScreenId, aY, aX, aDefaultAction, aAllowedActions, aFormats, aResultAction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResultAction);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dragHGEnter(aScreenId,
                          aY,
                          aX,
                          aDefaultAction,
                          ArrayInConverter<DragAndDropAction_T>(ComSafeArrayInArg(aAllowedActions)).array(),
                          ArrayBSTRInConverter(ComSafeArrayInArg(aFormats)).array(),
                          aResultAction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aResultAction=%RU32 hrc=%Rhrc\n", this, "Guest::dragHGEnter", *aResultAction, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::DragHGMove(ULONG aScreenId,
                                   ULONG aX,
                                   ULONG aY,
                                   DragAndDropAction_T aDefaultAction,
                                   ComSafeArrayIn(DragAndDropAction_T, aAllowedActions),
                                   ComSafeArrayIn(IN_BSTR, aFormats),
                                   DragAndDropAction_T *aResultAction)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aX=%RU32 aY=%RU32 aDefaultAction=%RU32 aAllowedActions=%zu aFormats=%zu aResultAction=%p\n", this, "Guest::dragHGMove", aScreenId, aX, aY, aDefaultAction, aAllowedActions, aFormats, aResultAction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResultAction);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dragHGMove(aScreenId,
                         aX,
                         aY,
                         aDefaultAction,
                         ArrayInConverter<DragAndDropAction_T>(ComSafeArrayInArg(aAllowedActions)).array(),
                         ArrayBSTRInConverter(ComSafeArrayInArg(aFormats)).array(),
                         aResultAction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aResultAction=%RU32 hrc=%Rhrc\n", this, "Guest::dragHGMove", *aResultAction, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::DragHGLeave(ULONG aScreenId)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32\n", this, "Guest::dragHGLeave", aScreenId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dragHGLeave(aScreenId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Guest::dragHGLeave", hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::DragHGDrop(ULONG aScreenId,
                                   ULONG aX,
                                   ULONG aY,
                                   DragAndDropAction_T aDefaultAction,
                                   ComSafeArrayIn(DragAndDropAction_T, aAllowedActions),
                                   ComSafeArrayIn(IN_BSTR, aFormats),
                                   BSTR *aFormat,
                                   DragAndDropAction_T *aResultAction)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aX=%RU32 aY=%RU32 aDefaultAction=%RU32 aAllowedActions=%zu aFormats=%zu aFormat=%p aResultAction=%p\n", this, "Guest::dragHGDrop", aScreenId, aX, aY, aDefaultAction, aAllowedActions, aFormats, aFormat, aResultAction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFormat);
        CheckComArgOutPointerValidThrow(aResultAction);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dragHGDrop(aScreenId,
                         aX,
                         aY,
                         aDefaultAction,
                         ArrayInConverter<DragAndDropAction_T>(ComSafeArrayInArg(aAllowedActions)).array(),
                         ArrayBSTRInConverter(ComSafeArrayInArg(aFormats)).array(),
                         BSTROutConverter(aFormat).str(),
                         aResultAction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFormat=%ls aResultAction=%RU32 hrc=%Rhrc\n", this, "Guest::dragHGDrop", *aFormat, *aResultAction, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::DragHGPutData(ULONG aScreenId,
                                      IN_BSTR aFormat,
                                      ComSafeArrayIn(BYTE, aData),
                                      IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aFormat=%ls aData=%zu aProgress=%p\n", this, "Guest::dragHGPutData", aScreenId, aFormat, aData, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dragHGPutData(aScreenId,
                            BSTRInConverter(aFormat).str(),
                            ArrayInConverter<BYTE>(ComSafeArrayInArg(aData)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Guest::dragHGPutData", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::DragGHPending(ULONG aScreenId,
                                      ComSafeArrayOut(BSTR, aFormats),
                                      ComSafeArrayOut(DragAndDropAction_T, aAllowedActions),
                                      DragAndDropAction_T *aDefaultAction)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aFormats=%p aAllowedActions=%p aDefaultAction=%p\n", this, "Guest::dragGHPending", aScreenId, aFormats, aAllowedActions, aDefaultAction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFormats);
        CheckComArgOutPointerValidThrow(aAllowedActions);
        CheckComArgOutPointerValidThrow(aDefaultAction);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dragGHPending(aScreenId,
                            ArrayBSTROutConverter(ComSafeArrayOutArg(aFormats)).array(),
                            ArrayOutConverter<DragAndDropAction_T>(ComSafeArrayOutArg(aAllowedActions)).array(),
                            aDefaultAction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFormats=%zu *aAllowedActions=%zu aDefaultAction=%RU32 hrc=%Rhrc\n", this, "Guest::dragGHPending", ComSafeArraySize(*aFormats), ComSafeArraySize(*aAllowedActions), *aDefaultAction, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::DragGHDropped(IN_BSTR aFormat,
                                      DragAndDropAction_T aAction,
                                      IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aFormat=%ls aAction=%RU32 aProgress=%p\n", this, "Guest::dragGHDropped", aFormat, aAction, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dragGHDropped(BSTRInConverter(aFormat).str(),
                            aAction,
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Guest::dragGHDropped", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::DragGHGetData(ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aData=%p\n", this, "Guest::dragGHGetData", aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dragGHGetData(ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aData=%zu hrc=%Rhrc\n", this, "Guest::dragGHGetData", ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::CreateSession(IN_BSTR aUser,
                                      IN_BSTR aPassword,
                                      IN_BSTR aDomain,
                                      IN_BSTR aSessionName,
                                      IGuestSession **aGuestSession)
{
    LogRelFlow(("{%p} %s:enter aUser=%ls aPassword=%ls aDomain=%ls aSessionName=%ls aGuestSession=%p\n", this, "Guest::createSession", aUser, aPassword, aDomain, aSessionName, aGuestSession));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestSession);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createSession(BSTRInConverter(aUser).str(),
                            BSTRInConverter(aPassword).str(),
                            BSTRInConverter(aDomain).str(),
                            BSTRInConverter(aSessionName).str(),
                            ComTypeOutConverter<IGuestSession>(aGuestSession).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aGuestSession=%p hrc=%Rhrc\n", this, "Guest::createSession", *aGuestSession, hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::FindSession(IN_BSTR aSessionName,
                                    ComSafeArrayOut(IGuestSession *, aSessions))
{
    LogRelFlow(("{%p} %s:enter aSessionName=%ls aSessions=%p\n", this, "Guest::findSession", aSessionName, aSessions));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSessions);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findSession(BSTRInConverter(aSessionName).str(),
                          ArrayComTypeOutConverter<IGuestSession>(ComSafeArrayOutArg(aSessions)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aSessions=%zu hrc=%Rhrc\n", this, "Guest::findSession", ComSafeArraySize(*aSessions), hrc));
    return hrc;
}

STDMETHODIMP GuestWrap::UpdateGuestAdditions(IN_BSTR aSource,
                                             ComSafeArrayIn(IN_BSTR, aArguments),
                                             ComSafeArrayIn(AdditionsUpdateFlag_T, aFlags),
                                             IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aSource=%ls aArguments=%zu aFlags=%zu aProgress=%p\n", this, "Guest::updateGuestAdditions", aSource, aArguments, aFlags, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = updateGuestAdditions(BSTRInConverter(aSource).str(),
                                   ArrayBSTRInConverter(ComSafeArrayInArg(aArguments)).array(),
                                   ArrayInConverter<AdditionsUpdateFlag_T>(ComSafeArrayInArg(aFlags)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Guest::updateGuestAdditions", *aProgress, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(GuestWrap, IGuest)
#endif // VBOX_WITH_XPCOM
