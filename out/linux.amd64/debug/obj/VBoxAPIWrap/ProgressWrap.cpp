/** @file
 *
 * VirtualBox API class wrapper code for IProgress.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_PROGRESS

#include "ProgressWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ProgressWrap)

//
// IProgress properties
//

STDMETHODIMP ProgressWrap::COMGETTER(Id)(BSTR *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "Progress::getId", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getId(UuidOutConverter(aId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aId=%ls hrc=%Rhrc\n", this, "Progress::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "Progress::getDescription", aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDescription(BSTROutConverter(aDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "Progress::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(Initiator)(IUnknown **aInitiator)
{
    LogRelFlow(("{%p} %s: enter aInitiator=%p\n", this, "Progress::getInitiator", aInitiator));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInitiator);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getInitiator(ComTypeOutConverter<IUnknown>(aInitiator).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aInitiator=%p hrc=%Rhrc\n", this, "Progress::getInitiator", *aInitiator, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(Cancelable)(BOOL *aCancelable)
{
    LogRelFlow(("{%p} %s: enter aCancelable=%p\n", this, "Progress::getCancelable", aCancelable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCancelable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCancelable(aCancelable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCancelable=%RTbool hrc=%Rhrc\n", this, "Progress::getCancelable", *aCancelable, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(Percent)(ULONG *aPercent)
{
    LogRelFlow(("{%p} %s: enter aPercent=%p\n", this, "Progress::getPercent", aPercent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPercent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPercent(aPercent);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPercent=%RU32 hrc=%Rhrc\n", this, "Progress::getPercent", *aPercent, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(TimeRemaining)(LONG *aTimeRemaining)
{
    LogRelFlow(("{%p} %s: enter aTimeRemaining=%p\n", this, "Progress::getTimeRemaining", aTimeRemaining));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTimeRemaining);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTimeRemaining(aTimeRemaining);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTimeRemaining=%RI32 hrc=%Rhrc\n", this, "Progress::getTimeRemaining", *aTimeRemaining, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(Completed)(BOOL *aCompleted)
{
    LogRelFlow(("{%p} %s: enter aCompleted=%p\n", this, "Progress::getCompleted", aCompleted));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCompleted);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCompleted(aCompleted);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCompleted=%RTbool hrc=%Rhrc\n", this, "Progress::getCompleted", *aCompleted, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(Canceled)(BOOL *aCanceled)
{
    LogRelFlow(("{%p} %s: enter aCanceled=%p\n", this, "Progress::getCanceled", aCanceled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCanceled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCanceled(aCanceled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCanceled=%RTbool hrc=%Rhrc\n", this, "Progress::getCanceled", *aCanceled, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(ResultCode)(LONG *aResultCode)
{
    LogRelFlow(("{%p} %s: enter aResultCode=%p\n", this, "Progress::getResultCode", aResultCode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aResultCode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getResultCode(aResultCode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aResultCode=%RI32 hrc=%Rhrc\n", this, "Progress::getResultCode", *aResultCode, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(ErrorInfo)(IVirtualBoxErrorInfo **aErrorInfo)
{
    LogRelFlow(("{%p} %s: enter aErrorInfo=%p\n", this, "Progress::getErrorInfo", aErrorInfo));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aErrorInfo);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getErrorInfo(ComTypeOutConverter<IVirtualBoxErrorInfo>(aErrorInfo).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aErrorInfo=%p hrc=%Rhrc\n", this, "Progress::getErrorInfo", *aErrorInfo, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(OperationCount)(ULONG *aOperationCount)
{
    LogRelFlow(("{%p} %s: enter aOperationCount=%p\n", this, "Progress::getOperationCount", aOperationCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOperationCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOperationCount(aOperationCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOperationCount=%RU32 hrc=%Rhrc\n", this, "Progress::getOperationCount", *aOperationCount, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(Operation)(ULONG *aOperation)
{
    LogRelFlow(("{%p} %s: enter aOperation=%p\n", this, "Progress::getOperation", aOperation));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOperation);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOperation(aOperation);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOperation=%RU32 hrc=%Rhrc\n", this, "Progress::getOperation", *aOperation, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(OperationDescription)(BSTR *aOperationDescription)
{
    LogRelFlow(("{%p} %s: enter aOperationDescription=%p\n", this, "Progress::getOperationDescription", aOperationDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOperationDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOperationDescription(BSTROutConverter(aOperationDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOperationDescription=%ls hrc=%Rhrc\n", this, "Progress::getOperationDescription", *aOperationDescription, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(OperationPercent)(ULONG *aOperationPercent)
{
    LogRelFlow(("{%p} %s: enter aOperationPercent=%p\n", this, "Progress::getOperationPercent", aOperationPercent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOperationPercent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOperationPercent(aOperationPercent);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOperationPercent=%RU32 hrc=%Rhrc\n", this, "Progress::getOperationPercent", *aOperationPercent, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(OperationWeight)(ULONG *aOperationWeight)
{
    LogRelFlow(("{%p} %s: enter aOperationWeight=%p\n", this, "Progress::getOperationWeight", aOperationWeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOperationWeight);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOperationWeight(aOperationWeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOperationWeight=%RU32 hrc=%Rhrc\n", this, "Progress::getOperationWeight", *aOperationWeight, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMGETTER(Timeout)(ULONG *aTimeout)
{
    LogRelFlow(("{%p} %s: enter aTimeout=%p\n", this, "Progress::getTimeout", aTimeout));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTimeout);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTimeout(aTimeout);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTimeout=%RU32 hrc=%Rhrc\n", this, "Progress::getTimeout", *aTimeout, hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::COMSETTER(Timeout)(ULONG aTimeout)
{
    LogRelFlow(("{%p} %s: enter aTimeout=%RU32\n", this, "Progress::setTimeout", aTimeout));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTimeout(aTimeout);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Progress::setTimeout", hrc));
    return hrc;
}

//
// IProgress methods
//

STDMETHODIMP ProgressWrap::SetCurrentOperationProgress(ULONG aPercent)
{
    LogRelFlow(("{%p} %s:enter aPercent=%RU32\n", this, "Progress::setCurrentOperationProgress", aPercent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setCurrentOperationProgress(aPercent);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Progress::setCurrentOperationProgress", hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::SetNextOperation(IN_BSTR aNextOperationDescription,
                                            ULONG aNextOperationsWeight)
{
    LogRelFlow(("{%p} %s:enter aNextOperationDescription=%ls aNextOperationsWeight=%RU32\n", this, "Progress::setNextOperation", aNextOperationDescription, aNextOperationsWeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setNextOperation(BSTRInConverter(aNextOperationDescription).str(),
                               aNextOperationsWeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Progress::setNextOperation", hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::WaitForCompletion(LONG aTimeout)
{
    LogRelFlow(("{%p} %s:enter aTimeout=%RI32\n", this, "Progress::waitForCompletion", aTimeout));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = waitForCompletion(aTimeout);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Progress::waitForCompletion", hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::WaitForOperationCompletion(ULONG aOperation,
                                                      LONG aTimeout)
{
    LogRelFlow(("{%p} %s:enter aOperation=%RU32 aTimeout=%RI32\n", this, "Progress::waitForOperationCompletion", aOperation, aTimeout));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = waitForOperationCompletion(aOperation,
                                         aTimeout);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Progress::waitForOperationCompletion", hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::WaitForAsyncProgressCompletion(IProgress *aPProgressAsync)
{
    LogRelFlow(("{%p} %s:enter aPProgressAsync=%p\n", this, "Progress::waitForAsyncProgressCompletion", aPProgressAsync));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = waitForAsyncProgressCompletion(ComTypeInConverter<IProgress>(aPProgressAsync).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Progress::waitForAsyncProgressCompletion", hrc));
    return hrc;
}

STDMETHODIMP ProgressWrap::Cancel()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Progress::cancel"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = cancel();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Progress::cancel", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ProgressWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(ProgressWrap, IProgress)
#endif // VBOX_WITH_XPCOM
