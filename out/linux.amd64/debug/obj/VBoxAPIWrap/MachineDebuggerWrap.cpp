/** @file
 *
 * VirtualBox API class wrapper code for IMachineDebugger.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MACHINEDEBUGGER

#include "MachineDebuggerWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MachineDebuggerWrap)

//
// IMachineDebugger properties
//

STDMETHODIMP MachineDebuggerWrap::COMGETTER(SingleStep)(BOOL *aSingleStep)
{
    LogRelFlow(("{%p} %s: enter aSingleStep=%p\n", this, "MachineDebugger::getSingleStep", aSingleStep));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSingleStep);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSingleStep(aSingleStep);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSingleStep=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getSingleStep", *aSingleStep, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMSETTER(SingleStep)(BOOL aSingleStep)
{
    LogRelFlow(("{%p} %s: enter aSingleStep=%RTbool\n", this, "MachineDebugger::setSingleStep", aSingleStep));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setSingleStep(aSingleStep);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setSingleStep", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(RecompileUser)(BOOL *aRecompileUser)
{
    LogRelFlow(("{%p} %s: enter aRecompileUser=%p\n", this, "MachineDebugger::getRecompileUser", aRecompileUser));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecompileUser);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecompileUser(aRecompileUser);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecompileUser=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getRecompileUser", *aRecompileUser, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMSETTER(RecompileUser)(BOOL aRecompileUser)
{
    LogRelFlow(("{%p} %s: enter aRecompileUser=%RTbool\n", this, "MachineDebugger::setRecompileUser", aRecompileUser));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setRecompileUser(aRecompileUser);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setRecompileUser", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(RecompileSupervisor)(BOOL *aRecompileSupervisor)
{
    LogRelFlow(("{%p} %s: enter aRecompileSupervisor=%p\n", this, "MachineDebugger::getRecompileSupervisor", aRecompileSupervisor));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRecompileSupervisor);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRecompileSupervisor(aRecompileSupervisor);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRecompileSupervisor=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getRecompileSupervisor", *aRecompileSupervisor, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMSETTER(RecompileSupervisor)(BOOL aRecompileSupervisor)
{
    LogRelFlow(("{%p} %s: enter aRecompileSupervisor=%RTbool\n", this, "MachineDebugger::setRecompileSupervisor", aRecompileSupervisor));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setRecompileSupervisor(aRecompileSupervisor);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setRecompileSupervisor", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(ExecuteAllInIEM)(BOOL *aExecuteAllInIEM)
{
    LogRelFlow(("{%p} %s: enter aExecuteAllInIEM=%p\n", this, "MachineDebugger::getExecuteAllInIEM", aExecuteAllInIEM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExecuteAllInIEM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExecuteAllInIEM(aExecuteAllInIEM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aExecuteAllInIEM=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getExecuteAllInIEM", *aExecuteAllInIEM, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMSETTER(ExecuteAllInIEM)(BOOL aExecuteAllInIEM)
{
    LogRelFlow(("{%p} %s: enter aExecuteAllInIEM=%RTbool\n", this, "MachineDebugger::setExecuteAllInIEM", aExecuteAllInIEM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setExecuteAllInIEM(aExecuteAllInIEM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setExecuteAllInIEM", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(PATMEnabled)(BOOL *aPATMEnabled)
{
    LogRelFlow(("{%p} %s: enter aPATMEnabled=%p\n", this, "MachineDebugger::getPATMEnabled", aPATMEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPATMEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPATMEnabled(aPATMEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPATMEnabled=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getPATMEnabled", *aPATMEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMSETTER(PATMEnabled)(BOOL aPATMEnabled)
{
    LogRelFlow(("{%p} %s: enter aPATMEnabled=%RTbool\n", this, "MachineDebugger::setPATMEnabled", aPATMEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setPATMEnabled(aPATMEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setPATMEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(CSAMEnabled)(BOOL *aCSAMEnabled)
{
    LogRelFlow(("{%p} %s: enter aCSAMEnabled=%p\n", this, "MachineDebugger::getCSAMEnabled", aCSAMEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCSAMEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCSAMEnabled(aCSAMEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCSAMEnabled=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getCSAMEnabled", *aCSAMEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMSETTER(CSAMEnabled)(BOOL aCSAMEnabled)
{
    LogRelFlow(("{%p} %s: enter aCSAMEnabled=%RTbool\n", this, "MachineDebugger::setCSAMEnabled", aCSAMEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCSAMEnabled(aCSAMEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setCSAMEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(LogEnabled)(BOOL *aLogEnabled)
{
    LogRelFlow(("{%p} %s: enter aLogEnabled=%p\n", this, "MachineDebugger::getLogEnabled", aLogEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogEnabled(aLogEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogEnabled=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getLogEnabled", *aLogEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMSETTER(LogEnabled)(BOOL aLogEnabled)
{
    LogRelFlow(("{%p} %s: enter aLogEnabled=%RTbool\n", this, "MachineDebugger::setLogEnabled", aLogEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLogEnabled(aLogEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setLogEnabled", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(LogDbgFlags)(BSTR *aLogDbgFlags)
{
    LogRelFlow(("{%p} %s: enter aLogDbgFlags=%p\n", this, "MachineDebugger::getLogDbgFlags", aLogDbgFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogDbgFlags);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogDbgFlags(BSTROutConverter(aLogDbgFlags).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogDbgFlags=%ls hrc=%Rhrc\n", this, "MachineDebugger::getLogDbgFlags", *aLogDbgFlags, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(LogDbgGroups)(BSTR *aLogDbgGroups)
{
    LogRelFlow(("{%p} %s: enter aLogDbgGroups=%p\n", this, "MachineDebugger::getLogDbgGroups", aLogDbgGroups));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogDbgGroups);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogDbgGroups(BSTROutConverter(aLogDbgGroups).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogDbgGroups=%ls hrc=%Rhrc\n", this, "MachineDebugger::getLogDbgGroups", *aLogDbgGroups, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(LogDbgDestinations)(BSTR *aLogDbgDestinations)
{
    LogRelFlow(("{%p} %s: enter aLogDbgDestinations=%p\n", this, "MachineDebugger::getLogDbgDestinations", aLogDbgDestinations));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogDbgDestinations);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogDbgDestinations(BSTROutConverter(aLogDbgDestinations).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogDbgDestinations=%ls hrc=%Rhrc\n", this, "MachineDebugger::getLogDbgDestinations", *aLogDbgDestinations, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(LogRelFlags)(BSTR *aLogRelFlags)
{
    LogRelFlow(("{%p} %s: enter aLogRelFlags=%p\n", this, "MachineDebugger::getLogRelFlags", aLogRelFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogRelFlags);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogRelFlags(BSTROutConverter(aLogRelFlags).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogRelFlags=%ls hrc=%Rhrc\n", this, "MachineDebugger::getLogRelFlags", *aLogRelFlags, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(LogRelGroups)(BSTR *aLogRelGroups)
{
    LogRelFlow(("{%p} %s: enter aLogRelGroups=%p\n", this, "MachineDebugger::getLogRelGroups", aLogRelGroups));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogRelGroups);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogRelGroups(BSTROutConverter(aLogRelGroups).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogRelGroups=%ls hrc=%Rhrc\n", this, "MachineDebugger::getLogRelGroups", *aLogRelGroups, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(LogRelDestinations)(BSTR *aLogRelDestinations)
{
    LogRelFlow(("{%p} %s: enter aLogRelDestinations=%p\n", this, "MachineDebugger::getLogRelDestinations", aLogRelDestinations));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogRelDestinations);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogRelDestinations(BSTROutConverter(aLogRelDestinations).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogRelDestinations=%ls hrc=%Rhrc\n", this, "MachineDebugger::getLogRelDestinations", *aLogRelDestinations, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(HWVirtExEnabled)(BOOL *aHWVirtExEnabled)
{
    LogRelFlow(("{%p} %s: enter aHWVirtExEnabled=%p\n", this, "MachineDebugger::getHWVirtExEnabled", aHWVirtExEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHWVirtExEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHWVirtExEnabled(aHWVirtExEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHWVirtExEnabled=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getHWVirtExEnabled", *aHWVirtExEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(HWVirtExNestedPagingEnabled)(BOOL *aHWVirtExNestedPagingEnabled)
{
    LogRelFlow(("{%p} %s: enter aHWVirtExNestedPagingEnabled=%p\n", this, "MachineDebugger::getHWVirtExNestedPagingEnabled", aHWVirtExNestedPagingEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHWVirtExNestedPagingEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHWVirtExNestedPagingEnabled(aHWVirtExNestedPagingEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHWVirtExNestedPagingEnabled=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getHWVirtExNestedPagingEnabled", *aHWVirtExNestedPagingEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(HWVirtExVPIDEnabled)(BOOL *aHWVirtExVPIDEnabled)
{
    LogRelFlow(("{%p} %s: enter aHWVirtExVPIDEnabled=%p\n", this, "MachineDebugger::getHWVirtExVPIDEnabled", aHWVirtExVPIDEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHWVirtExVPIDEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHWVirtExVPIDEnabled(aHWVirtExVPIDEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHWVirtExVPIDEnabled=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getHWVirtExVPIDEnabled", *aHWVirtExVPIDEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(HWVirtExUXEnabled)(BOOL *aHWVirtExUXEnabled)
{
    LogRelFlow(("{%p} %s: enter aHWVirtExUXEnabled=%p\n", this, "MachineDebugger::getHWVirtExUXEnabled", aHWVirtExUXEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHWVirtExUXEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHWVirtExUXEnabled(aHWVirtExUXEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHWVirtExUXEnabled=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getHWVirtExUXEnabled", *aHWVirtExUXEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(OSName)(BSTR *aOSName)
{
    LogRelFlow(("{%p} %s: enter aOSName=%p\n", this, "MachineDebugger::getOSName", aOSName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOSName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOSName(BSTROutConverter(aOSName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOSName=%ls hrc=%Rhrc\n", this, "MachineDebugger::getOSName", *aOSName, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(OSVersion)(BSTR *aOSVersion)
{
    LogRelFlow(("{%p} %s: enter aOSVersion=%p\n", this, "MachineDebugger::getOSVersion", aOSVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOSVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOSVersion(BSTROutConverter(aOSVersion).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOSVersion=%ls hrc=%Rhrc\n", this, "MachineDebugger::getOSVersion", *aOSVersion, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(PAEEnabled)(BOOL *aPAEEnabled)
{
    LogRelFlow(("{%p} %s: enter aPAEEnabled=%p\n", this, "MachineDebugger::getPAEEnabled", aPAEEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPAEEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPAEEnabled(aPAEEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPAEEnabled=%RTbool hrc=%Rhrc\n", this, "MachineDebugger::getPAEEnabled", *aPAEEnabled, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(VirtualTimeRate)(ULONG *aVirtualTimeRate)
{
    LogRelFlow(("{%p} %s: enter aVirtualTimeRate=%p\n", this, "MachineDebugger::getVirtualTimeRate", aVirtualTimeRate));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVirtualTimeRate);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVirtualTimeRate(aVirtualTimeRate);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVirtualTimeRate=%RU32 hrc=%Rhrc\n", this, "MachineDebugger::getVirtualTimeRate", *aVirtualTimeRate, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMSETTER(VirtualTimeRate)(ULONG aVirtualTimeRate)
{
    LogRelFlow(("{%p} %s: enter aVirtualTimeRate=%RU32\n", this, "MachineDebugger::setVirtualTimeRate", aVirtualTimeRate));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVirtualTimeRate(aVirtualTimeRate);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setVirtualTimeRate", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::COMGETTER(VM)(LONG64 *aVM)
{
    LogRelFlow(("{%p} %s: enter aVM=%p\n", this, "MachineDebugger::getVM", aVM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVM(aVM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVM=%RI64 hrc=%Rhrc\n", this, "MachineDebugger::getVM", *aVM, hrc));
    return hrc;
}

//
// IMachineDebugger methods
//

STDMETHODIMP MachineDebuggerWrap::DumpGuestCore(IN_BSTR aFilename,
                                                IN_BSTR aCompression)
{
    LogRelFlow(("{%p} %s:enter aFilename=%ls aCompression=%ls\n", this, "MachineDebugger::dumpGuestCore", aFilename, aCompression));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dumpGuestCore(BSTRInConverter(aFilename).str(),
                            BSTRInConverter(aCompression).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::dumpGuestCore", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::DumpHostProcessCore(IN_BSTR aFilename,
                                                      IN_BSTR aCompression)
{
    LogRelFlow(("{%p} %s:enter aFilename=%ls aCompression=%ls\n", this, "MachineDebugger::dumpHostProcessCore", aFilename, aCompression));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dumpHostProcessCore(BSTRInConverter(aFilename).str(),
                                  BSTRInConverter(aCompression).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::dumpHostProcessCore", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::Info(IN_BSTR aName,
                                       IN_BSTR aArgs,
                                       BSTR *aInfo)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aArgs=%ls aInfo=%p\n", this, "MachineDebugger::info", aName, aArgs, aInfo));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInfo);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = info(BSTRInConverter(aName).str(),
                   BSTRInConverter(aArgs).str(),
                   BSTROutConverter(aInfo).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aInfo=%ls hrc=%Rhrc\n", this, "MachineDebugger::info", *aInfo, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::InjectNMI()
{
    LogRelFlow(("{%p} %s:enter\n", this, "MachineDebugger::injectNMI"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = injectNMI();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::injectNMI", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::ModifyLogGroups(IN_BSTR aSettings)
{
    LogRelFlow(("{%p} %s:enter aSettings=%ls\n", this, "MachineDebugger::modifyLogGroups", aSettings));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = modifyLogGroups(BSTRInConverter(aSettings).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::modifyLogGroups", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::ModifyLogFlags(IN_BSTR aSettings)
{
    LogRelFlow(("{%p} %s:enter aSettings=%ls\n", this, "MachineDebugger::modifyLogFlags", aSettings));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = modifyLogFlags(BSTRInConverter(aSettings).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::modifyLogFlags", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::ModifyLogDestinations(IN_BSTR aSettings)
{
    LogRelFlow(("{%p} %s:enter aSettings=%ls\n", this, "MachineDebugger::modifyLogDestinations", aSettings));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = modifyLogDestinations(BSTRInConverter(aSettings).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::modifyLogDestinations", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::ReadPhysicalMemory(LONG64 aAddress,
                                                     ULONG aSize,
                                                     ComSafeArrayOut(BYTE, aBytes))
{
    LogRelFlow(("{%p} %s:enter aAddress=%RI64 aSize=%RU32 aBytes=%p\n", this, "MachineDebugger::readPhysicalMemory", aAddress, aSize, aBytes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBytes);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = readPhysicalMemory(aAddress,
                                 aSize,
                                 ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aBytes)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aBytes=%zu hrc=%Rhrc\n", this, "MachineDebugger::readPhysicalMemory", ComSafeArraySize(*aBytes), hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::WritePhysicalMemory(LONG64 aAddress,
                                                      ULONG aSize,
                                                      ComSafeArrayIn(BYTE, aBytes))
{
    LogRelFlow(("{%p} %s:enter aAddress=%RI64 aSize=%RU32 aBytes=%zu\n", this, "MachineDebugger::writePhysicalMemory", aAddress, aSize, aBytes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = writePhysicalMemory(aAddress,
                                  aSize,
                                  ArrayInConverter<BYTE>(ComSafeArrayInArg(aBytes)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::writePhysicalMemory", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::ReadVirtualMemory(ULONG aCpuId,
                                                    LONG64 aAddress,
                                                    ULONG aSize,
                                                    ComSafeArrayOut(BYTE, aBytes))
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aAddress=%RI64 aSize=%RU32 aBytes=%p\n", this, "MachineDebugger::readVirtualMemory", aCpuId, aAddress, aSize, aBytes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBytes);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = readVirtualMemory(aCpuId,
                                aAddress,
                                aSize,
                                ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aBytes)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aBytes=%zu hrc=%Rhrc\n", this, "MachineDebugger::readVirtualMemory", ComSafeArraySize(*aBytes), hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::WriteVirtualMemory(ULONG aCpuId,
                                                     LONG64 aAddress,
                                                     ULONG aSize,
                                                     ComSafeArrayIn(BYTE, aBytes))
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aAddress=%RI64 aSize=%RU32 aBytes=%zu\n", this, "MachineDebugger::writeVirtualMemory", aCpuId, aAddress, aSize, aBytes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = writeVirtualMemory(aCpuId,
                                 aAddress,
                                 aSize,
                                 ArrayInConverter<BYTE>(ComSafeArrayInArg(aBytes)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::writeVirtualMemory", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::DetectOS(BSTR *aOs)
{
    LogRelFlow(("{%p} %s:enter aOs=%p\n", this, "MachineDebugger::detectOS", aOs));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOs);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = detectOS(BSTROutConverter(aOs).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aOs=%ls hrc=%Rhrc\n", this, "MachineDebugger::detectOS", *aOs, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::GetRegister(ULONG aCpuId,
                                              IN_BSTR aName,
                                              BSTR *aValue)
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aName=%ls aValue=%p\n", this, "MachineDebugger::getRegister", aCpuId, aName, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRegister(aCpuId,
                          BSTRInConverter(aName).str(),
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

    LogRelFlow(("{%p} %s: leave aValue=%ls hrc=%Rhrc\n", this, "MachineDebugger::getRegister", *aValue, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::GetRegisters(ULONG aCpuId,
                                               ComSafeArrayOut(BSTR, aNames),
                                               ComSafeArrayOut(BSTR, aValues))
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aNames=%p aValues=%p\n", this, "MachineDebugger::getRegisters", aCpuId, aNames, aValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNames);
        CheckComArgOutPointerValidThrow(aValues);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRegisters(aCpuId,
                           ArrayBSTROutConverter(ComSafeArrayOutArg(aNames)).array(),
                           ArrayBSTROutConverter(ComSafeArrayOutArg(aValues)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNames=%zu *aValues=%zu hrc=%Rhrc\n", this, "MachineDebugger::getRegisters", ComSafeArraySize(*aNames), ComSafeArraySize(*aValues), hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::SetRegister(ULONG aCpuId,
                                              IN_BSTR aName,
                                              IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aName=%ls aValue=%ls\n", this, "MachineDebugger::setRegister", aCpuId, aName, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setRegister(aCpuId,
                          BSTRInConverter(aName).str(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setRegister", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::SetRegisters(ULONG aCpuId,
                                               ComSafeArrayIn(IN_BSTR, aNames),
                                               ComSafeArrayIn(IN_BSTR, aValues))
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aNames=%zu aValues=%zu\n", this, "MachineDebugger::setRegisters", aCpuId, aNames, aValues));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setRegisters(aCpuId,
                           ArrayBSTRInConverter(ComSafeArrayInArg(aNames)).array(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::setRegisters", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::DumpGuestStack(ULONG aCpuId,
                                                 BSTR *aStack)
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aStack=%p\n", this, "MachineDebugger::dumpGuestStack", aCpuId, aStack));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStack);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dumpGuestStack(aCpuId,
                             BSTROutConverter(aStack).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aStack=%ls hrc=%Rhrc\n", this, "MachineDebugger::dumpGuestStack", *aStack, hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::ResetStats(IN_BSTR aPattern)
{
    LogRelFlow(("{%p} %s:enter aPattern=%ls\n", this, "MachineDebugger::resetStats", aPattern));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = resetStats(BSTRInConverter(aPattern).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::resetStats", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::DumpStats(IN_BSTR aPattern)
{
    LogRelFlow(("{%p} %s:enter aPattern=%ls\n", this, "MachineDebugger::dumpStats", aPattern));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = dumpStats(BSTRInConverter(aPattern).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "MachineDebugger::dumpStats", hrc));
    return hrc;
}

STDMETHODIMP MachineDebuggerWrap::GetStats(IN_BSTR aPattern,
                                           BOOL aWithDescriptions,
                                           BSTR *aStats)
{
    LogRelFlow(("{%p} %s:enter aPattern=%ls aWithDescriptions=%RTbool aStats=%p\n", this, "MachineDebugger::getStats", aPattern, aWithDescriptions, aStats));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStats);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStats(BSTRInConverter(aPattern).str(),
                       aWithDescriptions,
                       BSTROutConverter(aStats).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aStats=%ls hrc=%Rhrc\n", this, "MachineDebugger::getStats", *aStats, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MachineDebuggerWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(MachineDebuggerWrap, IMachineDebugger)
#endif // VBOX_WITH_XPCOM
