#ifdef VBOX_HAVE_VISIBILITY_HIDDEN
# define EXPORT __attribute__((visibility("default")))
# define EXPORT_DATA __attribute__((visibility("default")))
#else
# define EXPORT
# define EXPORT_DATA
#endif


EXPORT
void CFGMR3GetRoot(void);
void CFGMR3GetRoot(void){}
EXPORT
void CFGMR3GetFirstChild(void);
void CFGMR3GetFirstChild(void){}
EXPORT
void CFGMR3GetNextChild(void);
void CFGMR3GetNextChild(void){}
EXPORT
void CFGMR3GetNameLen(void);
void CFGMR3GetNameLen(void){}
EXPORT
void CFGMR3GetFirstValue(void);
void CFGMR3GetFirstValue(void){}
EXPORT
void CFGMR3GetNextValue(void);
void CFGMR3GetNextValue(void){}
EXPORT
void CFGMR3GetValueNameLen(void);
void CFGMR3GetValueNameLen(void){}
EXPORT
void CFGMR3GetValueType(void);
void CFGMR3GetValueType(void){}
EXPORT
void CFGMR3Dump(void);
void CFGMR3Dump(void){}
EXPORT
void CFGMR3CreateTree(void);
void CFGMR3CreateTree(void){}
EXPORT
void CFGMR3DestroyTree(void);
void CFGMR3DestroyTree(void){}
EXPORT
void CFGMR3GetValueName(void);
void CFGMR3GetValueName(void){}
EXPORT
void CFGMR3GetName(void);
void CFGMR3GetName(void){}
EXPORT
void CFGMR3RemoveNode(void);
void CFGMR3RemoveNode(void){}
EXPORT
void CFGMR3InsertBytes(void);
void CFGMR3InsertBytes(void){}
EXPORT
void CFGMR3InsertStringFV(void);
void CFGMR3InsertStringFV(void){}
EXPORT
void CFGMR3InsertStringF(void);
void CFGMR3InsertStringF(void){}
EXPORT
void CFGMR3InsertStringN(void);
void CFGMR3InsertStringN(void){}
EXPORT
void CFGMR3InsertString(void);
void CFGMR3InsertString(void){}
EXPORT
void CFGMR3InsertStringW(void);
void CFGMR3InsertStringW(void){}
EXPORT
void CFGMR3InsertInteger(void);
void CFGMR3InsertInteger(void){}
EXPORT
void CFGMR3QueryStringAllocDef(void);
void CFGMR3QueryStringAllocDef(void){}
EXPORT
void CFGMR3RemoveValue(void);
void CFGMR3RemoveValue(void){}
EXPORT
void CFGMR3QueryIntegerDef(void);
void CFGMR3QueryIntegerDef(void){}
EXPORT
void CFGMR3QueryGCPtrSDef(void);
void CFGMR3QueryGCPtrSDef(void){}
EXPORT
void CFGMR3QueryGCPtrUDef(void);
void CFGMR3QueryGCPtrUDef(void){}
EXPORT
void CFGMR3QueryGCPtrDef(void);
void CFGMR3QueryGCPtrDef(void){}
EXPORT
void CFGMR3QueryPtrDef(void);
void CFGMR3QueryPtrDef(void){}
EXPORT
void CFGMR3QueryBoolDef(void);
void CFGMR3QueryBoolDef(void){}
EXPORT
void CFGMR3QueryS8Def(void);
void CFGMR3QueryS8Def(void){}
EXPORT
void CFGMR3QueryU8Def(void);
void CFGMR3QueryU8Def(void){}
EXPORT
void CFGMR3QueryS16Def(void);
void CFGMR3QueryS16Def(void){}
EXPORT
void CFGMR3QueryU16Def(void);
void CFGMR3QueryU16Def(void){}
EXPORT
void CFGMR3QueryPortDef(void);
void CFGMR3QueryPortDef(void){}
EXPORT
void CFGMR3QueryS32Def(void);
void CFGMR3QueryS32Def(void){}
EXPORT
void CFGMR3QuerySIntDef(void);
void CFGMR3QuerySIntDef(void){}
EXPORT
void CFGMR3QueryU32Def(void);
void CFGMR3QueryU32Def(void){}
EXPORT
void CFGMR3QueryUIntDef(void);
void CFGMR3QueryUIntDef(void){}
EXPORT
void CFGMR3QueryS64Def(void);
void CFGMR3QueryS64Def(void){}
EXPORT
void CFGMR3QueryU64Def(void);
void CFGMR3QueryU64Def(void){}
EXPORT
void CFGMR3QueryInteger(void);
void CFGMR3QueryInteger(void){}
EXPORT
void CFGMR3QueryGCPtrS(void);
void CFGMR3QueryGCPtrS(void){}
EXPORT
void CFGMR3QueryGCPtrU(void);
void CFGMR3QueryGCPtrU(void){}
EXPORT
void CFGMR3QueryGCPtr(void);
void CFGMR3QueryGCPtr(void){}
EXPORT
void CFGMR3QueryPtr(void);
void CFGMR3QueryPtr(void){}
EXPORT
void CFGMR3QueryBool(void);
void CFGMR3QueryBool(void){}
EXPORT
void CFGMR3QueryS8(void);
void CFGMR3QueryS8(void){}
EXPORT
void CFGMR3QueryU8(void);
void CFGMR3QueryU8(void){}
EXPORT
void CFGMR3QueryS16(void);
void CFGMR3QueryS16(void){}
EXPORT
void CFGMR3QueryU16(void);
void CFGMR3QueryU16(void){}
EXPORT
void CFGMR3QueryPort(void);
void CFGMR3QueryPort(void){}
EXPORT
void CFGMR3QueryS32(void);
void CFGMR3QueryS32(void){}
EXPORT
void CFGMR3QuerySInt(void);
void CFGMR3QuerySInt(void){}
EXPORT
void CFGMR3QueryU32(void);
void CFGMR3QueryU32(void){}
EXPORT
void CFGMR3QueryUInt(void);
void CFGMR3QueryUInt(void){}
EXPORT
void CFGMR3QueryS64(void);
void CFGMR3QueryS64(void){}
EXPORT
void CFGMR3QueryU64(void);
void CFGMR3QueryU64(void){}
EXPORT
void CFGMR3QuerySize(void);
void CFGMR3QuerySize(void){}
EXPORT
void CFGMR3QueryType(void);
void CFGMR3QueryType(void){}
EXPORT
void CFGMR3AreValuesValid(void);
void CFGMR3AreValuesValid(void){}
EXPORT
void CFGMR3AreChildrenValid(void);
void CFGMR3AreChildrenValid(void){}
EXPORT
void CFGMR3GetChildFV(void);
void CFGMR3GetChildFV(void){}
EXPORT
void CFGMR3GetChildF(void);
void CFGMR3GetChildF(void){}
EXPORT
void CFGMR3GetChild(void);
void CFGMR3GetChild(void){}
EXPORT
void CFGMR3InsertNode(void);
void CFGMR3InsertNode(void){}
EXPORT
void CFGMR3InsertNodeFV(void);
void CFGMR3InsertNodeFV(void){}
EXPORT
void CFGMR3InsertNodeF(void);
void CFGMR3InsertNodeF(void){}
EXPORT
void CFGMR3InsertSubTree(void);
void CFGMR3InsertSubTree(void){}
EXPORT
void CFGMR3ValidateConfig(void);
void CFGMR3ValidateConfig(void){}
EXPORT
void CFGMR3QueryBytes(void);
void CFGMR3QueryBytes(void){}
EXPORT
void CFGMR3QueryStringDef(void);
void CFGMR3QueryStringDef(void){}
EXPORT
void CFGMR3QueryString(void);
void CFGMR3QueryString(void){}
EXPORT
void CFGMR3QueryStringAlloc(void);
void CFGMR3QueryStringAlloc(void){}
EXPORT
void CFGMR3GetParent(void);
void CFGMR3GetParent(void){}
EXPORT
void CFGMR3GetRootU(void);
void CFGMR3GetRootU(void){}
EXPORT
void CSAMR3IsEnabled(void);
void CSAMR3IsEnabled(void){}
EXPORT
void CSAMR3SetScanningEnabled(void);
void CSAMR3SetScanningEnabled(void){}
EXPORT
void DBGCCreate(void);
void DBGCCreate(void){}
EXPORT
void DBGFR3CoreWrite(void);
void DBGFR3CoreWrite(void){}
EXPORT
void DBGFR3Info(void);
void DBGFR3Info(void){}
EXPORT
void DBGFR3InfoRegisterExternal(void);
void DBGFR3InfoRegisterExternal(void){}
EXPORT
void DBGFR3InjectNMI(void);
void DBGFR3InjectNMI(void){}
EXPORT
void DBGFR3LogModifyDestinations(void);
void DBGFR3LogModifyDestinations(void){}
EXPORT
void DBGFR3LogModifyFlags(void);
void DBGFR3LogModifyFlags(void){}
EXPORT
void DBGFR3LogModifyGroups(void);
void DBGFR3LogModifyGroups(void){}
EXPORT
void DBGFR3OSDetect(void);
void DBGFR3OSDetect(void){}
EXPORT
void DBGFR3OSQueryNameAndVersion(void);
void DBGFR3OSQueryNameAndVersion(void){}
EXPORT
void DBGFR3RegCpuQueryU32(void);
void DBGFR3RegCpuQueryU32(void){}
EXPORT
void DBGFR3RegFormatValue(void);
void DBGFR3RegFormatValue(void){}
EXPORT
void DBGFR3RegNmQuery(void);
void DBGFR3RegNmQuery(void){}
EXPORT
void DBGFR3RegNmQueryAll(void);
void DBGFR3RegNmQueryAll(void){}
EXPORT
void DBGFR3RegNmQueryAllCount(void);
void DBGFR3RegNmQueryAllCount(void){}
EXPORT
void DBGFR3OSDeregister(void);
void DBGFR3OSDeregister(void){}
EXPORT
void DBGFR3OSRegister(void);
void DBGFR3OSRegister(void){}
EXPORT
void DBGFR3MemReadString(void);
void DBGFR3MemReadString(void){}
EXPORT
void DBGFR3MemRead(void);
void DBGFR3MemRead(void){}
EXPORT
void DBGFR3MemScan(void);
void DBGFR3MemScan(void){}
EXPORT
void DBGFR3AddrFromFlat(void);
void DBGFR3AddrFromFlat(void){}
EXPORT
void DBGFR3AsSymbolByName(void);
void DBGFR3AsSymbolByName(void){}
EXPORT
void DBGFR3AsResolveAndRetain(void);
void DBGFR3AsResolveAndRetain(void){}
EXPORT
void DBGFR3AsSetAlias(void);
void DBGFR3AsSetAlias(void){}
EXPORT
void DBGFR3AddrAdd(void);
void DBGFR3AddrAdd(void){}
EXPORT
void DBGFR3AddrSub(void);
void DBGFR3AddrSub(void){}
EXPORT
void DBGFR3AsGetConfig(void);
void DBGFR3AsGetConfig(void){}
EXPORT
void DBGFR3CpuGetMode(void);
void DBGFR3CpuGetMode(void){}
EXPORT
void DBGFR3AddrFromSelOff(void);
void DBGFR3AddrFromSelOff(void){}
EXPORT
void EMR3QueryExecutionPolicy(void);
void EMR3QueryExecutionPolicy(void){}
EXPORT
void EMR3SetExecutionPolicy(void);
void EMR3SetExecutionPolicy(void){}
EXPORT
void FTMR3CancelStandby(void);
void FTMR3CancelStandby(void){}
EXPORT
void FTMR3PowerOn(void);
void FTMR3PowerOn(void){}
EXPORT
void HMR3IsEnabled(void);
void HMR3IsEnabled(void){}
EXPORT
void HMR3IsNestedPagingActive(void);
void HMR3IsNestedPagingActive(void){}
EXPORT
void HMR3IsUXActive(void);
void HMR3IsUXActive(void){}
EXPORT
void HMR3IsVpidActive(void);
void HMR3IsVpidActive(void){}
EXPORT
void MMR3HeapFree(void);
void MMR3HeapFree(void){}
EXPORT
void MMR3HeapRealloc(void);
void MMR3HeapRealloc(void){}
EXPORT
void PATMR3AllowPatching(void);
void PATMR3AllowPatching(void){}
EXPORT
void PATMR3IsEnabled(void);
void PATMR3IsEnabled(void){}
EXPORT
void PDMR3AsyncCompletionBwMgrSetMaxForFile(void);
void PDMR3AsyncCompletionBwMgrSetMaxForFile(void){}
EXPORT
void PDMR3DeviceAttach(void);
void PDMR3DeviceAttach(void){}
EXPORT
void PDMR3DeviceDetach(void);
void PDMR3DeviceDetach(void){}
EXPORT
void PDMR3DriverAttach(void);
void PDMR3DriverAttach(void){}
EXPORT
void PDMR3NsBwGroupSetLimit(void);
void PDMR3NsBwGroupSetLimit(void){}
EXPORT
void PDMR3QueryDeviceLun(void);
void PDMR3QueryDeviceLun(void){}
EXPORT
void PDMR3QueryDriverOnLun(void);
void PDMR3QueryDriverOnLun(void){}
EXPORT
void PDMR3QueryLun(void);
void PDMR3QueryLun(void){}
EXPORT
void PDMCritSectEnter(void);
void PDMCritSectEnter(void){}
EXPORT
void PDMCritSectEnterDebug(void);
void PDMCritSectEnterDebug(void){}
EXPORT
void PDMCritSectTryEnter(void);
void PDMCritSectTryEnter(void){}
EXPORT
void PDMCritSectTryEnterDebug(void);
void PDMCritSectTryEnterDebug(void){}
EXPORT
void PDMR3CritSectEnterEx(void);
void PDMR3CritSectEnterEx(void){}
EXPORT
void PDMCritSectLeave(void);
void PDMCritSectLeave(void){}
EXPORT
void PDMCritSectIsOwner(void);
void PDMCritSectIsOwner(void){}
EXPORT
void PDMCritSectIsOwnerEx(void);
void PDMCritSectIsOwnerEx(void){}
EXPORT
void PDMCritSectIsOwned(void);
void PDMCritSectIsOwned(void){}
EXPORT
void PDMCritSectIsInitialized(void);
void PDMCritSectIsInitialized(void){}
EXPORT
void PDMCritSectHasWaiters(void);
void PDMCritSectHasWaiters(void){}
EXPORT
void PDMCritSectGetRecursion(void);
void PDMCritSectGetRecursion(void){}
EXPORT
void PDMR3CritSectYield(void);
void PDMR3CritSectYield(void){}
EXPORT
void PDMR3CritSectName(void);
void PDMR3CritSectName(void){}
EXPORT
void PDMR3CritSectScheduleExitEvent(void);
void PDMR3CritSectScheduleExitEvent(void){}
EXPORT
void PDMR3CritSectDelete(void);
void PDMR3CritSectDelete(void){}
EXPORT
void PDMR3QueueDestroy(void);
void PDMR3QueueDestroy(void){}
EXPORT
void PDMQueueAlloc(void);
void PDMQueueAlloc(void){}
EXPORT
void PDMQueueInsert(void);
void PDMQueueInsert(void){}
EXPORT
void PDMQueueInsertEx(void);
void PDMQueueInsertEx(void){}
EXPORT
void PDMQueueR0Ptr(void);
void PDMQueueR0Ptr(void){}
EXPORT
void PDMQueueRCPtr(void);
void PDMQueueRCPtr(void){}
EXPORT
void PDMR3ThreadDestroy(void);
void PDMR3ThreadDestroy(void){}
EXPORT
void PDMR3ThreadIAmRunning(void);
void PDMR3ThreadIAmRunning(void){}
EXPORT
void PDMR3ThreadIAmSuspending(void);
void PDMR3ThreadIAmSuspending(void){}
EXPORT
void PDMR3ThreadResume(void);
void PDMR3ThreadResume(void){}
EXPORT
void PDMR3ThreadSleep(void);
void PDMR3ThreadSleep(void){}
EXPORT
void PDMR3ThreadSuspend(void);
void PDMR3ThreadSuspend(void){}
EXPORT
void PDMR3UsbCreateEmulatedDevice(void);
void PDMR3UsbCreateEmulatedDevice(void){}
EXPORT
void PDMR3UsbCreateProxyDevice(void);
void PDMR3UsbCreateProxyDevice(void){}
EXPORT
void PDMR3UsbDetachDevice(void);
void PDMR3UsbDetachDevice(void){}
EXPORT
void PDMR3UsbHasHub(void);
void PDMR3UsbHasHub(void){}
EXPORT
void PGMHandlerPhysicalPageTempOff(void);
void PGMHandlerPhysicalPageTempOff(void){}
EXPORT
void PGMPhysReadGCPtr(void);
void PGMPhysReadGCPtr(void){}
EXPORT
void PGMPhysSimpleDirtyWriteGCPtr(void);
void PGMPhysSimpleDirtyWriteGCPtr(void){}
EXPORT
void PGMPhysSimpleReadGCPtr(void);
void PGMPhysSimpleReadGCPtr(void){}
EXPORT
void PGMPhysSimpleWriteGCPhys(void);
void PGMPhysSimpleWriteGCPhys(void){}
EXPORT
void PGMPhysSimpleWriteGCPtr(void);
void PGMPhysSimpleWriteGCPtr(void){}
EXPORT
void PGMPhysWriteGCPtr(void);
void PGMPhysWriteGCPtr(void){}
EXPORT
void PGMShwMakePageWritable(void);
void PGMShwMakePageWritable(void){}
EXPORT
void PGMR3QueryGlobalMemoryStats(void);
void PGMR3QueryGlobalMemoryStats(void){}
EXPORT
void PGMR3QueryMemoryStats(void);
void PGMR3QueryMemoryStats(void){}
EXPORT
void SSMR3Close(void);
void SSMR3Close(void){}
EXPORT
void SSMR3DeregisterExternal(void);
void SSMR3DeregisterExternal(void){}
EXPORT
void SSMR3DeregisterInternal(void);
void SSMR3DeregisterInternal(void){}
EXPORT
void SSMR3GetBool(void);
void SSMR3GetBool(void){}
EXPORT
void SSMR3GetGCPhys(void);
void SSMR3GetGCPhys(void){}
EXPORT
void SSMR3GetGCPhys32(void);
void SSMR3GetGCPhys32(void){}
EXPORT
void SSMR3GetGCPhys64(void);
void SSMR3GetGCPhys64(void){}
EXPORT
void SSMR3GetGCPtr(void);
void SSMR3GetGCPtr(void){}
EXPORT
void SSMR3GetGCUInt(void);
void SSMR3GetGCUInt(void){}
EXPORT
void SSMR3GetGCUIntPtr(void);
void SSMR3GetGCUIntPtr(void){}
EXPORT
void SSMR3GetGCUIntReg(void);
void SSMR3GetGCUIntReg(void){}
EXPORT
void SSMR3GetIOPort(void);
void SSMR3GetIOPort(void){}
EXPORT
void SSMR3GetMem(void);
void SSMR3GetMem(void){}
EXPORT
void SSMR3GetRCPtr(void);
void SSMR3GetRCPtr(void){}
EXPORT
void SSMR3GetS128(void);
void SSMR3GetS128(void){}
EXPORT
void SSMR3GetS16(void);
void SSMR3GetS16(void){}
EXPORT
void SSMR3GetS32(void);
void SSMR3GetS32(void){}
EXPORT
void SSMR3GetS64(void);
void SSMR3GetS64(void){}
EXPORT
void SSMR3GetS8(void);
void SSMR3GetS8(void){}
EXPORT
void SSMR3GetSInt(void);
void SSMR3GetSInt(void){}
EXPORT
void SSMR3GetSel(void);
void SSMR3GetSel(void){}
EXPORT
void SSMR3GetStrZ(void);
void SSMR3GetStrZ(void){}
EXPORT
void SSMR3GetStrZEx(void);
void SSMR3GetStrZEx(void){}
EXPORT
void SSMR3GetStruct(void);
void SSMR3GetStruct(void){}
EXPORT
void SSMR3GetStructEx(void);
void SSMR3GetStructEx(void){}
EXPORT
void SSMR3GetU128(void);
void SSMR3GetU128(void){}
EXPORT
void SSMR3GetU16(void);
void SSMR3GetU16(void){}
EXPORT
void SSMR3GetU32(void);
void SSMR3GetU32(void){}
EXPORT
void SSMR3GetU64(void);
void SSMR3GetU64(void){}
EXPORT
void SSMR3GetU8(void);
void SSMR3GetU8(void){}
EXPORT
void SSMR3GetUInt(void);
void SSMR3GetUInt(void){}
EXPORT
void SSMR3HandleGetAfter(void);
void SSMR3HandleGetAfter(void){}
EXPORT
void SSMR3HandleGetStatus(void);
void SSMR3HandleGetStatus(void){}
EXPORT
void SSMR3HandleHostBits(void);
void SSMR3HandleHostBits(void){}
EXPORT
void SSMR3HandleHostOSAndArch(void);
void SSMR3HandleHostOSAndArch(void){}
EXPORT
void SSMR3HandleIsLiveSave(void);
void SSMR3HandleIsLiveSave(void){}
EXPORT
void SSMR3HandleMaxDowntime(void);
void SSMR3HandleMaxDowntime(void){}
EXPORT
void SSMR3HandleReportLivePercent(void);
void SSMR3HandleReportLivePercent(void){}
EXPORT
void SSMR3HandleRevision(void);
void SSMR3HandleRevision(void){}
EXPORT
void SSMR3HandleSetStatus(void);
void SSMR3HandleSetStatus(void){}
EXPORT
void SSMR3HandleVersion(void);
void SSMR3HandleVersion(void){}
EXPORT
void SSMR3Open(void);
void SSMR3Open(void){}
EXPORT
void SSMR3PutBool(void);
void SSMR3PutBool(void){}
EXPORT
void SSMR3PutGCPhys(void);
void SSMR3PutGCPhys(void){}
EXPORT
void SSMR3PutGCPhys32(void);
void SSMR3PutGCPhys32(void){}
EXPORT
void SSMR3PutGCPhys64(void);
void SSMR3PutGCPhys64(void){}
EXPORT
void SSMR3PutGCPtr(void);
void SSMR3PutGCPtr(void){}
EXPORT
void SSMR3PutGCUInt(void);
void SSMR3PutGCUInt(void){}
EXPORT
void SSMR3PutGCUIntPtr(void);
void SSMR3PutGCUIntPtr(void){}
EXPORT
void SSMR3PutGCUIntReg(void);
void SSMR3PutGCUIntReg(void){}
EXPORT
void SSMR3PutIOPort(void);
void SSMR3PutIOPort(void){}
EXPORT
void SSMR3PutMem(void);
void SSMR3PutMem(void){}
EXPORT
void SSMR3PutRCPtr(void);
void SSMR3PutRCPtr(void){}
EXPORT
void SSMR3PutS128(void);
void SSMR3PutS128(void){}
EXPORT
void SSMR3PutS16(void);
void SSMR3PutS16(void){}
EXPORT
void SSMR3PutS32(void);
void SSMR3PutS32(void){}
EXPORT
void SSMR3PutS64(void);
void SSMR3PutS64(void){}
EXPORT
void SSMR3PutS8(void);
void SSMR3PutS8(void){}
EXPORT
void SSMR3PutSInt(void);
void SSMR3PutSInt(void){}
EXPORT
void SSMR3PutSel(void);
void SSMR3PutSel(void){}
EXPORT
void SSMR3PutStrZ(void);
void SSMR3PutStrZ(void){}
EXPORT
void SSMR3PutStruct(void);
void SSMR3PutStruct(void){}
EXPORT
void SSMR3PutStructEx(void);
void SSMR3PutStructEx(void){}
EXPORT
void SSMR3PutU128(void);
void SSMR3PutU128(void){}
EXPORT
void SSMR3PutU16(void);
void SSMR3PutU16(void){}
EXPORT
void SSMR3PutU32(void);
void SSMR3PutU32(void){}
EXPORT
void SSMR3PutU64(void);
void SSMR3PutU64(void){}
EXPORT
void SSMR3PutU8(void);
void SSMR3PutU8(void){}
EXPORT
void SSMR3PutUInt(void);
void SSMR3PutUInt(void){}
EXPORT
void SSMR3Seek(void);
void SSMR3Seek(void){}
EXPORT
void SSMR3SetCfgError(void);
void SSMR3SetCfgError(void){}
EXPORT
void SSMR3SetLoadError(void);
void SSMR3SetLoadError(void){}
EXPORT
void SSMR3SetLoadErrorV(void);
void SSMR3SetLoadErrorV(void){}
EXPORT
void SSMR3Skip(void);
void SSMR3Skip(void){}
EXPORT
void SSMR3SkipToEndOfUnit(void);
void SSMR3SkipToEndOfUnit(void){}
EXPORT
void SSMR3ValidateFile(void);
void SSMR3ValidateFile(void){}
EXPORT
void SSMR3Cancel(void);
void SSMR3Cancel(void){}
EXPORT
void SSMR3RegisterExternal(void);
void SSMR3RegisterExternal(void){}
EXPORT
void STAMR3Dump(void);
void STAMR3Dump(void){}
EXPORT
void STAMR3Enum(void);
void STAMR3Enum(void){}
EXPORT
void STAMR3Reset(void);
void STAMR3Reset(void){}
EXPORT
void STAMR3Snapshot(void);
void STAMR3Snapshot(void){}
EXPORT
void STAMR3SnapshotFree(void);
void STAMR3SnapshotFree(void){}
EXPORT
void STAMR3GetUnit(void);
void STAMR3GetUnit(void){}
EXPORT
void TMR3TimerSetCritSect(void);
void TMR3TimerSetCritSect(void){}
EXPORT
void TMR3TimerLoad(void);
void TMR3TimerLoad(void){}
EXPORT
void TMR3TimerSave(void);
void TMR3TimerSave(void){}
EXPORT
void TMR3TimerDestroy(void);
void TMR3TimerDestroy(void){}
EXPORT
void TMTimerFromMicro(void);
void TMTimerFromMicro(void){}
EXPORT
void TMTimerFromMilli(void);
void TMTimerFromMilli(void){}
EXPORT
void TMTimerFromNano(void);
void TMTimerFromNano(void){}
EXPORT
void TMTimerGet(void);
void TMTimerGet(void){}
EXPORT
void TMTimerGetFreq(void);
void TMTimerGetFreq(void){}
EXPORT
void TMTimerGetMicro(void);
void TMTimerGetMicro(void){}
EXPORT
void TMTimerGetMilli(void);
void TMTimerGetMilli(void){}
EXPORT
void TMTimerGetNano(void);
void TMTimerGetNano(void){}
EXPORT
void TMTimerIsActive(void);
void TMTimerIsActive(void){}
EXPORT
void TMTimerIsLockOwner(void);
void TMTimerIsLockOwner(void){}
EXPORT
void TMTimerLock(void);
void TMTimerLock(void){}
EXPORT
void TMTimerR0Ptr(void);
void TMTimerR0Ptr(void){}
EXPORT
void TMTimerR3Ptr(void);
void TMTimerR3Ptr(void){}
EXPORT
void TMTimerRCPtr(void);
void TMTimerRCPtr(void){}
EXPORT
void TMTimerSet(void);
void TMTimerSet(void){}
EXPORT
void TMTimerSetFrequencyHint(void);
void TMTimerSetFrequencyHint(void){}
EXPORT
void TMTimerSetMicro(void);
void TMTimerSetMicro(void){}
EXPORT
void TMTimerSetMillies(void);
void TMTimerSetMillies(void){}
EXPORT
void TMTimerSetNano(void);
void TMTimerSetNano(void){}
EXPORT
void TMTimerSetRelative(void);
void TMTimerSetRelative(void){}
EXPORT
void TMTimerStop(void);
void TMTimerStop(void){}
EXPORT
void TMTimerToMicro(void);
void TMTimerToMicro(void){}
EXPORT
void TMTimerToMilli(void);
void TMTimerToMilli(void){}
EXPORT
void TMTimerToNano(void);
void TMTimerToNano(void){}
EXPORT
void TMTimerUnlock(void);
void TMTimerUnlock(void){}
EXPORT
void TMR3GetWarpDrive(void);
void TMR3GetWarpDrive(void){}
EXPORT
void TMR3SetWarpDrive(void);
void TMR3SetWarpDrive(void){}
EXPORT
void VMMGetCpu(void);
void VMMGetCpu(void){}
EXPORT
void VMMGetSvnRev(void);
void VMMGetSvnRev(void){}
EXPORT
void VMSetError(void);
void VMSetError(void){}
EXPORT
void VMSetErrorV(void);
void VMSetErrorV(void){}
EXPORT
void VMR3AtErrorDeregister(void);
void VMR3AtErrorDeregister(void){}
EXPORT
void VMR3AtErrorRegister(void);
void VMR3AtErrorRegister(void){}
EXPORT
void VMR3AtRuntimeErrorRegister(void);
void VMR3AtRuntimeErrorRegister(void){}
EXPORT
void VMR3AtStateRegister(void);
void VMR3AtStateRegister(void){}
EXPORT
void VMR3Create(void);
void VMR3Create(void){}
EXPORT
void VMR3Destroy(void);
void VMR3Destroy(void){}
EXPORT
void VMR3GetCpuCoreAndPackageIdFromCpuId(void);
void VMR3GetCpuCoreAndPackageIdFromCpuId(void){}
EXPORT
void VMR3GetStateName(void);
void VMR3GetStateName(void){}
EXPORT
void VMR3GetStateU(void);
void VMR3GetStateU(void){}
EXPORT
void VMR3GetVM(void);
void VMR3GetVM(void){}
EXPORT
void VMR3HotPlugCpu(void);
void VMR3HotPlugCpu(void){}
EXPORT
void VMR3HotUnplugCpu(void);
void VMR3HotUnplugCpu(void){}
EXPORT
void VMR3LoadFromFile(void);
void VMR3LoadFromFile(void){}
EXPORT
void VMR3LoadFromStream(void);
void VMR3LoadFromStream(void){}
EXPORT
void VMR3PowerOff(void);
void VMR3PowerOff(void){}
EXPORT
void VMR3PowerOn(void);
void VMR3PowerOn(void){}
EXPORT
void VMR3ReleaseUVM(void);
void VMR3ReleaseUVM(void){}
EXPORT
void VMR3ReqCallNoWaitU(void);
void VMR3ReqCallNoWaitU(void){}
EXPORT
void VMR3ReqCallU(void);
void VMR3ReqCallU(void){}
EXPORT
void VMR3ReqCallVoidWaitU(void);
void VMR3ReqCallVoidWaitU(void){}
EXPORT
void VMR3ReqCallWaitU(void);
void VMR3ReqCallWaitU(void){}
EXPORT
void VMR3ReqFree(void);
void VMR3ReqFree(void){}
EXPORT
void VMR3ReqPriorityCallWaitU(void);
void VMR3ReqPriorityCallWaitU(void){}
EXPORT
void VMR3ReqWait(void);
void VMR3ReqWait(void){}
EXPORT
void VMR3Reset(void);
void VMR3Reset(void){}
EXPORT
void VMR3Resume(void);
void VMR3Resume(void){}
EXPORT
void VMR3RetainUVM(void);
void VMR3RetainUVM(void){}
EXPORT
void VMR3Save(void);
void VMR3Save(void){}
EXPORT
void VMR3SetCpuExecutionCap(void);
void VMR3SetCpuExecutionCap(void){}
EXPORT
void VMR3SetError(void);
void VMR3SetError(void){}
EXPORT
void VMR3SetPowerOffInsteadOfReset(void);
void VMR3SetPowerOffInsteadOfReset(void){}
EXPORT
void VMR3Suspend(void);
void VMR3Suspend(void){}
EXPORT
void VMR3Teleport(void);
void VMR3Teleport(void){}
EXPORT
void VMR3AtStateDeregister(void);
void VMR3AtStateDeregister(void){}
EXPORT
void VMR3GetUVM(void);
void VMR3GetUVM(void){}
