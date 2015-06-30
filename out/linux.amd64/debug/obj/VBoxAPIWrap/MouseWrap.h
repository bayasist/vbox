/** @file
 *
 * VirtualBox API class wrapper header for IMouse.
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

#ifndef MouseWrap_H_
#define MouseWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MouseWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IMouse)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MouseWrap, IMouse)
    DECLARE_NOT_AGGREGATABLE(MouseWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MouseWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMouse)
        COM_INTERFACE_ENTRY2(IDispatch, IMouse)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(MouseWrap)

    // public IMouse properties
    STDMETHOD(COMGETTER(AbsoluteSupported))(BOOL *aAbsoluteSupported);
    STDMETHOD(COMGETTER(RelativeSupported))(BOOL *aRelativeSupported);
    STDMETHOD(COMGETTER(MultiTouchSupported))(BOOL *aMultiTouchSupported);
    STDMETHOD(COMGETTER(NeedsHostCursor))(BOOL *aNeedsHostCursor);
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);

    // public IMouse methods
    STDMETHOD(PutMouseEvent)(LONG aDx,
                             LONG aDy,
                             LONG aDz,
                             LONG aDw,
                             LONG aButtonState);
    STDMETHOD(PutMouseEventAbsolute)(LONG aX,
                                     LONG aY,
                                     LONG aDz,
                                     LONG aDw,
                                     LONG aButtonState);
    STDMETHOD(PutEventMultiTouch)(LONG aCount,
                                  ComSafeArrayIn(LONG64, aContacts),
                                  ULONG aScanTime);
    STDMETHOD(PutEventMultiTouchString)(LONG aCount,
                                        IN_BSTR aContacts,
                                        ULONG aScanTime);

private:
    // wrapped IMouse properties
    virtual HRESULT getAbsoluteSupported(BOOL *aAbsoluteSupported) = 0;
    virtual HRESULT getRelativeSupported(BOOL *aRelativeSupported) = 0;
    virtual HRESULT getMultiTouchSupported(BOOL *aMultiTouchSupported) = 0;
    virtual HRESULT getNeedsHostCursor(BOOL *aNeedsHostCursor) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;

    // wrapped IMouse methods
    virtual HRESULT putMouseEvent(LONG aDx,
                                  LONG aDy,
                                  LONG aDz,
                                  LONG aDw,
                                  LONG aButtonState) = 0;
    virtual HRESULT putMouseEventAbsolute(LONG aX,
                                          LONG aY,
                                          LONG aDz,
                                          LONG aDw,
                                          LONG aButtonState) = 0;
    virtual HRESULT putEventMultiTouch(LONG aCount,
                                       const std::vector<LONG64> &aContacts,
                                       ULONG aScanTime) = 0;
    virtual HRESULT putEventMultiTouchString(LONG aCount,
                                             const com::Utf8Str &aContacts,
                                             ULONG aScanTime) = 0;
};

#endif // !MouseWrap_H_
