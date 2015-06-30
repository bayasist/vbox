/** @file
 *
 * VirtualBox API class wrapper code for IGuestProcess.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTPROCESS

#include "GuestProcessWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestProcessWrap)

//
// IProcess properties
//

STDMETHODIMP GuestProcessWrap::COMGETTER(Arguments)(ComSafeArrayOut(BSTR, aArguments))
{
    LogRelFlow(("{%p} %s: enter aArguments=%p\n", this, "GuestProcess::getArguments", aArguments));

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

    LogRelFlow(("{%p} %s: leave *aArguments=%zu hrc=%Rhrc\n", this, "GuestProcess::getArguments", ComSafeArraySize(*aArguments), hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::COMGETTER(Environment)(ComSafeArrayOut(BSTR, aEnvironment))
{
    LogRelFlow(("{%p} %s: enter aEnvironment=%p\n", this, "GuestProcess::getEnvironment", aEnvironment));

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

    LogRelFlow(("{%p} %s: leave *aEnvironment=%zu hrc=%Rhrc\n", this, "GuestProcess::getEnvironment", ComSafeArraySize(*aEnvironment), hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "GuestProcess::getEventSource", aEventSource));

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

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "GuestProcess::getEventSource", *aEventSource, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::COMGETTER(ExecutablePath)(BSTR *aExecutablePath)
{
    LogRelFlow(("{%p} %s: enter aExecutablePath=%p\n", this, "GuestProcess::getExecutablePath", aExecutablePath));

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

    LogRelFlow(("{%p} %s: leave *aExecutablePath=%ls hrc=%Rhrc\n", this, "GuestProcess::getExecutablePath", *aExecutablePath, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::COMGETTER(ExitCode)(LONG *aExitCode)
{
    LogRelFlow(("{%p} %s: enter aExitCode=%p\n", this, "GuestProcess::getExitCode", aExitCode));

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

    LogRelFlow(("{%p} %s: leave *aExitCode=%RI32 hrc=%Rhrc\n", this, "GuestProcess::getExitCode", *aExitCode, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "GuestProcess::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "GuestProcess::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::COMGETTER(PID)(ULONG *aPID)
{
    LogRelFlow(("{%p} %s: enter aPID=%p\n", this, "GuestProcess::getPID", aPID));

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

    LogRelFlow(("{%p} %s: leave *aPID=%RU32 hrc=%Rhrc\n", this, "GuestProcess::getPID", *aPID, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::COMGETTER(Status)(ProcessStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s: enter aStatus=%p\n", this, "GuestProcess::getStatus", aStatus));

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

    LogRelFlow(("{%p} %s: leave *aStatus=%RU32 hrc=%Rhrc\n", this, "GuestProcess::getStatus", *aStatus, hrc));
    return hrc;
}

//
// IGuestProcess properties
//

//
// IProcess methods
//

STDMETHODIMP GuestProcessWrap::WaitFor(ULONG aWaitFor,
                                       ULONG aTimeoutMS,
                                       ProcessWaitResult_T *aReason)
{
    LogRelFlow(("{%p} %s:enter aWaitFor=%RU32 aTimeoutMS=%RU32 aReason=%p\n", this, "GuestProcess::waitFor", aWaitFor, aTimeoutMS, aReason));

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

    LogRelFlow(("{%p} %s: leave aReason=%RU32 hrc=%Rhrc\n", this, "GuestProcess::waitFor", *aReason, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::WaitForArray(ComSafeArrayIn(ProcessWaitForFlag_T, aWaitFor),
                                            ULONG aTimeoutMS,
                                            ProcessWaitResult_T *aReason)
{
    LogRelFlow(("{%p} %s:enter aWaitFor=%zu aTimeoutMS=%RU32 aReason=%p\n", this, "GuestProcess::waitForArray", aWaitFor, aTimeoutMS, aReason));

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

    LogRelFlow(("{%p} %s: leave aReason=%RU32 hrc=%Rhrc\n", this, "GuestProcess::waitForArray", *aReason, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::Read(ULONG aHandle,
                                    ULONG aToRead,
                                    ULONG aTimeoutMS,
                                    ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aHandle=%RU32 aToRead=%RU32 aTimeoutMS=%RU32 aData=%p\n", this, "GuestProcess::read", aHandle, aToRead, aTimeoutMS, aData));

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

    LogRelFlow(("{%p} %s: leave aData=%zu hrc=%Rhrc\n", this, "GuestProcess::read", ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::Write(ULONG aHandle,
                                     ULONG aFlags,
                                     ComSafeArrayIn(BYTE, aData),
                                     ULONG aTimeoutMS,
                                     ULONG *aWritten)
{
    LogRelFlow(("{%p} %s:enter aHandle=%RU32 aFlags=%RU32 aData=%zu aTimeoutMS=%RU32 aWritten=%p\n", this, "GuestProcess::write", aHandle, aFlags, aData, aTimeoutMS, aWritten));

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

    LogRelFlow(("{%p} %s: leave aWritten=%RU32 hrc=%Rhrc\n", this, "GuestProcess::write", *aWritten, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::WriteArray(ULONG aHandle,
                                          ComSafeArrayIn(ProcessInputFlag_T, aFlags),
                                          ComSafeArrayIn(BYTE, aData),
                                          ULONG aTimeoutMS,
                                          ULONG *aWritten)
{
    LogRelFlow(("{%p} %s:enter aHandle=%RU32 aFlags=%zu aData=%zu aTimeoutMS=%RU32 aWritten=%p\n", this, "GuestProcess::writeArray", aHandle, aFlags, aData, aTimeoutMS, aWritten));

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

    LogRelFlow(("{%p} %s: leave aWritten=%RU32 hrc=%Rhrc\n", this, "GuestProcess::writeArray", *aWritten, hrc));
    return hrc;
}

STDMETHODIMP GuestProcessWrap::Terminate()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestProcess::terminate"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestProcess::terminate", hrc));
    return hrc;
}

//
// IGuestProcess methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestProcessWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestProcessWrap, IGuestProcess, IProcess)
#endif // VBOX_WITH_XPCOM
