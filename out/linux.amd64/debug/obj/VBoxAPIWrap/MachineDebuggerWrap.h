/** @file
 *
 * VirtualBox API class wrapper header for IMachineDebugger.
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

#ifndef MachineDebuggerWrap_H_
#define MachineDebuggerWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MachineDebuggerWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IMachineDebugger)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MachineDebuggerWrap, IMachineDebugger)
    DECLARE_NOT_AGGREGATABLE(MachineDebuggerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MachineDebuggerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMachineDebugger)
        COM_INTERFACE_ENTRY2(IDispatch, IMachineDebugger)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(MachineDebuggerWrap)

    // public IMachineDebugger properties
    STDMETHOD(COMGETTER(SingleStep))(BOOL *aSingleStep);
    STDMETHOD(COMSETTER(SingleStep))(BOOL aSingleStep);
    STDMETHOD(COMGETTER(RecompileUser))(BOOL *aRecompileUser);
    STDMETHOD(COMSETTER(RecompileUser))(BOOL aRecompileUser);
    STDMETHOD(COMGETTER(RecompileSupervisor))(BOOL *aRecompileSupervisor);
    STDMETHOD(COMSETTER(RecompileSupervisor))(BOOL aRecompileSupervisor);
    STDMETHOD(COMGETTER(ExecuteAllInIEM))(BOOL *aExecuteAllInIEM);
    STDMETHOD(COMSETTER(ExecuteAllInIEM))(BOOL aExecuteAllInIEM);
    STDMETHOD(COMGETTER(PATMEnabled))(BOOL *aPATMEnabled);
    STDMETHOD(COMSETTER(PATMEnabled))(BOOL aPATMEnabled);
    STDMETHOD(COMGETTER(CSAMEnabled))(BOOL *aCSAMEnabled);
    STDMETHOD(COMSETTER(CSAMEnabled))(BOOL aCSAMEnabled);
    STDMETHOD(COMGETTER(LogEnabled))(BOOL *aLogEnabled);
    STDMETHOD(COMSETTER(LogEnabled))(BOOL aLogEnabled);
    STDMETHOD(COMGETTER(LogDbgFlags))(BSTR *aLogDbgFlags);
    STDMETHOD(COMGETTER(LogDbgGroups))(BSTR *aLogDbgGroups);
    STDMETHOD(COMGETTER(LogDbgDestinations))(BSTR *aLogDbgDestinations);
    STDMETHOD(COMGETTER(LogRelFlags))(BSTR *aLogRelFlags);
    STDMETHOD(COMGETTER(LogRelGroups))(BSTR *aLogRelGroups);
    STDMETHOD(COMGETTER(LogRelDestinations))(BSTR *aLogRelDestinations);
    STDMETHOD(COMGETTER(HWVirtExEnabled))(BOOL *aHWVirtExEnabled);
    STDMETHOD(COMGETTER(HWVirtExNestedPagingEnabled))(BOOL *aHWVirtExNestedPagingEnabled);
    STDMETHOD(COMGETTER(HWVirtExVPIDEnabled))(BOOL *aHWVirtExVPIDEnabled);
    STDMETHOD(COMGETTER(HWVirtExUXEnabled))(BOOL *aHWVirtExUXEnabled);
    STDMETHOD(COMGETTER(OSName))(BSTR *aOSName);
    STDMETHOD(COMGETTER(OSVersion))(BSTR *aOSVersion);
    STDMETHOD(COMGETTER(PAEEnabled))(BOOL *aPAEEnabled);
    STDMETHOD(COMGETTER(VirtualTimeRate))(ULONG *aVirtualTimeRate);
    STDMETHOD(COMSETTER(VirtualTimeRate))(ULONG aVirtualTimeRate);
    STDMETHOD(COMGETTER(VM))(LONG64 *aVM);

    // public IMachineDebugger methods
    STDMETHOD(DumpGuestCore)(IN_BSTR aFilename,
                             IN_BSTR aCompression);
    STDMETHOD(DumpHostProcessCore)(IN_BSTR aFilename,
                                   IN_BSTR aCompression);
    STDMETHOD(Info)(IN_BSTR aName,
                    IN_BSTR aArgs,
                    BSTR *aInfo);
    STDMETHOD(InjectNMI)();
    STDMETHOD(ModifyLogGroups)(IN_BSTR aSettings);
    STDMETHOD(ModifyLogFlags)(IN_BSTR aSettings);
    STDMETHOD(ModifyLogDestinations)(IN_BSTR aSettings);
    STDMETHOD(ReadPhysicalMemory)(LONG64 aAddress,
                                  ULONG aSize,
                                  ComSafeArrayOut(BYTE, aBytes));
    STDMETHOD(WritePhysicalMemory)(LONG64 aAddress,
                                   ULONG aSize,
                                   ComSafeArrayIn(BYTE, aBytes));
    STDMETHOD(ReadVirtualMemory)(ULONG aCpuId,
                                 LONG64 aAddress,
                                 ULONG aSize,
                                 ComSafeArrayOut(BYTE, aBytes));
    STDMETHOD(WriteVirtualMemory)(ULONG aCpuId,
                                  LONG64 aAddress,
                                  ULONG aSize,
                                  ComSafeArrayIn(BYTE, aBytes));
    STDMETHOD(DetectOS)(BSTR *aOs);
    STDMETHOD(GetRegister)(ULONG aCpuId,
                           IN_BSTR aName,
                           BSTR *aValue);
    STDMETHOD(GetRegisters)(ULONG aCpuId,
                            ComSafeArrayOut(BSTR, aNames),
                            ComSafeArrayOut(BSTR, aValues));
    STDMETHOD(SetRegister)(ULONG aCpuId,
                           IN_BSTR aName,
                           IN_BSTR aValue);
    STDMETHOD(SetRegisters)(ULONG aCpuId,
                            ComSafeArrayIn(IN_BSTR, aNames),
                            ComSafeArrayIn(IN_BSTR, aValues));
    STDMETHOD(DumpGuestStack)(ULONG aCpuId,
                              BSTR *aStack);
    STDMETHOD(ResetStats)(IN_BSTR aPattern);
    STDMETHOD(DumpStats)(IN_BSTR aPattern);
    STDMETHOD(GetStats)(IN_BSTR aPattern,
                        BOOL aWithDescriptions,
                        BSTR *aStats);

private:
    // wrapped IMachineDebugger properties
    virtual HRESULT getSingleStep(BOOL *aSingleStep) = 0;
    virtual HRESULT setSingleStep(BOOL aSingleStep) = 0;
    virtual HRESULT getRecompileUser(BOOL *aRecompileUser) = 0;
    virtual HRESULT setRecompileUser(BOOL aRecompileUser) = 0;
    virtual HRESULT getRecompileSupervisor(BOOL *aRecompileSupervisor) = 0;
    virtual HRESULT setRecompileSupervisor(BOOL aRecompileSupervisor) = 0;
    virtual HRESULT getExecuteAllInIEM(BOOL *aExecuteAllInIEM) = 0;
    virtual HRESULT setExecuteAllInIEM(BOOL aExecuteAllInIEM) = 0;
    virtual HRESULT getPATMEnabled(BOOL *aPATMEnabled) = 0;
    virtual HRESULT setPATMEnabled(BOOL aPATMEnabled) = 0;
    virtual HRESULT getCSAMEnabled(BOOL *aCSAMEnabled) = 0;
    virtual HRESULT setCSAMEnabled(BOOL aCSAMEnabled) = 0;
    virtual HRESULT getLogEnabled(BOOL *aLogEnabled) = 0;
    virtual HRESULT setLogEnabled(BOOL aLogEnabled) = 0;
    virtual HRESULT getLogDbgFlags(com::Utf8Str &aLogDbgFlags) = 0;
    virtual HRESULT getLogDbgGroups(com::Utf8Str &aLogDbgGroups) = 0;
    virtual HRESULT getLogDbgDestinations(com::Utf8Str &aLogDbgDestinations) = 0;
    virtual HRESULT getLogRelFlags(com::Utf8Str &aLogRelFlags) = 0;
    virtual HRESULT getLogRelGroups(com::Utf8Str &aLogRelGroups) = 0;
    virtual HRESULT getLogRelDestinations(com::Utf8Str &aLogRelDestinations) = 0;
    virtual HRESULT getHWVirtExEnabled(BOOL *aHWVirtExEnabled) = 0;
    virtual HRESULT getHWVirtExNestedPagingEnabled(BOOL *aHWVirtExNestedPagingEnabled) = 0;
    virtual HRESULT getHWVirtExVPIDEnabled(BOOL *aHWVirtExVPIDEnabled) = 0;
    virtual HRESULT getHWVirtExUXEnabled(BOOL *aHWVirtExUXEnabled) = 0;
    virtual HRESULT getOSName(com::Utf8Str &aOSName) = 0;
    virtual HRESULT getOSVersion(com::Utf8Str &aOSVersion) = 0;
    virtual HRESULT getPAEEnabled(BOOL *aPAEEnabled) = 0;
    virtual HRESULT getVirtualTimeRate(ULONG *aVirtualTimeRate) = 0;
    virtual HRESULT setVirtualTimeRate(ULONG aVirtualTimeRate) = 0;
    virtual HRESULT getVM(LONG64 *aVM) = 0;

    // wrapped IMachineDebugger methods
    virtual HRESULT dumpGuestCore(const com::Utf8Str &aFilename,
                                  const com::Utf8Str &aCompression) = 0;
    virtual HRESULT dumpHostProcessCore(const com::Utf8Str &aFilename,
                                        const com::Utf8Str &aCompression) = 0;
    virtual HRESULT info(const com::Utf8Str &aName,
                         const com::Utf8Str &aArgs,
                         com::Utf8Str &aInfo) = 0;
    virtual HRESULT injectNMI() = 0;
    virtual HRESULT modifyLogGroups(const com::Utf8Str &aSettings) = 0;
    virtual HRESULT modifyLogFlags(const com::Utf8Str &aSettings) = 0;
    virtual HRESULT modifyLogDestinations(const com::Utf8Str &aSettings) = 0;
    virtual HRESULT readPhysicalMemory(LONG64 aAddress,
                                       ULONG aSize,
                                       std::vector<BYTE> &aBytes) = 0;
    virtual HRESULT writePhysicalMemory(LONG64 aAddress,
                                        ULONG aSize,
                                        const std::vector<BYTE> &aBytes) = 0;
    virtual HRESULT readVirtualMemory(ULONG aCpuId,
                                      LONG64 aAddress,
                                      ULONG aSize,
                                      std::vector<BYTE> &aBytes) = 0;
    virtual HRESULT writeVirtualMemory(ULONG aCpuId,
                                       LONG64 aAddress,
                                       ULONG aSize,
                                       const std::vector<BYTE> &aBytes) = 0;
    virtual HRESULT detectOS(com::Utf8Str &aOs) = 0;
    virtual HRESULT getRegister(ULONG aCpuId,
                                const com::Utf8Str &aName,
                                com::Utf8Str &aValue) = 0;
    virtual HRESULT getRegisters(ULONG aCpuId,
                                 std::vector<com::Utf8Str> &aNames,
                                 std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT setRegister(ULONG aCpuId,
                                const com::Utf8Str &aName,
                                const com::Utf8Str &aValue) = 0;
    virtual HRESULT setRegisters(ULONG aCpuId,
                                 const std::vector<com::Utf8Str> &aNames,
                                 const std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT dumpGuestStack(ULONG aCpuId,
                                   com::Utf8Str &aStack) = 0;
    virtual HRESULT resetStats(const com::Utf8Str &aPattern) = 0;
    virtual HRESULT dumpStats(const com::Utf8Str &aPattern) = 0;
    virtual HRESULT getStats(const com::Utf8Str &aPattern,
                             BOOL aWithDescriptions,
                             com::Utf8Str &aStats) = 0;
};

#endif // !MachineDebuggerWrap_H_
