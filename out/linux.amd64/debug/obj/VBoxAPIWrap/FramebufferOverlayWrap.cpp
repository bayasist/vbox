/** @file
 *
 * VirtualBox API class wrapper code for IFramebufferOverlay.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_FRAMEBUFFEROVERLAY

#include "FramebufferOverlayWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(FramebufferOverlayWrap)

//
// IFramebuffer properties
//

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(Address)(BYTE *aAddress)
{
    LogRelFlow(("{%p} %s: enter aAddress=%p\n", this, "FramebufferOverlay::getAddress", aAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAddress(aAddress);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAddress=%RU8 hrc=%Rhrc\n", this, "FramebufferOverlay::getAddress", *aAddress, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(Width)(ULONG *aWidth)
{
    LogRelFlow(("{%p} %s: enter aWidth=%p\n", this, "FramebufferOverlay::getWidth", aWidth));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWidth);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWidth(aWidth);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWidth=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getWidth", *aWidth, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(Height)(ULONG *aHeight)
{
    LogRelFlow(("{%p} %s: enter aHeight=%p\n", this, "FramebufferOverlay::getHeight", aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHeight);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHeight(aHeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHeight=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getHeight", *aHeight, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(BitsPerPixel)(ULONG *aBitsPerPixel)
{
    LogRelFlow(("{%p} %s: enter aBitsPerPixel=%p\n", this, "FramebufferOverlay::getBitsPerPixel", aBitsPerPixel));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBitsPerPixel);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBitsPerPixel(aBitsPerPixel);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBitsPerPixel=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getBitsPerPixel", *aBitsPerPixel, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(BytesPerLine)(ULONG *aBytesPerLine)
{
    LogRelFlow(("{%p} %s: enter aBytesPerLine=%p\n", this, "FramebufferOverlay::getBytesPerLine", aBytesPerLine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBytesPerLine);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBytesPerLine(aBytesPerLine);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBytesPerLine=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getBytesPerLine", *aBytesPerLine, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(PixelFormat)(ULONG *aPixelFormat)
{
    LogRelFlow(("{%p} %s: enter aPixelFormat=%p\n", this, "FramebufferOverlay::getPixelFormat", aPixelFormat));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPixelFormat);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPixelFormat(aPixelFormat);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPixelFormat=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getPixelFormat", *aPixelFormat, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(UsesGuestVRAM)(BOOL *aUsesGuestVRAM)
{
    LogRelFlow(("{%p} %s: enter aUsesGuestVRAM=%p\n", this, "FramebufferOverlay::getUsesGuestVRAM", aUsesGuestVRAM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUsesGuestVRAM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUsesGuestVRAM(aUsesGuestVRAM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUsesGuestVRAM=%RTbool hrc=%Rhrc\n", this, "FramebufferOverlay::getUsesGuestVRAM", *aUsesGuestVRAM, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(HeightReduction)(ULONG *aHeightReduction)
{
    LogRelFlow(("{%p} %s: enter aHeightReduction=%p\n", this, "FramebufferOverlay::getHeightReduction", aHeightReduction));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHeightReduction);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHeightReduction(aHeightReduction);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHeightReduction=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getHeightReduction", *aHeightReduction, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(Overlay)(IFramebufferOverlay **aOverlay)
{
    LogRelFlow(("{%p} %s: enter aOverlay=%p\n", this, "FramebufferOverlay::getOverlay", aOverlay));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOverlay);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOverlay(ComTypeOutConverter<IFramebufferOverlay>(aOverlay).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOverlay=%p hrc=%Rhrc\n", this, "FramebufferOverlay::getOverlay", *aOverlay, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(WinId)(LONG64 *aWinId)
{
    LogRelFlow(("{%p} %s: enter aWinId=%p\n", this, "FramebufferOverlay::getWinId", aWinId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWinId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWinId(aWinId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWinId=%RI64 hrc=%Rhrc\n", this, "FramebufferOverlay::getWinId", *aWinId, hrc));
    return hrc;
}

//
// IFramebufferOverlay properties
//

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(X)(ULONG *aX)
{
    LogRelFlow(("{%p} %s: enter aX=%p\n", this, "FramebufferOverlay::getX", aX));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aX);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getX(aX);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aX=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getX", *aX, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(Y)(ULONG *aY)
{
    LogRelFlow(("{%p} %s: enter aY=%p\n", this, "FramebufferOverlay::getY", aY));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aY);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getY(aY);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aY=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getY", *aY, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(Visible)(BOOL *aVisible)
{
    LogRelFlow(("{%p} %s: enter aVisible=%p\n", this, "FramebufferOverlay::getVisible", aVisible));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVisible);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVisible(aVisible);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVisible=%RTbool hrc=%Rhrc\n", this, "FramebufferOverlay::getVisible", *aVisible, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMSETTER(Visible)(BOOL aVisible)
{
    LogRelFlow(("{%p} %s: enter aVisible=%RTbool\n", this, "FramebufferOverlay::setVisible", aVisible));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVisible(aVisible);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::setVisible", hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMGETTER(Alpha)(ULONG *aAlpha)
{
    LogRelFlow(("{%p} %s: enter aAlpha=%p\n", this, "FramebufferOverlay::getAlpha", aAlpha));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAlpha);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAlpha(aAlpha);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAlpha=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getAlpha", *aAlpha, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::COMSETTER(Alpha)(ULONG aAlpha)
{
    LogRelFlow(("{%p} %s: enter aAlpha=%RU32\n", this, "FramebufferOverlay::setAlpha", aAlpha));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAlpha(aAlpha);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::setAlpha", hrc));
    return hrc;
}

//
// IFramebuffer methods
//

STDMETHODIMP FramebufferOverlayWrap::Lock()
{
    LogRelFlow(("{%p} %s:enter\n", this, "FramebufferOverlay::lock"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = lock();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::lock", hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::Unlock()
{
    LogRelFlow(("{%p} %s:enter\n", this, "FramebufferOverlay::unlock"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = unlock();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::unlock", hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::NotifyUpdate(ULONG aX,
                                                  ULONG aY,
                                                  ULONG aWidth,
                                                  ULONG aHeight)
{
    LogRelFlow(("{%p} %s:enter aX=%RU32 aY=%RU32 aWidth=%RU32 aHeight=%RU32\n", this, "FramebufferOverlay::notifyUpdate", aX, aY, aWidth, aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = notifyUpdate(aX,
                           aY,
                           aWidth,
                           aHeight);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::notifyUpdate", hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::RequestResize(ULONG aScreenId,
                                                   ULONG aPixelFormat,
                                                   BYTE aVRAM,
                                                   ULONG aBitsPerPixel,
                                                   ULONG aBytesPerLine,
                                                   ULONG aWidth,
                                                   ULONG aHeight,
                                                   BOOL *aFinished)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aPixelFormat=%RU32 aVRAM=%RU8 aBitsPerPixel=%RU32 aBytesPerLine=%RU32 aWidth=%RU32 aHeight=%RU32 aFinished=%p\n", this, "FramebufferOverlay::requestResize", aScreenId, aPixelFormat, aVRAM, aBitsPerPixel, aBytesPerLine, aWidth, aHeight, aFinished));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFinished);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = requestResize(aScreenId,
                            aPixelFormat,
                            aVRAM,
                            aBitsPerPixel,
                            aBytesPerLine,
                            aWidth,
                            aHeight,
                            aFinished);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFinished=%RTbool hrc=%Rhrc\n", this, "FramebufferOverlay::requestResize", *aFinished, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::VideoModeSupported(ULONG aWidth,
                                                        ULONG aHeight,
                                                        ULONG aBpp,
                                                        BOOL *aSupported)
{
    LogRelFlow(("{%p} %s:enter aWidth=%RU32 aHeight=%RU32 aBpp=%RU32 aSupported=%p\n", this, "FramebufferOverlay::videoModeSupported", aWidth, aHeight, aBpp, aSupported));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSupported);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = videoModeSupported(aWidth,
                                 aHeight,
                                 aBpp,
                                 aSupported);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aSupported=%RTbool hrc=%Rhrc\n", this, "FramebufferOverlay::videoModeSupported", *aSupported, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::GetVisibleRegion(BYTE aRectangles,
                                                      ULONG aCount,
                                                      ULONG *aCountCopied)
{
    LogRelFlow(("{%p} %s:enter aRectangles=%RU8 aCount=%RU32 aCountCopied=%p\n", this, "FramebufferOverlay::getVisibleRegion", aRectangles, aCount, aCountCopied));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCountCopied);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVisibleRegion(aRectangles,
                               aCount,
                               aCountCopied);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aCountCopied=%RU32 hrc=%Rhrc\n", this, "FramebufferOverlay::getVisibleRegion", *aCountCopied, hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::SetVisibleRegion(BYTE aRectangles,
                                                      ULONG aCount)
{
    LogRelFlow(("{%p} %s:enter aRectangles=%RU8 aCount=%RU32\n", this, "FramebufferOverlay::setVisibleRegion", aRectangles, aCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVisibleRegion(aRectangles,
                               aCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::setVisibleRegion", hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::ProcessVHWACommand(BYTE aCommand)
{
    LogRelFlow(("{%p} %s:enter aCommand=%RU8\n", this, "FramebufferOverlay::processVHWACommand", aCommand));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = processVHWACommand(aCommand);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::processVHWACommand", hrc));
    return hrc;
}

STDMETHODIMP FramebufferOverlayWrap::Notify3DEvent(ULONG aType,
                                                   BYTE aData)
{
    LogRelFlow(("{%p} %s:enter aType=%RU32 aData=%RU8\n", this, "FramebufferOverlay::notify3DEvent", aType, aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = notify3DEvent(aType,
                            aData);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::notify3DEvent", hrc));
    return hrc;
}

//
// IFramebufferOverlay methods
//

STDMETHODIMP FramebufferOverlayWrap::Move(ULONG aX,
                                          ULONG aY)
{
    LogRelFlow(("{%p} %s:enter aX=%RU32 aY=%RU32\n", this, "FramebufferOverlay::move", aX, aY));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = move(aX,
                   aY);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "FramebufferOverlay::move", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(FramebufferOverlayWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(FramebufferOverlayWrap, IFramebufferOverlay, IFramebuffer)
#endif // VBOX_WITH_XPCOM
