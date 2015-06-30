/** @file
 *
 * VirtualBox API class wrapper code for IConsole.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_CONSOLE

#include "ConsoleWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ConsoleWrap)

//
// IConsole properties
//

STDMETHODIMP ConsoleWrap::COMGETTER(Machine)(IMachine **aMachine)
{
    LogRelFlow(("{%p} %s: enter aMachine=%p\n", this, "Console::getMachine", aMachine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachine);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachine(ComTypeOutConverter<IMachine>(aMachine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachine=%p hrc=%Rhrc\n", this, "Console::getMachine", *aMachine, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(State)(MachineState_T *aState)
{
    LogRelFlow(("{%p} %s: enter aState=%p\n", this, "Console::getState", aState));

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

    LogRelFlow(("{%p} %s: leave *aState=%RU32 hrc=%Rhrc\n", this, "Console::getState", *aState, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(Guest)(IGuest **aGuest)
{
    LogRelFlow(("{%p} %s: enter aGuest=%p\n", this, "Console::getGuest", aGuest));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuest);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuest(ComTypeOutConverter<IGuest>(aGuest).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGuest=%p hrc=%Rhrc\n", this, "Console::getGuest", *aGuest, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(Keyboard)(IKeyboard **aKeyboard)
{
    LogRelFlow(("{%p} %s: enter aKeyboard=%p\n", this, "Console::getKeyboard", aKeyboard));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aKeyboard);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getKeyboard(ComTypeOutConverter<IKeyboard>(aKeyboard).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aKeyboard=%p hrc=%Rhrc\n", this, "Console::getKeyboard", *aKeyboard, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(Mouse)(IMouse **aMouse)
{
    LogRelFlow(("{%p} %s: enter aMouse=%p\n", this, "Console::getMouse", aMouse));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMouse);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMouse(ComTypeOutConverter<IMouse>(aMouse).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMouse=%p hrc=%Rhrc\n", this, "Console::getMouse", *aMouse, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(Display)(IDisplay **aDisplay)
{
    LogRelFlow(("{%p} %s: enter aDisplay=%p\n", this, "Console::getDisplay", aDisplay));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDisplay);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDisplay(ComTypeOutConverter<IDisplay>(aDisplay).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDisplay=%p hrc=%Rhrc\n", this, "Console::getDisplay", *aDisplay, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(Debugger)(IMachineDebugger **aDebugger)
{
    LogRelFlow(("{%p} %s: enter aDebugger=%p\n", this, "Console::getDebugger", aDebugger));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDebugger);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDebugger(ComTypeOutConverter<IMachineDebugger>(aDebugger).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDebugger=%p hrc=%Rhrc\n", this, "Console::getDebugger", *aDebugger, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(USBDevices)(ComSafeArrayOut(IUSBDevice *, aUSBDevices))
{
    LogRelFlow(("{%p} %s: enter aUSBDevices=%p\n", this, "Console::getUSBDevices", aUSBDevices));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUSBDevices);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBDevices(ArrayComTypeOutConverter<IUSBDevice>(ComSafeArrayOutArg(aUSBDevices)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUSBDevices=%zu hrc=%Rhrc\n", this, "Console::getUSBDevices", ComSafeArraySize(*aUSBDevices), hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(RemoteUSBDevices)(ComSafeArrayOut(IHostUSBDevice *, aRemoteUSBDevices))
{
    LogRelFlow(("{%p} %s: enter aRemoteUSBDevices=%p\n", this, "Console::getRemoteUSBDevices", aRemoteUSBDevices));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRemoteUSBDevices);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRemoteUSBDevices(ArrayComTypeOutConverter<IHostUSBDevice>(ComSafeArrayOutArg(aRemoteUSBDevices)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRemoteUSBDevices=%zu hrc=%Rhrc\n", this, "Console::getRemoteUSBDevices", ComSafeArraySize(*aRemoteUSBDevices), hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(SharedFolders)(ComSafeArrayOut(ISharedFolder *, aSharedFolders))
{
    LogRelFlow(("{%p} %s: enter aSharedFolders=%p\n", this, "Console::getSharedFolders", aSharedFolders));

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

    LogRelFlow(("{%p} %s: leave *aSharedFolders=%zu hrc=%Rhrc\n", this, "Console::getSharedFolders", ComSafeArraySize(*aSharedFolders), hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(VRDEServerInfo)(IVRDEServerInfo **aVRDEServerInfo)
{
    LogRelFlow(("{%p} %s: enter aVRDEServerInfo=%p\n", this, "Console::getVRDEServerInfo", aVRDEServerInfo));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVRDEServerInfo);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVRDEServerInfo(ComTypeOutConverter<IVRDEServerInfo>(aVRDEServerInfo).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVRDEServerInfo=%p hrc=%Rhrc\n", this, "Console::getVRDEServerInfo", *aVRDEServerInfo, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "Console::getEventSource", aEventSource));

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

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "Console::getEventSource", *aEventSource, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(AttachedPCIDevices)(ComSafeArrayOut(IPCIDeviceAttachment *, aAttachedPCIDevices))
{
    LogRelFlow(("{%p} %s: enter aAttachedPCIDevices=%p\n", this, "Console::getAttachedPCIDevices", aAttachedPCIDevices));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAttachedPCIDevices);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAttachedPCIDevices(ArrayComTypeOutConverter<IPCIDeviceAttachment>(ComSafeArrayOutArg(aAttachedPCIDevices)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAttachedPCIDevices=%zu hrc=%Rhrc\n", this, "Console::getAttachedPCIDevices", ComSafeArraySize(*aAttachedPCIDevices), hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(UseHostClipboard)(BOOL *aUseHostClipboard)
{
    LogRelFlow(("{%p} %s: enter aUseHostClipboard=%p\n", this, "Console::getUseHostClipboard", aUseHostClipboard));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUseHostClipboard);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUseHostClipboard(aUseHostClipboard);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUseHostClipboard=%RTbool hrc=%Rhrc\n", this, "Console::getUseHostClipboard", *aUseHostClipboard, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMSETTER(UseHostClipboard)(BOOL aUseHostClipboard)
{
    LogRelFlow(("{%p} %s: enter aUseHostClipboard=%RTbool\n", this, "Console::setUseHostClipboard", aUseHostClipboard));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setUseHostClipboard(aUseHostClipboard);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::setUseHostClipboard", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::COMGETTER(EmulatedUSB)(IEmulatedUSB **aEmulatedUSB)
{
    LogRelFlow(("{%p} %s: enter aEmulatedUSB=%p\n", this, "Console::getEmulatedUSB", aEmulatedUSB));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEmulatedUSB);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEmulatedUSB(ComTypeOutConverter<IEmulatedUSB>(aEmulatedUSB).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEmulatedUSB=%p hrc=%Rhrc\n", this, "Console::getEmulatedUSB", *aEmulatedUSB, hrc));
    return hrc;
}

//
// IConsole methods
//

STDMETHODIMP ConsoleWrap::PowerUp(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "Console::powerUp", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = powerUp(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::powerUp", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::PowerUpPaused(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "Console::powerUpPaused", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = powerUpPaused(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::powerUpPaused", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::PowerDown(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "Console::powerDown", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = powerDown(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::powerDown", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::Reset()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Console::reset"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = reset();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::reset", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::Pause()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Console::pause"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = pause();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::pause", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::Resume()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Console::resume"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = resume();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::resume", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::PowerButton()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Console::powerButton"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = powerButton();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::powerButton", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::SleepButton()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Console::sleepButton"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = sleepButton();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::sleepButton", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::GetPowerButtonHandled(BOOL *aHandled)
{
    LogRelFlow(("{%p} %s:enter aHandled=%p\n", this, "Console::getPowerButtonHandled", aHandled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHandled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPowerButtonHandled(aHandled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aHandled=%RTbool hrc=%Rhrc\n", this, "Console::getPowerButtonHandled", *aHandled, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::GetGuestEnteredACPIMode(BOOL *aEntered)
{
    LogRelFlow(("{%p} %s:enter aEntered=%p\n", this, "Console::getGuestEnteredACPIMode", aEntered));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEntered);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestEnteredACPIMode(aEntered);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aEntered=%RTbool hrc=%Rhrc\n", this, "Console::getGuestEnteredACPIMode", *aEntered, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::SaveState(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "Console::saveState", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = saveState(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::saveState", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::AdoptSavedState(IN_BSTR aSavedStateFile)
{
    LogRelFlow(("{%p} %s:enter aSavedStateFile=%ls\n", this, "Console::adoptSavedState", aSavedStateFile));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::adoptSavedState", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::DiscardSavedState(BOOL aFRemoveFile)
{
    LogRelFlow(("{%p} %s:enter aFRemoveFile=%RTbool\n", this, "Console::discardSavedState", aFRemoveFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = discardSavedState(aFRemoveFile);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::discardSavedState", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::GetDeviceActivity(DeviceType_T aType,
                                            DeviceActivity_T *aActivity)
{
    LogRelFlow(("{%p} %s:enter aType=%RU32 aActivity=%p\n", this, "Console::getDeviceActivity", aType, aActivity));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aActivity);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDeviceActivity(aType,
                                aActivity);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aActivity=%RU32 hrc=%Rhrc\n", this, "Console::getDeviceActivity", *aActivity, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::AttachUSBDevice(IN_BSTR aId)
{
    LogRelFlow(("{%p} %s:enter aId=%ls\n", this, "Console::attachUSBDevice", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = attachUSBDevice(UuidInConverter(aId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::attachUSBDevice", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::DetachUSBDevice(IN_BSTR aId,
                                          IUSBDevice **aDevice)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aDevice=%p\n", this, "Console::detachUSBDevice", aId, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = detachUSBDevice(UuidInConverter(aId).uuid(),
                              ComTypeOutConverter<IUSBDevice>(aDevice).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDevice=%p hrc=%Rhrc\n", this, "Console::detachUSBDevice", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::FindUSBDeviceByAddress(IN_BSTR aName,
                                                 IUSBDevice **aDevice)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aDevice=%p\n", this, "Console::findUSBDeviceByAddress", aName, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findUSBDeviceByAddress(BSTRInConverter(aName).str(),
                                     ComTypeOutConverter<IUSBDevice>(aDevice).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDevice=%p hrc=%Rhrc\n", this, "Console::findUSBDeviceByAddress", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::FindUSBDeviceById(IN_BSTR aId,
                                            IUSBDevice **aDevice)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aDevice=%p\n", this, "Console::findUSBDeviceById", aId, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findUSBDeviceById(UuidInConverter(aId).uuid(),
                                ComTypeOutConverter<IUSBDevice>(aDevice).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDevice=%p hrc=%Rhrc\n", this, "Console::findUSBDeviceById", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::CreateSharedFolder(IN_BSTR aName,
                                             IN_BSTR aHostPath,
                                             BOOL aWritable,
                                             BOOL aAutomount)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aHostPath=%ls aWritable=%RTbool aAutomount=%RTbool\n", this, "Console::createSharedFolder", aName, aHostPath, aWritable, aAutomount));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::createSharedFolder", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::RemoveSharedFolder(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "Console::removeSharedFolder", aName));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Console::removeSharedFolder", hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::TakeSnapshot(IN_BSTR aName,
                                       IN_BSTR aDescription,
                                       IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aDescription=%ls aProgress=%p\n", this, "Console::takeSnapshot", aName, aDescription, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = takeSnapshot(BSTRInConverter(aName).str(),
                           BSTRInConverter(aDescription).str(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::takeSnapshot", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::DeleteSnapshot(IN_BSTR aId,
                                         IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aProgress=%p\n", this, "Console::deleteSnapshot", aId, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = deleteSnapshot(UuidInConverter(aId).uuid(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::deleteSnapshot", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::DeleteSnapshotAndAllChildren(IN_BSTR aId,
                                                       IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aProgress=%p\n", this, "Console::deleteSnapshotAndAllChildren", aId, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = deleteSnapshotAndAllChildren(UuidInConverter(aId).uuid(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::deleteSnapshotAndAllChildren", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::DeleteSnapshotRange(IN_BSTR aStartId,
                                              IN_BSTR aEndId,
                                              IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aStartId=%ls aEndId=%ls aProgress=%p\n", this, "Console::deleteSnapshotRange", aStartId, aEndId, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = deleteSnapshotRange(UuidInConverter(aStartId).uuid(),
                                  UuidInConverter(aEndId).uuid(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::deleteSnapshotRange", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::RestoreSnapshot(ISnapshot *aSnapshot,
                                          IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aSnapshot=%p aProgress=%p\n", this, "Console::restoreSnapshot", aSnapshot, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = restoreSnapshot(ComTypeInConverter<ISnapshot>(aSnapshot).ptr(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::restoreSnapshot", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ConsoleWrap::Teleport(IN_BSTR aHostname,
                                   ULONG aTcpport,
                                   IN_BSTR aPassword,
                                   ULONG aMaxDowntime,
                                   IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aHostname=%ls aTcpport=%RU32 aPassword=%ls aMaxDowntime=%RU32 aProgress=%p\n", this, "Console::teleport", aHostname, aTcpport, aPassword, aMaxDowntime, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = teleport(BSTRInConverter(aHostname).str(),
                       aTcpport,
                       BSTRInConverter(aPassword).str(),
                       aMaxDowntime,
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Console::teleport", *aProgress, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ConsoleWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(ConsoleWrap, IConsole)
#endif // VBOX_WITH_XPCOM
