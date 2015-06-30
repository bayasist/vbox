/** @file
 *
 * VirtualBox API class wrapper header for IGuestSession.
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

#ifndef GuestSessionWrap_H_
#define GuestSessionWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestSessionWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IGuestSession)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestSessionWrap, IGuestSession)
    DECLARE_NOT_AGGREGATABLE(GuestSessionWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestSessionWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestSession)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestSession)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(GuestSessionWrap)

    // public IGuestSession properties
    STDMETHOD(COMGETTER(User))(BSTR *aUser);
    STDMETHOD(COMGETTER(Domain))(BSTR *aDomain);
    STDMETHOD(COMGETTER(Name))(BSTR *aName);
    STDMETHOD(COMGETTER(Id))(ULONG *aId);
    STDMETHOD(COMGETTER(Timeout))(ULONG *aTimeout);
    STDMETHOD(COMSETTER(Timeout))(ULONG aTimeout);
    STDMETHOD(COMGETTER(ProtocolVersion))(ULONG *aProtocolVersion);
    STDMETHOD(COMGETTER(Status))(GuestSessionStatus_T *aStatus);
    STDMETHOD(COMGETTER(Environment))(ComSafeArrayOut(BSTR, aEnvironment));
    STDMETHOD(COMSETTER(Environment))(ComSafeArrayIn(IN_BSTR, aEnvironment));
    STDMETHOD(COMGETTER(Processes))(ComSafeArrayOut(IGuestProcess *, aProcesses));
    STDMETHOD(COMGETTER(Directories))(ComSafeArrayOut(IGuestDirectory *, aDirectories));
    STDMETHOD(COMGETTER(Files))(ComSafeArrayOut(IGuestFile *, aFiles));
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);

    // public IGuestSession methods
    STDMETHOD(Close)();
    STDMETHOD(CopyFrom)(IN_BSTR aSource,
                        IN_BSTR aDest,
                        ComSafeArrayIn(CopyFileFlag_T, aFlags),
                        IProgress **aProgress);
    STDMETHOD(CopyTo)(IN_BSTR aSource,
                      IN_BSTR aDest,
                      ComSafeArrayIn(CopyFileFlag_T, aFlags),
                      IProgress **aProgress);
    STDMETHOD(DirectoryCreate)(IN_BSTR aPath,
                               ULONG aMode,
                               ComSafeArrayIn(DirectoryCreateFlag_T, aFlags));
    STDMETHOD(DirectoryCreateTemp)(IN_BSTR aTemplateName,
                                   ULONG aMode,
                                   IN_BSTR aPath,
                                   BOOL aSecure,
                                   BSTR *aDirectory);
    STDMETHOD(DirectoryExists)(IN_BSTR aPath,
                               BOOL *aExists);
    STDMETHOD(DirectoryOpen)(IN_BSTR aPath,
                             IN_BSTR aFilter,
                             ComSafeArrayIn(DirectoryOpenFlag_T, aFlags),
                             IGuestDirectory **aDirectory);
    STDMETHOD(DirectoryQueryInfo)(IN_BSTR aPath,
                                  IGuestFsObjInfo **aInfo);
    STDMETHOD(DirectoryRemove)(IN_BSTR aPath);
    STDMETHOD(DirectoryRemoveRecursive)(IN_BSTR aPath,
                                        ComSafeArrayIn(DirectoryRemoveRecFlag_T, aFlags),
                                        IProgress **aProgress);
    STDMETHOD(DirectoryRename)(IN_BSTR aSource,
                               IN_BSTR aDest,
                               ComSafeArrayIn(PathRenameFlag_T, aFlags));
    STDMETHOD(DirectorySetACL)(IN_BSTR aPath,
                               IN_BSTR aAcl);
    STDMETHOD(EnvironmentClear)();
    STDMETHOD(EnvironmentGet)(IN_BSTR aName,
                              BSTR *aValue);
    STDMETHOD(EnvironmentSet)(IN_BSTR aName,
                              IN_BSTR aValue);
    STDMETHOD(EnvironmentUnset)(IN_BSTR aName);
    STDMETHOD(FileCreateTemp)(IN_BSTR aTemplateName,
                              ULONG aMode,
                              IN_BSTR aPath,
                              BOOL aSecure,
                              IGuestFile **aFile);
    STDMETHOD(FileExists)(IN_BSTR aPath,
                          BOOL *aExists);
    STDMETHOD(FileRemove)(IN_BSTR aPath);
    STDMETHOD(FileOpen)(IN_BSTR aPath,
                        IN_BSTR aOpenMode,
                        IN_BSTR aDisposition,
                        ULONG aCreationMode,
                        IGuestFile **aFile);
    STDMETHOD(FileOpenEx)(IN_BSTR aPath,
                          IN_BSTR aOpenMode,
                          IN_BSTR aDisposition,
                          IN_BSTR aSharingMode,
                          ULONG aCreationMode,
                          LONG64 aOffset,
                          IGuestFile **aFile);
    STDMETHOD(FileQueryInfo)(IN_BSTR aPath,
                             IGuestFsObjInfo **aInfo);
    STDMETHOD(FileQuerySize)(IN_BSTR aPath,
                             LONG64 *aSize);
    STDMETHOD(FileRename)(IN_BSTR aSource,
                          IN_BSTR aDest,
                          ComSafeArrayIn(PathRenameFlag_T, aFlags));
    STDMETHOD(FileSetACL)(IN_BSTR aFile,
                          IN_BSTR aAcl);
    STDMETHOD(ProcessCreate)(IN_BSTR aCommand,
                             ComSafeArrayIn(IN_BSTR, aArguments),
                             ComSafeArrayIn(IN_BSTR, aEnvironment),
                             ComSafeArrayIn(ProcessCreateFlag_T, aFlags),
                             ULONG aTimeoutMS,
                             IGuestProcess **aGuestProcess);
    STDMETHOD(ProcessCreateEx)(IN_BSTR aCommand,
                               ComSafeArrayIn(IN_BSTR, aArguments),
                               ComSafeArrayIn(IN_BSTR, aEnvironment),
                               ComSafeArrayIn(ProcessCreateFlag_T, aFlags),
                               ULONG aTimeoutMS,
                               ProcessPriority_T aPriority,
                               ComSafeArrayIn(LONG, aAffinity),
                               IGuestProcess **aGuestProcess);
    STDMETHOD(ProcessGet)(ULONG aPid,
                          IGuestProcess **aGuestProcess);
    STDMETHOD(SymlinkCreate)(IN_BSTR aSource,
                             IN_BSTR aTarget,
                             SymlinkType_T aType);
    STDMETHOD(SymlinkExists)(IN_BSTR aSymlink,
                             BOOL *aExists);
    STDMETHOD(SymlinkRead)(IN_BSTR aSymlink,
                           ComSafeArrayIn(SymlinkReadFlag_T, aFlags),
                           BSTR *aTarget);
    STDMETHOD(SymlinkRemoveDirectory)(IN_BSTR aPath);
    STDMETHOD(SymlinkRemoveFile)(IN_BSTR aFile);
    STDMETHOD(WaitFor)(ULONG aWaitFor,
                       ULONG aTimeoutMS,
                       GuestSessionWaitResult_T *aReason);
    STDMETHOD(WaitForArray)(ComSafeArrayIn(GuestSessionWaitForFlag_T, aWaitFor),
                            ULONG aTimeoutMS,
                            GuestSessionWaitResult_T *aReason);

private:
    // wrapped IGuestSession properties
    virtual HRESULT getUser(com::Utf8Str &aUser) = 0;
    virtual HRESULT getDomain(com::Utf8Str &aDomain) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getId(ULONG *aId) = 0;
    virtual HRESULT getTimeout(ULONG *aTimeout) = 0;
    virtual HRESULT setTimeout(ULONG aTimeout) = 0;
    virtual HRESULT getProtocolVersion(ULONG *aProtocolVersion) = 0;
    virtual HRESULT getStatus(GuestSessionStatus_T *aStatus) = 0;
    virtual HRESULT getEnvironment(std::vector<com::Utf8Str> &aEnvironment) = 0;
    virtual HRESULT setEnvironment(const std::vector<com::Utf8Str> &aEnvironment) = 0;
    virtual HRESULT getProcesses(std::vector<ComPtr<IGuestProcess> > &aProcesses) = 0;
    virtual HRESULT getDirectories(std::vector<ComPtr<IGuestDirectory> > &aDirectories) = 0;
    virtual HRESULT getFiles(std::vector<ComPtr<IGuestFile> > &aFiles) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;

    // wrapped IGuestSession methods
    virtual HRESULT close() = 0;
    virtual HRESULT copyFrom(const com::Utf8Str &aSource,
                             const com::Utf8Str &aDest,
                             const std::vector<CopyFileFlag_T> &aFlags,
                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT copyTo(const com::Utf8Str &aSource,
                           const com::Utf8Str &aDest,
                           const std::vector<CopyFileFlag_T> &aFlags,
                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT directoryCreate(const com::Utf8Str &aPath,
                                    ULONG aMode,
                                    const std::vector<DirectoryCreateFlag_T> &aFlags) = 0;
    virtual HRESULT directoryCreateTemp(const com::Utf8Str &aTemplateName,
                                        ULONG aMode,
                                        const com::Utf8Str &aPath,
                                        BOOL aSecure,
                                        com::Utf8Str &aDirectory) = 0;
    virtual HRESULT directoryExists(const com::Utf8Str &aPath,
                                    BOOL *aExists) = 0;
    virtual HRESULT directoryOpen(const com::Utf8Str &aPath,
                                  const com::Utf8Str &aFilter,
                                  const std::vector<DirectoryOpenFlag_T> &aFlags,
                                  ComPtr<IGuestDirectory> &aDirectory) = 0;
    virtual HRESULT directoryQueryInfo(const com::Utf8Str &aPath,
                                       ComPtr<IGuestFsObjInfo> &aInfo) = 0;
    virtual HRESULT directoryRemove(const com::Utf8Str &aPath) = 0;
    virtual HRESULT directoryRemoveRecursive(const com::Utf8Str &aPath,
                                             const std::vector<DirectoryRemoveRecFlag_T> &aFlags,
                                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT directoryRename(const com::Utf8Str &aSource,
                                    const com::Utf8Str &aDest,
                                    const std::vector<PathRenameFlag_T> &aFlags) = 0;
    virtual HRESULT directorySetACL(const com::Utf8Str &aPath,
                                    const com::Utf8Str &aAcl) = 0;
    virtual HRESULT environmentClear() = 0;
    virtual HRESULT environmentGet(const com::Utf8Str &aName,
                                   com::Utf8Str &aValue) = 0;
    virtual HRESULT environmentSet(const com::Utf8Str &aName,
                                   const com::Utf8Str &aValue) = 0;
    virtual HRESULT environmentUnset(const com::Utf8Str &aName) = 0;
    virtual HRESULT fileCreateTemp(const com::Utf8Str &aTemplateName,
                                   ULONG aMode,
                                   const com::Utf8Str &aPath,
                                   BOOL aSecure,
                                   ComPtr<IGuestFile> &aFile) = 0;
    virtual HRESULT fileExists(const com::Utf8Str &aPath,
                               BOOL *aExists) = 0;
    virtual HRESULT fileRemove(const com::Utf8Str &aPath) = 0;
    virtual HRESULT fileOpen(const com::Utf8Str &aPath,
                             const com::Utf8Str &aOpenMode,
                             const com::Utf8Str &aDisposition,
                             ULONG aCreationMode,
                             ComPtr<IGuestFile> &aFile) = 0;
    virtual HRESULT fileOpenEx(const com::Utf8Str &aPath,
                               const com::Utf8Str &aOpenMode,
                               const com::Utf8Str &aDisposition,
                               const com::Utf8Str &aSharingMode,
                               ULONG aCreationMode,
                               LONG64 aOffset,
                               ComPtr<IGuestFile> &aFile) = 0;
    virtual HRESULT fileQueryInfo(const com::Utf8Str &aPath,
                                  ComPtr<IGuestFsObjInfo> &aInfo) = 0;
    virtual HRESULT fileQuerySize(const com::Utf8Str &aPath,
                                  LONG64 *aSize) = 0;
    virtual HRESULT fileRename(const com::Utf8Str &aSource,
                               const com::Utf8Str &aDest,
                               const std::vector<PathRenameFlag_T> &aFlags) = 0;
    virtual HRESULT fileSetACL(const com::Utf8Str &aFile,
                               const com::Utf8Str &aAcl) = 0;
    virtual HRESULT processCreate(const com::Utf8Str &aCommand,
                                  const std::vector<com::Utf8Str> &aArguments,
                                  const std::vector<com::Utf8Str> &aEnvironment,
                                  const std::vector<ProcessCreateFlag_T> &aFlags,
                                  ULONG aTimeoutMS,
                                  ComPtr<IGuestProcess> &aGuestProcess) = 0;
    virtual HRESULT processCreateEx(const com::Utf8Str &aCommand,
                                    const std::vector<com::Utf8Str> &aArguments,
                                    const std::vector<com::Utf8Str> &aEnvironment,
                                    const std::vector<ProcessCreateFlag_T> &aFlags,
                                    ULONG aTimeoutMS,
                                    ProcessPriority_T aPriority,
                                    const std::vector<LONG> &aAffinity,
                                    ComPtr<IGuestProcess> &aGuestProcess) = 0;
    virtual HRESULT processGet(ULONG aPid,
                               ComPtr<IGuestProcess> &aGuestProcess) = 0;
    virtual HRESULT symlinkCreate(const com::Utf8Str &aSource,
                                  const com::Utf8Str &aTarget,
                                  SymlinkType_T aType) = 0;
    virtual HRESULT symlinkExists(const com::Utf8Str &aSymlink,
                                  BOOL *aExists) = 0;
    virtual HRESULT symlinkRead(const com::Utf8Str &aSymlink,
                                const std::vector<SymlinkReadFlag_T> &aFlags,
                                com::Utf8Str &aTarget) = 0;
    virtual HRESULT symlinkRemoveDirectory(const com::Utf8Str &aPath) = 0;
    virtual HRESULT symlinkRemoveFile(const com::Utf8Str &aFile) = 0;
    virtual HRESULT waitFor(ULONG aWaitFor,
                            ULONG aTimeoutMS,
                            GuestSessionWaitResult_T *aReason) = 0;
    virtual HRESULT waitForArray(const std::vector<GuestSessionWaitForFlag_T> &aWaitFor,
                                 ULONG aTimeoutMS,
                                 GuestSessionWaitResult_T *aReason) = 0;
};

#endif // !GuestSessionWrap_H_
