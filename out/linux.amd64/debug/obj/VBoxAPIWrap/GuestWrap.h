/** @file
 *
 * VirtualBox API class wrapper header for IGuest.
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

#ifndef GuestWrap_H_
#define GuestWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuest)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestWrap, IGuest)
    DECLARE_NOT_AGGREGATABLE(GuestWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuest)
        COM_INTERFACE_ENTRY2(IDispatch, IGuest)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestWrap)

    // public IGuest properties
    STDMETHOD(COMGETTER(OSTypeId))(BSTR *aOSTypeId);
    STDMETHOD(COMGETTER(AdditionsRunLevel))(AdditionsRunLevelType_T *aAdditionsRunLevel);
    STDMETHOD(COMGETTER(AdditionsVersion))(BSTR *aAdditionsVersion);
    STDMETHOD(COMGETTER(AdditionsRevision))(ULONG *aAdditionsRevision);
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);
    STDMETHOD(COMGETTER(Facilities))(ComSafeArrayOut(IAdditionsFacility *, aFacilities));
    STDMETHOD(COMGETTER(Sessions))(ComSafeArrayOut(IGuestSession *, aSessions));
    STDMETHOD(COMGETTER(MemoryBalloonSize))(ULONG *aMemoryBalloonSize);
    STDMETHOD(COMSETTER(MemoryBalloonSize))(ULONG aMemoryBalloonSize);
    STDMETHOD(COMGETTER(StatisticsUpdateInterval))(ULONG *aStatisticsUpdateInterval);
    STDMETHOD(COMSETTER(StatisticsUpdateInterval))(ULONG aStatisticsUpdateInterval);

    // public IGuest methods
    STDMETHOD(InternalGetStatistics)(ULONG *aCpuUser,
                                     ULONG *aCpuKernel,
                                     ULONG *aCpuIdle,
                                     ULONG *aMemTotal,
                                     ULONG *aMemFree,
                                     ULONG *aMemBalloon,
                                     ULONG *aMemShared,
                                     ULONG *aMemCache,
                                     ULONG *aPagedTotal,
                                     ULONG *aMemAllocTotal,
                                     ULONG *aMemFreeTotal,
                                     ULONG *aMemBalloonTotal,
                                     ULONG *aMemSharedTotal);
    STDMETHOD(GetFacilityStatus)(AdditionsFacilityType_T aFacility,
                                 LONG64 *aTimestamp,
                                 AdditionsFacilityStatus_T *aStatus);
    STDMETHOD(GetAdditionsStatus)(AdditionsRunLevelType_T aLevel,
                                  BOOL *aActive);
    STDMETHOD(SetCredentials)(IN_BSTR aUserName,
                              IN_BSTR aPassword,
                              IN_BSTR aDomain,
                              BOOL aAllowInteractiveLogon);
    STDMETHOD(DragHGEnter)(ULONG aScreenId,
                           ULONG aY,
                           ULONG aX,
                           DragAndDropAction_T aDefaultAction,
                           ComSafeArrayIn(DragAndDropAction_T, aAllowedActions),
                           ComSafeArrayIn(IN_BSTR, aFormats),
                           DragAndDropAction_T *aResultAction);
    STDMETHOD(DragHGMove)(ULONG aScreenId,
                          ULONG aX,
                          ULONG aY,
                          DragAndDropAction_T aDefaultAction,
                          ComSafeArrayIn(DragAndDropAction_T, aAllowedActions),
                          ComSafeArrayIn(IN_BSTR, aFormats),
                          DragAndDropAction_T *aResultAction);
    STDMETHOD(DragHGLeave)(ULONG aScreenId);
    STDMETHOD(DragHGDrop)(ULONG aScreenId,
                          ULONG aX,
                          ULONG aY,
                          DragAndDropAction_T aDefaultAction,
                          ComSafeArrayIn(DragAndDropAction_T, aAllowedActions),
                          ComSafeArrayIn(IN_BSTR, aFormats),
                          BSTR *aFormat,
                          DragAndDropAction_T *aResultAction);
    STDMETHOD(DragHGPutData)(ULONG aScreenId,
                             IN_BSTR aFormat,
                             ComSafeArrayIn(BYTE, aData),
                             IProgress **aProgress);
    STDMETHOD(DragGHPending)(ULONG aScreenId,
                             ComSafeArrayOut(BSTR, aFormats),
                             ComSafeArrayOut(DragAndDropAction_T, aAllowedActions),
                             DragAndDropAction_T *aDefaultAction);
    STDMETHOD(DragGHDropped)(IN_BSTR aFormat,
                             DragAndDropAction_T aAction,
                             IProgress **aProgress);
    STDMETHOD(DragGHGetData)(ComSafeArrayOut(BYTE, aData));
    STDMETHOD(CreateSession)(IN_BSTR aUser,
                             IN_BSTR aPassword,
                             IN_BSTR aDomain,
                             IN_BSTR aSessionName,
                             IGuestSession **aGuestSession);
    STDMETHOD(FindSession)(IN_BSTR aSessionName,
                           ComSafeArrayOut(IGuestSession *, aSessions));
    STDMETHOD(UpdateGuestAdditions)(IN_BSTR aSource,
                                    ComSafeArrayIn(IN_BSTR, aArguments),
                                    ComSafeArrayIn(AdditionsUpdateFlag_T, aFlags),
                                    IProgress **aProgress);

private:
    // wrapped IGuest properties
    virtual HRESULT getOSTypeId(com::Utf8Str &aOSTypeId) = 0;
    virtual HRESULT getAdditionsRunLevel(AdditionsRunLevelType_T *aAdditionsRunLevel) = 0;
    virtual HRESULT getAdditionsVersion(com::Utf8Str &aAdditionsVersion) = 0;
    virtual HRESULT getAdditionsRevision(ULONG *aAdditionsRevision) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getFacilities(std::vector<ComPtr<IAdditionsFacility> > &aFacilities) = 0;
    virtual HRESULT getSessions(std::vector<ComPtr<IGuestSession> > &aSessions) = 0;
    virtual HRESULT getMemoryBalloonSize(ULONG *aMemoryBalloonSize) = 0;
    virtual HRESULT setMemoryBalloonSize(ULONG aMemoryBalloonSize) = 0;
    virtual HRESULT getStatisticsUpdateInterval(ULONG *aStatisticsUpdateInterval) = 0;
    virtual HRESULT setStatisticsUpdateInterval(ULONG aStatisticsUpdateInterval) = 0;

    // wrapped IGuest methods
    virtual HRESULT internalGetStatistics(ULONG *aCpuUser,
                                          ULONG *aCpuKernel,
                                          ULONG *aCpuIdle,
                                          ULONG *aMemTotal,
                                          ULONG *aMemFree,
                                          ULONG *aMemBalloon,
                                          ULONG *aMemShared,
                                          ULONG *aMemCache,
                                          ULONG *aPagedTotal,
                                          ULONG *aMemAllocTotal,
                                          ULONG *aMemFreeTotal,
                                          ULONG *aMemBalloonTotal,
                                          ULONG *aMemSharedTotal) = 0;
    virtual HRESULT getFacilityStatus(AdditionsFacilityType_T aFacility,
                                      LONG64 *aTimestamp,
                                      AdditionsFacilityStatus_T *aStatus) = 0;
    virtual HRESULT getAdditionsStatus(AdditionsRunLevelType_T aLevel,
                                       BOOL *aActive) = 0;
    virtual HRESULT setCredentials(const com::Utf8Str &aUserName,
                                   const com::Utf8Str &aPassword,
                                   const com::Utf8Str &aDomain,
                                   BOOL aAllowInteractiveLogon) = 0;
    virtual HRESULT dragHGEnter(ULONG aScreenId,
                                ULONG aY,
                                ULONG aX,
                                DragAndDropAction_T aDefaultAction,
                                const std::vector<DragAndDropAction_T> &aAllowedActions,
                                const std::vector<com::Utf8Str> &aFormats,
                                DragAndDropAction_T *aResultAction) = 0;
    virtual HRESULT dragHGMove(ULONG aScreenId,
                               ULONG aX,
                               ULONG aY,
                               DragAndDropAction_T aDefaultAction,
                               const std::vector<DragAndDropAction_T> &aAllowedActions,
                               const std::vector<com::Utf8Str> &aFormats,
                               DragAndDropAction_T *aResultAction) = 0;
    virtual HRESULT dragHGLeave(ULONG aScreenId) = 0;
    virtual HRESULT dragHGDrop(ULONG aScreenId,
                               ULONG aX,
                               ULONG aY,
                               DragAndDropAction_T aDefaultAction,
                               const std::vector<DragAndDropAction_T> &aAllowedActions,
                               const std::vector<com::Utf8Str> &aFormats,
                               com::Utf8Str &aFormat,
                               DragAndDropAction_T *aResultAction) = 0;
    virtual HRESULT dragHGPutData(ULONG aScreenId,
                                  const com::Utf8Str &aFormat,
                                  const std::vector<BYTE> &aData,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT dragGHPending(ULONG aScreenId,
                                  std::vector<com::Utf8Str> &aFormats,
                                  std::vector<DragAndDropAction_T> &aAllowedActions,
                                  DragAndDropAction_T *aDefaultAction) = 0;
    virtual HRESULT dragGHDropped(const com::Utf8Str &aFormat,
                                  DragAndDropAction_T aAction,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT dragGHGetData(std::vector<BYTE> &aData) = 0;
    virtual HRESULT createSession(const com::Utf8Str &aUser,
                                  const com::Utf8Str &aPassword,
                                  const com::Utf8Str &aDomain,
                                  const com::Utf8Str &aSessionName,
                                  ComPtr<IGuestSession> &aGuestSession) = 0;
    virtual HRESULT findSession(const com::Utf8Str &aSessionName,
                                std::vector<ComPtr<IGuestSession> > &aSessions) = 0;
    virtual HRESULT updateGuestAdditions(const com::Utf8Str &aSource,
                                         const std::vector<com::Utf8Str> &aArguments,
                                         const std::vector<AdditionsUpdateFlag_T> &aFlags,
                                         ComPtr<IProgress> &aProgress) = 0;
};

#endif // !GuestWrap_H_
