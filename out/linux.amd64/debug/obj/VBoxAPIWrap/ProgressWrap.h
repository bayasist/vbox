/** @file
 *
 * VirtualBox API class wrapper header for IProgress.
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

#ifndef ProgressWrap_H_
#define ProgressWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ProgressWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IProgress)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ProgressWrap, IProgress)
    DECLARE_NOT_AGGREGATABLE(ProgressWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ProgressWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IProgress)
        COM_INTERFACE_ENTRY2(IDispatch, IProgress)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(ProgressWrap)

    // public IProgress properties
    STDMETHOD(COMGETTER(Id))(BSTR *aId);
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription);
    STDMETHOD(COMGETTER(Initiator))(IUnknown **aInitiator);
    STDMETHOD(COMGETTER(Cancelable))(BOOL *aCancelable);
    STDMETHOD(COMGETTER(Percent))(ULONG *aPercent);
    STDMETHOD(COMGETTER(TimeRemaining))(LONG *aTimeRemaining);
    STDMETHOD(COMGETTER(Completed))(BOOL *aCompleted);
    STDMETHOD(COMGETTER(Canceled))(BOOL *aCanceled);
    STDMETHOD(COMGETTER(ResultCode))(LONG *aResultCode);
    STDMETHOD(COMGETTER(ErrorInfo))(IVirtualBoxErrorInfo **aErrorInfo);
    STDMETHOD(COMGETTER(OperationCount))(ULONG *aOperationCount);
    STDMETHOD(COMGETTER(Operation))(ULONG *aOperation);
    STDMETHOD(COMGETTER(OperationDescription))(BSTR *aOperationDescription);
    STDMETHOD(COMGETTER(OperationPercent))(ULONG *aOperationPercent);
    STDMETHOD(COMGETTER(OperationWeight))(ULONG *aOperationWeight);
    STDMETHOD(COMGETTER(Timeout))(ULONG *aTimeout);
    STDMETHOD(COMSETTER(Timeout))(ULONG aTimeout);

    // public IProgress methods
    STDMETHOD(SetCurrentOperationProgress)(ULONG aPercent);
    STDMETHOD(SetNextOperation)(IN_BSTR aNextOperationDescription,
                                ULONG aNextOperationsWeight);
    STDMETHOD(WaitForCompletion)(LONG aTimeout);
    STDMETHOD(WaitForOperationCompletion)(ULONG aOperation,
                                          LONG aTimeout);
    STDMETHOD(WaitForAsyncProgressCompletion)(IProgress *aPProgressAsync);
    STDMETHOD(Cancel)();

private:
    // wrapped IProgress properties
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getInitiator(ComPtr<IUnknown> &aInitiator) = 0;
    virtual HRESULT getCancelable(BOOL *aCancelable) = 0;
    virtual HRESULT getPercent(ULONG *aPercent) = 0;
    virtual HRESULT getTimeRemaining(LONG *aTimeRemaining) = 0;
    virtual HRESULT getCompleted(BOOL *aCompleted) = 0;
    virtual HRESULT getCanceled(BOOL *aCanceled) = 0;
    virtual HRESULT getResultCode(LONG *aResultCode) = 0;
    virtual HRESULT getErrorInfo(ComPtr<IVirtualBoxErrorInfo> &aErrorInfo) = 0;
    virtual HRESULT getOperationCount(ULONG *aOperationCount) = 0;
    virtual HRESULT getOperation(ULONG *aOperation) = 0;
    virtual HRESULT getOperationDescription(com::Utf8Str &aOperationDescription) = 0;
    virtual HRESULT getOperationPercent(ULONG *aOperationPercent) = 0;
    virtual HRESULT getOperationWeight(ULONG *aOperationWeight) = 0;
    virtual HRESULT getTimeout(ULONG *aTimeout) = 0;
    virtual HRESULT setTimeout(ULONG aTimeout) = 0;

    // wrapped IProgress methods
    virtual HRESULT setCurrentOperationProgress(ULONG aPercent) = 0;
    virtual HRESULT setNextOperation(const com::Utf8Str &aNextOperationDescription,
                                     ULONG aNextOperationsWeight) = 0;
    virtual HRESULT waitForCompletion(LONG aTimeout) = 0;
    virtual HRESULT waitForOperationCompletion(ULONG aOperation,
                                               LONG aTimeout) = 0;
    virtual HRESULT waitForAsyncProgressCompletion(const ComPtr<IProgress> &aPProgressAsync) = 0;
    virtual HRESULT cancel() = 0;
};

#endif // !ProgressWrap_H_
