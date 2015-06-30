/** @file
 *
 * VirtualBox API class wrapper code for IInternalSessionControl.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_INTERNALSESSIONCONTROL

#include "InternalSessionControlWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(InternalSessionControlWrap)

//
// IInternalSessionControl properties
//

//
// IInternalSessionControl methods
//

STDMETHODIMP InternalSessionControlWrap::GetPID(ULONG *aPid)
{
    LogRelFlow(("{%p} %s:enter aPid=%p\n", this, "InternalSessionControl::getPID", aPid));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPid);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPID(aPid);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aPid=%RU32 hrc=%Rhrc\n", this, "InternalSessionControl::getPID", *aPid, hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::GetRemoteConsole(IConsole **aConsole)
{
    LogRelFlow(("{%p} %s:enter aConsole=%p\n", this, "InternalSessionControl::getRemoteConsole", aConsole));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aConsole);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRemoteConsole(ComTypeOutConverter<IConsole>(aConsole).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aConsole=%p hrc=%Rhrc\n", this, "InternalSessionControl::getRemoteConsole", *aConsole, hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::AssignRemoteMachine(IMachine *aMachine,
                                                             IConsole *aConsole)
{
    LogRelFlow(("{%p} %s:enter aMachine=%p aConsole=%p\n", this, "InternalSessionControl::assignRemoteMachine", aMachine, aConsole));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = assignRemoteMachine(ComTypeInConverter<IMachine>(aMachine).ptr(),
                                  ComTypeInConverter<IConsole>(aConsole).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::assignRemoteMachine", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::UpdateMachineState(MachineState_T aMachineState)
{
    LogRelFlow(("{%p} %s:enter aMachineState=%RU32\n", this, "InternalSessionControl::updateMachineState", aMachineState));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = updateMachineState(aMachineState);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::updateMachineState", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::Uninitialize()
{
    LogRelFlow(("{%p} %s:enter\n", this, "InternalSessionControl::uninitialize"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = uninitialize();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::uninitialize", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnNetworkAdapterChange(INetworkAdapter *aNetworkAdapter,
                                                                BOOL aChangeAdapter)
{
    LogRelFlow(("{%p} %s:enter aNetworkAdapter=%p aChangeAdapter=%RTbool\n", this, "InternalSessionControl::onNetworkAdapterChange", aNetworkAdapter, aChangeAdapter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onNetworkAdapterChange(ComTypeInConverter<INetworkAdapter>(aNetworkAdapter).ptr(),
                                     aChangeAdapter);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onNetworkAdapterChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnSerialPortChange(ISerialPort *aSerialPort)
{
    LogRelFlow(("{%p} %s:enter aSerialPort=%p\n", this, "InternalSessionControl::onSerialPortChange", aSerialPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onSerialPortChange(ComTypeInConverter<ISerialPort>(aSerialPort).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onSerialPortChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnParallelPortChange(IParallelPort *aParallelPort)
{
    LogRelFlow(("{%p} %s:enter aParallelPort=%p\n", this, "InternalSessionControl::onParallelPortChange", aParallelPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onParallelPortChange(ComTypeInConverter<IParallelPort>(aParallelPort).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onParallelPortChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnStorageControllerChange()
{
    LogRelFlow(("{%p} %s:enter\n", this, "InternalSessionControl::onStorageControllerChange"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onStorageControllerChange();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onStorageControllerChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnMediumChange(IMediumAttachment *aMediumAttachment,
                                                        BOOL aForce)
{
    LogRelFlow(("{%p} %s:enter aMediumAttachment=%p aForce=%RTbool\n", this, "InternalSessionControl::onMediumChange", aMediumAttachment, aForce));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onMediumChange(ComTypeInConverter<IMediumAttachment>(aMediumAttachment).ptr(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onMediumChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnStorageDeviceChange(IMediumAttachment *aMediumAttachment,
                                                               BOOL aRemove,
                                                               BOOL aSilent)
{
    LogRelFlow(("{%p} %s:enter aMediumAttachment=%p aRemove=%RTbool aSilent=%RTbool\n", this, "InternalSessionControl::onStorageDeviceChange", aMediumAttachment, aRemove, aSilent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onStorageDeviceChange(ComTypeInConverter<IMediumAttachment>(aMediumAttachment).ptr(),
                                    aRemove,
                                    aSilent);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onStorageDeviceChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnClipboardModeChange(ClipboardMode_T aClipboardMode)
{
    LogRelFlow(("{%p} %s:enter aClipboardMode=%RU32\n", this, "InternalSessionControl::onClipboardModeChange", aClipboardMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onClipboardModeChange(aClipboardMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onClipboardModeChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnDragAndDropModeChange(DragAndDropMode_T aDragAndDropMode)
{
    LogRelFlow(("{%p} %s:enter aDragAndDropMode=%RU32\n", this, "InternalSessionControl::onDragAndDropModeChange", aDragAndDropMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onDragAndDropModeChange(aDragAndDropMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onDragAndDropModeChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnCPUChange(ULONG aCpu,
                                                     BOOL aAdd)
{
    LogRelFlow(("{%p} %s:enter aCpu=%RU32 aAdd=%RTbool\n", this, "InternalSessionControl::onCPUChange", aCpu, aAdd));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onCPUChange(aCpu,
                          aAdd);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onCPUChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnCPUExecutionCapChange(ULONG aExecutionCap)
{
    LogRelFlow(("{%p} %s:enter aExecutionCap=%RU32\n", this, "InternalSessionControl::onCPUExecutionCapChange", aExecutionCap));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onCPUExecutionCapChange(aExecutionCap);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onCPUExecutionCapChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnVRDEServerChange(BOOL aRestart)
{
    LogRelFlow(("{%p} %s:enter aRestart=%RTbool\n", this, "InternalSessionControl::onVRDEServerChange", aRestart));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onVRDEServerChange(aRestart);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onVRDEServerChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnVideoCaptureChange()
{
    LogRelFlow(("{%p} %s:enter\n", this, "InternalSessionControl::onVideoCaptureChange"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onVideoCaptureChange();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onVideoCaptureChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnUSBControllerChange()
{
    LogRelFlow(("{%p} %s:enter\n", this, "InternalSessionControl::onUSBControllerChange"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onUSBControllerChange();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onUSBControllerChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnSharedFolderChange(BOOL aGlobal)
{
    LogRelFlow(("{%p} %s:enter aGlobal=%RTbool\n", this, "InternalSessionControl::onSharedFolderChange", aGlobal));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onSharedFolderChange(aGlobal);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onSharedFolderChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnUSBDeviceAttach(IUSBDevice *aDevice,
                                                           IVirtualBoxErrorInfo *aError,
                                                           ULONG aMaskedInterfaces)
{
    LogRelFlow(("{%p} %s:enter aDevice=%p aError=%p aMaskedInterfaces=%RU32\n", this, "InternalSessionControl::onUSBDeviceAttach", aDevice, aError, aMaskedInterfaces));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onUSBDeviceAttach(ComTypeInConverter<IUSBDevice>(aDevice).ptr(),
                                ComTypeInConverter<IVirtualBoxErrorInfo>(aError).ptr(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onUSBDeviceAttach", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnUSBDeviceDetach(IN_BSTR aId,
                                                           IVirtualBoxErrorInfo *aError)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aError=%p\n", this, "InternalSessionControl::onUSBDeviceDetach", aId, aError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onUSBDeviceDetach(UuidInConverter(aId).uuid(),
                                ComTypeInConverter<IVirtualBoxErrorInfo>(aError).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onUSBDeviceDetach", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnShowWindow(BOOL aCheck,
                                                      BOOL *aCanShow,
                                                      LONG64 *aWinId)
{
    LogRelFlow(("{%p} %s:enter aCheck=%RTbool aCanShow=%p aWinId=%p\n", this, "InternalSessionControl::onShowWindow", aCheck, aCanShow, aWinId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCanShow);
        CheckComArgOutPointerValidThrow(aWinId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onShowWindow(aCheck,
                           aCanShow,
                           aWinId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCanShow=%RTbool *aWinId=%RI64 hrc=%Rhrc\n", this, "InternalSessionControl::onShowWindow", *aCanShow, *aWinId, hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnBandwidthGroupChange(IBandwidthGroup *aBandwidthGroup)
{
    LogRelFlow(("{%p} %s:enter aBandwidthGroup=%p\n", this, "InternalSessionControl::onBandwidthGroupChange", aBandwidthGroup));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onBandwidthGroupChange(ComTypeInConverter<IBandwidthGroup>(aBandwidthGroup).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onBandwidthGroupChange", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::AccessGuestProperty(IN_BSTR aName,
                                                             IN_BSTR aValue,
                                                             IN_BSTR aFlags,
                                                             BOOL aIsSetter,
                                                             BSTR *aRetValue,
                                                             LONG64 *aRetTimestamp,
                                                             BSTR *aRetFlags)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aValue=%ls aFlags=%ls aIsSetter=%RTbool aRetValue=%p aRetTimestamp=%p aRetFlags=%p\n", this, "InternalSessionControl::accessGuestProperty", aName, aValue, aFlags, aIsSetter, aRetValue, aRetTimestamp, aRetFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRetValue);
        CheckComArgOutPointerValidThrow(aRetTimestamp);
        CheckComArgOutPointerValidThrow(aRetFlags);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = accessGuestProperty(BSTRInConverter(aName).str(),
                                  BSTRInConverter(aValue).str(),
                                  BSTRInConverter(aFlags).str(),
                                  aIsSetter,
                                  BSTROutConverter(aRetValue).str(),
                                  aRetTimestamp,
                                  BSTROutConverter(aRetFlags).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRetValue=%ls *aRetTimestamp=%RI64 *aRetFlags=%ls hrc=%Rhrc\n", this, "InternalSessionControl::accessGuestProperty", *aRetValue, *aRetTimestamp, *aRetFlags, hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::EnumerateGuestProperties(IN_BSTR aPatterns,
                                                                  ComSafeArrayOut(BSTR, aKeys),
                                                                  ComSafeArrayOut(BSTR, aValues),
                                                                  ComSafeArrayOut(LONG64, aTimestamps),
                                                                  ComSafeArrayOut(BSTR, aFlags))
{
    LogRelFlow(("{%p} %s:enter aPatterns=%ls aKeys=%p aValues=%p aTimestamps=%p aFlags=%p\n", this, "InternalSessionControl::enumerateGuestProperties", aPatterns, aKeys, aValues, aTimestamps, aFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aKeys);
        CheckComArgOutPointerValidThrow(aValues);
        CheckComArgOutPointerValidThrow(aTimestamps);
        CheckComArgOutPointerValidThrow(aFlags);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = enumerateGuestProperties(BSTRInConverter(aPatterns).str(),
                                       ArrayBSTROutConverter(ComSafeArrayOutArg(aKeys)).array(),
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

    LogRelFlow(("{%p} %s: leave *aKeys=%zu *aValues=%zu *aTimestamps=%zu *aFlags=%zu hrc=%Rhrc\n", this, "InternalSessionControl::enumerateGuestProperties", ComSafeArraySize(*aKeys), ComSafeArraySize(*aValues), ComSafeArraySize(*aTimestamps), ComSafeArraySize(*aFlags), hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::OnlineMergeMedium(IMediumAttachment *aMediumAttachment,
                                                           ULONG aSourceIdx,
                                                           ULONG aTargetIdx,
                                                           IProgress *aProgress)
{
    LogRelFlow(("{%p} %s:enter aMediumAttachment=%p aSourceIdx=%RU32 aTargetIdx=%RU32 aProgress=%p\n", this, "InternalSessionControl::onlineMergeMedium", aMediumAttachment, aSourceIdx, aTargetIdx, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = onlineMergeMedium(ComTypeInConverter<IMediumAttachment>(aMediumAttachment).ptr(),
                                aSourceIdx,
                                aTargetIdx,
                                ComTypeInConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::onlineMergeMedium", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::EnableVMMStatistics(BOOL aEnable)
{
    LogRelFlow(("{%p} %s:enter aEnable=%RTbool\n", this, "InternalSessionControl::enableVMMStatistics", aEnable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = enableVMMStatistics(aEnable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::enableVMMStatistics", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::PauseWithReason(Reason_T aReason)
{
    LogRelFlow(("{%p} %s:enter aReason=%RU32\n", this, "InternalSessionControl::pauseWithReason", aReason));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = pauseWithReason(aReason);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::pauseWithReason", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::ResumeWithReason(Reason_T aReason)
{
    LogRelFlow(("{%p} %s:enter aReason=%RU32\n", this, "InternalSessionControl::resumeWithReason", aReason));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = resumeWithReason(aReason);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "InternalSessionControl::resumeWithReason", hrc));
    return hrc;
}

STDMETHODIMP InternalSessionControlWrap::SaveStateWithReason(Reason_T aReason,
                                                             IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aReason=%RU32 aProgress=%p\n", this, "InternalSessionControl::saveStateWithReason", aReason, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = saveStateWithReason(aReason,
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "InternalSessionControl::saveStateWithReason", *aProgress, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(InternalSessionControlWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(InternalSessionControlWrap, IInternalSessionControl)
#endif // VBOX_WITH_XPCOM
