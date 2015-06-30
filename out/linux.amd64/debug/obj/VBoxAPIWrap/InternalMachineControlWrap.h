/** @file
 *
 * VirtualBox API class wrapper header for IInternalMachineControl.
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

#ifndef InternalMachineControlWrap_H_
#define InternalMachineControlWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE InternalMachineControlWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IInternalMachineControl)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(InternalMachineControlWrap, IInternalMachineControl)
    DECLARE_NOT_AGGREGATABLE(InternalMachineControlWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(InternalMachineControlWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IInternalMachineControl)
        COM_INTERFACE_ENTRY2(IDispatch, IInternalMachineControl)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(InternalMachineControlWrap)

    // public IInternalMachineControl properties

    // public IInternalMachineControl methods
    STDMETHOD(SetRemoveSavedStateFile)(BOOL aRemove);
    STDMETHOD(UpdateState)(MachineState_T aState);
    STDMETHOD(BeginPowerUp)(IProgress *aProgress);
    STDMETHOD(EndPowerUp)(LONG aResult);
    STDMETHOD(BeginPoweringDown)(IProgress **aProgress);
    STDMETHOD(EndPoweringDown)(LONG aResult,
                               IN_BSTR aErrMsg);
    STDMETHOD(RunUSBDeviceFilters)(IUSBDevice *aDevice,
                                   BOOL *aMatched,
                                   ULONG *aMaskedInterfaces);
    STDMETHOD(CaptureUSBDevice)(IN_BSTR aId);
    STDMETHOD(DetachUSBDevice)(IN_BSTR aId,
                               BOOL aDone);
    STDMETHOD(AutoCaptureUSBDevices)();
    STDMETHOD(DetachAllUSBDevices)(BOOL aDone);
    STDMETHOD(OnSessionEnd)(ISession *aSession,
                            IProgress **aProgress);
    STDMETHOD(BeginSavingState)(IProgress **aProgress,
                                BSTR *aStateFilePath);
    STDMETHOD(EndSavingState)(LONG aResult,
                              IN_BSTR aErrMsg);
    STDMETHOD(AdoptSavedState)(IN_BSTR aSavedStateFile);
    STDMETHOD(BeginTakingSnapshot)(IConsole *aInitiator,
                                   IN_BSTR aName,
                                   IN_BSTR aDescription,
                                   IProgress *aConsoleProgress,
                                   BOOL aFTakingSnapshotOnline,
                                   BSTR *aStateFilePath);
    STDMETHOD(EndTakingSnapshot)(BOOL aSuccess);
    STDMETHOD(DeleteSnapshot)(IConsole *aInitiator,
                              IN_BSTR aStartId,
                              IN_BSTR aEndId,
                              BOOL aDeleteAllChildren,
                              MachineState_T *aMachineState,
                              IProgress **aProgress);
    STDMETHOD(FinishOnlineMergeMedium)();
    STDMETHOD(RestoreSnapshot)(IConsole *aInitiator,
                               ISnapshot *aSnapshot,
                               MachineState_T *aMachineState,
                               IProgress **aProgress);
    STDMETHOD(PullGuestProperties)(ComSafeArrayOut(BSTR, aNames),
                                   ComSafeArrayOut(BSTR, aValues),
                                   ComSafeArrayOut(LONG64, aTimestamps),
                                   ComSafeArrayOut(BSTR, aFlags));
    STDMETHOD(PushGuestProperty)(IN_BSTR aName,
                                 IN_BSTR aValue,
                                 LONG64 aTimestamp,
                                 IN_BSTR aFlags);
    STDMETHOD(LockMedia)();
    STDMETHOD(UnlockMedia)();
    STDMETHOD(EjectMedium)(IMediumAttachment *aAttachment,
                           IMediumAttachment **aNewAttachment);
    STDMETHOD(ReportVmStatistics)(ULONG aValidStats,
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
                                  ULONG aVmNetTx);

private:
    // wrapped IInternalMachineControl properties

    // wrapped IInternalMachineControl methods
    virtual HRESULT setRemoveSavedStateFile(BOOL aRemove) = 0;
    virtual HRESULT updateState(MachineState_T aState) = 0;
    virtual HRESULT beginPowerUp(const ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT endPowerUp(LONG aResult) = 0;
    virtual HRESULT beginPoweringDown(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT endPoweringDown(LONG aResult,
                                    const com::Utf8Str &aErrMsg) = 0;
    virtual HRESULT runUSBDeviceFilters(const ComPtr<IUSBDevice> &aDevice,
                                        BOOL *aMatched,
                                        ULONG *aMaskedInterfaces) = 0;
    virtual HRESULT captureUSBDevice(const com::Guid &aId) = 0;
    virtual HRESULT detachUSBDevice(const com::Guid &aId,
                                    BOOL aDone) = 0;
    virtual HRESULT autoCaptureUSBDevices() = 0;
    virtual HRESULT detachAllUSBDevices(BOOL aDone) = 0;
    virtual HRESULT onSessionEnd(const ComPtr<ISession> &aSession,
                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT beginSavingState(ComPtr<IProgress> &aProgress,
                                     com::Utf8Str &aStateFilePath) = 0;
    virtual HRESULT endSavingState(LONG aResult,
                                   const com::Utf8Str &aErrMsg) = 0;
    virtual HRESULT adoptSavedState(const com::Utf8Str &aSavedStateFile) = 0;
    virtual HRESULT beginTakingSnapshot(const ComPtr<IConsole> &aInitiator,
                                        const com::Utf8Str &aName,
                                        const com::Utf8Str &aDescription,
                                        const ComPtr<IProgress> &aConsoleProgress,
                                        BOOL aFTakingSnapshotOnline,
                                        com::Utf8Str &aStateFilePath) = 0;
    virtual HRESULT endTakingSnapshot(BOOL aSuccess) = 0;
    virtual HRESULT deleteSnapshot(const ComPtr<IConsole> &aInitiator,
                                   const com::Guid &aStartId,
                                   const com::Guid &aEndId,
                                   BOOL aDeleteAllChildren,
                                   MachineState_T *aMachineState,
                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT finishOnlineMergeMedium() = 0;
    virtual HRESULT restoreSnapshot(const ComPtr<IConsole> &aInitiator,
                                    const ComPtr<ISnapshot> &aSnapshot,
                                    MachineState_T *aMachineState,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT pullGuestProperties(std::vector<com::Utf8Str> &aNames,
                                        std::vector<com::Utf8Str> &aValues,
                                        std::vector<LONG64> &aTimestamps,
                                        std::vector<com::Utf8Str> &aFlags) = 0;
    virtual HRESULT pushGuestProperty(const com::Utf8Str &aName,
                                      const com::Utf8Str &aValue,
                                      LONG64 aTimestamp,
                                      const com::Utf8Str &aFlags) = 0;
    virtual HRESULT lockMedia() = 0;
    virtual HRESULT unlockMedia() = 0;
    virtual HRESULT ejectMedium(const ComPtr<IMediumAttachment> &aAttachment,
                                ComPtr<IMediumAttachment> &aNewAttachment) = 0;
    virtual HRESULT reportVmStatistics(ULONG aValidStats,
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
                                       ULONG aVmNetTx) = 0;
};

#endif // !InternalMachineControlWrap_H_
