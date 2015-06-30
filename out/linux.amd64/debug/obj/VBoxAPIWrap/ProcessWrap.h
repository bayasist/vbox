/** @file
 *
 * VirtualBox API class wrapper header for IProcess.
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

#ifndef ProcessWrap_H_
#define ProcessWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ProcessWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IProcess)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ProcessWrap, IProcess)
    DECLARE_NOT_AGGREGATABLE(ProcessWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ProcessWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IProcess)
        COM_INTERFACE_ENTRY2(IDispatch, IProcess)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ProcessWrap)

    // public IProcess properties
    STDMETHOD(COMGETTER(Arguments))(ComSafeArrayOut(BSTR, aArguments));
    STDMETHOD(COMGETTER(Environment))(ComSafeArrayOut(BSTR, aEnvironment));
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);
    STDMETHOD(COMGETTER(ExecutablePath))(BSTR *aExecutablePath);
    STDMETHOD(COMGETTER(ExitCode))(LONG *aExitCode);
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(PID))(ULONG *aPID);
    STDMETHOD(COMGETTER(Status))(ProcessStatus_T *aStatus);

    // public IProcess methods
    STDMETHOD(WaitFor)(ULONG aWaitFor,
                       ULONG aTimeoutMS,
                       ProcessWaitResult_T *aReason);
    STDMETHOD(WaitForArray)(ComSafeArrayIn(ProcessWaitForFlag_T, aWaitFor),
                            ULONG aTimeoutMS,
                            ProcessWaitResult_T *aReason);
    STDMETHOD(Read)(ULONG aHandle,
                    ULONG aToRead,
                    ULONG aTimeoutMS,
                    ComSafeArrayOut(BYTE, aData));
    STDMETHOD(Write)(ULONG aHandle,
                     ULONG aFlags,
                     ComSafeArrayIn(BYTE, aData),
                     ULONG aTimeoutMS,
                     ULONG *aWritten);
    STDMETHOD(WriteArray)(ULONG aHandle,
                          ComSafeArrayIn(ProcessInputFlag_T, aFlags),
                          ComSafeArrayIn(BYTE, aData),
                          ULONG aTimeoutMS,
                          ULONG *aWritten);
    STDMETHOD(Terminate)();

private:
    // wrapped IProcess properties
    virtual HRESULT getArguments(std::vector<com::Utf8Str> &aArguments) = 0;
    virtual HRESULT getEnvironment(std::vector<com::Utf8Str> &aEnvironment) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getExecutablePath(com::Utf8Str &aExecutablePath) = 0;
    virtual HRESULT getExitCode(LONG *aExitCode) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getPID(ULONG *aPID) = 0;
    virtual HRESULT getStatus(ProcessStatus_T *aStatus) = 0;

    // wrapped IProcess methods
    virtual HRESULT waitFor(ULONG aWaitFor,
                            ULONG aTimeoutMS,
                            ProcessWaitResult_T *aReason) = 0;
    virtual HRESULT waitForArray(const std::vector<ProcessWaitForFlag_T> &aWaitFor,
                                 ULONG aTimeoutMS,
                                 ProcessWaitResult_T *aReason) = 0;
    virtual HRESULT read(ULONG aHandle,
                         ULONG aToRead,
                         ULONG aTimeoutMS,
                         std::vector<BYTE> &aData) = 0;
    virtual HRESULT write(ULONG aHandle,
                          ULONG aFlags,
                          const std::vector<BYTE> &aData,
                          ULONG aTimeoutMS,
                          ULONG *aWritten) = 0;
    virtual HRESULT writeArray(ULONG aHandle,
                               const std::vector<ProcessInputFlag_T> &aFlags,
                               const std::vector<BYTE> &aData,
                               ULONG aTimeoutMS,
                               ULONG *aWritten) = 0;
    virtual HRESULT terminate() = 0;
};

#endif // !ProcessWrap_H_
