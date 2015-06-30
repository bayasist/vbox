/** @file
 *
 * VirtualBox API class wrapper header for IFramebufferOverlay.
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

#ifndef FramebufferOverlayWrap_H_
#define FramebufferOverlayWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE FramebufferOverlayWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IFramebufferOverlay)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(FramebufferOverlayWrap, IFramebufferOverlay)
    DECLARE_NOT_AGGREGATABLE(FramebufferOverlayWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(FramebufferOverlayWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IFramebufferOverlay)
        COM_INTERFACE_ENTRY(IFramebuffer)
        COM_INTERFACE_ENTRY2(IDispatch, IFramebufferOverlay)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(FramebufferOverlayWrap)

    // public IFramebuffer properties
    STDMETHOD(COMGETTER(Address))(BYTE *aAddress);
    STDMETHOD(COMGETTER(Width))(ULONG *aWidth);
    STDMETHOD(COMGETTER(Height))(ULONG *aHeight);
    STDMETHOD(COMGETTER(BitsPerPixel))(ULONG *aBitsPerPixel);
    STDMETHOD(COMGETTER(BytesPerLine))(ULONG *aBytesPerLine);
    STDMETHOD(COMGETTER(PixelFormat))(ULONG *aPixelFormat);
    STDMETHOD(COMGETTER(UsesGuestVRAM))(BOOL *aUsesGuestVRAM);
    STDMETHOD(COMGETTER(HeightReduction))(ULONG *aHeightReduction);
    STDMETHOD(COMGETTER(Overlay))(IFramebufferOverlay **aOverlay);
    STDMETHOD(COMGETTER(WinId))(LONG64 *aWinId);

    // public IFramebufferOverlay properties
    STDMETHOD(COMGETTER(X))(ULONG *aX);
    STDMETHOD(COMGETTER(Y))(ULONG *aY);
    STDMETHOD(COMGETTER(Visible))(BOOL *aVisible);
    STDMETHOD(COMSETTER(Visible))(BOOL aVisible);
    STDMETHOD(COMGETTER(Alpha))(ULONG *aAlpha);
    STDMETHOD(COMSETTER(Alpha))(ULONG aAlpha);

    // public IFramebuffer methods
    STDMETHOD(Lock)();
    STDMETHOD(Unlock)();
    STDMETHOD(NotifyUpdate)(ULONG aX,
                            ULONG aY,
                            ULONG aWidth,
                            ULONG aHeight);
    STDMETHOD(RequestResize)(ULONG aScreenId,
                             ULONG aPixelFormat,
                             BYTE aVRAM,
                             ULONG aBitsPerPixel,
                             ULONG aBytesPerLine,
                             ULONG aWidth,
                             ULONG aHeight,
                             BOOL *aFinished);
    STDMETHOD(VideoModeSupported)(ULONG aWidth,
                                  ULONG aHeight,
                                  ULONG aBpp,
                                  BOOL *aSupported);
    STDMETHOD(GetVisibleRegion)(BYTE aRectangles,
                                ULONG aCount,
                                ULONG *aCountCopied);
    STDMETHOD(SetVisibleRegion)(BYTE aRectangles,
                                ULONG aCount);
    STDMETHOD(ProcessVHWACommand)(BYTE aCommand);
    STDMETHOD(Notify3DEvent)(ULONG aType,
                             BYTE aData);

    // public IFramebufferOverlay methods
    STDMETHOD(Move)(ULONG aX,
                    ULONG aY);

private:
    // wrapped IFramebuffer properties
    virtual HRESULT getAddress(BYTE *aAddress) = 0;
    virtual HRESULT getWidth(ULONG *aWidth) = 0;
    virtual HRESULT getHeight(ULONG *aHeight) = 0;
    virtual HRESULT getBitsPerPixel(ULONG *aBitsPerPixel) = 0;
    virtual HRESULT getBytesPerLine(ULONG *aBytesPerLine) = 0;
    virtual HRESULT getPixelFormat(ULONG *aPixelFormat) = 0;
    virtual HRESULT getUsesGuestVRAM(BOOL *aUsesGuestVRAM) = 0;
    virtual HRESULT getHeightReduction(ULONG *aHeightReduction) = 0;
    virtual HRESULT getOverlay(ComPtr<IFramebufferOverlay> &aOverlay) = 0;
    virtual HRESULT getWinId(LONG64 *aWinId) = 0;

    // wrapped IFramebufferOverlay properties
    virtual HRESULT getX(ULONG *aX) = 0;
    virtual HRESULT getY(ULONG *aY) = 0;
    virtual HRESULT getVisible(BOOL *aVisible) = 0;
    virtual HRESULT setVisible(BOOL aVisible) = 0;
    virtual HRESULT getAlpha(ULONG *aAlpha) = 0;
    virtual HRESULT setAlpha(ULONG aAlpha) = 0;

    // wrapped IFramebuffer methods
    virtual HRESULT lock() = 0;
    virtual HRESULT unlock() = 0;
    virtual HRESULT notifyUpdate(ULONG aX,
                                 ULONG aY,
                                 ULONG aWidth,
                                 ULONG aHeight) = 0;
    virtual HRESULT requestResize(ULONG aScreenId,
                                  ULONG aPixelFormat,
                                  BYTE aVRAM,
                                  ULONG aBitsPerPixel,
                                  ULONG aBytesPerLine,
                                  ULONG aWidth,
                                  ULONG aHeight,
                                  BOOL *aFinished) = 0;
    virtual HRESULT videoModeSupported(ULONG aWidth,
                                       ULONG aHeight,
                                       ULONG aBpp,
                                       BOOL *aSupported) = 0;
    virtual HRESULT getVisibleRegion(BYTE aRectangles,
                                     ULONG aCount,
                                     ULONG *aCountCopied) = 0;
    virtual HRESULT setVisibleRegion(BYTE aRectangles,
                                     ULONG aCount) = 0;
    virtual HRESULT processVHWACommand(BYTE aCommand) = 0;
    virtual HRESULT notify3DEvent(ULONG aType,
                                  BYTE aData) = 0;

    // wrapped IFramebufferOverlay methods
    virtual HRESULT move(ULONG aX,
                         ULONG aY) = 0;
};

#endif // !FramebufferOverlayWrap_H_
