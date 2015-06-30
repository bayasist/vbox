/** @file
 *
 * VirtualBox API class wrapper header for IInternalSessionControl.
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

#ifndef InternalSessionControlWrap_H_
#define InternalSessionControlWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE InternalSessionControlWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IInternalSessionControl)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(InternalSessionControlWrap, IInternalSessionControl)
    DECLARE_NOT_AGGREGATABLE(InternalSessionControlWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(InternalSessionControlWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IInternalSessionControl)
        COM_INTERFACE_ENTRY2(IDispatch, IInternalSessionControl)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(InternalSessionControlWrap)

    // public IInternalSessionControl properties

    // public IInternalSessionControl methods
    STDMETHOD(GetPID)(ULONG *aPid);
    STDMETHOD(GetRemoteConsole)(IConsole **aConsole);
    STDMETHOD(AssignRemoteMachine)(IMachine *aMachine,
                                   IConsole *aConsole);
    STDMETHOD(UpdateMachineState)(MachineState_T aMachineState);
    STDMETHOD(Uninitialize)();
    STDMETHOD(OnNetworkAdapterChange)(INetworkAdapter *aNetworkAdapter,
                                      BOOL aChangeAdapter);
    STDMETHOD(OnSerialPortChange)(ISerialPort *aSerialPort);
    STDMETHOD(OnParallelPortChange)(IParallelPort *aParallelPort);
    STDMETHOD(OnStorageControllerChange)();
    STDMETHOD(OnMediumChange)(IMediumAttachment *aMediumAttachment,
                              BOOL aForce);
    STDMETHOD(OnStorageDeviceChange)(IMediumAttachment *aMediumAttachment,
                                     BOOL aRemove,
                                     BOOL aSilent);
    STDMETHOD(OnClipboardModeChange)(ClipboardMode_T aClipboardMode);
    STDMETHOD(OnDragAndDropModeChange)(DragAndDropMode_T aDragAndDropMode);
    STDMETHOD(OnCPUChange)(ULONG aCpu,
                           BOOL aAdd);
    STDMETHOD(OnCPUExecutionCapChange)(ULONG aExecutionCap);
    STDMETHOD(OnVRDEServerChange)(BOOL aRestart);
    STDMETHOD(OnVideoCaptureChange)();
    STDMETHOD(OnUSBControllerChange)();
    STDMETHOD(OnSharedFolderChange)(BOOL aGlobal);
    STDMETHOD(OnUSBDeviceAttach)(IUSBDevice *aDevice,
                                 IVirtualBoxErrorInfo *aError,
                                 ULONG aMaskedInterfaces);
    STDMETHOD(OnUSBDeviceDetach)(IN_BSTR aId,
                                 IVirtualBoxErrorInfo *aError);
    STDMETHOD(OnShowWindow)(BOOL aCheck,
                            BOOL *aCanShow,
                            LONG64 *aWinId);
    STDMETHOD(OnBandwidthGroupChange)(IBandwidthGroup *aBandwidthGroup);
    STDMETHOD(AccessGuestProperty)(IN_BSTR aName,
                                   IN_BSTR aValue,
                                   IN_BSTR aFlags,
                                   BOOL aIsSetter,
                                   BSTR *aRetValue,
                                   LONG64 *aRetTimestamp,
                                   BSTR *aRetFlags);
    STDMETHOD(EnumerateGuestProperties)(IN_BSTR aPatterns,
                                        ComSafeArrayOut(BSTR, aKeys),
                                        ComSafeArrayOut(BSTR, aValues),
                                        ComSafeArrayOut(LONG64, aTimestamps),
                                        ComSafeArrayOut(BSTR, aFlags));
    STDMETHOD(OnlineMergeMedium)(IMediumAttachment *aMediumAttachment,
                                 ULONG aSourceIdx,
                                 ULONG aTargetIdx,
                                 IProgress *aProgress);
    STDMETHOD(EnableVMMStatistics)(BOOL aEnable);
    STDMETHOD(PauseWithReason)(Reason_T aReason);
    STDMETHOD(ResumeWithReason)(Reason_T aReason);
    STDMETHOD(SaveStateWithReason)(Reason_T aReason,
                                   IProgress **aProgress);

private:
    // wrapped IInternalSessionControl properties

    // wrapped IInternalSessionControl methods
    virtual HRESULT getPID(ULONG *aPid) = 0;
    virtual HRESULT getRemoteConsole(ComPtr<IConsole> &aConsole) = 0;
    virtual HRESULT assignRemoteMachine(const ComPtr<IMachine> &aMachine,
                                        const ComPtr<IConsole> &aConsole) = 0;
    virtual HRESULT updateMachineState(MachineState_T aMachineState) = 0;
    virtual HRESULT uninitialize() = 0;
    virtual HRESULT onNetworkAdapterChange(const ComPtr<INetworkAdapter> &aNetworkAdapter,
                                           BOOL aChangeAdapter) = 0;
    virtual HRESULT onSerialPortChange(const ComPtr<ISerialPort> &aSerialPort) = 0;
    virtual HRESULT onParallelPortChange(const ComPtr<IParallelPort> &aParallelPort) = 0;
    virtual HRESULT onStorageControllerChange() = 0;
    virtual HRESULT onMediumChange(const ComPtr<IMediumAttachment> &aMediumAttachment,
                                   BOOL aForce) = 0;
    virtual HRESULT onStorageDeviceChange(const ComPtr<IMediumAttachment> &aMediumAttachment,
                                          BOOL aRemove,
                                          BOOL aSilent) = 0;
    virtual HRESULT onClipboardModeChange(ClipboardMode_T aClipboardMode) = 0;
    virtual HRESULT onDragAndDropModeChange(DragAndDropMode_T aDragAndDropMode) = 0;
    virtual HRESULT onCPUChange(ULONG aCpu,
                                BOOL aAdd) = 0;
    virtual HRESULT onCPUExecutionCapChange(ULONG aExecutionCap) = 0;
    virtual HRESULT onVRDEServerChange(BOOL aRestart) = 0;
    virtual HRESULT onVideoCaptureChange() = 0;
    virtual HRESULT onUSBControllerChange() = 0;
    virtual HRESULT onSharedFolderChange(BOOL aGlobal) = 0;
    virtual HRESULT onUSBDeviceAttach(const ComPtr<IUSBDevice> &aDevice,
                                      const ComPtr<IVirtualBoxErrorInfo> &aError,
                                      ULONG aMaskedInterfaces) = 0;
    virtual HRESULT onUSBDeviceDetach(const com::Guid &aId,
                                      const ComPtr<IVirtualBoxErrorInfo> &aError) = 0;
    virtual HRESULT onShowWindow(BOOL aCheck,
                                 BOOL *aCanShow,
                                 LONG64 *aWinId) = 0;
    virtual HRESULT onBandwidthGroupChange(const ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    virtual HRESULT accessGuestProperty(const com::Utf8Str &aName,
                                        const com::Utf8Str &aValue,
                                        const com::Utf8Str &aFlags,
                                        BOOL aIsSetter,
                                        com::Utf8Str &aRetValue,
                                        LONG64 *aRetTimestamp,
                                        com::Utf8Str &aRetFlags) = 0;
    virtual HRESULT enumerateGuestProperties(const com::Utf8Str &aPatterns,
                                             std::vector<com::Utf8Str> &aKeys,
                                             std::vector<com::Utf8Str> &aValues,
                                             std::vector<LONG64> &aTimestamps,
                                             std::vector<com::Utf8Str> &aFlags) = 0;
    virtual HRESULT onlineMergeMedium(const ComPtr<IMediumAttachment> &aMediumAttachment,
                                      ULONG aSourceIdx,
                                      ULONG aTargetIdx,
                                      const ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT enableVMMStatistics(BOOL aEnable) = 0;
    virtual HRESULT pauseWithReason(Reason_T aReason) = 0;
    virtual HRESULT resumeWithReason(Reason_T aReason) = 0;
    virtual HRESULT saveStateWithReason(Reason_T aReason,
                                        ComPtr<IProgress> &aProgress) = 0;
};

#endif // !InternalSessionControlWrap_H_
