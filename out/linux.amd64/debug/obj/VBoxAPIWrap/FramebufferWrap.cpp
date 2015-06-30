/** @file
 *
 * VirtualBox API class wrapper code for IFramebuffer.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_FRAMEBUFFER

#include "FramebufferWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(FramebufferWrap)

//
// IFramebuffer properties
//

STDMETHODIMP FramebufferWrap::COMGETTER(Address)(BYTE *aAddress)
{
    LogRelFlow(("{%p} %s: enter aAddress=%p\n", this, "Framebuffer::getAddress", aAddress));

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

    LogRelFlow(("{%p} %s: leave *aAddress=%RU8 hrc=%Rhrc\n", this, "Framebuffer::getAddress", *aAddress, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(Width)(ULONG *aWidth)
{
    LogRelFlow(("{%p} %s: enter aWidth=%p\n", this, "Framebuffer::getWidth", aWidth));

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

    LogRelFlow(("{%p} %s: leave *aWidth=%RU32 hrc=%Rhrc\n", this, "Framebuffer::getWidth", *aWidth, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(Height)(ULONG *aHeight)
{
    LogRelFlow(("{%p} %s: enter aHeight=%p\n", this, "Framebuffer::getHeight", aHeight));

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

    LogRelFlow(("{%p} %s: leave *aHeight=%RU32 hrc=%Rhrc\n", this, "Framebuffer::getHeight", *aHeight, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(BitsPerPixel)(ULONG *aBitsPerPixel)
{
    LogRelFlow(("{%p} %s: enter aBitsPerPixel=%p\n", this, "Framebuffer::getBitsPerPixel", aBitsPerPixel));

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

    LogRelFlow(("{%p} %s: leave *aBitsPerPixel=%RU32 hrc=%Rhrc\n", this, "Framebuffer::getBitsPerPixel", *aBitsPerPixel, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(BytesPerLine)(ULONG *aBytesPerLine)
{
    LogRelFlow(("{%p} %s: enter aBytesPerLine=%p\n", this, "Framebuffer::getBytesPerLine", aBytesPerLine));

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

    LogRelFlow(("{%p} %s: leave *aBytesPerLine=%RU32 hrc=%Rhrc\n", this, "Framebuffer::getBytesPerLine", *aBytesPerLine, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(PixelFormat)(ULONG *aPixelFormat)
{
    LogRelFlow(("{%p} %s: enter aPixelFormat=%p\n", this, "Framebuffer::getPixelFormat", aPixelFormat));

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

    LogRelFlow(("{%p} %s: leave *aPixelFormat=%RU32 hrc=%Rhrc\n", this, "Framebuffer::getPixelFormat", *aPixelFormat, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(UsesGuestVRAM)(BOOL *aUsesGuestVRAM)
{
    LogRelFlow(("{%p} %s: enter aUsesGuestVRAM=%p\n", this, "Framebuffer::getUsesGuestVRAM", aUsesGuestVRAM));

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

    LogRelFlow(("{%p} %s: leave *aUsesGuestVRAM=%RTbool hrc=%Rhrc\n", this, "Framebuffer::getUsesGuestVRAM", *aUsesGuestVRAM, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(HeightReduction)(ULONG *aHeightReduction)
{
    LogRelFlow(("{%p} %s: enter aHeightReduction=%p\n", this, "Framebuffer::getHeightReduction", aHeightReduction));

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

    LogRelFlow(("{%p} %s: leave *aHeightReduction=%RU32 hrc=%Rhrc\n", this, "Framebuffer::getHeightReduction", *aHeightReduction, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(Overlay)(IFramebufferOverlay **aOverlay)
{
    LogRelFlow(("{%p} %s: enter aOverlay=%p\n", this, "Framebuffer::getOverlay", aOverlay));

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

    LogRelFlow(("{%p} %s: leave *aOverlay=%p hrc=%Rhrc\n", this, "Framebuffer::getOverlay", *aOverlay, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::COMGETTER(WinId)(LONG64 *aWinId)
{
    LogRelFlow(("{%p} %s: enter aWinId=%p\n", this, "Framebuffer::getWinId", aWinId));

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

    LogRelFlow(("{%p} %s: leave *aWinId=%RI64 hrc=%Rhrc\n", this, "Framebuffer::getWinId", *aWinId, hrc));
    return hrc;
}

//
// IFramebuffer methods
//

STDMETHODIMP FramebufferWrap::Lock()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Framebuffer::lock"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Framebuffer::lock", hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::Unlock()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Framebuffer::unlock"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Framebuffer::unlock", hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::NotifyUpdate(ULONG aX,
                                           ULONG aY,
                                           ULONG aWidth,
                                           ULONG aHeight)
{
    LogRelFlow(("{%p} %s:enter aX=%RU32 aY=%RU32 aWidth=%RU32 aHeight=%RU32\n", this, "Framebuffer::notifyUpdate", aX, aY, aWidth, aHeight));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Framebuffer::notifyUpdate", hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::RequestResize(ULONG aScreenId,
                                            ULONG aPixelFormat,
                                            BYTE aVRAM,
                                            ULONG aBitsPerPixel,
                                            ULONG aBytesPerLine,
                                            ULONG aWidth,
                                            ULONG aHeight,
                                            BOOL *aFinished)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aPixelFormat=%RU32 aVRAM=%RU8 aBitsPerPixel=%RU32 aBytesPerLine=%RU32 aWidth=%RU32 aHeight=%RU32 aFinished=%p\n", this, "Framebuffer::requestResize", aScreenId, aPixelFormat, aVRAM, aBitsPerPixel, aBytesPerLine, aWidth, aHeight, aFinished));

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

    LogRelFlow(("{%p} %s: leave aFinished=%RTbool hrc=%Rhrc\n", this, "Framebuffer::requestResize", *aFinished, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::VideoModeSupported(ULONG aWidth,
                                                 ULONG aHeight,
                                                 ULONG aBpp,
                                                 BOOL *aSupported)
{
    LogRelFlow(("{%p} %s:enter aWidth=%RU32 aHeight=%RU32 aBpp=%RU32 aSupported=%p\n", this, "Framebuffer::videoModeSupported", aWidth, aHeight, aBpp, aSupported));

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

    LogRelFlow(("{%p} %s: leave aSupported=%RTbool hrc=%Rhrc\n", this, "Framebuffer::videoModeSupported", *aSupported, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::GetVisibleRegion(BYTE aRectangles,
                                               ULONG aCount,
                                               ULONG *aCountCopied)
{
    LogRelFlow(("{%p} %s:enter aRectangles=%RU8 aCount=%RU32 aCountCopied=%p\n", this, "Framebuffer::getVisibleRegion", aRectangles, aCount, aCountCopied));

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

    LogRelFlow(("{%p} %s: leave aCountCopied=%RU32 hrc=%Rhrc\n", this, "Framebuffer::getVisibleRegion", *aCountCopied, hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::SetVisibleRegion(BYTE aRectangles,
                                               ULONG aCount)
{
    LogRelFlow(("{%p} %s:enter aRectangles=%RU8 aCount=%RU32\n", this, "Framebuffer::setVisibleRegion", aRectangles, aCount));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Framebuffer::setVisibleRegion", hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::ProcessVHWACommand(BYTE aCommand)
{
    LogRelFlow(("{%p} %s:enter aCommand=%RU8\n", this, "Framebuffer::processVHWACommand", aCommand));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Framebuffer::processVHWACommand", hrc));
    return hrc;
}

STDMETHODIMP FramebufferWrap::Notify3DEvent(ULONG aType,
                                            BYTE aData)
{
    LogRelFlow(("{%p} %s:enter aType=%RU32 aData=%RU8\n", this, "Framebuffer::notify3DEvent", aType, aData));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Framebuffer::notify3DEvent", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(FramebufferWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(FramebufferWrap, IFramebuffer)
#endif // VBOX_WITH_XPCOM
