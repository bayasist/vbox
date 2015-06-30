/** @file
 *
 * VirtualBox API class wrapper code for IProcess.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_PROCESS

#include "ProcessWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ProcessWrap)

//
// IProcess properties
//

STDMETHODIMP ProcessWrap::COMGETTER(Arguments)(ComSafeArrayOut(BSTR, aArguments))
{
    LogRelFlow(("{%p} %s: enter aArguments=%p\n", this, "Process::getArguments", aArguments));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aArguments);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getArguments(ArrayBSTROutConverter(ComSafeArrayOutArg(aArguments)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aArguments=%zu hrc=%Rhrc\n", this, "Process::getArguments", ComSafeArraySize(*aArguments), hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::COMGETTER(Environment)(ComSafeArrayOut(BSTR, aEnvironment))
{
    LogRelFlow(("{%p} %s: enter aEnvironment=%p\n", this, "Process::getEnvironment", aEnvironment));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEnvironment);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEnvironment(ArrayBSTROutConverter(ComSafeArrayOutArg(aEnvironment)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEnvironment=%zu hrc=%Rhrc\n", this, "Process::getEnvironment", ComSafeArraySize(*aEnvironment), hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "Process::getEventSource", aEventSource));

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

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "Process::getEventSource", *aEventSource, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::COMGETTER(ExecutablePath)(BSTR *aExecutablePath)
{
    LogRelFlow(("{%p} %s: enter aExecutablePath=%p\n", this, "Process::getExecutablePath", aExecutablePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExecutablePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExecutablePath(BSTROutConverter(aExecutablePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aExecutablePath=%ls hrc=%Rhrc\n", this, "Process::getExecutablePath", *aExecutablePath, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::COMGETTER(ExitCode)(LONG *aExitCode)
{
    LogRelFlow(("{%p} %s: enter aExitCode=%p\n", this, "Process::getExitCode", aExitCode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExitCode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExitCode(aExitCode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aExitCode=%RI32 hrc=%Rhrc\n", this, "Process::getExitCode", *aExitCode, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "Process::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "Process::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::COMGETTER(PID)(ULONG *aPID)
{
    LogRelFlow(("{%p} %s: enter aPID=%p\n", this, "Process::getPID", aPID));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPID);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPID(aPID);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPID=%RU32 hrc=%Rhrc\n", this, "Process::getPID", *aPID, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::COMGETTER(Status)(ProcessStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s: enter aStatus=%p\n", this, "Process::getStatus", aStatus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStatus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStatus(aStatus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStatus=%RU32 hrc=%Rhrc\n", this, "Process::getStatus", *aStatus, hrc));
    return hrc;
}

//
// IProcess methods
//

STDMETHODIMP ProcessWrap::WaitFor(ULONG aWaitFor,
                                  ULONG aTimeoutMS,
                                  ProcessWaitResult_T *aReason)
{
    LogRelFlow(("{%p} %s:enter aWaitFor=%RU32 aTimeoutMS=%RU32 aReason=%p\n", this, "Process::waitFor", aWaitFor, aTimeoutMS, aReason));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReason);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = waitFor(aWaitFor,
                      aTimeoutMS,
                      aReason);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aReason=%RU32 hrc=%Rhrc\n", this, "Process::waitFor", *aReason, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::WaitForArray(ComSafeArrayIn(ProcessWaitForFlag_T, aWaitFor),
                                       ULONG aTimeoutMS,
                                       ProcessWaitResult_T *aReason)
{
    LogRelFlow(("{%p} %s:enter aWaitFor=%zu aTimeoutMS=%RU32 aReason=%p\n", this, "Process::waitForArray", aWaitFor, aTimeoutMS, aReason));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReason);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = waitForArray(ArrayInConverter<ProcessWaitForFlag_T>(ComSafeArrayInArg(aWaitFor)).array(),
                           aTimeoutMS,
                           aReason);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aReason=%RU32 hrc=%Rhrc\n", this, "Process::waitForArray", *aReason, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::Read(ULONG aHandle,
                               ULONG aToRead,
                               ULONG aTimeoutMS,
                               ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aHandle=%RU32 aToRead=%RU32 aTimeoutMS=%RU32 aData=%p\n", this, "Process::read", aHandle, aToRead, aTimeoutMS, aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = read(aHandle,
                   aToRead,
                   aTimeoutMS,
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

    LogRelFlow(("{%p} %s: leave aData=%zu hrc=%Rhrc\n", this, "Process::read", ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::Write(ULONG aHandle,
                                ULONG aFlags,
                                ComSafeArrayIn(BYTE, aData),
                                ULONG aTimeoutMS,
                                ULONG *aWritten)
{
    LogRelFlow(("{%p} %s:enter aHandle=%RU32 aFlags=%RU32 aData=%zu aTimeoutMS=%RU32 aWritten=%p\n", this, "Process::write", aHandle, aFlags, aData, aTimeoutMS, aWritten));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWritten);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = write(aHandle,
                    aFlags,
                    ArrayInConverter<BYTE>(ComSafeArrayInArg(aData)).array(),
                    aTimeoutMS,
                    aWritten);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aWritten=%RU32 hrc=%Rhrc\n", this, "Process::write", *aWritten, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::WriteArray(ULONG aHandle,
                                     ComSafeArrayIn(ProcessInputFlag_T, aFlags),
                                     ComSafeArrayIn(BYTE, aData),
                                     ULONG aTimeoutMS,
                                     ULONG *aWritten)
{
    LogRelFlow(("{%p} %s:enter aHandle=%RU32 aFlags=%zu aData=%zu aTimeoutMS=%RU32 aWritten=%p\n", this, "Process::writeArray", aHandle, aFlags, aData, aTimeoutMS, aWritten));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWritten);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = writeArray(aHandle,
                         ArrayInConverter<ProcessInputFlag_T>(ComSafeArrayInArg(aFlags)).array(),
                         ArrayInConverter<BYTE>(ComSafeArrayInArg(aData)).array(),
                         aTimeoutMS,
                         aWritten);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aWritten=%RU32 hrc=%Rhrc\n", this, "Process::writeArray", *aWritten, hrc));
    return hrc;
}

STDMETHODIMP ProcessWrap::Terminate()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Process::terminate"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = terminate();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Process::terminate", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ProcessWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(ProcessWrap, IProcess)
#endif // VBOX_WITH_XPCOM
