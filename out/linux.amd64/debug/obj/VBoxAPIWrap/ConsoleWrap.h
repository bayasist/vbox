/** @file
 *
 * VirtualBox API class wrapper header for IConsole.
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

#ifndef ConsoleWrap_H_
#define ConsoleWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ConsoleWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IConsole)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ConsoleWrap, IConsole)
    DECLARE_NOT_AGGREGATABLE(ConsoleWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ConsoleWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IConsole)
        COM_INTERFACE_ENTRY2(IDispatch, IConsole)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ConsoleWrap)

    // public IConsole properties
    STDMETHOD(COMGETTER(Machine))(IMachine **aMachine);
    STDMETHOD(COMGETTER(State))(MachineState_T *aState);
    STDMETHOD(COMGETTER(Guest))(IGuest **aGuest);
    STDMETHOD(COMGETTER(Keyboard))(IKeyboard **aKeyboard);
    STDMETHOD(COMGETTER(Mouse))(IMouse **aMouse);
    STDMETHOD(COMGETTER(Display))(IDisplay **aDisplay);
    STDMETHOD(COMGETTER(Debugger))(IMachineDebugger **aDebugger);
    STDMETHOD(COMGETTER(USBDevices))(ComSafeArrayOut(IUSBDevice *, aUSBDevices));
    STDMETHOD(COMGETTER(RemoteUSBDevices))(ComSafeArrayOut(IHostUSBDevice *, aRemoteUSBDevices));
    STDMETHOD(COMGETTER(SharedFolders))(ComSafeArrayOut(ISharedFolder *, aSharedFolders));
    STDMETHOD(COMGETTER(VRDEServerInfo))(IVRDEServerInfo **aVRDEServerInfo);
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);
    STDMETHOD(COMGETTER(AttachedPCIDevices))(ComSafeArrayOut(IPCIDeviceAttachment *, aAttachedPCIDevices));
    STDMETHOD(COMGETTER(UseHostClipboard))(BOOL *aUseHostClipboard);
    STDMETHOD(COMSETTER(UseHostClipboard))(BOOL aUseHostClipboard);
    STDMETHOD(COMGETTER(EmulatedUSB))(IEmulatedUSB **aEmulatedUSB);

    // public IConsole methods
    STDMETHOD(PowerUp)(IProgress **aProgress);
    STDMETHOD(PowerUpPaused)(IProgress **aProgress);
    STDMETHOD(PowerDown)(IProgress **aProgress);
    STDMETHOD(Reset)();
    STDMETHOD(Pause)();
    STDMETHOD(Resume)();
    STDMETHOD(PowerButton)();
    STDMETHOD(SleepButton)();
    STDMETHOD(GetPowerButtonHandled)(BOOL *aHandled);
    STDMETHOD(GetGuestEnteredACPIMode)(BOOL *aEntered);
    STDMETHOD(SaveState)(IProgress **aProgress);
    STDMETHOD(AdoptSavedState)(IN_BSTR aSavedStateFile);
    STDMETHOD(DiscardSavedState)(BOOL aFRemoveFile);
    STDMETHOD(GetDeviceActivity)(DeviceType_T aType,
                                 DeviceActivity_T *aActivity);
    STDMETHOD(AttachUSBDevice)(IN_BSTR aId);
    STDMETHOD(DetachUSBDevice)(IN_BSTR aId,
                               IUSBDevice **aDevice);
    STDMETHOD(FindUSBDeviceByAddress)(IN_BSTR aName,
                                      IUSBDevice **aDevice);
    STDMETHOD(FindUSBDeviceById)(IN_BSTR aId,
                                 IUSBDevice **aDevice);
    STDMETHOD(CreateSharedFolder)(IN_BSTR aName,
                                  IN_BSTR aHostPath,
                                  BOOL aWritable,
                                  BOOL aAutomount);
    STDMETHOD(RemoveSharedFolder)(IN_BSTR aName);
    STDMETHOD(TakeSnapshot)(IN_BSTR aName,
                            IN_BSTR aDescription,
                            IProgress **aProgress);
    STDMETHOD(DeleteSnapshot)(IN_BSTR aId,
                              IProgress **aProgress);
    STDMETHOD(DeleteSnapshotAndAllChildren)(IN_BSTR aId,
                                            IProgress **aProgress);
    STDMETHOD(DeleteSnapshotRange)(IN_BSTR aStartId,
                                   IN_BSTR aEndId,
                                   IProgress **aProgress);
    STDMETHOD(RestoreSnapshot)(ISnapshot *aSnapshot,
                               IProgress **aProgress);
    STDMETHOD(Teleport)(IN_BSTR aHostname,
                        ULONG aTcpport,
                        IN_BSTR aPassword,
                        ULONG aMaxDowntime,
                        IProgress **aProgress);

private:
    // wrapped IConsole properties
    virtual HRESULT getMachine(ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getState(MachineState_T *aState) = 0;
    virtual HRESULT getGuest(ComPtr<IGuest> &aGuest) = 0;
    virtual HRESULT getKeyboard(ComPtr<IKeyboard> &aKeyboard) = 0;
    virtual HRESULT getMouse(ComPtr<IMouse> &aMouse) = 0;
    virtual HRESULT getDisplay(ComPtr<IDisplay> &aDisplay) = 0;
    virtual HRESULT getDebugger(ComPtr<IMachineDebugger> &aDebugger) = 0;
    virtual HRESULT getUSBDevices(std::vector<ComPtr<IUSBDevice> > &aUSBDevices) = 0;
    virtual HRESULT getRemoteUSBDevices(std::vector<ComPtr<IHostUSBDevice> > &aRemoteUSBDevices) = 0;
    virtual HRESULT getSharedFolders(std::vector<ComPtr<ISharedFolder> > &aSharedFolders) = 0;
    virtual HRESULT getVRDEServerInfo(ComPtr<IVRDEServerInfo> &aVRDEServerInfo) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getAttachedPCIDevices(std::vector<ComPtr<IPCIDeviceAttachment> > &aAttachedPCIDevices) = 0;
    virtual HRESULT getUseHostClipboard(BOOL *aUseHostClipboard) = 0;
    virtual HRESULT setUseHostClipboard(BOOL aUseHostClipboard) = 0;
    virtual HRESULT getEmulatedUSB(ComPtr<IEmulatedUSB> &aEmulatedUSB) = 0;

    // wrapped IConsole methods
    virtual HRESULT powerUp(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT powerUpPaused(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT powerDown(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT reset() = 0;
    virtual HRESULT pause() = 0;
    virtual HRESULT resume() = 0;
    virtual HRESULT powerButton() = 0;
    virtual HRESULT sleepButton() = 0;
    virtual HRESULT getPowerButtonHandled(BOOL *aHandled) = 0;
    virtual HRESULT getGuestEnteredACPIMode(BOOL *aEntered) = 0;
    virtual HRESULT saveState(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT adoptSavedState(const com::Utf8Str &aSavedStateFile) = 0;
    virtual HRESULT discardSavedState(BOOL aFRemoveFile) = 0;
    virtual HRESULT getDeviceActivity(DeviceType_T aType,
                                      DeviceActivity_T *aActivity) = 0;
    virtual HRESULT attachUSBDevice(const com::Guid &aId) = 0;
    virtual HRESULT detachUSBDevice(const com::Guid &aId,
                                    ComPtr<IUSBDevice> &aDevice) = 0;
    virtual HRESULT findUSBDeviceByAddress(const com::Utf8Str &aName,
                                           ComPtr<IUSBDevice> &aDevice) = 0;
    virtual HRESULT findUSBDeviceById(const com::Guid &aId,
                                      ComPtr<IUSBDevice> &aDevice) = 0;
    virtual HRESULT createSharedFolder(const com::Utf8Str &aName,
                                       const com::Utf8Str &aHostPath,
                                       BOOL aWritable,
                                       BOOL aAutomount) = 0;
    virtual HRESULT removeSharedFolder(const com::Utf8Str &aName) = 0;
    virtual HRESULT takeSnapshot(const com::Utf8Str &aName,
                                 const com::Utf8Str &aDescription,
                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteSnapshot(const com::Guid &aId,
                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteSnapshotAndAllChildren(const com::Guid &aId,
                                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteSnapshotRange(const com::Guid &aStartId,
                                        const com::Guid &aEndId,
                                        ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT restoreSnapshot(const ComPtr<ISnapshot> &aSnapshot,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT teleport(const com::Utf8Str &aHostname,
                             ULONG aTcpport,
                             const com::Utf8Str &aPassword,
                             ULONG aMaxDowntime,
                             ComPtr<IProgress> &aProgress) = 0;
};

#endif // !ConsoleWrap_H_
