/** @file
 *
 * VirtualBox API class wrapper code for IDisplay.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_DISPLAY

#include "DisplayWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(DisplayWrap)

//
// IDisplay properties
//

//
// IDisplay methods
//

STDMETHODIMP DisplayWrap::GetScreenResolution(ULONG aScreenId,
                                              ULONG *aWidth,
                                              ULONG *aHeight,
                                              ULONG *aBitsPerPixel,
                                              LONG *aXOrigin,
                                              LONG *aYOrigin)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aWidth=%p aHeight=%p aBitsPerPixel=%p aXOrigin=%p aYOrigin=%p\n", this, "Display::getScreenResolution", aScreenId, aWidth, aHeight, aBitsPerPixel, aXOrigin, aYOrigin));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWidth);
        CheckComArgOutPointerValidThrow(aHeight);
        CheckComArgOutPointerValidThrow(aBitsPerPixel);
        CheckComArgOutPointerValidThrow(aXOrigin);
        CheckComArgOutPointerValidThrow(aYOrigin);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getScreenResolution(aScreenId,
                                  aWidth,
                                  aHeight,
                                  aBitsPerPixel,
                                  aXOrigin,
                                  aYOrigin);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWidth=%RU32 *aHeight=%RU32 *aBitsPerPixel=%RU32 *aXOrigin=%RI32 *aYOrigin=%RI32 hrc=%Rhrc\n", this, "Display::getScreenResolution", *aWidth, *aHeight, *aBitsPerPixel, *aXOrigin, *aYOrigin, hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::SetFramebuffer(ULONG aScreenId,
                                         IFramebuffer *aFramebuffer)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aFramebuffer=%p\n", this, "Display::setFramebuffer", aScreenId, aFramebuffer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFramebuffer(aScreenId,
                             ComTypeInConverter<IFramebuffer>(aFramebuffer).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::setFramebuffer", hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::GetFramebuffer(ULONG aScreenId,
                                         IFramebuffer **aFramebuffer,
                                         LONG *aXOrigin,
                                         LONG *aYOrigin)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aFramebuffer=%p aXOrigin=%p aYOrigin=%p\n", this, "Display::getFramebuffer", aScreenId, aFramebuffer, aXOrigin, aYOrigin));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFramebuffer);
        CheckComArgOutPointerValidThrow(aXOrigin);
        CheckComArgOutPointerValidThrow(aYOrigin);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFramebuffer(aScreenId,
                             ComTypeOutConverter<IFramebuffer>(aFramebuffer).ptr(),
                             aXOrigin,
                             aYOrigin);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFramebuffer=%p *aXOrigin=%RI32 *aYOrigin=%RI32 hrc=%Rhrc\n", this, "Display::getFramebuffer", *aFramebuffer, *aXOrigin, *aYOrigin, hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::SetVideoModeHint(ULONG aDisplay,
                                           BOOL aEnabled,
                                           BOOL aChangeOrigin,
                                           LONG aOriginX,
                                           LONG aOriginY,
                                           ULONG aWidth,
                                           ULONG aHeight,
                                           ULONG aBitsPerPixel)
{
    LogRelFlow(("{%p} %s:enter aDisplay=%RU32 aEnabled=%RTbool aChangeOrigin=%RTbool aOriginX=%RI32 aOriginY=%RI32 aWidth=%RU32 aHeight=%RU32 aBitsPerPixel=%RU32\n", this, "Display::setVideoModeHint", aDisplay, aEnabled, aChangeOrigin, aOriginX, aOriginY, aWidth, aHeight, aBitsPerPixel));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVideoModeHint(aDisplay,
                               aEnabled,
                               aChangeOrigin,
                               aOriginX,
                               aOriginY,
                               aWidth,
                               aHeight,
                               aBitsPerPixel);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::setVideoModeHint", hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::SetSeamlessMode(BOOL aEnabled)
{
    LogRelFlow(("{%p} %s:enter aEnabled=%RTbool\n", this, "Display::setSeamlessMode", aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setSeamlessMode(aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::setSeamlessMode", hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::TakeScreenShot(ULONG aScreenId,
                                         BYTE aAddress,
                                         ULONG aWidth,
                                         ULONG aHeight)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aAddress=%RU8 aWidth=%RU32 aHeight=%RU32\n", this, "Display::takeScreenShot", aScreenId, aAddress, aWidth, aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = takeScreenShot(aScreenId,
                             aAddress,
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::takeScreenShot", hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::TakeScreenShotToArray(ULONG aScreenId,
                                                ULONG aWidth,
                                                ULONG aHeight,
                                                ComSafeArrayOut(BYTE, aScreenData))
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aWidth=%RU32 aHeight=%RU32 aScreenData=%p\n", this, "Display::takeScreenShotToArray", aScreenId, aWidth, aHeight, aScreenData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aScreenData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = takeScreenShotToArray(aScreenId,
                                    aWidth,
                                    aHeight,
                                    ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aScreenData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aScreenData=%zu hrc=%Rhrc\n", this, "Display::takeScreenShotToArray", ComSafeArraySize(*aScreenData), hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::TakeScreenShotPNGToArray(ULONG aScreenId,
                                                   ULONG aWidth,
                                                   ULONG aHeight,
                                                   ComSafeArrayOut(BYTE, aScreenData))
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aWidth=%RU32 aHeight=%RU32 aScreenData=%p\n", this, "Display::takeScreenShotPNGToArray", aScreenId, aWidth, aHeight, aScreenData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aScreenData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = takeScreenShotPNGToArray(aScreenId,
                                       aWidth,
                                       aHeight,
                                       ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aScreenData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aScreenData=%zu hrc=%Rhrc\n", this, "Display::takeScreenShotPNGToArray", ComSafeArraySize(*aScreenData), hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::DrawToScreen(ULONG aScreenId,
                                       BYTE aAddress,
                                       ULONG aX,
                                       ULONG aY,
                                       ULONG aWidth,
                                       ULONG aHeight)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aAddress=%RU8 aX=%RU32 aY=%RU32 aWidth=%RU32 aHeight=%RU32\n", this, "Display::drawToScreen", aScreenId, aAddress, aX, aY, aWidth, aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = drawToScreen(aScreenId,
                           aAddress,
                           aX,
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::drawToScreen", hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::InvalidateAndUpdate()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Display::invalidateAndUpdate"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = invalidateAndUpdate();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::invalidateAndUpdate", hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::ResizeCompleted(ULONG aScreenId)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32\n", this, "Display::resizeCompleted", aScreenId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = resizeCompleted(aScreenId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::resizeCompleted", hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::CompleteVHWACommand(BYTE aCommand)
{
    LogRelFlow(("{%p} %s:enter aCommand=%RU8\n", this, "Display::completeVHWACommand", aCommand));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = completeVHWACommand(aCommand);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::completeVHWACommand", hrc));
    return hrc;
}

STDMETHODIMP DisplayWrap::ViewportChanged(ULONG aScreenId,
                                          ULONG aX,
                                          ULONG aY,
                                          ULONG aWidth,
                                          ULONG aHeight)
{
    LogRelFlow(("{%p} %s:enter aScreenId=%RU32 aX=%RU32 aY=%RU32 aWidth=%RU32 aHeight=%RU32\n", this, "Display::viewportChanged", aScreenId, aX, aY, aWidth, aHeight));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = viewportChanged(aScreenId,
                              aX,
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Display::viewportChanged", hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(DisplayWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(DisplayWrap, IDisplay)
#endif // VBOX_WITH_XPCOM
