/** @file
 *
 * VirtualBox API class wrapper code for IInternalMachineControl.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_INTERNALMACHINECONTROL

#include "InternalMachineControlWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(InternalMachineControlWrap)

//
// IInternalMachineControl properties
//

//
// IInternalMachineControl methods
//

STDMETHODIMP InternalMachineControlWrap::SetRemoveSavedStateFile(BOOL aRemove)
{
    LogRelFlow(("{%p} %s:enter aRemove=%RTbool\n", this, "InternalMachineControl::setRemoveSavedStateFile", aRemove));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setRemoveSavedStateFile(aRemove);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::setRemoveSavedStateFile", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::UpdateState(MachineState_T aState)
{
    LogRelFlow(("{%p} %s:enter aState=%RU32\n", this, "InternalMachineControl::updateState", aState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = updateState(aState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::updateState", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::BeginPowerUp(IProgress *aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "InternalMachineControl::beginPowerUp", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = beginPowerUp(ComTypeInConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::beginPowerUp", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::EndPowerUp(LONG aResult)
{
    LogRelFlow(("{%p} %s:enter aResult=%RI32\n", this, "InternalMachineControl::endPowerUp", aResult));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = endPowerUp(aResult);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::endPowerUp", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::BeginPoweringDown(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "InternalMachineControl::beginPoweringDown", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = beginPoweringDown(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProgress=%p hrc=%Rhrc\n", this, "InternalMachineControl::beginPoweringDown", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::EndPoweringDown(LONG aResult,
                                                         IN_BSTR aErrMsg)
{
    LogRelFlow(("{%p} %s:enter aResult=%RI32 aErrMsg=%ls\n", this, "InternalMachineControl::endPoweringDown", aResult, aErrMsg));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = endPoweringDown(aResult,
                              BSTRInConverter(aErrMsg).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::endPoweringDown", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::RunUSBDeviceFilters(IUSBDevice *aDevice,
                                                             BOOL *aMatched,
                                                             ULONG *aMaskedInterfaces)
{
    LogRelFlow(("{%p} %s:enter aDevice=%p aMatched=%p aMaskedInterfaces=%p\n", this, "InternalMachineControl::runUSBDeviceFilters", aDevice, aMatched, aMaskedInterfaces));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMatched);
        CheckComArgOutPointerValidThrow(aMaskedInterfaces);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = runUSBDeviceFilters(ComTypeInConverter<IUSBDevice>(aDevice).ptr(),
                                  aMatched,
                                  aMaskedInterfaces);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMatched=%RTbool *aMaskedInterfaces=%RU32 hrc=%Rhrc\n", this, "InternalMachineControl::runUSBDeviceFilters", *aMatched, *aMaskedInterfaces, hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::CaptureUSBDevice(IN_BSTR aId)
{
    LogRelFlow(("{%p} %s:enter aId=%ls\n", this, "InternalMachineControl::captureUSBDevice", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = captureUSBDevice(UuidInConverter(aId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::captureUSBDevice", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::DetachUSBDevice(IN_BSTR aId,
                                                         BOOL aDone)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aDone=%RTbool\n", this, "InternalMachineControl::detachUSBDevice", aId, aDone));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = detachUSBDevice(UuidInConverter(aId).uuid(),
                              aDone);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::detachUSBDevice", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::AutoCaptureUSBDevices()
{
    LogRelFlow(("{%p} %s:enter\n", this, "InternalMachineControl::autoCaptureUSBDevices"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = autoCaptureUSBDevices();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::autoCaptureUSBDevices", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::DetachAllUSBDevices(BOOL aDone)
{
    LogRelFlow(("{%p} %s:enter aDone=%RTbool\n", this, "InternalMachineControl::detachAllUSBDevices", aDone));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = detachAllUSBDevices(aDone);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::detachAllUSBDevices", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::OnSessionEnd(ISession *aSession,
                                                      IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aSession=%p aProgress=%p\n", this, "InternalMachineControl::onSessionEnd", aSession, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onSessionEnd(ComTypeInConverter<ISession>(aSession).ptr(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "InternalMachineControl::onSessionEnd", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::BeginSavingState(IProgress **aProgress,
                                                          BSTR *aStateFilePath)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p aStateFilePath=%p\n", this, "InternalMachineControl::beginSavingState", aProgress, aStateFilePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);
        CheckComArgOutPointerValidThrow(aStateFilePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = beginSavingState(ComTypeOutConverter<IProgress>(aProgress).ptr(),
                               BSTROutConverter(aStateFilePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProgress=%p *aStateFilePath=%ls hrc=%Rhrc\n", this, "InternalMachineControl::beginSavingState", *aProgress, *aStateFilePath, hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::EndSavingState(LONG aResult,
                                                        IN_BSTR aErrMsg)
{
    LogRelFlow(("{%p} %s:enter aResult=%RI32 aErrMsg=%ls\n", this, "InternalMachineControl::endSavingState", aResult, aErrMsg));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = endSavingState(aResult,
                             BSTRInConverter(aErrMsg).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::endSavingState", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::AdoptSavedState(IN_BSTR aSavedStateFile)
{
    LogRelFlow(("{%p} %s:enter aSavedStateFile=%ls\n", this, "InternalMachineControl::adoptSavedState", aSavedStateFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = adoptSavedState(BSTRInConverter(aSavedStateFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::adoptSavedState", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::BeginTakingSnapshot(IConsole *aInitiator,
                                                             IN_BSTR aName,
                                                             IN_BSTR aDescription,
                                                             IProgress *aConsoleProgress,
                                                             BOOL aFTakingSnapshotOnline,
                                                             BSTR *aStateFilePath)
{
    LogRelFlow(("{%p} %s:enter aInitiator=%p aName=%ls aDescription=%ls aConsoleProgress=%p aFTakingSnapshotOnline=%RTbool aStateFilePath=%p\n", this, "InternalMachineControl::beginTakingSnapshot", aInitiator, aName, aDescription, aConsoleProgress, aFTakingSnapshotOnline, aStateFilePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStateFilePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = beginTakingSnapshot(ComTypeInConverter<IConsole>(aInitiator).ptr(),
                                  BSTRInConverter(aName).str(),
                                  BSTRInConverter(aDescription).str(),
                                  ComTypeInConverter<IProgress>(aConsoleProgress).ptr(),
                                  aFTakingSnapshotOnline,
                                  BSTROutConverter(aStateFilePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStateFilePath=%ls hrc=%Rhrc\n", this, "InternalMachineControl::beginTakingSnapshot", *aStateFilePath, hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::EndTakingSnapshot(BOOL aSuccess)
{
    LogRelFlow(("{%p} %s:enter aSuccess=%RTbool\n", this, "InternalMachineControl::endTakingSnapshot", aSuccess));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = endTakingSnapshot(aSuccess);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::endTakingSnapshot", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::DeleteSnapshot(IConsole *aInitiator,
                                                        IN_BSTR aStartId,
                                                        IN_BSTR aEndId,
                                                        BOOL aDeleteAllChildren,
                                                        MachineState_T *aMachineState,
                                                        IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aInitiator=%p aStartId=%ls aEndId=%ls aDeleteAllChildren=%RTbool aMachineState=%p aProgress=%p\n", this, "InternalMachineControl::deleteSnapshot", aInitiator, aStartId, aEndId, aDeleteAllChildren, aMachineState, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachineState);
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = deleteSnapshot(ComTypeInConverter<IConsole>(aInitiator).ptr(),
                             UuidInConverter(aStartId).uuid(),
                             UuidInConverter(aEndId).uuid(),
                             aDeleteAllChildren,
                             aMachineState,
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

    LogRelFlow(("{%p} %s: leave *aMachineState=%RU32 aProgress=%p hrc=%Rhrc\n", this, "InternalMachineControl::deleteSnapshot", *aMachineState, *aProgress, hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::FinishOnlineMergeMedium()
{
    LogRelFlow(("{%p} %s:enter\n", this, "InternalMachineControl::finishOnlineMergeMedium"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = finishOnlineMergeMedium();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::finishOnlineMergeMedium", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::RestoreSnapshot(IConsole *aInitiator,
                                                         ISnapshot *aSnapshot,
                                                         MachineState_T *aMachineState,
                                                         IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aInitiator=%p aSnapshot=%p aMachineState=%p aProgress=%p\n", this, "InternalMachineControl::restoreSnapshot", aInitiator, aSnapshot, aMachineState, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachineState);
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = restoreSnapshot(ComTypeInConverter<IConsole>(aInitiator).ptr(),
                              ComTypeInConverter<ISnapshot>(aSnapshot).ptr(),
                              aMachineState,
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

    LogRelFlow(("{%p} %s: leave *aMachineState=%RU32 aProgress=%p hrc=%Rhrc\n", this, "InternalMachineControl::restoreSnapshot", *aMachineState, *aProgress, hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::PullGuestProperties(ComSafeArrayOut(BSTR, aNames),
                                                             ComSafeArrayOut(BSTR, aValues),
                                                             ComSafeArrayOut(LONG64, aTimestamps),
                                                             ComSafeArrayOut(BSTR, aFlags))
{
    LogRelFlow(("{%p} %s:enter aNames=%p aValues=%p aTimestamps=%p aFlags=%p\n", this, "InternalMachineControl::pullGuestProperties", aNames, aValues, aTimestamps, aFlags));

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

        hrc = pullGuestProperties(ArrayBSTROutConverter(ComSafeArrayOutArg(aNames)).array(),
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

    LogRelFlow(("{%p} %s: leave *aNames=%zu *aValues=%zu *aTimestamps=%zu *aFlags=%zu hrc=%Rhrc\n", this, "InternalMachineControl::pullGuestProperties", ComSafeArraySize(*aNames), ComSafeArraySize(*aValues), ComSafeArraySize(*aTimestamps), ComSafeArraySize(*aFlags), hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::PushGuestProperty(IN_BSTR aName,
                                                           IN_BSTR aValue,
                                                           LONG64 aTimestamp,
                                                           IN_BSTR aFlags)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aValue=%ls aTimestamp=%RI64 aFlags=%ls\n", this, "InternalMachineControl::pushGuestProperty", aName, aValue, aTimestamp, aFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = pushGuestProperty(BSTRInConverter(aName).str(),
                                BSTRInConverter(aValue).str(),
                                aTimestamp,
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::pushGuestProperty", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::LockMedia()
{
    LogRelFlow(("{%p} %s:enter\n", this, "InternalMachineControl::lockMedia"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = lockMedia();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::lockMedia", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::UnlockMedia()
{
    LogRelFlow(("{%p} %s:enter\n", this, "InternalMachineControl::unlockMedia"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = unlockMedia();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::unlockMedia", hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::EjectMedium(IMediumAttachment *aAttachment,
                                                     IMediumAttachment **aNewAttachment)
{
    LogRelFlow(("{%p} %s:enter aAttachment=%p aNewAttachment=%p\n", this, "InternalMachineControl::ejectMedium", aAttachment, aNewAttachment));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNewAttachment);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = ejectMedium(ComTypeInConverter<IMediumAttachment>(aAttachment).ptr(),
                          ComTypeOutConverter<IMediumAttachment>(aNewAttachment).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aNewAttachment=%p hrc=%Rhrc\n", this, "InternalMachineControl::ejectMedium", *aNewAttachment, hrc));
    return hrc;
}

STDMETHODIMP InternalMachineControlWrap::ReportVmStatistics(ULONG aValidStats,
                                                            ULONG aCpuUser,
                                                            ULONG aCpuKernel,
                                                            ULONG aCpuIdle,
                                                            ULONG aMemTotal,
                                                            ULONG aMemFree,
                                                            ULONG aMemBalloon,
                                                            ULONG aMemShared,
                                                            ULONG aMemCache,
                                                            ULONG aPagedTotal,
                                                            ULONG aMemAllocTotal,
                                                            ULONG aMemFreeTotal,
                                                            ULONG aMemBalloonTotal,
                                                            ULONG aMemSharedTotal,
                                                            ULONG aVmNetRx,
                                                            ULONG aVmNetTx)
{
    LogRelFlow(("{%p} %s:enter aValidStats=%RU32 aCpuUser=%RU32 aCpuKernel=%RU32 aCpuIdle=%RU32 aMemTotal=%RU32 aMemFree=%RU32 aMemBalloon=%RU32 aMemShared=%RU32 aMemCache=%RU32 aPagedTotal=%RU32 aMemAllocTotal=%RU32 aMemFreeTotal=%RU32 aMemBalloonTotal=%RU32 aMemSharedTotal=%RU32 aVmNetRx=%RU32 aVmNetTx=%RU32\n", this, "InternalMachineControl::reportVmStatistics", aValidStats, aCpuUser, aCpuKernel, aCpuIdle, aMemTotal, aMemFree, aMemBalloon, aMemShared, aMemCache, aPagedTotal, aMemAllocTotal, aMemFreeTotal, aMemBalloonTotal, aMemSharedTotal, aVmNetRx, aVmNetTx));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = reportVmStatistics(aValidStats,
                                 aCpuUser,
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
                                 aMemSharedTotal,
                                 aVmNetRx,
                                 aVmNetTx);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalMachineControl::reportVmStatistics", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(InternalMachineControlWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(InternalMachineControlWrap, IInternalMachineControl)
#endif // VBOX_WITH_XPCOM
