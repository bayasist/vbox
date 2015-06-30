/** @file
 *
 * VirtualBox API class wrapper header for IGuestMultiTouchEvent.
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

#ifndef GuestMultiTouchEventWrap_H_
#define GuestMultiTouchEventWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestMultiTouchEventWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestMultiTouchEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestMultiTouchEventWrap, IGuestMultiTouchEvent)
    DECLARE_NOT_AGGREGATABLE(GuestMultiTouchEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestMultiTouchEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestMultiTouchEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestMultiTouchEvent)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestMultiTouchEventWrap)

    // public IEvent properties
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType);
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource);
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable);

    // public IGuestMultiTouchEvent properties
    STDMETHOD(COMGETTER(ContactCount))(LONG *aContactCount);
    STDMETHOD(COMGETTER(XPositions))(ComSafeArrayOut(SHORT, aXPositions));
    STDMETHOD(COMGETTER(YPositions))(ComSafeArrayOut(SHORT, aYPositions));
    STDMETHOD(COMGETTER(ContactIds))(ComSafeArrayOut(USHORT, aContactIds));
    STDMETHOD(COMGETTER(ContactFlags))(ComSafeArrayOut(USHORT, aContactFlags));
    STDMETHOD(COMGETTER(ScanTime))(ULONG *aScanTime);

    // public IEvent methods
    STDMETHOD(SetProcessed)();
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult);

    // public IGuestMultiTouchEvent methods

private:
    // wrapped IEvent properties
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;

    // wrapped IGuestMultiTouchEvent properties
    virtual HRESULT getContactCount(LONG *aContactCount) = 0;
    virtual HRESULT getXPositions(std::vector<SHORT> &aXPositions) = 0;
    virtual HRESULT getYPositions(std::vector<SHORT> &aYPositions) = 0;
    virtual HRESULT getContactIds(std::vector<USHORT> &aContactIds) = 0;
    virtual HRESULT getContactFlags(std::vector<USHORT> &aContactFlags) = 0;
    virtual HRESULT getScanTime(ULONG *aScanTime) = 0;

    // wrapped IEvent methods
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;

    // wrapped IGuestMultiTouchEvent methods
};

#endif // !GuestMultiTouchEventWrap_H_
