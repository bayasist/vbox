/** @file
 *
 * VirtualBox API class wrapper header for IDisplay.
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

#ifndef DisplayWrap_H_
#define DisplayWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DisplayWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IDisplay)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DisplayWrap, IDisplay)
    DECLARE_NOT_AGGREGATABLE(DisplayWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DisplayWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDisplay)
        COM_INTERFACE_ENTRY2(IDispatch, IDisplay)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(DisplayWrap)

    // public IDisplay properties

    // public IDisplay methods
    STDMETHOD(GetScreenResolution)(ULONG aScreenId,
                                   ULONG *aWidth,
                                   ULONG *aHeight,
                                   ULONG *aBitsPerPixel,
                                   LONG *aXOrigin,
                                   LONG *aYOrigin);
    STDMETHOD(SetFramebuffer)(ULONG aScreenId,
                              IFramebuffer *aFramebuffer);
    STDMETHOD(GetFramebuffer)(ULONG aScreenId,
                              IFramebuffer **aFramebuffer,
                              LONG *aXOrigin,
                              LONG *aYOrigin);
    STDMETHOD(SetVideoModeHint)(ULONG aDisplay,
                                BOOL aEnabled,
                                BOOL aChangeOrigin,
                                LONG aOriginX,
                                LONG aOriginY,
                                ULONG aWidth,
                                ULONG aHeight,
                                ULONG aBitsPerPixel);
    STDMETHOD(SetSeamlessMode)(BOOL aEnabled);
    STDMETHOD(TakeScreenShot)(ULONG aScreenId,
                              BYTE aAddress,
                              ULONG aWidth,
                              ULONG aHeight);
    STDMETHOD(TakeScreenShotToArray)(ULONG aScreenId,
                                     ULONG aWidth,
                                     ULONG aHeight,
                                     ComSafeArrayOut(BYTE, aScreenData));
    STDMETHOD(TakeScreenShotPNGToArray)(ULONG aScreenId,
                                        ULONG aWidth,
                                        ULONG aHeight,
                                        ComSafeArrayOut(BYTE, aScreenData));
    STDMETHOD(DrawToScreen)(ULONG aScreenId,
                            BYTE aAddress,
                            ULONG aX,
                            ULONG aY,
                            ULONG aWidth,
                            ULONG aHeight);
    STDMETHOD(InvalidateAndUpdate)();
    STDMETHOD(ResizeCompleted)(ULONG aScreenId);
    STDMETHOD(CompleteVHWACommand)(BYTE aCommand);
    STDMETHOD(ViewportChanged)(ULONG aScreenId,
                               ULONG aX,
                               ULONG aY,
                               ULONG aWidth,
                               ULONG aHeight);

private:
    // wrapped IDisplay properties

    // wrapped IDisplay methods
    virtual HRESULT getScreenResolution(ULONG aScreenId,
                                        ULONG *aWidth,
                                        ULONG *aHeight,
                                        ULONG *aBitsPerPixel,
                                        LONG *aXOrigin,
                                        LONG *aYOrigin) = 0;
    virtual HRESULT setFramebuffer(ULONG aScreenId,
                                   const ComPtr<IFramebuffer> &aFramebuffer) = 0;
    virtual HRESULT getFramebuffer(ULONG aScreenId,
                                   ComPtr<IFramebuffer> &aFramebuffer,
                                   LONG *aXOrigin,
                                   LONG *aYOrigin) = 0;
    virtual HRESULT setVideoModeHint(ULONG aDisplay,
                                     BOOL aEnabled,
                                     BOOL aChangeOrigin,
                                     LONG aOriginX,
                                     LONG aOriginY,
                                     ULONG aWidth,
                                     ULONG aHeight,
                                     ULONG aBitsPerPixel) = 0;
    virtual HRESULT setSeamlessMode(BOOL aEnabled) = 0;
    virtual HRESULT takeScreenShot(ULONG aScreenId,
                                   BYTE aAddress,
                                   ULONG aWidth,
                                   ULONG aHeight) = 0;
    virtual HRESULT takeScreenShotToArray(ULONG aScreenId,
                                          ULONG aWidth,
                                          ULONG aHeight,
                                          std::vector<BYTE> &aScreenData) = 0;
    virtual HRESULT takeScreenShotPNGToArray(ULONG aScreenId,
                                             ULONG aWidth,
                                             ULONG aHeight,
                                             std::vector<BYTE> &aScreenData) = 0;
    virtual HRESULT drawToScreen(ULONG aScreenId,
                                 BYTE aAddress,
                                 ULONG aX,
                                 ULONG aY,
                                 ULONG aWidth,
                                 ULONG aHeight) = 0;
    virtual HRESULT invalidateAndUpdate() = 0;
    virtual HRESULT resizeCompleted(ULONG aScreenId) = 0;
    virtual HRESULT completeVHWACommand(BYTE aCommand) = 0;
    virtual HRESULT viewportChanged(ULONG aScreenId,
                                    ULONG aX,
                                    ULONG aY,
                                    ULONG aWidth,
                                    ULONG aHeight) = 0;
};

#endif // !DisplayWrap_H_
