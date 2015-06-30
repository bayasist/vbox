#ifdef VBOX_HAVE_VISIBILITY_HIDDEN
# define EXPORT __attribute__((visibility("default")))
# define EXPORT_DATA __attribute__((visibility("default")))
#else
# define EXPORT
# define EXPORT_DATA
#endif


EXPORT_DATA void *g_aRTUniFlagsRanges      = (void *)0;
EXPORT_DATA void *g_aRTUniLowerRanges      = (void *)0;
EXPORT_DATA void *g_aRTUniUpperRanges      = (void *)0;
EXPORT_DATA void *g_fRTAlignmentChecks     = (void *)0;
EXPORT_DATA void *g_pSUPGlobalInfoPage     = (void *)0;
EXPORT_DATA void *g_pStdErr                = (void *)0;
EXPORT_DATA void *g_pStdIn                 = (void *)0;
EXPORT_DATA void *g_pStdOut                = (void *)0;
EXPORT_DATA void *g_pszRTAssertExpr        = (void *)0;
EXPORT_DATA void *g_pszRTAssertFile        = (void *)0;
EXPORT_DATA void *g_pszRTAssertFunction    = (void *)0;
EXPORT_DATA void *g_szRTAssertMsg1         = (void *)0;
EXPORT_DATA void *g_szRTAssertMsg2         = (void *)0;
EXPORT_DATA void *g_u32RTAssertLine        = (void *)0;
EXPORT
void ASMAtomicCmpXchgExU64(void);
void ASMAtomicCmpXchgExU64(void){}
EXPORT
void ASMAtomicCmpXchgU64(void);
void ASMAtomicCmpXchgU64(void){}
EXPORT
void ASMAtomicReadU64(void);
void ASMAtomicReadU64(void){}
EXPORT
void ASMAtomicUoReadU64(void);
void ASMAtomicUoReadU64(void){}
EXPORT
void ASMAtomicXchgU64(void);
void ASMAtomicXchgU64(void){}
EXPORT
void RTAssertAreQuiet(void);
void RTAssertAreQuiet(void){}
EXPORT
void RTAssertMayPanic(void);
void RTAssertMayPanic(void){}
EXPORT
void RTAssertMsg1(void);
void RTAssertMsg1(void){}
EXPORT
void RTAssertMsg1Weak(void);
void RTAssertMsg1Weak(void){}
EXPORT
void RTAssertMsg2(void);
void RTAssertMsg2(void){}
EXPORT
void RTAssertMsg2Add(void);
void RTAssertMsg2Add(void){}
EXPORT
void RTAssertMsg2AddV(void);
void RTAssertMsg2AddV(void){}
EXPORT
void RTAssertMsg2AddWeak(void);
void RTAssertMsg2AddWeak(void){}
EXPORT
void RTAssertMsg2AddWeakV(void);
void RTAssertMsg2AddWeakV(void){}
EXPORT
void RTAssertMsg2V(void);
void RTAssertMsg2V(void){}
EXPORT
void RTAssertMsg2Weak(void);
void RTAssertMsg2Weak(void){}
EXPORT
void RTAssertMsg2WeakV(void);
void RTAssertMsg2WeakV(void){}
EXPORT
void RTAssertSetMayPanic(void);
void RTAssertSetMayPanic(void){}
EXPORT
void RTAssertSetQuiet(void);
void RTAssertSetQuiet(void){}
EXPORT
void RTAssertShouldPanic(void);
void RTAssertShouldPanic(void){}
EXPORT
void RTAvlGCPhysDestroy(void);
void RTAvlGCPhysDestroy(void){}
EXPORT
void RTAvlGCPhysDoWithAll(void);
void RTAvlGCPhysDoWithAll(void){}
EXPORT
void RTAvlGCPhysGet(void);
void RTAvlGCPhysGet(void){}
EXPORT
void RTAvlGCPhysGetBestFit(void);
void RTAvlGCPhysGetBestFit(void){}
EXPORT
void RTAvlGCPhysInsert(void);
void RTAvlGCPhysInsert(void){}
EXPORT
void RTAvlGCPhysRemove(void);
void RTAvlGCPhysRemove(void){}
EXPORT
void RTAvlGCPhysRemoveBestFit(void);
void RTAvlGCPhysRemoveBestFit(void){}
EXPORT
void RTAvlGCPtrDestroy(void);
void RTAvlGCPtrDestroy(void){}
EXPORT
void RTAvlGCPtrDoWithAll(void);
void RTAvlGCPtrDoWithAll(void){}
EXPORT
void RTAvlGCPtrGet(void);
void RTAvlGCPtrGet(void){}
EXPORT
void RTAvlGCPtrGetBestFit(void);
void RTAvlGCPtrGetBestFit(void){}
EXPORT
void RTAvlGCPtrInsert(void);
void RTAvlGCPtrInsert(void){}
EXPORT
void RTAvlGCPtrRemove(void);
void RTAvlGCPtrRemove(void){}
EXPORT
void RTAvlGCPtrRemoveBestFit(void);
void RTAvlGCPtrRemoveBestFit(void){}
EXPORT
void RTAvlHCPhysDestroy(void);
void RTAvlHCPhysDestroy(void){}
EXPORT
void RTAvlHCPhysDoWithAll(void);
void RTAvlHCPhysDoWithAll(void){}
EXPORT
void RTAvlHCPhysGet(void);
void RTAvlHCPhysGet(void){}
EXPORT
void RTAvlHCPhysGetBestFit(void);
void RTAvlHCPhysGetBestFit(void){}
EXPORT
void RTAvlHCPhysInsert(void);
void RTAvlHCPhysInsert(void){}
EXPORT
void RTAvlHCPhysRemove(void);
void RTAvlHCPhysRemove(void){}
EXPORT
void RTAvlHCPhysRemoveBestFit(void);
void RTAvlHCPhysRemoveBestFit(void){}
EXPORT
void RTAvlPVDestroy(void);
void RTAvlPVDestroy(void){}
EXPORT
void RTAvlPVDoWithAll(void);
void RTAvlPVDoWithAll(void){}
EXPORT
void RTAvlPVGet(void);
void RTAvlPVGet(void){}
EXPORT
void RTAvlPVGetBestFit(void);
void RTAvlPVGetBestFit(void){}
EXPORT
void RTAvlPVInsert(void);
void RTAvlPVInsert(void){}
EXPORT
void RTAvlPVRemove(void);
void RTAvlPVRemove(void){}
EXPORT
void RTAvlPVRemoveBestFit(void);
void RTAvlPVRemoveBestFit(void){}
EXPORT
void RTAvlU32Destroy(void);
void RTAvlU32Destroy(void){}
EXPORT
void RTAvlU32DoWithAll(void);
void RTAvlU32DoWithAll(void){}
EXPORT
void RTAvlU32Get(void);
void RTAvlU32Get(void){}
EXPORT
void RTAvlU32GetBestFit(void);
void RTAvlU32GetBestFit(void){}
EXPORT
void RTAvlU32Insert(void);
void RTAvlU32Insert(void){}
EXPORT
void RTAvlU32Remove(void);
void RTAvlU32Remove(void){}
EXPORT
void RTAvlU32RemoveBestFit(void);
void RTAvlU32RemoveBestFit(void){}
EXPORT
void RTAvlUIntPtrDestroy(void);
void RTAvlUIntPtrDestroy(void){}
EXPORT
void RTAvlUIntPtrDoWithAll(void);
void RTAvlUIntPtrDoWithAll(void){}
EXPORT
void RTAvlUIntPtrGet(void);
void RTAvlUIntPtrGet(void){}
EXPORT
void RTAvlUIntPtrGetBestFit(void);
void RTAvlUIntPtrGetBestFit(void){}
EXPORT
void RTAvlUIntPtrGetLeft(void);
void RTAvlUIntPtrGetLeft(void){}
EXPORT
void RTAvlUIntPtrGetRight(void);
void RTAvlUIntPtrGetRight(void){}
EXPORT
void RTAvlUIntPtrGetRoot(void);
void RTAvlUIntPtrGetRoot(void){}
EXPORT
void RTAvlUIntPtrInsert(void);
void RTAvlUIntPtrInsert(void){}
EXPORT
void RTAvlUIntPtrRemove(void);
void RTAvlUIntPtrRemove(void){}
EXPORT
void RTAvlULDestroy(void);
void RTAvlULDestroy(void){}
EXPORT
void RTAvlULDoWithAll(void);
void RTAvlULDoWithAll(void){}
EXPORT
void RTAvlULGet(void);
void RTAvlULGet(void){}
EXPORT
void RTAvlULGetBestFit(void);
void RTAvlULGetBestFit(void){}
EXPORT
void RTAvlULInsert(void);
void RTAvlULInsert(void){}
EXPORT
void RTAvlULRemove(void);
void RTAvlULRemove(void){}
EXPORT
void RTAvlULRemoveBestFit(void);
void RTAvlULRemoveBestFit(void){}
EXPORT
void RTAvllU32Destroy(void);
void RTAvllU32Destroy(void){}
EXPORT
void RTAvllU32DoWithAll(void);
void RTAvllU32DoWithAll(void){}
EXPORT
void RTAvllU32Get(void);
void RTAvllU32Get(void){}
EXPORT
void RTAvllU32GetBestFit(void);
void RTAvllU32GetBestFit(void){}
EXPORT
void RTAvllU32Insert(void);
void RTAvllU32Insert(void){}
EXPORT
void RTAvllU32Remove(void);
void RTAvllU32Remove(void){}
EXPORT
void RTAvllU32RemoveBestFit(void);
void RTAvllU32RemoveBestFit(void){}
EXPORT
void RTAvloGCPhysDestroy(void);
void RTAvloGCPhysDestroy(void){}
EXPORT
void RTAvloGCPhysDoWithAll(void);
void RTAvloGCPhysDoWithAll(void){}
EXPORT
void RTAvloGCPhysGet(void);
void RTAvloGCPhysGet(void){}
EXPORT
void RTAvloGCPhysGetBestFit(void);
void RTAvloGCPhysGetBestFit(void){}
EXPORT
void RTAvloGCPhysInsert(void);
void RTAvloGCPhysInsert(void){}
EXPORT
void RTAvloGCPhysRemove(void);
void RTAvloGCPhysRemove(void){}
EXPORT
void RTAvloGCPhysRemoveBestFit(void);
void RTAvloGCPhysRemoveBestFit(void){}
EXPORT
void RTAvloGCPtrDestroy(void);
void RTAvloGCPtrDestroy(void){}
EXPORT
void RTAvloGCPtrDoWithAll(void);
void RTAvloGCPtrDoWithAll(void){}
EXPORT
void RTAvloGCPtrGet(void);
void RTAvloGCPtrGet(void){}
EXPORT
void RTAvloGCPtrGetBestFit(void);
void RTAvloGCPtrGetBestFit(void){}
EXPORT
void RTAvloGCPtrInsert(void);
void RTAvloGCPtrInsert(void){}
EXPORT
void RTAvloGCPtrRemove(void);
void RTAvloGCPtrRemove(void){}
EXPORT
void RTAvloGCPtrRemoveBestFit(void);
void RTAvloGCPtrRemoveBestFit(void){}
EXPORT
void RTAvloHCPhysDestroy(void);
void RTAvloHCPhysDestroy(void){}
EXPORT
void RTAvloHCPhysDoWithAll(void);
void RTAvloHCPhysDoWithAll(void){}
EXPORT
void RTAvloHCPhysGet(void);
void RTAvloHCPhysGet(void){}
EXPORT
void RTAvloHCPhysGetBestFit(void);
void RTAvloHCPhysGetBestFit(void){}
EXPORT
void RTAvloHCPhysInsert(void);
void RTAvloHCPhysInsert(void){}
EXPORT
void RTAvloHCPhysRemove(void);
void RTAvloHCPhysRemove(void){}
EXPORT
void RTAvloHCPhysRemoveBestFit(void);
void RTAvloHCPhysRemoveBestFit(void){}
EXPORT
void RTAvloIOPortDestroy(void);
void RTAvloIOPortDestroy(void){}
EXPORT
void RTAvloIOPortDoWithAll(void);
void RTAvloIOPortDoWithAll(void){}
EXPORT
void RTAvloIOPortGet(void);
void RTAvloIOPortGet(void){}
EXPORT
void RTAvloIOPortGetBestFit(void);
void RTAvloIOPortGetBestFit(void){}
EXPORT
void RTAvloIOPortInsert(void);
void RTAvloIOPortInsert(void){}
EXPORT
void RTAvloIOPortRemove(void);
void RTAvloIOPortRemove(void){}
EXPORT
void RTAvloIOPortRemoveBestFit(void);
void RTAvloIOPortRemoveBestFit(void){}
EXPORT
void RTAvloU32Destroy(void);
void RTAvloU32Destroy(void){}
EXPORT
void RTAvloU32DoWithAll(void);
void RTAvloU32DoWithAll(void){}
EXPORT
void RTAvloU32Get(void);
void RTAvloU32Get(void){}
EXPORT
void RTAvloU32GetBestFit(void);
void RTAvloU32GetBestFit(void){}
EXPORT
void RTAvloU32Insert(void);
void RTAvloU32Insert(void){}
EXPORT
void RTAvloU32Remove(void);
void RTAvloU32Remove(void){}
EXPORT
void RTAvloU32RemoveBestFit(void);
void RTAvloU32RemoveBestFit(void){}
EXPORT
void RTAvlrFileOffsetDestroy(void);
void RTAvlrFileOffsetDestroy(void){}
EXPORT
void RTAvlrFileOffsetDoWithAll(void);
void RTAvlrFileOffsetDoWithAll(void){}
EXPORT
void RTAvlrFileOffsetGet(void);
void RTAvlrFileOffsetGet(void){}
EXPORT
void RTAvlrFileOffsetGetBestFit(void);
void RTAvlrFileOffsetGetBestFit(void){}
EXPORT
void RTAvlrFileOffsetGetLeft(void);
void RTAvlrFileOffsetGetLeft(void){}
EXPORT
void RTAvlrFileOffsetGetRight(void);
void RTAvlrFileOffsetGetRight(void){}
EXPORT
void RTAvlrFileOffsetGetRoot(void);
void RTAvlrFileOffsetGetRoot(void){}
EXPORT
void RTAvlrFileOffsetInsert(void);
void RTAvlrFileOffsetInsert(void){}
EXPORT
void RTAvlrFileOffsetRangeGet(void);
void RTAvlrFileOffsetRangeGet(void){}
EXPORT
void RTAvlrFileOffsetRangeRemove(void);
void RTAvlrFileOffsetRangeRemove(void){}
EXPORT
void RTAvlrFileOffsetRemove(void);
void RTAvlrFileOffsetRemove(void){}
EXPORT
void RTAvlrGCPtrDestroy(void);
void RTAvlrGCPtrDestroy(void){}
EXPORT
void RTAvlrGCPtrDoWithAll(void);
void RTAvlrGCPtrDoWithAll(void){}
EXPORT
void RTAvlrGCPtrGet(void);
void RTAvlrGCPtrGet(void){}
EXPORT
void RTAvlrGCPtrGetBestFit(void);
void RTAvlrGCPtrGetBestFit(void){}
EXPORT
void RTAvlrGCPtrGetLeft(void);
void RTAvlrGCPtrGetLeft(void){}
EXPORT
void RTAvlrGCPtrGetRight(void);
void RTAvlrGCPtrGetRight(void){}
EXPORT
void RTAvlrGCPtrGetRoot(void);
void RTAvlrGCPtrGetRoot(void){}
EXPORT
void RTAvlrGCPtrInsert(void);
void RTAvlrGCPtrInsert(void){}
EXPORT
void RTAvlrGCPtrRangeGet(void);
void RTAvlrGCPtrRangeGet(void){}
EXPORT
void RTAvlrGCPtrRangeRemove(void);
void RTAvlrGCPtrRangeRemove(void){}
EXPORT
void RTAvlrGCPtrRemove(void);
void RTAvlrGCPtrRemove(void){}
EXPORT
void RTAvlrPVDestroy(void);
void RTAvlrPVDestroy(void){}
EXPORT
void RTAvlrPVDoWithAll(void);
void RTAvlrPVDoWithAll(void){}
EXPORT
void RTAvlrPVGet(void);
void RTAvlrPVGet(void){}
EXPORT
void RTAvlrPVGetBestFit(void);
void RTAvlrPVGetBestFit(void){}
EXPORT
void RTAvlrPVInsert(void);
void RTAvlrPVInsert(void){}
EXPORT
void RTAvlrPVRangeGet(void);
void RTAvlrPVRangeGet(void){}
EXPORT
void RTAvlrPVRangeRemove(void);
void RTAvlrPVRangeRemove(void){}
EXPORT
void RTAvlrPVRemove(void);
void RTAvlrPVRemove(void){}
EXPORT
void RTAvlrPVRemoveBestFit(void);
void RTAvlrPVRemoveBestFit(void){}
EXPORT
void RTAvlrU64Destroy(void);
void RTAvlrU64Destroy(void){}
EXPORT
void RTAvlrU64DoWithAll(void);
void RTAvlrU64DoWithAll(void){}
EXPORT
void RTAvlrU64Get(void);
void RTAvlrU64Get(void){}
EXPORT
void RTAvlrU64GetBestFit(void);
void RTAvlrU64GetBestFit(void){}
EXPORT
void RTAvlrU64Insert(void);
void RTAvlrU64Insert(void){}
EXPORT
void RTAvlrU64RangeGet(void);
void RTAvlrU64RangeGet(void){}
EXPORT
void RTAvlrU64RangeRemove(void);
void RTAvlrU64RangeRemove(void){}
EXPORT
void RTAvlrU64Remove(void);
void RTAvlrU64Remove(void){}
EXPORT
void RTAvlrU64RemoveBestFit(void);
void RTAvlrU64RemoveBestFit(void){}
EXPORT
void RTAvlrUIntPtrDestroy(void);
void RTAvlrUIntPtrDestroy(void){}
EXPORT
void RTAvlrUIntPtrDoWithAll(void);
void RTAvlrUIntPtrDoWithAll(void){}
EXPORT
void RTAvlrUIntPtrGet(void);
void RTAvlrUIntPtrGet(void){}
EXPORT
void RTAvlrUIntPtrGetBestFit(void);
void RTAvlrUIntPtrGetBestFit(void){}
EXPORT
void RTAvlrUIntPtrGetLeft(void);
void RTAvlrUIntPtrGetLeft(void){}
EXPORT
void RTAvlrUIntPtrGetRight(void);
void RTAvlrUIntPtrGetRight(void){}
EXPORT
void RTAvlrUIntPtrGetRoot(void);
void RTAvlrUIntPtrGetRoot(void){}
EXPORT
void RTAvlrUIntPtrInsert(void);
void RTAvlrUIntPtrInsert(void){}
EXPORT
void RTAvlrUIntPtrRangeGet(void);
void RTAvlrUIntPtrRangeGet(void){}
EXPORT
void RTAvlrUIntPtrRangeRemove(void);
void RTAvlrUIntPtrRangeRemove(void){}
EXPORT
void RTAvlrUIntPtrRemove(void);
void RTAvlrUIntPtrRemove(void){}
EXPORT
void RTAvlroGCPhysDestroy(void);
void RTAvlroGCPhysDestroy(void){}
EXPORT
void RTAvlroGCPhysDoWithAll(void);
void RTAvlroGCPhysDoWithAll(void){}
EXPORT
void RTAvlroGCPhysGet(void);
void RTAvlroGCPhysGet(void){}
EXPORT
void RTAvlroGCPhysGetBestFit(void);
void RTAvlroGCPhysGetBestFit(void){}
EXPORT
void RTAvlroGCPhysGetLeft(void);
void RTAvlroGCPhysGetLeft(void){}
EXPORT
void RTAvlroGCPhysGetRight(void);
void RTAvlroGCPhysGetRight(void){}
EXPORT
void RTAvlroGCPhysGetRoot(void);
void RTAvlroGCPhysGetRoot(void){}
EXPORT
void RTAvlroGCPhysInsert(void);
void RTAvlroGCPhysInsert(void){}
EXPORT
void RTAvlroGCPhysRangeGet(void);
void RTAvlroGCPhysRangeGet(void){}
EXPORT
void RTAvlroGCPhysRangeRemove(void);
void RTAvlroGCPhysRangeRemove(void){}
EXPORT
void RTAvlroGCPhysRemove(void);
void RTAvlroGCPhysRemove(void){}
EXPORT
void RTAvlroGCPtrDestroy(void);
void RTAvlroGCPtrDestroy(void){}
EXPORT
void RTAvlroGCPtrDoWithAll(void);
void RTAvlroGCPtrDoWithAll(void){}
EXPORT
void RTAvlroGCPtrGet(void);
void RTAvlroGCPtrGet(void){}
EXPORT
void RTAvlroGCPtrGetBestFit(void);
void RTAvlroGCPtrGetBestFit(void){}
EXPORT
void RTAvlroGCPtrGetLeft(void);
void RTAvlroGCPtrGetLeft(void){}
EXPORT
void RTAvlroGCPtrGetRight(void);
void RTAvlroGCPtrGetRight(void){}
EXPORT
void RTAvlroGCPtrGetRoot(void);
void RTAvlroGCPtrGetRoot(void){}
EXPORT
void RTAvlroGCPtrInsert(void);
void RTAvlroGCPtrInsert(void){}
EXPORT
void RTAvlroGCPtrRangeGet(void);
void RTAvlroGCPtrRangeGet(void){}
EXPORT
void RTAvlroGCPtrRangeRemove(void);
void RTAvlroGCPtrRangeRemove(void){}
EXPORT
void RTAvlroGCPtrRemove(void);
void RTAvlroGCPtrRemove(void){}
EXPORT
void RTAvlroIOPortDestroy(void);
void RTAvlroIOPortDestroy(void){}
EXPORT
void RTAvlroIOPortDoWithAll(void);
void RTAvlroIOPortDoWithAll(void){}
EXPORT
void RTAvlroIOPortGet(void);
void RTAvlroIOPortGet(void){}
EXPORT
void RTAvlroIOPortInsert(void);
void RTAvlroIOPortInsert(void){}
EXPORT
void RTAvlroIOPortRangeGet(void);
void RTAvlroIOPortRangeGet(void){}
EXPORT
void RTAvlroIOPortRangeRemove(void);
void RTAvlroIOPortRangeRemove(void){}
EXPORT
void RTAvlroIOPortRemove(void);
void RTAvlroIOPortRemove(void){}
EXPORT
void RTAvlrooGCPtrDestroy(void);
void RTAvlrooGCPtrDestroy(void){}
EXPORT
void RTAvlrooGCPtrDoWithAll(void);
void RTAvlrooGCPtrDoWithAll(void){}
EXPORT
void RTAvlrooGCPtrGet(void);
void RTAvlrooGCPtrGet(void){}
EXPORT
void RTAvlrooGCPtrGetBestFit(void);
void RTAvlrooGCPtrGetBestFit(void){}
EXPORT
void RTAvlrooGCPtrGetLeft(void);
void RTAvlrooGCPtrGetLeft(void){}
EXPORT
void RTAvlrooGCPtrGetNextEqual(void);
void RTAvlrooGCPtrGetNextEqual(void){}
EXPORT
void RTAvlrooGCPtrGetRight(void);
void RTAvlrooGCPtrGetRight(void){}
EXPORT
void RTAvlrooGCPtrGetRoot(void);
void RTAvlrooGCPtrGetRoot(void){}
EXPORT
void RTAvlrooGCPtrInsert(void);
void RTAvlrooGCPtrInsert(void){}
EXPORT
void RTAvlrooGCPtrRangeGet(void);
void RTAvlrooGCPtrRangeGet(void){}
EXPORT
void RTAvlrooGCPtrRangeRemove(void);
void RTAvlrooGCPtrRangeRemove(void){}
EXPORT
void RTAvlrooGCPtrRemove(void);
void RTAvlrooGCPtrRemove(void){}
EXPORT
void RTBase64Decode(void);
void RTBase64Decode(void){}
EXPORT
void RTBase64DecodedSize(void);
void RTBase64DecodedSize(void){}
EXPORT
void RTBase64Encode(void);
void RTBase64Encode(void){}
EXPORT
void RTBase64EncodedLength(void);
void RTBase64EncodedLength(void){}
EXPORT
void RTBldCfgCompiler(void);
void RTBldCfgCompiler(void){}
EXPORT
void RTBldCfgRevision(void);
void RTBldCfgRevision(void){}
EXPORT
void RTBldCfgRevisionStr(void);
void RTBldCfgRevisionStr(void){}
EXPORT
void RTBldCfgTarget(void);
void RTBldCfgTarget(void){}
EXPORT
void RTBldCfgTargetArch(void);
void RTBldCfgTargetArch(void){}
EXPORT
void RTBldCfgTargetDotArch(void);
void RTBldCfgTargetDotArch(void){}
EXPORT
void RTBldCfgType(void);
void RTBldCfgType(void){}
EXPORT
void RTBldCfgVersion(void);
void RTBldCfgVersion(void){}
EXPORT
void RTBldCfgVersionBuild(void);
void RTBldCfgVersionBuild(void){}
EXPORT
void RTBldCfgVersionMajor(void);
void RTBldCfgVersionMajor(void){}
EXPORT
void RTBldCfgVersionMinor(void);
void RTBldCfgVersionMinor(void){}
EXPORT
void RTCidrStrToIPv4(void);
void RTCidrStrToIPv4(void){}
EXPORT
void RTCircBufAcquireReadBlock(void);
void RTCircBufAcquireReadBlock(void){}
EXPORT
void RTCircBufAcquireWriteBlock(void);
void RTCircBufAcquireWriteBlock(void){}
EXPORT
void RTCircBufCreate(void);
void RTCircBufCreate(void){}
EXPORT
void RTCircBufDestroy(void);
void RTCircBufDestroy(void){}
EXPORT
void RTCircBufFree(void);
void RTCircBufFree(void){}
EXPORT
void RTCircBufReleaseReadBlock(void);
void RTCircBufReleaseReadBlock(void){}
EXPORT
void RTCircBufReleaseWriteBlock(void);
void RTCircBufReleaseWriteBlock(void){}
EXPORT
void RTCircBufReset(void);
void RTCircBufReset(void){}
EXPORT
void RTCircBufSize(void);
void RTCircBufSize(void){}
EXPORT
void RTCircBufUsed(void);
void RTCircBufUsed(void){}
EXPORT
void RTCrc32(void);
void RTCrc32(void){}
EXPORT
void RTCrc32Finish(void);
void RTCrc32Finish(void){}
EXPORT
void RTCrc32Process(void);
void RTCrc32Process(void){}
EXPORT
void RTCrc32Start(void);
void RTCrc32Start(void){}
EXPORT
void RTCrc64(void);
void RTCrc64(void){}
EXPORT
void RTCrc64Finish(void);
void RTCrc64Finish(void){}
EXPORT
void RTCrc64Process(void);
void RTCrc64Process(void){}
EXPORT
void RTCrc64Start(void);
void RTCrc64Start(void){}
EXPORT
void RTCrcAdler32(void);
void RTCrcAdler32(void){}
EXPORT
void RTCrcAdler32Finish(void);
void RTCrcAdler32Finish(void){}
EXPORT
void RTCrcAdler32Process(void);
void RTCrcAdler32Process(void){}
EXPORT
void RTCrcAdler32Start(void);
void RTCrcAdler32Start(void){}
EXPORT
void RTCritSectDelete(void);
void RTCritSectDelete(void){}
EXPORT
void RTCritSectEnter(void);
void RTCritSectEnter(void){}
EXPORT
void RTCritSectEnterDebug(void);
void RTCritSectEnterDebug(void){}
EXPORT
void RTCritSectEnterMultiple(void);
void RTCritSectEnterMultiple(void){}
EXPORT
void RTCritSectEnterMultipleDebug(void);
void RTCritSectEnterMultipleDebug(void){}
EXPORT
void RTCritSectInit(void);
void RTCritSectInit(void){}
EXPORT
void RTCritSectInitEx(void);
void RTCritSectInitEx(void){}
EXPORT
void RTCritSectLeave(void);
void RTCritSectLeave(void){}
EXPORT
void RTCritSectLeaveMultiple(void);
void RTCritSectLeaveMultiple(void){}
EXPORT
void RTCritSectSetSubClass(void);
void RTCritSectSetSubClass(void){}
EXPORT
void RTCritSectTryEnter(void);
void RTCritSectTryEnter(void){}
EXPORT
void RTCritSectTryEnterDebug(void);
void RTCritSectTryEnterDebug(void){}
EXPORT
void RTDbgAsCreate(void);
void RTDbgAsCreate(void){}
EXPORT
void RTDbgAsCreateF(void);
void RTDbgAsCreateF(void){}
EXPORT
void RTDbgAsCreateV(void);
void RTDbgAsCreateV(void){}
EXPORT
void RTDbgAsFirstAddr(void);
void RTDbgAsFirstAddr(void){}
EXPORT
void RTDbgAsLastAddr(void);
void RTDbgAsLastAddr(void){}
EXPORT
void RTDbgAsLineAdd(void);
void RTDbgAsLineAdd(void){}
EXPORT
void RTDbgAsLineByAddrA(void);
void RTDbgAsLineByAddrA(void){}
EXPORT
void RTDbgAsModuleByAddr(void);
void RTDbgAsModuleByAddr(void){}
EXPORT
void RTDbgAsModuleByIndex(void);
void RTDbgAsModuleByIndex(void){}
EXPORT
void RTDbgAsModuleByName(void);
void RTDbgAsModuleByName(void){}
EXPORT
void RTDbgAsModuleCount(void);
void RTDbgAsModuleCount(void){}
EXPORT
void RTDbgAsModuleLink(void);
void RTDbgAsModuleLink(void){}
EXPORT
void RTDbgAsModuleLinkSeg(void);
void RTDbgAsModuleLinkSeg(void){}
EXPORT
void RTDbgAsModuleQueryMapByIndex(void);
void RTDbgAsModuleQueryMapByIndex(void){}
EXPORT
void RTDbgAsModuleUnlink(void);
void RTDbgAsModuleUnlink(void){}
EXPORT
void RTDbgAsModuleUnlinkByAddr(void);
void RTDbgAsModuleUnlinkByAddr(void){}
EXPORT
void RTDbgAsName(void);
void RTDbgAsName(void){}
EXPORT
void RTDbgAsRelease(void);
void RTDbgAsRelease(void){}
EXPORT
void RTDbgAsRetain(void);
void RTDbgAsRetain(void){}
EXPORT
void RTDbgAsSymbolAdd(void);
void RTDbgAsSymbolAdd(void){}
EXPORT
void RTDbgAsSymbolByAddr(void);
void RTDbgAsSymbolByAddr(void){}
EXPORT
void RTDbgAsSymbolByAddrA(void);
void RTDbgAsSymbolByAddrA(void){}
EXPORT
void RTDbgAsSymbolByName(void);
void RTDbgAsSymbolByName(void){}
EXPORT
void RTDbgAsSymbolByNameA(void);
void RTDbgAsSymbolByNameA(void){}
EXPORT
void RTDbgLineAlloc(void);
void RTDbgLineAlloc(void){}
EXPORT
void RTDbgLineDup(void);
void RTDbgLineDup(void){}
EXPORT
void RTDbgLineFree(void);
void RTDbgLineFree(void){}
EXPORT
void RTDbgModCreate(void);
void RTDbgModCreate(void){}
EXPORT
void RTDbgModCreateDeferred(void);
void RTDbgModCreateDeferred(void){}
EXPORT
void RTDbgModCreateFromImage(void);
void RTDbgModCreateFromImage(void){}
EXPORT
void RTDbgModCreateFromMap(void);
void RTDbgModCreateFromMap(void){}
EXPORT
void RTDbgModGetTag(void);
void RTDbgModGetTag(void){}
EXPORT
void RTDbgModImageSize(void);
void RTDbgModImageSize(void){}
EXPORT
void RTDbgModLineAdd(void);
void RTDbgModLineAdd(void){}
EXPORT
void RTDbgModLineByAddr(void);
void RTDbgModLineByAddr(void){}
EXPORT
void RTDbgModLineByAddrA(void);
void RTDbgModLineByAddrA(void){}
EXPORT
void RTDbgModLineByOrdinal(void);
void RTDbgModLineByOrdinal(void){}
EXPORT
void RTDbgModLineByOrdinalA(void);
void RTDbgModLineByOrdinalA(void){}
EXPORT
void RTDbgModLineCount(void);
void RTDbgModLineCount(void){}
EXPORT
void RTDbgModName(void);
void RTDbgModName(void){}
EXPORT
void RTDbgModRelease(void);
void RTDbgModRelease(void){}
EXPORT
void RTDbgModRetain(void);
void RTDbgModRetain(void){}
EXPORT
void RTDbgModRvaToSegOff(void);
void RTDbgModRvaToSegOff(void){}
EXPORT
void RTDbgModSegmentAdd(void);
void RTDbgModSegmentAdd(void){}
EXPORT
void RTDbgModSegmentByIndex(void);
void RTDbgModSegmentByIndex(void){}
EXPORT
void RTDbgModSegmentCount(void);
void RTDbgModSegmentCount(void){}
EXPORT
void RTDbgModSegmentRva(void);
void RTDbgModSegmentRva(void){}
EXPORT
void RTDbgModSegmentSize(void);
void RTDbgModSegmentSize(void){}
EXPORT
void RTDbgModSetTag(void);
void RTDbgModSetTag(void){}
EXPORT
void RTDbgModSymbolAdd(void);
void RTDbgModSymbolAdd(void){}
EXPORT
void RTDbgModSymbolByAddr(void);
void RTDbgModSymbolByAddr(void){}
EXPORT
void RTDbgModSymbolByAddrA(void);
void RTDbgModSymbolByAddrA(void){}
EXPORT
void RTDbgModSymbolByName(void);
void RTDbgModSymbolByName(void){}
EXPORT
void RTDbgModSymbolByNameA(void);
void RTDbgModSymbolByNameA(void){}
EXPORT
void RTDbgModSymbolByOrdinal(void);
void RTDbgModSymbolByOrdinal(void){}
EXPORT
void RTDbgModSymbolByOrdinalA(void);
void RTDbgModSymbolByOrdinalA(void){}
EXPORT
void RTDbgModSymbolCount(void);
void RTDbgModSymbolCount(void){}
EXPORT
void RTDbgSymbolAlloc(void);
void RTDbgSymbolAlloc(void){}
EXPORT
void RTDbgSymbolDup(void);
void RTDbgSymbolDup(void){}
EXPORT
void RTDbgSymbolFree(void);
void RTDbgSymbolFree(void){}
EXPORT
void RTDirClose(void);
void RTDirClose(void){}
EXPORT
void RTDirCreate(void);
void RTDirCreate(void){}
EXPORT
void RTDirCreateFullPath(void);
void RTDirCreateFullPath(void){}
EXPORT
void RTDirCreateTemp(void);
void RTDirCreateTemp(void){}
EXPORT
void RTDirExists(void);
void RTDirExists(void){}
EXPORT
void RTDirFlush(void);
void RTDirFlush(void){}
EXPORT
void RTDirFlushParent(void);
void RTDirFlushParent(void){}
EXPORT
void RTDirOpen(void);
void RTDirOpen(void){}
EXPORT
void RTDirOpenFiltered(void);
void RTDirOpenFiltered(void){}
EXPORT
void RTDirQueryInfo(void);
void RTDirQueryInfo(void){}
EXPORT
void RTDirRead(void);
void RTDirRead(void){}
EXPORT
void RTDirReadEx(void);
void RTDirReadEx(void){}
EXPORT
void RTDirRemove(void);
void RTDirRemove(void){}
EXPORT
void RTDirRemoveRecursive(void);
void RTDirRemoveRecursive(void){}
EXPORT
void RTDirRename(void);
void RTDirRename(void){}
EXPORT
void RTDirSetTimes(void);
void RTDirSetTimes(void){}
EXPORT
void RTEnvClone(void);
void RTEnvClone(void){}
EXPORT
void RTEnvCreate(void);
void RTEnvCreate(void){}
EXPORT
void RTEnvDestroy(void);
void RTEnvDestroy(void){}
EXPORT
void RTEnvDupEx(void);
void RTEnvDupEx(void){}
EXPORT
void RTEnvExist(void);
void RTEnvExist(void){}
EXPORT
void RTEnvExistEx(void);
void RTEnvExistEx(void){}
EXPORT
void RTEnvFreeUtf16Block(void);
void RTEnvFreeUtf16Block(void){}
EXPORT
void RTEnvGet(void);
void RTEnvGet(void){}
EXPORT
void RTEnvGetEx(void);
void RTEnvGetEx(void){}
EXPORT
void RTEnvGetExecEnvP(void);
void RTEnvGetExecEnvP(void){}
EXPORT
void RTEnvPut(void);
void RTEnvPut(void){}
EXPORT
void RTEnvPutEx(void);
void RTEnvPutEx(void){}
EXPORT
void RTEnvQueryUtf16Block(void);
void RTEnvQueryUtf16Block(void){}
EXPORT
void RTEnvSet(void);
void RTEnvSet(void){}
EXPORT
void RTEnvSetEx(void);
void RTEnvSetEx(void){}
EXPORT
void RTEnvUnset(void);
void RTEnvUnset(void){}
EXPORT
void RTEnvUnsetEx(void);
void RTEnvUnsetEx(void){}
EXPORT
void RTErrCOMGet(void);
void RTErrCOMGet(void){}
EXPORT
void RTErrConvertFromErrno(void);
void RTErrConvertFromErrno(void){}
EXPORT
void RTErrConvertToErrno(void);
void RTErrConvertToErrno(void){}
EXPORT
void RTErrGet(void);
void RTErrGet(void){}
EXPORT
void RTErrInfoAlloc(void);
void RTErrInfoAlloc(void){}
EXPORT
void RTErrInfoAllocEx(void);
void RTErrInfoAllocEx(void){}
EXPORT
void RTErrInfoFree(void);
void RTErrInfoFree(void){}
EXPORT
void RTErrInfoSet(void);
void RTErrInfoSet(void){}
EXPORT
void RTErrInfoSetF(void);
void RTErrInfoSetF(void){}
EXPORT
void RTErrInfoSetV(void);
void RTErrInfoSetV(void){}
EXPORT
void RTFileAioCtxAssociateWithFile(void);
void RTFileAioCtxAssociateWithFile(void){}
EXPORT
void RTFileAioCtxCreate(void);
void RTFileAioCtxCreate(void){}
EXPORT
void RTFileAioCtxDestroy(void);
void RTFileAioCtxDestroy(void){}
EXPORT
void RTFileAioCtxGetMaxReqCount(void);
void RTFileAioCtxGetMaxReqCount(void){}
EXPORT
void RTFileAioCtxSubmit(void);
void RTFileAioCtxSubmit(void){}
EXPORT
void RTFileAioCtxWait(void);
void RTFileAioCtxWait(void){}
EXPORT
void RTFileAioCtxWakeup(void);
void RTFileAioCtxWakeup(void){}
EXPORT
void RTFileAioGetLimits(void);
void RTFileAioGetLimits(void){}
EXPORT
void RTFileAioReqCancel(void);
void RTFileAioReqCancel(void){}
EXPORT
void RTFileAioReqCreate(void);
void RTFileAioReqCreate(void){}
EXPORT
void RTFileAioReqDestroy(void);
void RTFileAioReqDestroy(void){}
EXPORT
void RTFileAioReqGetRC(void);
void RTFileAioReqGetRC(void){}
EXPORT
void RTFileAioReqGetUser(void);
void RTFileAioReqGetUser(void){}
EXPORT
void RTFileAioReqPrepareFlush(void);
void RTFileAioReqPrepareFlush(void){}
EXPORT
void RTFileAioReqPrepareRead(void);
void RTFileAioReqPrepareRead(void){}
EXPORT
void RTFileAioReqPrepareWrite(void);
void RTFileAioReqPrepareWrite(void){}
EXPORT
void RTFileChangeLock(void);
void RTFileChangeLock(void){}
EXPORT
void RTFileClose(void);
void RTFileClose(void){}
EXPORT
void RTFileCopy(void);
void RTFileCopy(void){}
EXPORT
void RTFileCopyByHandles(void);
void RTFileCopyByHandles(void){}
EXPORT
void RTFileCopyByHandlesEx(void);
void RTFileCopyByHandlesEx(void){}
EXPORT
void RTFileCopyEx(void);
void RTFileCopyEx(void){}
EXPORT
void RTFileDelete(void);
void RTFileDelete(void){}
EXPORT
void RTFileExists(void);
void RTFileExists(void){}
EXPORT
void RTFileFlush(void);
void RTFileFlush(void){}
EXPORT
void RTFileFromNative(void);
void RTFileFromNative(void){}
EXPORT
void RTFileGetMaxSize(void);
void RTFileGetMaxSize(void){}
EXPORT
void RTFileGetMaxSizeEx(void);
void RTFileGetMaxSizeEx(void){}
EXPORT
void RTFileGetSize(void);
void RTFileGetSize(void){}
EXPORT
void RTFileIoCtl(void);
void RTFileIoCtl(void){}
EXPORT
void RTFileIsValid(void);
void RTFileIsValid(void){}
EXPORT
void RTFileLock(void);
void RTFileLock(void){}
EXPORT
void RTFileMove(void);
void RTFileMove(void){}
EXPORT
void RTFileOpen(void);
void RTFileOpen(void){}
EXPORT
void RTFileOpenBitBucket(void);
void RTFileOpenBitBucket(void){}
EXPORT
void RTFileOpenF(void);
void RTFileOpenF(void){}
EXPORT
void RTFileOpenV(void);
void RTFileOpenV(void){}
EXPORT
void RTFileQueryFsSizes(void);
void RTFileQueryFsSizes(void){}
EXPORT
void RTFileQueryInfo(void);
void RTFileQueryInfo(void){}
EXPORT
void RTFileQuerySize(void);
void RTFileQuerySize(void){}
EXPORT
void RTFileRead(void);
void RTFileRead(void){}
EXPORT
void RTFileReadAll(void);
void RTFileReadAll(void){}
EXPORT
void RTFileReadAllByHandle(void);
void RTFileReadAllByHandle(void){}
EXPORT
void RTFileReadAllByHandleEx(void);
void RTFileReadAllByHandleEx(void){}
EXPORT
void RTFileReadAllEx(void);
void RTFileReadAllEx(void){}
EXPORT
void RTFileReadAllFree(void);
void RTFileReadAllFree(void){}
EXPORT
void RTFileReadAt(void);
void RTFileReadAt(void){}
EXPORT
void RTFileRename(void);
void RTFileRename(void){}
EXPORT
void RTFileSeek(void);
void RTFileSeek(void){}
EXPORT
void RTFileSetForceFlags(void);
void RTFileSetForceFlags(void){}
EXPORT
void RTFileSetMode(void);
void RTFileSetMode(void){}
EXPORT
void RTFileSetSize(void);
void RTFileSetSize(void){}
EXPORT
void RTFileSetTimes(void);
void RTFileSetTimes(void){}
EXPORT
void RTFileTell(void);
void RTFileTell(void){}
EXPORT
void RTFileToNative(void);
void RTFileToNative(void){}
EXPORT
void RTFileUnlock(void);
void RTFileUnlock(void){}
EXPORT
void RTFileWrite(void);
void RTFileWrite(void){}
EXPORT
void RTFileWriteAt(void);
void RTFileWriteAt(void){}
EXPORT
void RTFsQueryProperties(void);
void RTFsQueryProperties(void){}
EXPORT
void RTFsQuerySerial(void);
void RTFsQuerySerial(void){}
EXPORT
void RTFsQuerySizes(void);
void RTFsQuerySizes(void){}
EXPORT
void RTFsQueryType(void);
void RTFsQueryType(void){}
EXPORT
void RTFsTypeName(void);
void RTFsTypeName(void){}
EXPORT
void RTGetOpt(void);
void RTGetOpt(void){}
EXPORT
void RTGetOptArgvFree(void);
void RTGetOptArgvFree(void){}
EXPORT
void RTGetOptArgvFromString(void);
void RTGetOptArgvFromString(void){}
EXPORT
void RTGetOptArgvToString(void);
void RTGetOptArgvToString(void){}
EXPORT
void RTGetOptArgvToUtf16String(void);
void RTGetOptArgvToUtf16String(void){}
EXPORT
void RTGetOptFetchValue(void);
void RTGetOptFetchValue(void){}
EXPORT
void RTGetOptInit(void);
void RTGetOptInit(void){}
EXPORT
void RTGetOptPrintError(void);
void RTGetOptPrintError(void){}
EXPORT
void RTHandleClose(void);
void RTHandleClose(void){}
EXPORT
void RTHandleGetStandard(void);
void RTHandleGetStandard(void){}
EXPORT
void RTHandleTableAlloc(void);
void RTHandleTableAlloc(void){}
EXPORT
void RTHandleTableAllocWithCtx(void);
void RTHandleTableAllocWithCtx(void){}
EXPORT
void RTHandleTableCreate(void);
void RTHandleTableCreate(void){}
EXPORT
void RTHandleTableCreateEx(void);
void RTHandleTableCreateEx(void){}
EXPORT
void RTHandleTableDestroy(void);
void RTHandleTableDestroy(void){}
EXPORT
void RTHandleTableFree(void);
void RTHandleTableFree(void){}
EXPORT
void RTHandleTableFreeWithCtx(void);
void RTHandleTableFreeWithCtx(void){}
EXPORT
void RTHandleTableLookup(void);
void RTHandleTableLookup(void){}
EXPORT
void RTHandleTableLookupWithCtx(void);
void RTHandleTableLookupWithCtx(void){}
EXPORT
void RTHeapOffsetAlloc(void);
void RTHeapOffsetAlloc(void){}
EXPORT
void RTHeapOffsetAllocZ(void);
void RTHeapOffsetAllocZ(void){}
EXPORT
void RTHeapOffsetDump(void);
void RTHeapOffsetDump(void){}
EXPORT
void RTHeapOffsetFree(void);
void RTHeapOffsetFree(void){}
EXPORT
void RTHeapOffsetGetFreeSize(void);
void RTHeapOffsetGetFreeSize(void){}
EXPORT
void RTHeapOffsetGetHeapSize(void);
void RTHeapOffsetGetHeapSize(void){}
EXPORT
void RTHeapOffsetInit(void);
void RTHeapOffsetInit(void){}
EXPORT
void RTHeapOffsetSize(void);
void RTHeapOffsetSize(void){}
EXPORT
void RTHeapSimpleAlloc(void);
void RTHeapSimpleAlloc(void){}
EXPORT
void RTHeapSimpleAllocZ(void);
void RTHeapSimpleAllocZ(void){}
EXPORT
void RTHeapSimpleDump(void);
void RTHeapSimpleDump(void){}
EXPORT
void RTHeapSimpleFree(void);
void RTHeapSimpleFree(void){}
EXPORT
void RTHeapSimpleGetFreeSize(void);
void RTHeapSimpleGetFreeSize(void){}
EXPORT
void RTHeapSimpleGetHeapSize(void);
void RTHeapSimpleGetHeapSize(void){}
EXPORT
void RTHeapSimpleInit(void);
void RTHeapSimpleInit(void){}
EXPORT
void RTHeapSimpleRelocate(void);
void RTHeapSimpleRelocate(void){}
EXPORT
void RTHeapSimpleSize(void);
void RTHeapSimpleSize(void){}
EXPORT
void RTIsoFsClose(void);
void RTIsoFsClose(void){}
EXPORT
void RTIsoFsExtractFile(void);
void RTIsoFsExtractFile(void){}
EXPORT
void RTIsoFsGetFileInfo(void);
void RTIsoFsGetFileInfo(void){}
EXPORT
void RTIsoFsOpen(void);
void RTIsoFsOpen(void){}
EXPORT
void RTLatin1CalcUtf16Len(void);
void RTLatin1CalcUtf16Len(void){}
EXPORT
void RTLatin1CalcUtf16LenEx(void);
void RTLatin1CalcUtf16LenEx(void){}
EXPORT
void RTLatin1CalcUtf8Len(void);
void RTLatin1CalcUtf8Len(void){}
EXPORT
void RTLatin1CalcUtf8LenEx(void);
void RTLatin1CalcUtf8LenEx(void){}
EXPORT
void RTLatin1ToUtf16ExTag(void);
void RTLatin1ToUtf16ExTag(void){}
EXPORT
void RTLatin1ToUtf16Tag(void);
void RTLatin1ToUtf16Tag(void){}
EXPORT
void RTLatin1ToUtf8ExTag(void);
void RTLatin1ToUtf8ExTag(void){}
EXPORT
void RTLatin1ToUtf8Tag(void);
void RTLatin1ToUtf8Tag(void){}
EXPORT
void RTLdrClose(void);
void RTLdrClose(void){}
EXPORT
void RTLdrEnumSymbols(void);
void RTLdrEnumSymbols(void){}
EXPORT
void RTLdrGetBits(void);
void RTLdrGetBits(void){}
EXPORT
void RTLdrGetSuff(void);
void RTLdrGetSuff(void){}
EXPORT
void RTLdrGetSymbol(void);
void RTLdrGetSymbol(void){}
EXPORT
void RTLdrGetSymbolEx(void);
void RTLdrGetSymbolEx(void){}
EXPORT
void RTLdrIsLoadable(void);
void RTLdrIsLoadable(void){}
EXPORT
void RTLdrLoad(void);
void RTLdrLoad(void){}
EXPORT
void RTLdrLoadAppPriv(void);
void RTLdrLoadAppPriv(void){}
EXPORT
void RTLdrOpen(void);
void RTLdrOpen(void){}
EXPORT
void RTLdrOpenkLdr(void);
void RTLdrOpenkLdr(void){}
EXPORT
void RTLdrRelocate(void);
void RTLdrRelocate(void){}
EXPORT
void RTLdrSize(void);
void RTLdrSize(void){}
EXPORT
void RTLinuxFindDevicePath(void);
void RTLinuxFindDevicePath(void){}
EXPORT
void RTLinuxFindDevicePathV(void);
void RTLinuxFindDevicePathV(void){}
EXPORT
void RTLinuxSysFsClose(void);
void RTLinuxSysFsClose(void){}
EXPORT
void RTLinuxSysFsExists(void);
void RTLinuxSysFsExists(void){}
EXPORT
void RTLinuxSysFsExistsV(void);
void RTLinuxSysFsExistsV(void){}
EXPORT
void RTLinuxSysFsGetLinkDest(void);
void RTLinuxSysFsGetLinkDest(void){}
EXPORT
void RTLinuxSysFsGetLinkDestV(void);
void RTLinuxSysFsGetLinkDestV(void){}
EXPORT
void RTLinuxSysFsOpen(void);
void RTLinuxSysFsOpen(void){}
EXPORT
void RTLinuxSysFsOpenV(void);
void RTLinuxSysFsOpenV(void){}
EXPORT
void RTLinuxSysFsReadDevNumFile(void);
void RTLinuxSysFsReadDevNumFile(void){}
EXPORT
void RTLinuxSysFsReadDevNumFileV(void);
void RTLinuxSysFsReadDevNumFileV(void){}
EXPORT
void RTLinuxSysFsReadFile(void);
void RTLinuxSysFsReadFile(void){}
EXPORT
void RTLinuxSysFsReadIntFile(void);
void RTLinuxSysFsReadIntFile(void){}
EXPORT
void RTLinuxSysFsReadIntFileV(void);
void RTLinuxSysFsReadIntFileV(void){}
EXPORT
void RTLinuxSysFsReadStr(void);
void RTLinuxSysFsReadStr(void){}
EXPORT
void RTLinuxSysFsReadStrFile(void);
void RTLinuxSysFsReadStrFile(void){}
EXPORT
void RTLinuxSysFsReadStrFileV(void);
void RTLinuxSysFsReadStrFileV(void){}
EXPORT
void RTLockValidatorClassAddPriorClass(void);
void RTLockValidatorClassAddPriorClass(void){}
EXPORT
void RTLockValidatorClassCreate(void);
void RTLockValidatorClassCreate(void){}
EXPORT
void RTLockValidatorClassCreateEx(void);
void RTLockValidatorClassCreateEx(void){}
EXPORT
void RTLockValidatorClassCreateExV(void);
void RTLockValidatorClassCreateExV(void){}
EXPORT
void RTLockValidatorClassCreateUnique(void);
void RTLockValidatorClassCreateUnique(void){}
EXPORT
void RTLockValidatorClassEnforceStrictReleaseOrder(void);
void RTLockValidatorClassEnforceStrictReleaseOrder(void){}
EXPORT
void RTLockValidatorClassFindForSrcPos(void);
void RTLockValidatorClassFindForSrcPos(void){}
EXPORT
void RTLockValidatorClassForSrcPos(void);
void RTLockValidatorClassForSrcPos(void){}
EXPORT
void RTLockValidatorClassRelease(void);
void RTLockValidatorClassRelease(void){}
EXPORT
void RTLockValidatorClassRetain(void);
void RTLockValidatorClassRetain(void){}
EXPORT
void RTLockValidatorHoldsLocksInClass(void);
void RTLockValidatorHoldsLocksInClass(void){}
EXPORT
void RTLockValidatorHoldsLocksInSubClass(void);
void RTLockValidatorHoldsLocksInSubClass(void){}
EXPORT
void RTLockValidatorIsBlockedThreadInValidator(void);
void RTLockValidatorIsBlockedThreadInValidator(void){}
EXPORT
void RTLockValidatorIsEnabled(void);
void RTLockValidatorIsEnabled(void){}
EXPORT
void RTLockValidatorIsQuiet(void);
void RTLockValidatorIsQuiet(void){}
EXPORT
void RTLockValidatorMayPanic(void);
void RTLockValidatorMayPanic(void){}
EXPORT
void RTLockValidatorQueryBlocking(void);
void RTLockValidatorQueryBlocking(void){}
EXPORT
void RTLockValidatorReadLockDec(void);
void RTLockValidatorReadLockDec(void){}
EXPORT
void RTLockValidatorReadLockGetCount(void);
void RTLockValidatorReadLockGetCount(void){}
EXPORT
void RTLockValidatorReadLockInc(void);
void RTLockValidatorReadLockInc(void){}
EXPORT
void RTLockValidatorRecExclCheckBlocking(void);
void RTLockValidatorRecExclCheckBlocking(void){}
EXPORT
void RTLockValidatorRecExclCheckOrder(void);
void RTLockValidatorRecExclCheckOrder(void){}
EXPORT
void RTLockValidatorRecExclCheckOrderAndBlocking(void);
void RTLockValidatorRecExclCheckOrderAndBlocking(void){}
EXPORT
void RTLockValidatorRecExclCreate(void);
void RTLockValidatorRecExclCreate(void){}
EXPORT
void RTLockValidatorRecExclCreateV(void);
void RTLockValidatorRecExclCreateV(void){}
EXPORT
void RTLockValidatorRecExclDelete(void);
void RTLockValidatorRecExclDelete(void){}
EXPORT
void RTLockValidatorRecExclDestroy(void);
void RTLockValidatorRecExclDestroy(void){}
EXPORT
void RTLockValidatorRecExclInit(void);
void RTLockValidatorRecExclInit(void){}
EXPORT
void RTLockValidatorRecExclInitV(void);
void RTLockValidatorRecExclInitV(void){}
EXPORT
void RTLockValidatorRecExclRecursion(void);
void RTLockValidatorRecExclRecursion(void){}
EXPORT
void RTLockValidatorRecExclRecursionMixed(void);
void RTLockValidatorRecExclRecursionMixed(void){}
EXPORT
void RTLockValidatorRecExclReleaseOwner(void);
void RTLockValidatorRecExclReleaseOwner(void){}
EXPORT
void RTLockValidatorRecExclReleaseOwnerUnchecked(void);
void RTLockValidatorRecExclReleaseOwnerUnchecked(void){}
EXPORT
void RTLockValidatorRecExclSetOwner(void);
void RTLockValidatorRecExclSetOwner(void){}
EXPORT
void RTLockValidatorRecExclSetSubClass(void);
void RTLockValidatorRecExclSetSubClass(void){}
EXPORT
void RTLockValidatorRecExclUnwind(void);
void RTLockValidatorRecExclUnwind(void){}
EXPORT
void RTLockValidatorRecExclUnwindMixed(void);
void RTLockValidatorRecExclUnwindMixed(void){}
EXPORT
void RTLockValidatorRecMakeSiblings(void);
void RTLockValidatorRecMakeSiblings(void){}
EXPORT
void RTLockValidatorRecSharedAddOwner(void);
void RTLockValidatorRecSharedAddOwner(void){}
EXPORT
void RTLockValidatorRecSharedCheckAndRelease(void);
void RTLockValidatorRecSharedCheckAndRelease(void){}
EXPORT
void RTLockValidatorRecSharedCheckBlocking(void);
void RTLockValidatorRecSharedCheckBlocking(void){}
EXPORT
void RTLockValidatorRecSharedCheckOrder(void);
void RTLockValidatorRecSharedCheckOrder(void){}
EXPORT
void RTLockValidatorRecSharedCheckOrderAndBlocking(void);
void RTLockValidatorRecSharedCheckOrderAndBlocking(void){}
EXPORT
void RTLockValidatorRecSharedCheckSignaller(void);
void RTLockValidatorRecSharedCheckSignaller(void){}
EXPORT
void RTLockValidatorRecSharedDelete(void);
void RTLockValidatorRecSharedDelete(void){}
EXPORT
void RTLockValidatorRecSharedInit(void);
void RTLockValidatorRecSharedInit(void){}
EXPORT
void RTLockValidatorRecSharedInitV(void);
void RTLockValidatorRecSharedInitV(void){}
EXPORT
void RTLockValidatorRecSharedIsOwner(void);
void RTLockValidatorRecSharedIsOwner(void){}
EXPORT
void RTLockValidatorRecSharedRemoveOwner(void);
void RTLockValidatorRecSharedRemoveOwner(void){}
EXPORT
void RTLockValidatorRecSharedResetOwner(void);
void RTLockValidatorRecSharedResetOwner(void){}
EXPORT
void RTLockValidatorRecSharedSetSubClass(void);
void RTLockValidatorRecSharedSetSubClass(void){}
EXPORT
void RTLockValidatorSetEnabled(void);
void RTLockValidatorSetEnabled(void){}
EXPORT
void RTLockValidatorSetMayPanic(void);
void RTLockValidatorSetMayPanic(void){}
EXPORT
void RTLockValidatorSetQuiet(void);
void RTLockValidatorSetQuiet(void){}
EXPORT
void RTLockValidatorWriteLockDec(void);
void RTLockValidatorWriteLockDec(void){}
EXPORT
void RTLockValidatorWriteLockGetCount(void);
void RTLockValidatorWriteLockGetCount(void){}
EXPORT
void RTLockValidatorWriteLockInc(void);
void RTLockValidatorWriteLockInc(void){}
EXPORT
void RTLogCloneRC(void);
void RTLogCloneRC(void){}
EXPORT
void RTLogComPrintf(void);
void RTLogComPrintf(void){}
EXPORT
void RTLogComPrintfV(void);
void RTLogComPrintfV(void){}
EXPORT
void RTLogCopyGroupsAndFlags(void);
void RTLogCopyGroupsAndFlags(void){}
EXPORT
void RTLogCreate(void);
void RTLogCreate(void){}
EXPORT
void RTLogCreateEx(void);
void RTLogCreateEx(void){}
EXPORT
void RTLogCreateExV(void);
void RTLogCreateExV(void){}
EXPORT
void RTLogCreateForR0(void);
void RTLogCreateForR0(void){}
EXPORT
void RTLogDefaultInit(void);
void RTLogDefaultInit(void){}
EXPORT
void RTLogDefaultInstance(void);
void RTLogDefaultInstance(void){}
EXPORT
void RTLogDestinations(void);
void RTLogDestinations(void){}
EXPORT
void RTLogDestroy(void);
void RTLogDestroy(void){}
EXPORT
void RTLogFlags(void);
void RTLogFlags(void){}
EXPORT
void RTLogFlush(void);
void RTLogFlush(void){}
EXPORT
void RTLogFlushRC(void);
void RTLogFlushRC(void){}
EXPORT
void RTLogFlushToLogger(void);
void RTLogFlushToLogger(void){}
EXPORT
void RTLogFormatV(void);
void RTLogFormatV(void){}
EXPORT
void RTLogGetDefaultInstance(void);
void RTLogGetDefaultInstance(void){}
EXPORT
void RTLogGetDestinations(void);
void RTLogGetDestinations(void){}
EXPORT
void RTLogGetFlags(void);
void RTLogGetFlags(void){}
EXPORT
void RTLogGetGroupSettings(void);
void RTLogGetGroupSettings(void){}
EXPORT
void RTLogGroupSettings(void);
void RTLogGroupSettings(void){}
EXPORT
void RTLogLogger(void);
void RTLogLogger(void){}
EXPORT
void RTLogLoggerEx(void);
void RTLogLoggerEx(void){}
EXPORT
void RTLogLoggerExV(void);
void RTLogLoggerExV(void){}
EXPORT
void RTLogLoggerV(void);
void RTLogLoggerV(void){}
EXPORT
void RTLogPrintf(void);
void RTLogPrintf(void){}
EXPORT
void RTLogPrintfV(void);
void RTLogPrintfV(void){}
EXPORT
void RTLogRelDefaultInstance(void);
void RTLogRelDefaultInstance(void){}
EXPORT
void RTLogRelLogger(void);
void RTLogRelLogger(void){}
EXPORT
void RTLogRelLoggerV(void);
void RTLogRelLoggerV(void){}
EXPORT
void RTLogRelPrintf(void);
void RTLogRelPrintf(void){}
EXPORT
void RTLogRelPrintfV(void);
void RTLogRelPrintfV(void){}
EXPORT
void RTLogRelSetBuffering(void);
void RTLogRelSetBuffering(void){}
EXPORT
void RTLogRelSetDefaultInstance(void);
void RTLogRelSetDefaultInstance(void){}
EXPORT
void RTLogSetBuffering(void);
void RTLogSetBuffering(void){}
EXPORT
void RTLogSetCustomPrefixCallback(void);
void RTLogSetCustomPrefixCallback(void){}
EXPORT
void RTLogSetDefaultInstance(void);
void RTLogSetDefaultInstance(void){}
EXPORT
void RTLogSetGroupLimit(void);
void RTLogSetGroupLimit(void){}
EXPORT
void RTLogWriteCom(void);
void RTLogWriteCom(void){}
EXPORT
void RTLogWriteDebugger(void);
void RTLogWriteDebugger(void){}
EXPORT
void RTLogWriteStdErr(void);
void RTLogWriteStdErr(void){}
EXPORT
void RTLogWriteStdOut(void);
void RTLogWriteStdOut(void){}
EXPORT
void RTLogWriteUser(void);
void RTLogWriteUser(void){}
EXPORT
void RTManifestCreate(void);
void RTManifestCreate(void){}
EXPORT
void RTManifestDup(void);
void RTManifestDup(void){}
EXPORT
void RTManifestEntryAdd(void);
void RTManifestEntryAdd(void){}
EXPORT
void RTManifestEntryAddIoStream(void);
void RTManifestEntryAddIoStream(void){}
EXPORT
void RTManifestEntryAddPassthruIoStream(void);
void RTManifestEntryAddPassthruIoStream(void){}
EXPORT
void RTManifestEntryRemove(void);
void RTManifestEntryRemove(void){}
EXPORT
void RTManifestEntrySetAttr(void);
void RTManifestEntrySetAttr(void){}
EXPORT
void RTManifestEntryUnsetAttr(void);
void RTManifestEntryUnsetAttr(void){}
EXPORT
void RTManifestEquals(void);
void RTManifestEquals(void){}
EXPORT
void RTManifestEqualsEx(void);
void RTManifestEqualsEx(void){}
EXPORT
void RTManifestPtIosAddEntryNow(void);
void RTManifestPtIosAddEntryNow(void){}
EXPORT
void RTManifestReadStandard(void);
void RTManifestReadStandard(void){}
EXPORT
void RTManifestReadStandardEx(void);
void RTManifestReadStandardEx(void){}
EXPORT
void RTManifestRelease(void);
void RTManifestRelease(void){}
EXPORT
void RTManifestRetain(void);
void RTManifestRetain(void){}
EXPORT
void RTManifestSetAttr(void);
void RTManifestSetAttr(void){}
EXPORT
void RTManifestUnsetAttr(void);
void RTManifestUnsetAttr(void){}
EXPORT
void RTManifestVerify(void);
void RTManifestVerify(void){}
EXPORT
void RTManifestVerifyFiles(void);
void RTManifestVerifyFiles(void){}
EXPORT
void RTManifestVerifyFilesBuf(void);
void RTManifestVerifyFilesBuf(void){}
EXPORT
void RTManifestVerifyDigestType(void);
void RTManifestVerifyDigestType(void){}
EXPORT
void RTManifestWriteFiles(void);
void RTManifestWriteFiles(void){}
EXPORT
void RTManifestWriteFilesBuf(void);
void RTManifestWriteFilesBuf(void){}
EXPORT
void RTManifestWriteStandard(void);
void RTManifestWriteStandard(void){}
EXPORT
void RTMd5(void);
void RTMd5(void){}
EXPORT
void RTMd5Final(void);
void RTMd5Final(void){}
EXPORT
void RTMd5FromString(void);
void RTMd5FromString(void){}
EXPORT
void RTMd5Init(void);
void RTMd5Init(void){}
EXPORT
void RTMd5ToString(void);
void RTMd5ToString(void){}
EXPORT
void RTMd5Update(void);
void RTMd5Update(void){}
EXPORT
void RTMemAllocTag(void);
void RTMemAllocTag(void){}
EXPORT
void RTMemAllocVarTag(void);
void RTMemAllocVarTag(void){}
EXPORT
void RTMemAllocZTag(void);
void RTMemAllocZTag(void){}
EXPORT
void RTMemAllocZVarTag(void);
void RTMemAllocZVarTag(void){}
EXPORT
void RTMemCacheAlloc(void);
void RTMemCacheAlloc(void){}
EXPORT
void RTMemCacheAllocEx(void);
void RTMemCacheAllocEx(void){}
EXPORT
void RTMemCacheCreate(void);
void RTMemCacheCreate(void){}
EXPORT
void RTMemCacheDestroy(void);
void RTMemCacheDestroy(void){}
EXPORT
void RTMemCacheFree(void);
void RTMemCacheFree(void){}
EXPORT
void RTMemDupExTag(void);
void RTMemDupExTag(void){}
EXPORT
void RTMemDupTag(void);
void RTMemDupTag(void){}
EXPORT
void RTMemEfAlloc(void);
void RTMemEfAlloc(void){}
EXPORT
void RTMemEfAllocNP(void);
void RTMemEfAllocNP(void){}
EXPORT
void RTMemEfAllocVar(void);
void RTMemEfAllocVar(void){}
EXPORT
void RTMemEfAllocVarNP(void);
void RTMemEfAllocVarNP(void){}
EXPORT
void RTMemEfAllocZ(void);
void RTMemEfAllocZ(void){}
EXPORT
void RTMemEfAllocZNP(void);
void RTMemEfAllocZNP(void){}
EXPORT
void RTMemEfAllocZVar(void);
void RTMemEfAllocZVar(void){}
EXPORT
void RTMemEfAllocZVarNP(void);
void RTMemEfAllocZVarNP(void){}
EXPORT
void RTMemEfDup(void);
void RTMemEfDup(void){}
EXPORT
void RTMemEfDupEx(void);
void RTMemEfDupEx(void){}
EXPORT
void RTMemEfDupExNP(void);
void RTMemEfDupExNP(void){}
EXPORT
void RTMemEfDupNP(void);
void RTMemEfDupNP(void){}
EXPORT
void RTMemEfFree(void);
void RTMemEfFree(void){}
EXPORT
void RTMemEfFreeNP(void);
void RTMemEfFreeNP(void){}
EXPORT
void RTMemEfRealloc(void);
void RTMemEfRealloc(void){}
EXPORT
void RTMemEfReallocNP(void);
void RTMemEfReallocNP(void){}
EXPORT
void RTMemEfTmpAlloc(void);
void RTMemEfTmpAlloc(void){}
EXPORT
void RTMemEfTmpAllocNP(void);
void RTMemEfTmpAllocNP(void){}
EXPORT
void RTMemEfTmpAllocZ(void);
void RTMemEfTmpAllocZ(void){}
EXPORT
void RTMemEfTmpAllocZNP(void);
void RTMemEfTmpAllocZNP(void){}
EXPORT
void RTMemEfTmpFree(void);
void RTMemEfTmpFree(void){}
EXPORT
void RTMemEfTmpFreeNP(void);
void RTMemEfTmpFreeNP(void){}
EXPORT
void RTMemExecAllocTag(void);
void RTMemExecAllocTag(void){}
EXPORT
void RTMemExecFree(void);
void RTMemExecFree(void){}
EXPORT
void RTMemFree(void);
void RTMemFree(void){}
EXPORT
void RTMemLockedAllocTag(void);
void RTMemLockedAllocTag(void){}
EXPORT
void RTMemLockedAllocZTag(void);
void RTMemLockedAllocZTag(void){}
EXPORT
void RTMemLockedFree(void);
void RTMemLockedFree(void){}
EXPORT
void RTMemPageAllocTag(void);
void RTMemPageAllocTag(void){}
EXPORT
void RTMemPageAllocZTag(void);
void RTMemPageAllocZTag(void){}
EXPORT
void RTMemPageFree(void);
void RTMemPageFree(void){}
EXPORT
void RTMemPoolAlloc(void);
void RTMemPoolAlloc(void){}
EXPORT
void RTMemPoolAllocZ(void);
void RTMemPoolAllocZ(void){}
EXPORT
void RTMemPoolCreate(void);
void RTMemPoolCreate(void){}
EXPORT
void RTMemPoolDestroy(void);
void RTMemPoolDestroy(void){}
EXPORT
void RTMemPoolDup(void);
void RTMemPoolDup(void){}
EXPORT
void RTMemPoolDupEx(void);
void RTMemPoolDupEx(void){}
EXPORT
void RTMemPoolFree(void);
void RTMemPoolFree(void){}
EXPORT
void RTMemPoolRealloc(void);
void RTMemPoolRealloc(void){}
EXPORT
void RTMemPoolRefCount(void);
void RTMemPoolRefCount(void){}
EXPORT
void RTMemPoolRelease(void);
void RTMemPoolRelease(void){}
EXPORT
void RTMemPoolRetain(void);
void RTMemPoolRetain(void){}
EXPORT
void RTMemProtect(void);
void RTMemProtect(void){}
EXPORT
void RTMemReallocTag(void);
void RTMemReallocTag(void){}
EXPORT
void RTMemTmpAllocTag(void);
void RTMemTmpAllocTag(void){}
EXPORT
void RTMemTmpAllocZTag(void);
void RTMemTmpAllocZTag(void){}
EXPORT
void RTMemTmpFree(void);
void RTMemTmpFree(void){}
EXPORT
void RTMemWipeThoroughly(void);
void RTMemWipeThoroughly(void){}
EXPORT
void RTMpCpuIdFromSetIndex(void);
void RTMpCpuIdFromSetIndex(void){}
EXPORT
void RTMpCpuIdToSetIndex(void);
void RTMpCpuIdToSetIndex(void){}
EXPORT
void RTMpGetCount(void);
void RTMpGetCount(void){}
EXPORT
void RTMpGetCurFrequency(void);
void RTMpGetCurFrequency(void){}
EXPORT
void RTMpGetDescription(void);
void RTMpGetDescription(void){}
EXPORT
void RTMpGetMaxCpuId(void);
void RTMpGetMaxCpuId(void){}
EXPORT
void RTMpGetMaxFrequency(void);
void RTMpGetMaxFrequency(void){}
EXPORT
void RTMpGetOnlineCount(void);
void RTMpGetOnlineCount(void){}
EXPORT
void RTMpGetOnlineSet(void);
void RTMpGetOnlineSet(void){}
EXPORT
void RTMpGetPresentCount(void);
void RTMpGetPresentCount(void){}
EXPORT
void RTMpGetPresentSet(void);
void RTMpGetPresentSet(void){}
EXPORT
void RTMpGetSet(void);
void RTMpGetSet(void){}
EXPORT
void RTMpIsCpuOnline(void);
void RTMpIsCpuOnline(void){}
EXPORT
void RTMpIsCpuPossible(void);
void RTMpIsCpuPossible(void){}
EXPORT
void RTMpIsCpuPresent(void);
void RTMpIsCpuPresent(void){}
EXPORT
void RTMsgError(void);
void RTMsgError(void){}
EXPORT
void RTMsgErrorExit(void);
void RTMsgErrorExit(void){}
EXPORT
void RTMsgErrorExitV(void);
void RTMsgErrorExitV(void){}
EXPORT
void RTMsgErrorRc(void);
void RTMsgErrorRc(void){}
EXPORT
void RTMsgErrorRcV(void);
void RTMsgErrorRcV(void){}
EXPORT
void RTMsgErrorV(void);
void RTMsgErrorV(void){}
EXPORT
void RTMsgInfo(void);
void RTMsgInfo(void){}
EXPORT
void RTMsgInfoV(void);
void RTMsgInfoV(void){}
EXPORT
void RTMsgInitFailure(void);
void RTMsgInitFailure(void){}
EXPORT
void RTMsgWarning(void);
void RTMsgWarning(void){}
EXPORT
void RTMsgWarningV(void);
void RTMsgWarningV(void){}
EXPORT
void RTNetIPv4AddDataChecksum(void);
void RTNetIPv4AddDataChecksum(void){}
EXPORT
void RTNetIPv4AddTCPChecksum(void);
void RTNetIPv4AddTCPChecksum(void){}
EXPORT
void RTNetIPv4AddUDPChecksum(void);
void RTNetIPv4AddUDPChecksum(void){}
EXPORT
void RTNetIPv4FinalizeChecksum(void);
void RTNetIPv4FinalizeChecksum(void){}
EXPORT
void RTNetIPv4HdrChecksum(void);
void RTNetIPv4HdrChecksum(void){}
EXPORT
void RTNetIPv4IsDHCPValid(void);
void RTNetIPv4IsDHCPValid(void){}
EXPORT
void RTNetIPv4IsHdrValid(void);
void RTNetIPv4IsHdrValid(void){}
EXPORT
void RTNetIPv4IsTCPSizeValid(void);
void RTNetIPv4IsTCPSizeValid(void){}
EXPORT
void RTNetIPv4IsTCPValid(void);
void RTNetIPv4IsTCPValid(void){}
EXPORT
void RTNetIPv4IsUDPSizeValid(void);
void RTNetIPv4IsUDPSizeValid(void){}
EXPORT
void RTNetIPv4IsUDPValid(void);
void RTNetIPv4IsUDPValid(void){}
EXPORT
void RTNetIPv4PseudoChecksum(void);
void RTNetIPv4PseudoChecksum(void){}
EXPORT
void RTNetIPv4PseudoChecksumBits(void);
void RTNetIPv4PseudoChecksumBits(void){}
EXPORT
void RTNetIPv4TCPChecksum(void);
void RTNetIPv4TCPChecksum(void){}
EXPORT
void RTNetIPv4UDPChecksum(void);
void RTNetIPv4UDPChecksum(void){}
EXPORT
void RTNetIPv6PseudoChecksum(void);
void RTNetIPv6PseudoChecksum(void){}
EXPORT
void RTNetIPv6PseudoChecksumBits(void);
void RTNetIPv6PseudoChecksumBits(void){}
EXPORT
void RTNetIPv6PseudoChecksumEx(void);
void RTNetIPv6PseudoChecksumEx(void){}
EXPORT
void RTNetTCPChecksum(void);
void RTNetTCPChecksum(void){}
EXPORT
void RTNetUDPChecksum(void);
void RTNetUDPChecksum(void){}
EXPORT
void RTOnce(void);
void RTOnce(void){}
EXPORT
void RTOnceReset(void);
void RTOnceReset(void){}
EXPORT
void RTPathAbs(void);
void RTPathAbs(void){}
EXPORT
void RTPathAbsDup(void);
void RTPathAbsDup(void){}
EXPORT
void RTPathAbsEx(void);
void RTPathAbsEx(void){}
EXPORT
void RTPathAbsExDup(void);
void RTPathAbsExDup(void){}
EXPORT
void RTPathAppDocs(void);
void RTPathAppDocs(void){}
EXPORT
void RTPathAppPrivateArch(void);
void RTPathAppPrivateArch(void){}
EXPORT
void RTPathAppPrivateNoArch(void);
void RTPathAppPrivateNoArch(void){}
EXPORT
void RTPathAppend(void);
void RTPathAppend(void){}
EXPORT
void RTPathAppendEx(void);
void RTPathAppendEx(void){}
EXPORT
void RTPathChangeToDosSlashes(void);
void RTPathChangeToDosSlashes(void){}
EXPORT
void RTPathChangeToUnixSlashes(void);
void RTPathChangeToUnixSlashes(void){}
EXPORT
void RTPathCompare(void);
void RTPathCompare(void){}
EXPORT
void RTPathCopyComponents(void);
void RTPathCopyComponents(void){}
EXPORT
void RTPathCountComponents(void);
void RTPathCountComponents(void){}
EXPORT
void RTPathExecDir(void);
void RTPathExecDir(void){}
EXPORT
void RTPathExists(void);
void RTPathExists(void){}
EXPORT
void RTPathExistsEx(void);
void RTPathExistsEx(void){}
EXPORT
void RTPathExt(void);
void RTPathExt(void){}
EXPORT
void RTPathFilename(void);
void RTPathFilename(void){}
EXPORT
void RTPathGetCurrent(void);
void RTPathGetCurrent(void){}
EXPORT
void RTPathGetMode(void);
void RTPathGetMode(void){}
EXPORT
void RTPathHaveExt(void);
void RTPathHaveExt(void){}
EXPORT
void RTPathHavePath(void);
void RTPathHavePath(void){}
EXPORT
void RTPathJoin(void);
void RTPathJoin(void){}
EXPORT
void RTPathJoinA(void);
void RTPathJoinA(void){}
EXPORT
void RTPathJoinEx(void);
void RTPathJoinEx(void){}
EXPORT
void RTPathParseSimple(void);
void RTPathParseSimple(void){}
EXPORT
void RTPathQueryInfo(void);
void RTPathQueryInfo(void){}
EXPORT
void RTPathQueryInfoEx(void);
void RTPathQueryInfoEx(void){}
EXPORT
void RTPathReal(void);
void RTPathReal(void){}
EXPORT
void RTPathRealDup(void);
void RTPathRealDup(void){}
EXPORT
void RTPathRename(void);
void RTPathRename(void){}
EXPORT
void RTPathSetCurrent(void);
void RTPathSetCurrent(void){}
EXPORT
void RTPathSetMode(void);
void RTPathSetMode(void){}
EXPORT
void RTPathSetOwner(void);
void RTPathSetOwner(void){}
EXPORT
void RTPathSetOwnerEx(void);
void RTPathSetOwnerEx(void){}
EXPORT
void RTPathSetTimes(void);
void RTPathSetTimes(void){}
EXPORT
void RTPathSetTimesEx(void);
void RTPathSetTimesEx(void){}
EXPORT
void RTPathSharedLibs(void);
void RTPathSharedLibs(void){}
EXPORT
void RTPathStartsWith(void);
void RTPathStartsWith(void){}
EXPORT
void RTPathStartsWithRoot(void);
void RTPathStartsWithRoot(void){}
EXPORT
void RTPathStripExt(void);
void RTPathStripExt(void){}
EXPORT
void RTPathStripFilename(void);
void RTPathStripFilename(void){}
EXPORT
void RTPathStripTrailingSlash(void);
void RTPathStripTrailingSlash(void){}
EXPORT
void RTPathTemp(void);
void RTPathTemp(void){}
EXPORT
void RTPathTraverseList(void);
void RTPathTraverseList(void){}
EXPORT
void RTPathUserHome(void);
void RTPathUserHome(void){}
EXPORT
void RTPipeClose(void);
void RTPipeClose(void){}
EXPORT
void RTPipeCreate(void);
void RTPipeCreate(void){}
EXPORT
void RTPipeFlush(void);
void RTPipeFlush(void){}
EXPORT
void RTPipeFromNative(void);
void RTPipeFromNative(void){}
EXPORT
void RTPipeRead(void);
void RTPipeRead(void){}
EXPORT
void RTPipeReadBlocking(void);
void RTPipeReadBlocking(void){}
EXPORT
void RTPipeSelectOne(void);
void RTPipeSelectOne(void){}
EXPORT
void RTPipeToNative(void);
void RTPipeToNative(void){}
EXPORT
void RTPipeWrite(void);
void RTPipeWrite(void){}
EXPORT
void RTPipeWriteBlocking(void);
void RTPipeWriteBlocking(void){}
EXPORT
void RTPoll(void);
void RTPoll(void){}
EXPORT
void RTPollNoResume(void);
void RTPollNoResume(void){}
EXPORT
void RTPollSetAdd(void);
void RTPollSetAdd(void){}
EXPORT
void RTPollSetCreate(void);
void RTPollSetCreate(void){}
EXPORT
void RTPollSetDestroy(void);
void RTPollSetDestroy(void){}
EXPORT
void RTPollSetEventsChange(void);
void RTPollSetEventsChange(void){}
EXPORT
void RTPollSetGetCount(void);
void RTPollSetGetCount(void){}
EXPORT
void RTPollSetQueryHandle(void);
void RTPollSetQueryHandle(void){}
EXPORT
void RTPollSetRemove(void);
void RTPollSetRemove(void){}
EXPORT
void RTPrintf(void);
void RTPrintf(void){}
EXPORT
void RTPrintfV(void);
void RTPrintfV(void){}
EXPORT
void RTProcCreate(void);
void RTProcCreate(void){}
EXPORT
void RTProcCreateEx(void);
void RTProcCreateEx(void){}
EXPORT
void RTProcDaemonize(void);
void RTProcDaemonize(void){}
EXPORT
void RTProcDaemonizeUsingFork(void);
void RTProcDaemonizeUsingFork(void){}
EXPORT
void RTProcGetAffinityMask(void);
void RTProcGetAffinityMask(void){}
EXPORT
void RTProcGetExecutablePath(void);
void RTProcGetExecutablePath(void){}
EXPORT
void RTProcGetPriority(void);
void RTProcGetPriority(void){}
EXPORT
void RTProcIsRunningByName(void);
void RTProcIsRunningByName(void){}
EXPORT
void RTProcSelf(void);
void RTProcSelf(void){}
EXPORT
void RTProcSetPriority(void);
void RTProcSetPriority(void){}
EXPORT
void RTProcShortName(void);
void RTProcShortName(void){}
EXPORT
void RTProcTerminate(void);
void RTProcTerminate(void){}
EXPORT
void RTProcWait(void);
void RTProcWait(void){}
EXPORT
void RTProcWaitNoResume(void);
void RTProcWaitNoResume(void){}
EXPORT
void RTR3InitDll(void);
void RTR3InitDll(void){}
EXPORT
void RTR3InitExe(void);
void RTR3InitExe(void){}
EXPORT
void RTR3InitExeNoArguments(void);
void RTR3InitExeNoArguments(void){}
EXPORT
void RTR3InitEx(void);
void RTR3InitEx(void){}
EXPORT
void RTRandAdvBytes(void);
void RTRandAdvBytes(void){}
EXPORT
void RTRandAdvCreateParkMiller(void);
void RTRandAdvCreateParkMiller(void){}
EXPORT
void RTRandAdvCreateSystemFaster(void);
void RTRandAdvCreateSystemFaster(void){}
EXPORT
void RTRandAdvCreateSystemTruer(void);
void RTRandAdvCreateSystemTruer(void){}
EXPORT
void RTRandAdvDestroy(void);
void RTRandAdvDestroy(void){}
EXPORT
void RTRandAdvRestoreState(void);
void RTRandAdvRestoreState(void){}
EXPORT
void RTRandAdvS32(void);
void RTRandAdvS32(void){}
EXPORT
void RTRandAdvS32Ex(void);
void RTRandAdvS32Ex(void){}
EXPORT
void RTRandAdvS64(void);
void RTRandAdvS64(void){}
EXPORT
void RTRandAdvS64Ex(void);
void RTRandAdvS64Ex(void){}
EXPORT
void RTRandAdvSaveState(void);
void RTRandAdvSaveState(void){}
EXPORT
void RTRandAdvSeed(void);
void RTRandAdvSeed(void){}
EXPORT
void RTRandAdvU32(void);
void RTRandAdvU32(void){}
EXPORT
void RTRandAdvU32Ex(void);
void RTRandAdvU32Ex(void){}
EXPORT
void RTRandAdvU64(void);
void RTRandAdvU64(void){}
EXPORT
void RTRandAdvU64Ex(void);
void RTRandAdvU64Ex(void){}
EXPORT
void RTRandBytes(void);
void RTRandBytes(void){}
EXPORT
void RTRandS32(void);
void RTRandS32(void){}
EXPORT
void RTRandS32Ex(void);
void RTRandS32Ex(void){}
EXPORT
void RTRandS64(void);
void RTRandS64(void){}
EXPORT
void RTRandS64Ex(void);
void RTRandS64Ex(void){}
EXPORT
void RTRandU32(void);
void RTRandU32(void){}
EXPORT
void RTRandU32Ex(void);
void RTRandU32Ex(void){}
EXPORT
void RTRandU64(void);
void RTRandU64(void){}
EXPORT
void RTRandU64Ex(void);
void RTRandU64Ex(void){}
EXPORT
void RTReqQueueAlloc(void);
void RTReqQueueAlloc(void){}
EXPORT
void RTReqQueueCall(void);
void RTReqQueueCall(void){}
EXPORT
void RTReqQueueCallEx(void);
void RTReqQueueCallEx(void){}
EXPORT
void RTReqQueueCallV(void);
void RTReqQueueCallV(void){}
EXPORT
void RTReqQueueCallVoid(void);
void RTReqQueueCallVoid(void){}
EXPORT
void RTReqQueueCreate(void);
void RTReqQueueCreate(void){}
EXPORT
void RTReqQueueDestroy(void);
void RTReqQueueDestroy(void){}
EXPORT
void RTReqQueueIsBusy(void);
void RTReqQueueIsBusy(void){}
EXPORT
void RTReqQueueProcess(void);
void RTReqQueueProcess(void){}
EXPORT
void RTReqGetStatus(void);
void RTReqGetStatus(void){}
EXPORT
void RTReqRelease(void);
void RTReqRelease(void){}
EXPORT
void RTReqRetain(void);
void RTReqRetain(void){}
EXPORT
void RTReqSubmit(void);
void RTReqSubmit(void){}
EXPORT
void RTReqWait(void);
void RTReqWait(void){}
EXPORT
void RTS3BucketsDestroy(void);
void RTS3BucketsDestroy(void){}
EXPORT
void RTS3Create(void);
void RTS3Create(void){}
EXPORT
void RTS3CreateBucket(void);
void RTS3CreateBucket(void){}
EXPORT
void RTS3DeleteBucket(void);
void RTS3DeleteBucket(void){}
EXPORT
void RTS3DeleteKey(void);
void RTS3DeleteKey(void){}
EXPORT
void RTS3Destroy(void);
void RTS3Destroy(void){}
EXPORT
void RTS3GetBucketKeys(void);
void RTS3GetBucketKeys(void){}
EXPORT
void RTS3GetBuckets(void);
void RTS3GetBuckets(void){}
EXPORT
void RTS3GetKey(void);
void RTS3GetKey(void){}
EXPORT
void RTS3KeysDestroy(void);
void RTS3KeysDestroy(void){}
EXPORT
void RTS3PutKey(void);
void RTS3PutKey(void){}
EXPORT
void RTS3SetProgressCallback(void);
void RTS3SetProgressCallback(void){}
EXPORT
void RTSemEventAddSignaller(void);
void RTSemEventAddSignaller(void){}
EXPORT
void RTSemEventCreate(void);
void RTSemEventCreate(void){}
EXPORT
void RTSemEventCreateEx(void);
void RTSemEventCreateEx(void){}
EXPORT
void RTSemEventDestroy(void);
void RTSemEventDestroy(void){}
EXPORT
void RTSemEventMultiAddSignaller(void);
void RTSemEventMultiAddSignaller(void){}
EXPORT
void RTSemEventMultiCreate(void);
void RTSemEventMultiCreate(void){}
EXPORT
void RTSemEventMultiCreateEx(void);
void RTSemEventMultiCreateEx(void){}
EXPORT
void RTSemEventMultiDestroy(void);
void RTSemEventMultiDestroy(void){}
EXPORT
void RTSemEventMultiRemoveSignaller(void);
void RTSemEventMultiRemoveSignaller(void){}
EXPORT
void RTSemEventMultiReset(void);
void RTSemEventMultiReset(void){}
EXPORT
void RTSemEventMultiSetSignaller(void);
void RTSemEventMultiSetSignaller(void){}
EXPORT
void RTSemEventMultiSignal(void);
void RTSemEventMultiSignal(void){}
EXPORT
void RTSemEventMultiWait(void);
void RTSemEventMultiWait(void){}
EXPORT
void RTSemEventMultiWaitEx(void);
void RTSemEventMultiWaitEx(void){}
EXPORT
void RTSemEventMultiWaitExDebug(void);
void RTSemEventMultiWaitExDebug(void){}
EXPORT
void RTSemEventMultiWaitNoResume(void);
void RTSemEventMultiWaitNoResume(void){}
EXPORT
void RTSemEventRemoveSignaller(void);
void RTSemEventRemoveSignaller(void){}
EXPORT
void RTSemEventSetSignaller(void);
void RTSemEventSetSignaller(void){}
EXPORT
void RTSemEventSignal(void);
void RTSemEventSignal(void){}
EXPORT
void RTSemEventWait(void);
void RTSemEventWait(void){}
EXPORT
void RTSemEventWaitNoResume(void);
void RTSemEventWaitNoResume(void){}
EXPORT
void RTSemFastMutexCreate(void);
void RTSemFastMutexCreate(void){}
EXPORT
void RTSemFastMutexDestroy(void);
void RTSemFastMutexDestroy(void){}
EXPORT
void RTSemFastMutexRelease(void);
void RTSemFastMutexRelease(void){}
EXPORT
void RTSemFastMutexRequest(void);
void RTSemFastMutexRequest(void){}
EXPORT
void RTSemMutexCreate(void);
void RTSemMutexCreate(void){}
EXPORT
void RTSemMutexCreateEx(void);
void RTSemMutexCreateEx(void){}
EXPORT
void RTSemMutexDestroy(void);
void RTSemMutexDestroy(void){}
EXPORT
void RTSemMutexIsOwned(void);
void RTSemMutexIsOwned(void){}
EXPORT
void RTSemMutexRelease(void);
void RTSemMutexRelease(void){}
EXPORT
void RTSemMutexRequest(void);
void RTSemMutexRequest(void){}
EXPORT
void RTSemMutexRequestDebug(void);
void RTSemMutexRequestDebug(void){}
EXPORT
void RTSemMutexRequestNoResume(void);
void RTSemMutexRequestNoResume(void){}
EXPORT
void RTSemMutexRequestNoResumeDebug(void);
void RTSemMutexRequestNoResumeDebug(void){}
EXPORT
void RTSemMutexSetSubClass(void);
void RTSemMutexSetSubClass(void){}
EXPORT
void RTSemPing(void);
void RTSemPing(void){}
EXPORT
void RTSemPingPongDelete(void);
void RTSemPingPongDelete(void){}
EXPORT
void RTSemPingPongInit(void);
void RTSemPingPongInit(void){}
EXPORT
void RTSemPingWait(void);
void RTSemPingWait(void){}
EXPORT
void RTSemPong(void);
void RTSemPong(void){}
EXPORT
void RTSemPongWait(void);
void RTSemPongWait(void){}
EXPORT
void RTSemRWCreate(void);
void RTSemRWCreate(void){}
EXPORT
void RTSemRWCreateEx(void);
void RTSemRWCreateEx(void){}
EXPORT
void RTSemRWDestroy(void);
void RTSemRWDestroy(void){}
EXPORT
void RTSemRWGetReadCount(void);
void RTSemRWGetReadCount(void){}
EXPORT
void RTSemRWGetWriteRecursion(void);
void RTSemRWGetWriteRecursion(void){}
EXPORT
void RTSemRWGetWriterReadRecursion(void);
void RTSemRWGetWriterReadRecursion(void){}
EXPORT
void RTSemRWIsReadOwner(void);
void RTSemRWIsReadOwner(void){}
EXPORT
void RTSemRWIsWriteOwner(void);
void RTSemRWIsWriteOwner(void){}
EXPORT
void RTSemRWReleaseRead(void);
void RTSemRWReleaseRead(void){}
EXPORT
void RTSemRWReleaseWrite(void);
void RTSemRWReleaseWrite(void){}
EXPORT
void RTSemRWRequestRead(void);
void RTSemRWRequestRead(void){}
EXPORT
void RTSemRWRequestReadDebug(void);
void RTSemRWRequestReadDebug(void){}
EXPORT
void RTSemRWRequestReadNoResume(void);
void RTSemRWRequestReadNoResume(void){}
EXPORT
void RTSemRWRequestReadNoResumeDebug(void);
void RTSemRWRequestReadNoResumeDebug(void){}
EXPORT
void RTSemRWRequestWrite(void);
void RTSemRWRequestWrite(void){}
EXPORT
void RTSemRWRequestWriteDebug(void);
void RTSemRWRequestWriteDebug(void){}
EXPORT
void RTSemRWRequestWriteNoResume(void);
void RTSemRWRequestWriteNoResume(void){}
EXPORT
void RTSemRWRequestWriteNoResumeDebug(void);
void RTSemRWRequestWriteNoResumeDebug(void){}
EXPORT
void RTSemRWSetSubClass(void);
void RTSemRWSetSubClass(void){}
EXPORT
void RTSemSpinMutexCreate(void);
void RTSemSpinMutexCreate(void){}
EXPORT
void RTSemSpinMutexDestroy(void);
void RTSemSpinMutexDestroy(void){}
EXPORT
void RTSemSpinMutexRelease(void);
void RTSemSpinMutexRelease(void){}
EXPORT
void RTSemSpinMutexRequest(void);
void RTSemSpinMutexRequest(void){}
EXPORT
void RTSemSpinMutexTryRequest(void);
void RTSemSpinMutexTryRequest(void){}
EXPORT
void RTSemXRoadsCreate(void);
void RTSemXRoadsCreate(void){}
EXPORT
void RTSemXRoadsDestroy(void);
void RTSemXRoadsDestroy(void){}
EXPORT
void RTSemXRoadsEWEnter(void);
void RTSemXRoadsEWEnter(void){}
EXPORT
void RTSemXRoadsEWLeave(void);
void RTSemXRoadsEWLeave(void){}
EXPORT
void RTSemXRoadsNSEnter(void);
void RTSemXRoadsNSEnter(void){}
EXPORT
void RTSemXRoadsNSLeave(void);
void RTSemXRoadsNSLeave(void){}
EXPORT
void RTSgBufAdvance(void);
void RTSgBufAdvance(void){}
EXPORT
void RTSgBufClone(void);
void RTSgBufClone(void){}
EXPORT
void RTSgBufCmp(void);
void RTSgBufCmp(void){}
EXPORT
void RTSgBufCmpEx(void);
void RTSgBufCmpEx(void){}
EXPORT
void RTSgBufCopy(void);
void RTSgBufCopy(void){}
EXPORT
void RTSgBufCopyFromBuf(void);
void RTSgBufCopyFromBuf(void){}
EXPORT
void RTSgBufCopyToBuf(void);
void RTSgBufCopyToBuf(void){}
EXPORT
void RTSgBufInit(void);
void RTSgBufInit(void){}
EXPORT
void RTSgBufReset(void);
void RTSgBufReset(void){}
EXPORT
void RTSgBufSegArrayCreate(void);
void RTSgBufSegArrayCreate(void){}
EXPORT
void RTSgBufSet(void);
void RTSgBufSet(void){}
EXPORT
void RTSha1(void);
void RTSha1(void){}
EXPORT
void RTSha1Digest(void);
void RTSha1Digest(void){}
EXPORT
void RTSha1DigestFromFile(void);
void RTSha1DigestFromFile(void){}
EXPORT
void RTSha1Final(void);
void RTSha1Final(void){}
EXPORT
void RTSha1FromString(void);
void RTSha1FromString(void){}
EXPORT
void RTSha1Init(void);
void RTSha1Init(void){}
EXPORT
void RTSha1ToString(void);
void RTSha1ToString(void){}
EXPORT
void RTSha1Update(void);
void RTSha1Update(void){}
EXPORT
void RTSha256(void);
void RTSha256(void){}
EXPORT
void RTSha256Final(void);
void RTSha256Final(void){}
EXPORT
void RTSha256FromString(void);
void RTSha256FromString(void){}
EXPORT
void RTSha256Init(void);
void RTSha256Init(void){}
EXPORT
void RTSha256ToString(void);
void RTSha256ToString(void){}
EXPORT
void RTSha256Update(void);
void RTSha256Update(void){}
EXPORT
void RTSha256Digest(void);
void RTSha256Digest(void){}
EXPORT
void RTSha256DigestFromFile(void);
void RTSha256DigestFromFile(void){}
EXPORT
void RTSha512(void);
void RTSha512(void){}
EXPORT
void RTSha512Final(void);
void RTSha512Final(void){}
EXPORT
void RTSha512FromString(void);
void RTSha512FromString(void){}
EXPORT
void RTSha512Init(void);
void RTSha512Init(void){}
EXPORT
void RTSha512ToString(void);
void RTSha512ToString(void){}
EXPORT
void RTSha512Update(void);
void RTSha512Update(void){}
EXPORT
void RTSocketClose(void);
void RTSocketClose(void){}
EXPORT
void RTSocketFromNative(void);
void RTSocketFromNative(void){}
EXPORT
void RTSocketGetLocalAddress(void);
void RTSocketGetLocalAddress(void){}
EXPORT
void RTSocketGetPeerAddress(void);
void RTSocketGetPeerAddress(void){}
EXPORT
void RTSocketRead(void);
void RTSocketRead(void){}
EXPORT
void RTSocketReadNB(void);
void RTSocketReadNB(void){}
EXPORT
void RTSocketRelease(void);
void RTSocketRelease(void){}
EXPORT
void RTSocketRetain(void);
void RTSocketRetain(void){}
EXPORT
void RTSocketSelectOne(void);
void RTSocketSelectOne(void){}
EXPORT
void RTSocketSelectOneEx(void);
void RTSocketSelectOneEx(void){}
EXPORT
void RTSocketSetInheritance(void);
void RTSocketSetInheritance(void){}
EXPORT
void RTSocketSgWrite(void);
void RTSocketSgWrite(void){}
EXPORT
void RTSocketSgWriteL(void);
void RTSocketSgWriteL(void){}
EXPORT
void RTSocketSgWriteLNB(void);
void RTSocketSgWriteLNB(void){}
EXPORT
void RTSocketSgWriteLV(void);
void RTSocketSgWriteLV(void){}
EXPORT
void RTSocketSgWriteLVNB(void);
void RTSocketSgWriteLVNB(void){}
EXPORT
void RTSocketSgWriteNB(void);
void RTSocketSgWriteNB(void){}
EXPORT
void RTSocketShutdown(void);
void RTSocketShutdown(void){}
EXPORT
void RTSocketToNative(void);
void RTSocketToNative(void){}
EXPORT
void RTSocketWrite(void);
void RTSocketWrite(void){}
EXPORT
void RTSocketWriteNB(void);
void RTSocketWriteNB(void){}
EXPORT
void RTSpinlockAcquire(void);
void RTSpinlockAcquire(void){}
EXPORT
void RTSpinlockCreate(void);
void RTSpinlockCreate(void){}
EXPORT
void RTSpinlockDestroy(void);
void RTSpinlockDestroy(void){}
EXPORT
void RTSpinlockRelease(void);
void RTSpinlockRelease(void){}
EXPORT
void RTStrAAppendExNVTag(void);
void RTStrAAppendExNVTag(void){}
EXPORT
void RTStrAAppendNTag(void);
void RTStrAAppendNTag(void){}
EXPORT
void RTStrAAppendTag(void);
void RTStrAAppendTag(void){}
EXPORT
void RTStrAPrintf2VTag(void);
void RTStrAPrintf2VTag(void){}
EXPORT
void RTStrAPrintfVTag(void);
void RTStrAPrintfVTag(void){}
EXPORT
void RTStrATruncateTag(void);
void RTStrATruncateTag(void){}
EXPORT
void RTStrAllocExTag(void);
void RTStrAllocExTag(void){}
EXPORT
void RTStrAllocTag(void);
void RTStrAllocTag(void){}
EXPORT
void RTStrCacheCreate(void);
void RTStrCacheCreate(void){}
EXPORT
void RTStrCacheDestroy(void);
void RTStrCacheDestroy(void){}
EXPORT
void RTStrCacheEnter(void);
void RTStrCacheEnter(void){}
EXPORT
void RTStrCacheEnterN(void);
void RTStrCacheEnterN(void){}
EXPORT
void RTStrCacheLength(void);
void RTStrCacheLength(void){}
EXPORT
void RTStrCacheRelease(void);
void RTStrCacheRelease(void){}
EXPORT
void RTStrCacheRetain(void);
void RTStrCacheRetain(void){}
EXPORT
void RTStrCalcLatin1Len(void);
void RTStrCalcLatin1Len(void){}
EXPORT
void RTStrCalcLatin1LenEx(void);
void RTStrCalcLatin1LenEx(void){}
EXPORT
void RTStrCalcUtf16Len(void);
void RTStrCalcUtf16Len(void){}
EXPORT
void RTStrCalcUtf16LenEx(void);
void RTStrCalcUtf16LenEx(void){}
EXPORT
void RTStrCat(void);
void RTStrCat(void){}
EXPORT
void RTStrCatEx(void);
void RTStrCatEx(void){}
EXPORT
void RTStrCmp(void);
void RTStrCmp(void){}
EXPORT
void RTStrConvertHexBytes(void);
void RTStrConvertHexBytes(void){}
EXPORT
void RTStrCopy(void);
void RTStrCopy(void){}
EXPORT
void RTStrCopyEx(void);
void RTStrCopyEx(void){}
EXPORT
void RTStrCurrentCPToUtf8Tag(void);
void RTStrCurrentCPToUtf8Tag(void){}
EXPORT
void RTStrDupExTag(void);
void RTStrDupExTag(void){}
EXPORT
void RTStrDupNTag(void);
void RTStrDupNTag(void){}
EXPORT
void RTStrDupTag(void);
void RTStrDupTag(void){}
EXPORT
void RTStrFormat(void);
void RTStrFormat(void){}
EXPORT
void RTStrFormatNumber(void);
void RTStrFormatNumber(void){}
EXPORT
void RTStrFormatTypeDeregister(void);
void RTStrFormatTypeDeregister(void){}
EXPORT
void RTStrFormatTypeRegister(void);
void RTStrFormatTypeRegister(void){}
EXPORT
void RTStrFormatTypeSetUser(void);
void RTStrFormatTypeSetUser(void){}
EXPORT
void RTStrFormatV(void);
void RTStrFormatV(void){}
EXPORT
void RTStrFree(void);
void RTStrFree(void){}
EXPORT
void RTStrGetCpExInternal(void);
void RTStrGetCpExInternal(void){}
EXPORT
void RTStrGetCpInternal(void);
void RTStrGetCpInternal(void){}
EXPORT
void RTStrGetCpNExInternal(void);
void RTStrGetCpNExInternal(void){}
EXPORT
void RTStrICmp(void);
void RTStrICmp(void){}
EXPORT
void RTStrIStr(void);
void RTStrIStr(void){}
EXPORT
void RTStrIsValidEncoding(void);
void RTStrIsValidEncoding(void){}
EXPORT
void RTStrNCmp(void);
void RTStrNCmp(void){}
EXPORT
void RTStrNICmp(void);
void RTStrNICmp(void){}
EXPORT
void RTStrNLen(void);
void RTStrNLen(void){}
EXPORT
void RTStrNLenEx(void);
void RTStrNLenEx(void){}
EXPORT
void RTStrPrevCp(void);
void RTStrPrevCp(void){}
EXPORT
void RTStrPrintHexBytes(void);
void RTStrPrintHexBytes(void){}
EXPORT
void RTStrPrintf(void);
void RTStrPrintf(void){}
EXPORT
void RTStrPrintfEx(void);
void RTStrPrintfEx(void){}
EXPORT
void RTStrPrintfExV(void);
void RTStrPrintfExV(void){}
EXPORT
void RTStrPrintfV(void);
void RTStrPrintfV(void){}
EXPORT
void RTStrPurgeEncoding(void);
void RTStrPurgeEncoding(void){}
EXPORT
void RTStrPutCpInternal(void);
void RTStrPutCpInternal(void){}
EXPORT
void RTStrReallocTag(void);
void RTStrReallocTag(void){}
EXPORT
void RTStrSimplePatternMatch(void);
void RTStrSimplePatternMatch(void){}
EXPORT
void RTStrSimplePatternMultiMatch(void);
void RTStrSimplePatternMultiMatch(void){}
EXPORT
void RTStrSimplePatternNMatch(void);
void RTStrSimplePatternNMatch(void){}
EXPORT
void RTStrSpaceDestroy(void);
void RTStrSpaceDestroy(void){}
EXPORT
void RTStrSpaceEnumerate(void);
void RTStrSpaceEnumerate(void){}
EXPORT
void RTStrSpaceGet(void);
void RTStrSpaceGet(void){}
EXPORT
void RTStrSpaceInsert(void);
void RTStrSpaceInsert(void){}
EXPORT
void RTStrSpaceRemove(void);
void RTStrSpaceRemove(void){}
EXPORT
void RTStrStr(void);
void RTStrStr(void){}
EXPORT
void RTStrStrip(void);
void RTStrStrip(void){}
EXPORT
void RTStrStripL(void);
void RTStrStripL(void){}
EXPORT
void RTStrStripR(void);
void RTStrStripR(void){}
EXPORT
void RTStrToInt16(void);
void RTStrToInt16(void){}
EXPORT
void RTStrToInt16Ex(void);
void RTStrToInt16Ex(void){}
EXPORT
void RTStrToInt16Full(void);
void RTStrToInt16Full(void){}
EXPORT
void RTStrToInt32(void);
void RTStrToInt32(void){}
EXPORT
void RTStrToInt32Ex(void);
void RTStrToInt32Ex(void){}
EXPORT
void RTStrToInt32Full(void);
void RTStrToInt32Full(void){}
EXPORT
void RTStrToInt64(void);
void RTStrToInt64(void){}
EXPORT
void RTStrToInt64Ex(void);
void RTStrToInt64Ex(void){}
EXPORT
void RTStrToInt64Full(void);
void RTStrToInt64Full(void){}
EXPORT
void RTStrToInt8(void);
void RTStrToInt8(void){}
EXPORT
void RTStrToInt8Ex(void);
void RTStrToInt8Ex(void){}
EXPORT
void RTStrToInt8Full(void);
void RTStrToInt8Full(void){}
EXPORT
void RTStrToLatin1ExTag(void);
void RTStrToLatin1ExTag(void){}
EXPORT
void RTStrToLatin1Tag(void);
void RTStrToLatin1Tag(void){}
EXPORT
void RTStrToLower(void);
void RTStrToLower(void){}
EXPORT
void RTStrToUInt16(void);
void RTStrToUInt16(void){}
EXPORT
void RTStrToUInt16Ex(void);
void RTStrToUInt16Ex(void){}
EXPORT
void RTStrToUInt16Full(void);
void RTStrToUInt16Full(void){}
EXPORT
void RTStrToUInt32(void);
void RTStrToUInt32(void){}
EXPORT
void RTStrToUInt32Ex(void);
void RTStrToUInt32Ex(void){}
EXPORT
void RTStrToUInt32Full(void);
void RTStrToUInt32Full(void){}
EXPORT
void RTStrToUInt64(void);
void RTStrToUInt64(void){}
EXPORT
void RTStrToUInt64Ex(void);
void RTStrToUInt64Ex(void){}
EXPORT
void RTStrToUInt64Full(void);
void RTStrToUInt64Full(void){}
EXPORT
void RTStrToUInt8(void);
void RTStrToUInt8(void){}
EXPORT
void RTStrToUInt8Ex(void);
void RTStrToUInt8Ex(void){}
EXPORT
void RTStrToUInt8Full(void);
void RTStrToUInt8Full(void){}
EXPORT
void RTStrToUni(void);
void RTStrToUni(void){}
EXPORT
void RTStrToUniEx(void);
void RTStrToUniEx(void){}
EXPORT
void RTStrToUpper(void);
void RTStrToUpper(void){}
EXPORT
void RTStrToUtf16ExTag(void);
void RTStrToUtf16ExTag(void){}
EXPORT
void RTStrToUtf16Tag(void);
void RTStrToUtf16Tag(void){}
EXPORT
void RTStrUniLen(void);
void RTStrUniLen(void){}
EXPORT
void RTStrUniLenEx(void);
void RTStrUniLenEx(void){}
EXPORT
void RTStrUtf8ToCurrentCPTag(void);
void RTStrUtf8ToCurrentCPTag(void){}
EXPORT
void RTStrValidateEncoding(void);
void RTStrValidateEncoding(void){}
EXPORT
void RTStrValidateEncodingEx(void);
void RTStrValidateEncodingEx(void){}
EXPORT
void RTStrVersionCompare(void);
void RTStrVersionCompare(void){}
EXPORT
void RTStrmClearError(void);
void RTStrmClearError(void){}
EXPORT
void RTStrmClose(void);
void RTStrmClose(void){}
EXPORT
void RTStrmError(void);
void RTStrmError(void){}
EXPORT
void RTStrmFlush(void);
void RTStrmFlush(void){}
EXPORT
void RTStrmGetCh(void);
void RTStrmGetCh(void){}
EXPORT
void RTStrmGetLine(void);
void RTStrmGetLine(void){}
EXPORT
void RTStrmOpen(void);
void RTStrmOpen(void){}
EXPORT
void RTStrmOpenF(void);
void RTStrmOpenF(void){}
EXPORT
void RTStrmOpenFV(void);
void RTStrmOpenFV(void){}
EXPORT
void RTStrmPrintf(void);
void RTStrmPrintf(void){}
EXPORT
void RTStrmPrintfV(void);
void RTStrmPrintfV(void){}
EXPORT
void RTStrmPutCh(void);
void RTStrmPutCh(void){}
EXPORT
void RTStrmPutStr(void);
void RTStrmPutStr(void){}
EXPORT
void RTStrmReadEx(void);
void RTStrmReadEx(void){}
EXPORT
void RTStrmRewind(void);
void RTStrmRewind(void){}
EXPORT
void RTStrmWriteEx(void);
void RTStrmWriteEx(void){}
EXPORT
void RTSymlinkCreate(void);
void RTSymlinkCreate(void){}
EXPORT
void RTSymlinkDelete(void);
void RTSymlinkDelete(void){}
EXPORT
void RTSymlinkExists(void);
void RTSymlinkExists(void){}
EXPORT
void RTSymlinkIsDangling(void);
void RTSymlinkIsDangling(void){}
EXPORT
void RTSymlinkRead(void);
void RTSymlinkRead(void){}
EXPORT
void RTSymlinkReadA(void);
void RTSymlinkReadA(void){}
EXPORT
void RTSystemQueryAvailableRam(void);
void RTSystemQueryAvailableRam(void){}
EXPORT
void RTSystemQueryDmiString(void);
void RTSystemQueryDmiString(void){}
EXPORT
void RTSystemQueryOSInfo(void);
void RTSystemQueryOSInfo(void){}
EXPORT
void RTSystemQueryTotalRam(void);
void RTSystemQueryTotalRam(void){}
EXPORT
void RTTarClose(void);
void RTTarClose(void){}
EXPORT
void RTTarCreate(void);
void RTTarCreate(void){}
EXPORT
void RTTarCurrentFile(void);
void RTTarCurrentFile(void){}
EXPORT
void RTTarExtractAll(void);
void RTTarExtractAll(void){}
EXPORT
void RTTarExtractFileToBuf(void);
void RTTarExtractFileToBuf(void){}
EXPORT
void RTTarExtractFiles(void);
void RTTarExtractFiles(void){}
EXPORT
void RTTarFileClose(void);
void RTTarFileClose(void){}
EXPORT
void RTTarFileExists(void);
void RTTarFileExists(void){}
EXPORT
void RTTarFileGetMode(void);
void RTTarFileGetMode(void){}
EXPORT
void RTTarFileGetOwner(void);
void RTTarFileGetOwner(void){}
EXPORT
void RTTarFileGetSize(void);
void RTTarFileGetSize(void){}
EXPORT
void RTTarFileGetTime(void);
void RTTarFileGetTime(void){}
EXPORT
void RTTarFileOpen(void);
void RTTarFileOpen(void){}
EXPORT
void RTTarFileOpenCurrentFile(void);
void RTTarFileOpenCurrentFile(void){}
EXPORT
void RTTarFileRead(void);
void RTTarFileRead(void){}
EXPORT
void RTTarFileReadAt(void);
void RTTarFileReadAt(void){}
EXPORT
void RTTarFileSeek(void);
void RTTarFileSeek(void){}
EXPORT
void RTTarFileSetMode(void);
void RTTarFileSetMode(void){}
EXPORT
void RTTarFileSetOwner(void);
void RTTarFileSetOwner(void){}
EXPORT
void RTTarFileSetSize(void);
void RTTarFileSetSize(void){}
EXPORT
void RTTarFileSetTime(void);
void RTTarFileSetTime(void){}
EXPORT
void RTTarFileTell(void);
void RTTarFileTell(void){}
EXPORT
void RTTarFileWrite(void);
void RTTarFileWrite(void){}
EXPORT
void RTTarFileWriteAt(void);
void RTTarFileWriteAt(void){}
EXPORT
void RTTarList(void);
void RTTarList(void){}
EXPORT
void RTTarOpen(void);
void RTTarOpen(void){}
EXPORT
void RTTarSeekNextFile(void);
void RTTarSeekNextFile(void){}
EXPORT
void RTTcpClientClose(void);
void RTTcpClientClose(void){}
EXPORT
void RTTcpClientCloseEx(void);
void RTTcpClientCloseEx(void){}
EXPORT
void RTTcpClientConnect(void);
void RTTcpClientConnect(void){}
EXPORT
void RTTcpFlush(void);
void RTTcpFlush(void){}
EXPORT
void RTTcpGetLocalAddress(void);
void RTTcpGetLocalAddress(void){}
EXPORT
void RTTcpGetPeerAddress(void);
void RTTcpGetPeerAddress(void){}
EXPORT
void RTTcpRead(void);
void RTTcpRead(void){}
EXPORT
void RTTcpReadNB(void);
void RTTcpReadNB(void){}
EXPORT
void RTTcpSelectOne(void);
void RTTcpSelectOne(void){}
EXPORT
void RTTcpSelectOneEx(void);
void RTTcpSelectOneEx(void){}
EXPORT
void RTTcpServerCreate(void);
void RTTcpServerCreate(void){}
EXPORT
void RTTcpServerCreateEx(void);
void RTTcpServerCreateEx(void){}
EXPORT
void RTTcpServerDestroy(void);
void RTTcpServerDestroy(void){}
EXPORT
void RTTcpServerDisconnectClient(void);
void RTTcpServerDisconnectClient(void){}
EXPORT
void RTTcpServerDisconnectClient2(void);
void RTTcpServerDisconnectClient2(void){}
EXPORT
void RTTcpServerListen(void);
void RTTcpServerListen(void){}
EXPORT
void RTTcpServerListen2(void);
void RTTcpServerListen2(void){}
EXPORT
void RTTcpServerShutdown(void);
void RTTcpServerShutdown(void){}
EXPORT
void RTTcpSetSendCoalescing(void);
void RTTcpSetSendCoalescing(void){}
EXPORT
void RTTcpSgWrite(void);
void RTTcpSgWrite(void){}
EXPORT
void RTTcpSgWriteL(void);
void RTTcpSgWriteL(void){}
EXPORT
void RTTcpSgWriteLNB(void);
void RTTcpSgWriteLNB(void){}
EXPORT
void RTTcpSgWriteLV(void);
void RTTcpSgWriteLV(void){}
EXPORT
void RTTcpSgWriteLVNB(void);
void RTTcpSgWriteLVNB(void){}
EXPORT
void RTTcpSgWriteNB(void);
void RTTcpSgWriteNB(void){}
EXPORT
void RTTcpWrite(void);
void RTTcpWrite(void){}
EXPORT
void RTTcpWriteNB(void);
void RTTcpWriteNB(void){}
EXPORT
void RTTermDeregisterCallback(void);
void RTTermDeregisterCallback(void){}
EXPORT
void RTTermRegisterCallback(void);
void RTTermRegisterCallback(void){}
EXPORT
void RTTermRunCallbacks(void);
void RTTermRunCallbacks(void){}
EXPORT
void RTTestBanner(void);
void RTTestBanner(void){}
EXPORT
void RTTestCreate(void);
void RTTestCreate(void){}
EXPORT
void RTTestDestroy(void);
void RTTestDestroy(void){}
EXPORT
void RTTestErrorCount(void);
void RTTestErrorCount(void){}
EXPORT
void RTTestErrorInc(void);
void RTTestErrorInc(void){}
EXPORT
void RTTestFailed(void);
void RTTestFailed(void){}
EXPORT
void RTTestFailedV(void);
void RTTestFailedV(void){}
EXPORT
void RTTestFailureDetails(void);
void RTTestFailureDetails(void){}
EXPORT
void RTTestFailureDetailsV(void);
void RTTestFailureDetailsV(void){}
EXPORT
void RTTestGuardedAlloc(void);
void RTTestGuardedAlloc(void){}
EXPORT
void RTTestGuardedAllocHead(void);
void RTTestGuardedAllocHead(void){}
EXPORT
void RTTestGuardedAllocTail(void);
void RTTestGuardedAllocTail(void){}
EXPORT
void RTTestGuardedFree(void);
void RTTestGuardedFree(void){}
EXPORT
void RTTestIErrorCount(void);
void RTTestIErrorCount(void){}
EXPORT
void RTTestIErrorInc(void);
void RTTestIErrorInc(void){}
EXPORT
void RTTestIFailed(void);
void RTTestIFailed(void){}
EXPORT
void RTTestIFailedRc(void);
void RTTestIFailedRc(void){}
EXPORT
void RTTestIFailedRcV(void);
void RTTestIFailedRcV(void){}
EXPORT
void RTTestIFailedV(void);
void RTTestIFailedV(void){}
EXPORT
void RTTestIFailureDetails(void);
void RTTestIFailureDetails(void){}
EXPORT
void RTTestIFailureDetailsV(void);
void RTTestIFailureDetailsV(void){}
EXPORT
void RTTestIPassed(void);
void RTTestIPassed(void){}
EXPORT
void RTTestIPassedV(void);
void RTTestIPassedV(void){}
EXPORT
void RTTestIPrintf(void);
void RTTestIPrintf(void){}
EXPORT
void RTTestIPrintfV(void);
void RTTestIPrintfV(void){}
EXPORT
void RTTestISub(void);
void RTTestISub(void){}
EXPORT
void RTTestISubDone(void);
void RTTestISubDone(void){}
EXPORT
void RTTestISubF(void);
void RTTestISubF(void){}
EXPORT
void RTTestISubV(void);
void RTTestISubV(void){}
EXPORT
void RTTestIValue(void);
void RTTestIValue(void){}
EXPORT
void RTTestIValueF(void);
void RTTestIValueF(void){}
EXPORT
void RTTestIValueV(void);
void RTTestIValueV(void){}
EXPORT
void RTTestInitAndCreate(void);
void RTTestInitAndCreate(void){}
EXPORT
void RTTestPassed(void);
void RTTestPassed(void){}
EXPORT
void RTTestPassedV(void);
void RTTestPassedV(void){}
EXPORT
void RTTestPrintf(void);
void RTTestPrintf(void){}
EXPORT
void RTTestPrintfNl(void);
void RTTestPrintfNl(void){}
EXPORT
void RTTestPrintfNlV(void);
void RTTestPrintfNlV(void){}
EXPORT
void RTTestPrintfV(void);
void RTTestPrintfV(void){}
EXPORT
void RTTestSetDefault(void);
void RTTestSetDefault(void){}
EXPORT
void RTTestSkipAndDestroy(void);
void RTTestSkipAndDestroy(void){}
EXPORT
void RTTestSkipAndDestroyV(void);
void RTTestSkipAndDestroyV(void){}
EXPORT
void RTTestSub(void);
void RTTestSub(void){}
EXPORT
void RTTestSubDone(void);
void RTTestSubDone(void){}
EXPORT
void RTTestSubF(void);
void RTTestSubF(void){}
EXPORT
void RTTestSubV(void);
void RTTestSubV(void){}
EXPORT
void RTTestSummaryAndDestroy(void);
void RTTestSummaryAndDestroy(void){}
EXPORT
void RTTestValue(void);
void RTTestValue(void){}
EXPORT
void RTTestValueF(void);
void RTTestValueF(void){}
EXPORT
void RTTestValueV(void);
void RTTestValueV(void){}
EXPORT
void RTThreadAdopt(void);
void RTThreadAdopt(void){}
EXPORT
void RTThreadBlocking(void);
void RTThreadBlocking(void){}
EXPORT
void RTThreadCreate(void);
void RTThreadCreate(void){}
EXPORT
void RTThreadCreateF(void);
void RTThreadCreateF(void){}
EXPORT
void RTThreadCreateV(void);
void RTThreadCreateV(void){}
EXPORT
void RTThreadFromNative(void);
void RTThreadFromNative(void){}
EXPORT
void RTThreadGetAffinity(void);
void RTThreadGetAffinity(void){}
EXPORT
void RTThreadGetExecutionTimeMilli(void);
void RTThreadGetExecutionTimeMilli(void){}
EXPORT
void RTThreadGetName(void);
void RTThreadGetName(void){}
EXPORT
void RTThreadGetNative(void);
void RTThreadGetNative(void){}
EXPORT
void RTThreadGetNativeState(void);
void RTThreadGetNativeState(void){}
EXPORT
void RTThreadGetReallySleeping(void);
void RTThreadGetReallySleeping(void){}
EXPORT
void RTThreadGetState(void);
void RTThreadGetState(void){}
EXPORT
void RTThreadGetType(void);
void RTThreadGetType(void){}
EXPORT
void RTThreadIsMain(void);
void RTThreadIsMain(void){}
EXPORT
void RTThreadNativeSelf(void);
void RTThreadNativeSelf(void){}
EXPORT
void RTThreadPoke(void);
void RTThreadPoke(void){}
EXPORT
void RTThreadSelf(void);
void RTThreadSelf(void){}
EXPORT
void RTThreadSelfAutoAdopt(void);
void RTThreadSelfAutoAdopt(void){}
EXPORT
void RTThreadSelfName(void);
void RTThreadSelfName(void){}
EXPORT
void RTThreadSetAffinity(void);
void RTThreadSetAffinity(void){}
EXPORT
void RTThreadSetName(void);
void RTThreadSetName(void){}
EXPORT
void RTThreadSetType(void);
void RTThreadSetType(void){}
EXPORT
void RTThreadSleep(void);
void RTThreadSleep(void){}
EXPORT
void RTThreadStateName(void);
void RTThreadStateName(void){}
EXPORT
void RTThreadUnblocked(void);
void RTThreadUnblocked(void){}
EXPORT
void RTThreadUserReset(void);
void RTThreadUserReset(void){}
EXPORT
void RTThreadUserSignal(void);
void RTThreadUserSignal(void){}
EXPORT
void RTThreadUserWait(void);
void RTThreadUserWait(void){}
EXPORT
void RTThreadUserWaitNoResume(void);
void RTThreadUserWaitNoResume(void){}
EXPORT
void RTThreadWait(void);
void RTThreadWait(void){}
EXPORT
void RTThreadWaitNoResume(void);
void RTThreadWaitNoResume(void){}
EXPORT
void RTThreadYield(void);
void RTThreadYield(void){}
EXPORT
void RTTimeDbgBad(void);
void RTTimeDbgBad(void){}
EXPORT
void RTTimeDbgExpired(void);
void RTTimeDbgExpired(void){}
EXPORT
void RTTimeDbgRaces(void);
void RTTimeDbgRaces(void){}
EXPORT
void RTTimeDbgSteps(void);
void RTTimeDbgSteps(void){}
EXPORT
void RTTimeExplode(void);
void RTTimeExplode(void){}
EXPORT
void RTTimeImplode(void);
void RTTimeImplode(void){}
EXPORT
void RTTimeIsLeapYear(void);
void RTTimeIsLeapYear(void){}
EXPORT
void RTTimeLocalDeltaNano(void);
void RTTimeLocalDeltaNano(void){}
EXPORT
void RTTimeLocalExplode(void);
void RTTimeLocalExplode(void){}
EXPORT
void RTTimeLocalNow(void);
void RTTimeLocalNow(void){}
EXPORT
void RTTimeMilliTS(void);
void RTTimeMilliTS(void){}
EXPORT
void RTTimeNanoTS(void);
void RTTimeNanoTS(void){}
EXPORT
void RTTimeNanoTSLFenceAsync(void);
void RTTimeNanoTSLFenceAsync(void){}
EXPORT
void RTTimeNanoTSLFenceSync(void);
void RTTimeNanoTSLFenceSync(void){}
EXPORT
void RTTimeNanoTSLegacyAsync(void);
void RTTimeNanoTSLegacyAsync(void){}
EXPORT
void RTTimeNanoTSLegacySync(void);
void RTTimeNanoTSLegacySync(void){}
EXPORT
void RTTimeNormalize(void);
void RTTimeNormalize(void){}
EXPORT
void RTTimeNow(void);
void RTTimeNow(void){}
EXPORT
void RTTimeProgramMicroTS(void);
void RTTimeProgramMicroTS(void){}
EXPORT
void RTTimeProgramMilliTS(void);
void RTTimeProgramMilliTS(void){}
EXPORT
void RTTimeProgramNanoTS(void);
void RTTimeProgramNanoTS(void){}
EXPORT
void RTTimeProgramSecTS(void);
void RTTimeProgramSecTS(void){}
EXPORT
void RTTimeProgramStartNanoTS(void);
void RTTimeProgramStartNanoTS(void){}
EXPORT
void RTTimeSet(void);
void RTTimeSet(void){}
EXPORT
void RTTimeSpecToString(void);
void RTTimeSpecToString(void){}
EXPORT
void RTTimeSystemMilliTS(void);
void RTTimeSystemMilliTS(void){}
EXPORT
void RTTimeSystemNanoTS(void);
void RTTimeSystemNanoTS(void){}
EXPORT
void RTTimeToString(void);
void RTTimeToString(void){}
EXPORT
void RTTimerChangeInterval(void);
void RTTimerChangeInterval(void){}
EXPORT
void RTTimerCreate(void);
void RTTimerCreate(void){}
EXPORT
void RTTimerCreateEx(void);
void RTTimerCreateEx(void){}
EXPORT
void RTTimerDestroy(void);
void RTTimerDestroy(void){}
EXPORT
void RTTimerLRCreate(void);
void RTTimerLRCreate(void){}
EXPORT
void RTTimerLRCreateEx(void);
void RTTimerLRCreateEx(void){}
EXPORT
void RTTimerLRDestroy(void);
void RTTimerLRDestroy(void){}
EXPORT
void RTTimerLRStart(void);
void RTTimerLRStart(void){}
EXPORT
void RTTimerLRStop(void);
void RTTimerLRStop(void){}
EXPORT
void RTTimerStart(void);
void RTTimerStart(void){}
EXPORT
void RTTimerStop(void);
void RTTimerStop(void){}
EXPORT
void RTTlsAlloc(void);
void RTTlsAlloc(void){}
EXPORT
void RTTlsAllocEx(void);
void RTTlsAllocEx(void){}
EXPORT
void RTTlsFree(void);
void RTTlsFree(void){}
EXPORT
void RTTlsGet(void);
void RTTlsGet(void){}
EXPORT
void RTTlsGetEx(void);
void RTTlsGetEx(void){}
EXPORT
void RTTlsSet(void);
void RTTlsSet(void){}
EXPORT
void RTUniFree(void);
void RTUniFree(void){}
EXPORT
void RTUtf16CalcLatin1Len(void);
void RTUtf16CalcLatin1Len(void){}
EXPORT
void RTUtf16CalcLatin1LenEx(void);
void RTUtf16CalcLatin1LenEx(void){}
EXPORT
void RTUtf16CalcUtf8Len(void);
void RTUtf16CalcUtf8Len(void){}
EXPORT
void RTUtf16CalcUtf8LenEx(void);
void RTUtf16CalcUtf8LenEx(void){}
EXPORT
void RTUtf16Cmp(void);
void RTUtf16Cmp(void){}
EXPORT
void RTUtf16DupExTag(void);
void RTUtf16DupExTag(void){}
EXPORT
void RTUtf16DupTag(void);
void RTUtf16DupTag(void){}
EXPORT
void RTUtf16Free(void);
void RTUtf16Free(void){}
EXPORT
void RTUtf16GetCpExInternal(void);
void RTUtf16GetCpExInternal(void){}
EXPORT
void RTUtf16GetCpInternal(void);
void RTUtf16GetCpInternal(void){}
EXPORT
void RTUtf16ICmp(void);
void RTUtf16ICmp(void){}
EXPORT
void RTUtf16Len(void);
void RTUtf16Len(void){}
EXPORT
void RTUtf16LocaleICmp(void);
void RTUtf16LocaleICmp(void){}
EXPORT
void RTUtf16PutCpInternal(void);
void RTUtf16PutCpInternal(void){}
EXPORT
void RTUtf16ToLatin1ExTag(void);
void RTUtf16ToLatin1ExTag(void){}
EXPORT
void RTUtf16ToLatin1Tag(void);
void RTUtf16ToLatin1Tag(void){}
EXPORT
void RTUtf16ToLower(void);
void RTUtf16ToLower(void){}
EXPORT
void RTUtf16ToUpper(void);
void RTUtf16ToUpper(void){}
EXPORT
void RTUtf16ToUtf8ExTag(void);
void RTUtf16ToUtf8ExTag(void){}
EXPORT
void RTUtf16ToUtf8Tag(void);
void RTUtf16ToUtf8Tag(void){}
EXPORT
void RTUuidClear(void);
void RTUuidClear(void){}
EXPORT
void RTUuidCompare(void);
void RTUuidCompare(void){}
EXPORT
void RTUuidCompare2Strs(void);
void RTUuidCompare2Strs(void){}
EXPORT
void RTUuidCompareStr(void);
void RTUuidCompareStr(void){}
EXPORT
void RTUuidCreate(void);
void RTUuidCreate(void){}
EXPORT
void RTUuidFromStr(void);
void RTUuidFromStr(void){}
EXPORT
void RTUuidFromUtf16(void);
void RTUuidFromUtf16(void){}
EXPORT
void RTUuidIsNull(void);
void RTUuidIsNull(void){}
EXPORT
void RTUuidToStr(void);
void RTUuidToStr(void){}
EXPORT
void RTUuidToUtf16(void);
void RTUuidToUtf16(void){}
EXPORT
void RTVfsChainElementDeregisterProvider(void);
void RTVfsChainElementDeregisterProvider(void){}
EXPORT
void RTVfsChainElementRegisterProvider(void);
void RTVfsChainElementRegisterProvider(void){}
EXPORT
void RTVfsChainIsSpec(void);
void RTVfsChainIsSpec(void){}
EXPORT
void RTVfsChainOpenFile(void);
void RTVfsChainOpenFile(void){}
EXPORT
void RTVfsChainOpenIoStream(void);
void RTVfsChainOpenIoStream(void){}
EXPORT
void RTVfsChainSpecFree(void);
void RTVfsChainSpecFree(void){}
EXPORT
void RTVfsDirRelease(void);
void RTVfsDirRelease(void){}
EXPORT
void RTVfsDirRetain(void);
void RTVfsDirRetain(void){}
EXPORT
void RTVfsFileFromRTFile(void);
void RTVfsFileFromRTFile(void){}
EXPORT
void RTVfsFileOpen(void);
void RTVfsFileOpen(void){}
EXPORT
void RTVfsFileRelease(void);
void RTVfsFileRelease(void){}
EXPORT
void RTVfsFileRetain(void);
void RTVfsFileRetain(void){}
EXPORT
void RTVfsFileSeek(void);
void RTVfsFileSeek(void){}
EXPORT
void RTVfsFileToIoStream(void);
void RTVfsFileToIoStream(void){}
EXPORT
void RTVfsFsStrmNext(void);
void RTVfsFsStrmNext(void){}
EXPORT
void RTVfsFsStrmQueryInfo(void);
void RTVfsFsStrmQueryInfo(void){}
EXPORT
void RTVfsFsStrmRelease(void);
void RTVfsFsStrmRelease(void){}
EXPORT
void RTVfsFsStrmRetain(void);
void RTVfsFsStrmRetain(void){}
EXPORT
void RTVfsIoStreamToPrivate(void);
void RTVfsIoStreamToPrivate(void){}
EXPORT
void RTVfsIoStrmFlush(void);
void RTVfsIoStrmFlush(void){}
EXPORT
void RTVfsIoStrmFromRTFile(void);
void RTVfsIoStrmFromRTFile(void){}
EXPORT
void RTVfsIoStrmFromStdHandle(void);
void RTVfsIoStrmFromStdHandle(void){}
EXPORT
void RTVfsIoStrmIsAtEnd(void);
void RTVfsIoStrmIsAtEnd(void){}
EXPORT
void RTVfsIoStrmPoll(void);
void RTVfsIoStrmPoll(void){}
EXPORT
void RTVfsIoStrmQueryInfo(void);
void RTVfsIoStrmQueryInfo(void){}
EXPORT
void RTVfsIoStrmRead(void);
void RTVfsIoStrmRead(void){}
EXPORT
void RTVfsIoStrmRelease(void);
void RTVfsIoStrmRelease(void){}
EXPORT
void RTVfsIoStrmRetain(void);
void RTVfsIoStrmRetain(void){}
EXPORT
void RTVfsIoStrmSgRead(void);
void RTVfsIoStrmSgRead(void){}
EXPORT
void RTVfsIoStrmSgWrite(void);
void RTVfsIoStrmSgWrite(void){}
EXPORT
void RTVfsIoStrmSkip(void);
void RTVfsIoStrmSkip(void){}
EXPORT
void RTVfsIoStrmTell(void);
void RTVfsIoStrmTell(void){}
EXPORT
void RTVfsIoStrmToFile(void);
void RTVfsIoStrmToFile(void){}
EXPORT
void RTVfsIoStrmWrite(void);
void RTVfsIoStrmWrite(void){}
EXPORT
void RTVfsIoStrmZeroFill(void);
void RTVfsIoStrmZeroFill(void){}
EXPORT
void RTVfsLockAcquireReadSlow(void);
void RTVfsLockAcquireReadSlow(void){}
EXPORT
void RTVfsLockAcquireWriteSlow(void);
void RTVfsLockAcquireWriteSlow(void){}
EXPORT
void RTVfsLockRelease(void);
void RTVfsLockRelease(void){}
EXPORT
void RTVfsLockReleaseReadSlow(void);
void RTVfsLockReleaseReadSlow(void){}
EXPORT
void RTVfsLockReleaseWriteSlow(void);
void RTVfsLockReleaseWriteSlow(void){}
EXPORT
void RTVfsLockRetain(void);
void RTVfsLockRetain(void){}
EXPORT
void RTVfsMemorizeIoStreamAsFile(void);
void RTVfsMemorizeIoStreamAsFile(void){}
EXPORT
void RTVfsNewBaseObj(void);
void RTVfsNewBaseObj(void){}
EXPORT
void RTVfsNewFile(void);
void RTVfsNewFile(void){}
EXPORT
void RTVfsNewFsStream(void);
void RTVfsNewFsStream(void){}
EXPORT
void RTVfsNewIoStream(void);
void RTVfsNewIoStream(void){}
EXPORT
void RTVfsNewSymlink(void);
void RTVfsNewSymlink(void){}
EXPORT
void RTVfsObjFromDir(void);
void RTVfsObjFromDir(void){}
EXPORT
void RTVfsObjFromFile(void);
void RTVfsObjFromFile(void){}
EXPORT
void RTVfsObjFromFsStream(void);
void RTVfsObjFromFsStream(void){}
EXPORT
void RTVfsObjFromIoStream(void);
void RTVfsObjFromIoStream(void){}
EXPORT
void RTVfsObjFromSymlink(void);
void RTVfsObjFromSymlink(void){}
EXPORT
void RTVfsObjFromVfs(void);
void RTVfsObjFromVfs(void){}
EXPORT
void RTVfsObjQueryInfo(void);
void RTVfsObjQueryInfo(void){}
EXPORT
void RTVfsObjRelease(void);
void RTVfsObjRelease(void){}
EXPORT
void RTVfsObjRetain(void);
void RTVfsObjRetain(void){}
EXPORT
void RTVfsObjToDir(void);
void RTVfsObjToDir(void){}
EXPORT
void RTVfsObjToFile(void);
void RTVfsObjToFile(void){}
EXPORT
void RTVfsObjToFsStream(void);
void RTVfsObjToFsStream(void){}
EXPORT
void RTVfsObjToIoStream(void);
void RTVfsObjToIoStream(void){}
EXPORT
void RTVfsObjToSymlink(void);
void RTVfsObjToSymlink(void){}
EXPORT
void RTVfsObjToVfs(void);
void RTVfsObjToVfs(void){}
EXPORT
void RTVfsParsePath(void);
void RTVfsParsePath(void){}
EXPORT
void RTVfsParsePathA(void);
void RTVfsParsePathA(void){}
EXPORT
void RTVfsParsePathAppend(void);
void RTVfsParsePathAppend(void){}
EXPORT
void RTVfsParsePathFree(void);
void RTVfsParsePathFree(void){}
EXPORT
void RTVfsSymlinkQueryInfo(void);
void RTVfsSymlinkQueryInfo(void){}
EXPORT
void RTVfsSymlinkRead(void);
void RTVfsSymlinkRead(void){}
EXPORT
void RTVfsSymlinkRelease(void);
void RTVfsSymlinkRelease(void){}
EXPORT
void RTVfsSymlinkRetain(void);
void RTVfsSymlinkRetain(void){}
EXPORT
void RTVfsSymlinkSetMode(void);
void RTVfsSymlinkSetMode(void){}
EXPORT
void RTVfsSymlinkSetOwner(void);
void RTVfsSymlinkSetOwner(void){}
EXPORT
void RTVfsSymlinkSetTimes(void);
void RTVfsSymlinkSetTimes(void){}
EXPORT
void RTVfsUtilDummyPollOne(void);
void RTVfsUtilDummyPollOne(void){}
EXPORT
void RTVfsUtilPumpIoStreams(void);
void RTVfsUtilPumpIoStreams(void){}
EXPORT
void RTZipBlockCompress(void);
void RTZipBlockCompress(void){}
EXPORT
void RTZipBlockDecompress(void);
void RTZipBlockDecompress(void){}
EXPORT
void RTZipCompCreate(void);
void RTZipCompCreate(void){}
EXPORT
void RTZipCompDestroy(void);
void RTZipCompDestroy(void){}
EXPORT
void RTZipCompFinish(void);
void RTZipCompFinish(void){}
EXPORT
void RTZipCompress(void);
void RTZipCompress(void){}
EXPORT
void RTZipDecompCreate(void);
void RTZipDecompCreate(void){}
EXPORT
void RTZipDecompDestroy(void);
void RTZipDecompDestroy(void){}
EXPORT
void RTZipDecompress(void);
void RTZipDecompress(void){}
EXPORT
void RTZipGzipDecompressIoStream(void);
void RTZipGzipDecompressIoStream(void){}
EXPORT
void RTZipTarCmd(void);
void RTZipTarCmd(void){}
EXPORT
void RTZipTarFsStreamFromIoStream(void);
void RTZipTarFsStreamFromIoStream(void){}
EXPORT
void SUPR3HardenedLdrLoad(void);
void SUPR3HardenedLdrLoad(void){}
EXPORT
void SUPR3HardenedLdrLoadAppPriv(void);
void SUPR3HardenedLdrLoadAppPriv(void){}
EXPORT
void SUPR3HardenedLdrLoadPlugIn(void);
void SUPR3HardenedLdrLoadPlugIn(void){}
EXPORT
void SUPR3QueryVTxSupported(void);
void SUPR3QueryVTxSupported(void){}
EXPORT
void SUPR3QueryVTCaps(void);
void SUPR3QueryVTCaps(void){}
EXPORT
void a2d_ASN1_OBJECT(void);
void a2d_ASN1_OBJECT(void){}
EXPORT
void a2i_ASN1_INTEGER(void);
void a2i_ASN1_INTEGER(void){}
EXPORT
void a2i_ASN1_STRING(void);
void a2i_ASN1_STRING(void){}
EXPORT
void a2i_ipadd(void);
void a2i_ipadd(void){}
EXPORT
void a2i_IPADDRESS(void);
void a2i_IPADDRESS(void){}
EXPORT
void a2i_IPADDRESS_NC(void);
void a2i_IPADDRESS_NC(void){}
EXPORT
void ACCESS_DESCRIPTION_free(void);
void ACCESS_DESCRIPTION_free(void){}
EXPORT
void ACCESS_DESCRIPTION_new(void);
void ACCESS_DESCRIPTION_new(void){}
EXPORT
void asn1_add_error(void);
void asn1_add_error(void){}
EXPORT
void ASN1_BIT_STRING_free(void);
void ASN1_BIT_STRING_free(void){}
EXPORT
void ASN1_BIT_STRING_get_bit(void);
void ASN1_BIT_STRING_get_bit(void){}
EXPORT
void ASN1_BIT_STRING_new(void);
void ASN1_BIT_STRING_new(void){}
EXPORT
void ASN1_BIT_STRING_set(void);
void ASN1_BIT_STRING_set(void){}
EXPORT
void ASN1_BIT_STRING_set_bit(void);
void ASN1_BIT_STRING_set_bit(void){}
EXPORT
void ASN1_BMPSTRING_free(void);
void ASN1_BMPSTRING_free(void){}
EXPORT
void ASN1_BMPSTRING_new(void);
void ASN1_BMPSTRING_new(void){}
EXPORT
void ASN1_check_infinite_end(void);
void ASN1_check_infinite_end(void){}
EXPORT
void ASN1_const_check_infinite_end(void);
void ASN1_const_check_infinite_end(void){}
EXPORT
void asn1_const_Finish(void);
void asn1_const_Finish(void){}
EXPORT
void ASN1_d2i_bio(void);
void ASN1_d2i_bio(void){}
EXPORT
void ASN1_d2i_fp(void);
void ASN1_d2i_fp(void){}
EXPORT
void ASN1_digest(void);
void ASN1_digest(void){}
EXPORT
void asn1_do_adb(void);
void asn1_do_adb(void){}
EXPORT
void asn1_do_lock(void);
void asn1_do_lock(void){}
EXPORT
void ASN1_dup(void);
void ASN1_dup(void){}
EXPORT
void asn1_enc_free(void);
void asn1_enc_free(void){}
EXPORT
void asn1_enc_init(void);
void asn1_enc_init(void){}
EXPORT
void asn1_enc_restore(void);
void asn1_enc_restore(void){}
EXPORT
void asn1_enc_save(void);
void asn1_enc_save(void){}
EXPORT
void ASN1_ENUMERATED_free(void);
void ASN1_ENUMERATED_free(void){}
EXPORT
void ASN1_ENUMERATED_get(void);
void ASN1_ENUMERATED_get(void){}
EXPORT
void ASN1_ENUMERATED_new(void);
void ASN1_ENUMERATED_new(void){}
EXPORT
void ASN1_ENUMERATED_set(void);
void ASN1_ENUMERATED_set(void){}
EXPORT
void ASN1_ENUMERATED_to_BN(void);
void ASN1_ENUMERATED_to_BN(void){}
EXPORT
void asn1_ex_c2i(void);
void asn1_ex_c2i(void){}
EXPORT
void asn1_ex_i2c(void);
void asn1_ex_i2c(void){}
EXPORT
void asn1_Finish(void);
void asn1_Finish(void){}
EXPORT
void ASN1_GENERALIZEDTIME_check(void);
void ASN1_GENERALIZEDTIME_check(void){}
EXPORT
void ASN1_GENERALIZEDTIME_free(void);
void ASN1_GENERALIZEDTIME_free(void){}
EXPORT
void ASN1_GENERALIZEDTIME_new(void);
void ASN1_GENERALIZEDTIME_new(void){}
EXPORT
void ASN1_GENERALIZEDTIME_print(void);
void ASN1_GENERALIZEDTIME_print(void){}
EXPORT
void ASN1_GENERALIZEDTIME_set(void);
void ASN1_GENERALIZEDTIME_set(void){}
EXPORT
void ASN1_GENERALIZEDTIME_set_string(void);
void ASN1_GENERALIZEDTIME_set_string(void){}
EXPORT
void ASN1_GENERALSTRING_free(void);
void ASN1_GENERALSTRING_free(void){}
EXPORT
void ASN1_GENERALSTRING_new(void);
void ASN1_GENERALSTRING_new(void){}
EXPORT
void ASN1_generate_nconf(void);
void ASN1_generate_nconf(void){}
EXPORT
void ASN1_generate_v3(void);
void ASN1_generate_v3(void){}
EXPORT
void asn1_get_choice_selector(void);
void asn1_get_choice_selector(void){}
EXPORT
void asn1_get_field_ptr(void);
void asn1_get_field_ptr(void){}
EXPORT
void ASN1_get_object(void);
void ASN1_get_object(void){}
EXPORT
void asn1_GetSequence(void);
void asn1_GetSequence(void){}
EXPORT
void ASN1_i2d_bio(void);
void ASN1_i2d_bio(void){}
EXPORT
void ASN1_i2d_fp(void);
void ASN1_i2d_fp(void){}
EXPORT
void ASN1_IA5STRING_free(void);
void ASN1_IA5STRING_free(void){}
EXPORT
void ASN1_IA5STRING_new(void);
void ASN1_IA5STRING_new(void){}
EXPORT
void ASN1_INTEGER_cmp(void);
void ASN1_INTEGER_cmp(void){}
EXPORT
void ASN1_INTEGER_dup(void);
void ASN1_INTEGER_dup(void){}
EXPORT
void ASN1_INTEGER_free(void);
void ASN1_INTEGER_free(void){}
EXPORT
void ASN1_INTEGER_get(void);
void ASN1_INTEGER_get(void){}
EXPORT
void ASN1_INTEGER_new(void);
void ASN1_INTEGER_new(void){}
EXPORT
void ASN1_INTEGER_set(void);
void ASN1_INTEGER_set(void){}
EXPORT
void ASN1_INTEGER_to_BN(void);
void ASN1_INTEGER_to_BN(void){}
EXPORT
void ASN1_item_d2i(void);
void ASN1_item_d2i(void){}
EXPORT
void ASN1_item_d2i_bio(void);
void ASN1_item_d2i_bio(void){}
EXPORT
void ASN1_item_d2i_fp(void);
void ASN1_item_d2i_fp(void){}
EXPORT
void ASN1_item_digest(void);
void ASN1_item_digest(void){}
EXPORT
void ASN1_item_dup(void);
void ASN1_item_dup(void){}
EXPORT
void ASN1_item_ex_d2i(void);
void ASN1_item_ex_d2i(void){}
EXPORT
void ASN1_item_ex_free(void);
void ASN1_item_ex_free(void){}
EXPORT
void ASN1_item_ex_i2d(void);
void ASN1_item_ex_i2d(void){}
EXPORT
void ASN1_item_ex_new(void);
void ASN1_item_ex_new(void){}
EXPORT
void ASN1_item_free(void);
void ASN1_item_free(void){}
EXPORT
void ASN1_item_i2d(void);
void ASN1_item_i2d(void){}
EXPORT
void ASN1_item_i2d_bio(void);
void ASN1_item_i2d_bio(void){}
EXPORT
void ASN1_item_i2d_fp(void);
void ASN1_item_i2d_fp(void){}
EXPORT
void ASN1_item_ndef_i2d(void);
void ASN1_item_ndef_i2d(void){}
EXPORT
void ASN1_item_new(void);
void ASN1_item_new(void){}
EXPORT
void ASN1_item_pack(void);
void ASN1_item_pack(void){}
EXPORT
void ASN1_item_sign(void);
void ASN1_item_sign(void){}
EXPORT
void ASN1_item_unpack(void);
void ASN1_item_unpack(void){}
EXPORT
void ASN1_item_verify(void);
void ASN1_item_verify(void){}
EXPORT
void ASN1_mbstring_copy(void);
void ASN1_mbstring_copy(void){}
EXPORT
void ASN1_mbstring_ncopy(void);
void ASN1_mbstring_ncopy(void){}
EXPORT
void ASN1_NULL_free(void);
void ASN1_NULL_free(void){}
EXPORT
void ASN1_NULL_new(void);
void ASN1_NULL_new(void){}
EXPORT
void ASN1_OBJECT_create(void);
void ASN1_OBJECT_create(void){}
EXPORT
void ASN1_OBJECT_free(void);
void ASN1_OBJECT_free(void){}
EXPORT
void ASN1_OBJECT_new(void);
void ASN1_OBJECT_new(void){}
EXPORT
void ASN1_object_size(void);
void ASN1_object_size(void){}
EXPORT
void ASN1_OCTET_STRING_cmp(void);
void ASN1_OCTET_STRING_cmp(void){}
EXPORT
void ASN1_OCTET_STRING_dup(void);
void ASN1_OCTET_STRING_dup(void){}
EXPORT
void ASN1_OCTET_STRING_free(void);
void ASN1_OCTET_STRING_free(void){}
EXPORT
void ASN1_OCTET_STRING_new(void);
void ASN1_OCTET_STRING_new(void){}
EXPORT
void ASN1_OCTET_STRING_set(void);
void ASN1_OCTET_STRING_set(void){}
EXPORT
void ASN1_pack_string(void);
void ASN1_pack_string(void){}
EXPORT
void ASN1_parse(void);
void ASN1_parse(void){}
EXPORT
void ASN1_parse_dump(void);
void ASN1_parse_dump(void){}
EXPORT
void ASN1_primitive_free(void);
void ASN1_primitive_free(void){}
EXPORT
void ASN1_primitive_new(void);
void ASN1_primitive_new(void){}
EXPORT
void ASN1_PRINTABLE_free(void);
void ASN1_PRINTABLE_free(void){}
EXPORT
void ASN1_PRINTABLE_new(void);
void ASN1_PRINTABLE_new(void){}
EXPORT
void ASN1_PRINTABLE_type(void);
void ASN1_PRINTABLE_type(void){}
EXPORT
void ASN1_PRINTABLESTRING_free(void);
void ASN1_PRINTABLESTRING_free(void){}
EXPORT
void ASN1_PRINTABLESTRING_new(void);
void ASN1_PRINTABLESTRING_new(void){}
EXPORT
void ASN1_put_eoc(void);
void ASN1_put_eoc(void){}
EXPORT
void ASN1_put_object(void);
void ASN1_put_object(void){}
EXPORT
void ASN1_seq_pack(void);
void ASN1_seq_pack(void){}
EXPORT
void ASN1_seq_unpack(void);
void ASN1_seq_unpack(void){}
EXPORT
void asn1_set_choice_selector(void);
void asn1_set_choice_selector(void){}
EXPORT
void ASN1_sign(void);
void ASN1_sign(void){}
EXPORT
void ASN1_STRING_cmp(void);
void ASN1_STRING_cmp(void){}
EXPORT
void ASN1_STRING_data(void);
void ASN1_STRING_data(void){}
EXPORT
void ASN1_STRING_dup(void);
void ASN1_STRING_dup(void){}
EXPORT
void ASN1_STRING_free(void);
void ASN1_STRING_free(void){}
EXPORT
void ASN1_STRING_get_default_mask(void);
void ASN1_STRING_get_default_mask(void){}
EXPORT
void ASN1_STRING_length(void);
void ASN1_STRING_length(void){}
EXPORT
void ASN1_STRING_length_set(void);
void ASN1_STRING_length_set(void){}
EXPORT
void ASN1_STRING_new(void);
void ASN1_STRING_new(void){}
EXPORT
void ASN1_STRING_print(void);
void ASN1_STRING_print(void){}
EXPORT
void ASN1_STRING_print_ex(void);
void ASN1_STRING_print_ex(void){}
EXPORT
void ASN1_STRING_print_ex_fp(void);
void ASN1_STRING_print_ex_fp(void){}
EXPORT
void ASN1_STRING_set(void);
void ASN1_STRING_set(void){}
EXPORT
void ASN1_STRING_set0(void);
void ASN1_STRING_set0(void){}
EXPORT
void ASN1_STRING_set_by_NID(void);
void ASN1_STRING_set_by_NID(void){}
EXPORT
void ASN1_STRING_set_default_mask(void);
void ASN1_STRING_set_default_mask(void){}
EXPORT
void ASN1_STRING_set_default_mask_asc(void);
void ASN1_STRING_set_default_mask_asc(void){}
EXPORT
void ASN1_STRING_TABLE_add(void);
void ASN1_STRING_TABLE_add(void){}
EXPORT
void ASN1_STRING_TABLE_cleanup(void);
void ASN1_STRING_TABLE_cleanup(void){}
EXPORT
void ASN1_STRING_TABLE_get(void);
void ASN1_STRING_TABLE_get(void){}
EXPORT
void ASN1_STRING_to_UTF8(void);
void ASN1_STRING_to_UTF8(void){}
EXPORT
void ASN1_STRING_type(void);
void ASN1_STRING_type(void){}
EXPORT
void ASN1_STRING_type_new(void);
void ASN1_STRING_type_new(void){}
EXPORT
void ASN1_T61STRING_free(void);
void ASN1_T61STRING_free(void){}
EXPORT
void ASN1_T61STRING_new(void);
void ASN1_T61STRING_new(void){}
EXPORT
void ASN1_tag2bit(void);
void ASN1_tag2bit(void){}
EXPORT
void ASN1_tag2str(void);
void ASN1_tag2str(void){}
EXPORT
void ASN1_template_d2i(void);
void ASN1_template_d2i(void){}
EXPORT
void ASN1_template_free(void);
void ASN1_template_free(void){}
EXPORT
void ASN1_template_i2d(void);
void ASN1_template_i2d(void){}
EXPORT
void ASN1_template_new(void);
void ASN1_template_new(void){}
EXPORT
void ASN1_TIME_check(void);
void ASN1_TIME_check(void){}
EXPORT
void ASN1_TIME_free(void);
void ASN1_TIME_free(void){}
EXPORT
void ASN1_TIME_new(void);
void ASN1_TIME_new(void){}
EXPORT
void ASN1_TIME_print(void);
void ASN1_TIME_print(void){}
EXPORT
void ASN1_TIME_set(void);
void ASN1_TIME_set(void){}
EXPORT
void ASN1_TIME_to_generalizedtime(void);
void ASN1_TIME_to_generalizedtime(void){}
EXPORT
void ASN1_TYPE_free(void);
void ASN1_TYPE_free(void){}
EXPORT
void ASN1_TYPE_get(void);
void ASN1_TYPE_get(void){}
EXPORT
void ASN1_TYPE_get_int_octetstring(void);
void ASN1_TYPE_get_int_octetstring(void){}
EXPORT
void ASN1_TYPE_get_octetstring(void);
void ASN1_TYPE_get_octetstring(void){}
EXPORT
void ASN1_TYPE_new(void);
void ASN1_TYPE_new(void){}
EXPORT
void ASN1_TYPE_set(void);
void ASN1_TYPE_set(void){}
EXPORT
void ASN1_TYPE_set1(void);
void ASN1_TYPE_set1(void){}
EXPORT
void ASN1_TYPE_set_int_octetstring(void);
void ASN1_TYPE_set_int_octetstring(void){}
EXPORT
void ASN1_TYPE_set_octetstring(void);
void ASN1_TYPE_set_octetstring(void){}
EXPORT
void ASN1_UNIVERSALSTRING_free(void);
void ASN1_UNIVERSALSTRING_free(void){}
EXPORT
void ASN1_UNIVERSALSTRING_new(void);
void ASN1_UNIVERSALSTRING_new(void){}
EXPORT
void ASN1_UNIVERSALSTRING_to_string(void);
void ASN1_UNIVERSALSTRING_to_string(void){}
EXPORT
void ASN1_unpack_string(void);
void ASN1_unpack_string(void){}
EXPORT
void ASN1_UTCTIME_check(void);
void ASN1_UTCTIME_check(void){}
EXPORT
void ASN1_UTCTIME_cmp_time_t(void);
void ASN1_UTCTIME_cmp_time_t(void){}
EXPORT
void ASN1_UTCTIME_free(void);
void ASN1_UTCTIME_free(void){}
EXPORT
void ASN1_UTCTIME_new(void);
void ASN1_UTCTIME_new(void){}
EXPORT
void ASN1_UTCTIME_print(void);
void ASN1_UTCTIME_print(void){}
EXPORT
void ASN1_UTCTIME_set(void);
void ASN1_UTCTIME_set(void){}
EXPORT
void ASN1_UTCTIME_set_string(void);
void ASN1_UTCTIME_set_string(void){}
EXPORT
void ASN1_UTF8STRING_free(void);
void ASN1_UTF8STRING_free(void){}
EXPORT
void ASN1_UTF8STRING_new(void);
void ASN1_UTF8STRING_new(void){}
EXPORT
void ASN1_verify(void);
void ASN1_verify(void){}
EXPORT
void ASN1_VISIBLESTRING_free(void);
void ASN1_VISIBLESTRING_free(void){}
EXPORT
void ASN1_VISIBLESTRING_new(void);
void ASN1_VISIBLESTRING_new(void){}
EXPORT
void AUTHORITY_INFO_ACCESS_free(void);
void AUTHORITY_INFO_ACCESS_free(void){}
EXPORT
void AUTHORITY_INFO_ACCESS_new(void);
void AUTHORITY_INFO_ACCESS_new(void){}
EXPORT
void AUTHORITY_KEYID_free(void);
void AUTHORITY_KEYID_free(void){}
EXPORT
void AUTHORITY_KEYID_new(void);
void AUTHORITY_KEYID_new(void){}
EXPORT
void BASIC_CONSTRAINTS_free(void);
void BASIC_CONSTRAINTS_free(void){}
EXPORT
void BASIC_CONSTRAINTS_new(void);
void BASIC_CONSTRAINTS_new(void){}
EXPORT
void BIO_callback_ctrl(void);
void BIO_callback_ctrl(void){}
EXPORT
void BIO_clear_flags(void);
void BIO_clear_flags(void){}
EXPORT
void BIO_copy_next_retry(void);
void BIO_copy_next_retry(void){}
EXPORT
void BIO_ctrl(void);
void BIO_ctrl(void){}
EXPORT
void BIO_ctrl_pending(void);
void BIO_ctrl_pending(void){}
EXPORT
void BIO_ctrl_wpending(void);
void BIO_ctrl_wpending(void){}
EXPORT
void BIO_dump(void);
void BIO_dump(void){}
EXPORT
void BIO_dump_cb(void);
void BIO_dump_cb(void){}
EXPORT
void BIO_dump_fp(void);
void BIO_dump_fp(void){}
EXPORT
void BIO_dump_indent(void);
void BIO_dump_indent(void){}
EXPORT
void BIO_dump_indent_cb(void);
void BIO_dump_indent_cb(void){}
EXPORT
void BIO_dump_indent_fp(void);
void BIO_dump_indent_fp(void){}
EXPORT
void BIO_dup_chain(void);
void BIO_dup_chain(void){}
EXPORT
void BIO_f_buffer(void);
void BIO_f_buffer(void){}
EXPORT
void BIO_find_type(void);
void BIO_find_type(void){}
EXPORT
void BIO_free(void);
void BIO_free(void){}
EXPORT
void BIO_free_all(void);
void BIO_free_all(void){}
EXPORT
void BIO_get_callback(void);
void BIO_get_callback(void){}
EXPORT
void BIO_get_callback_arg(void);
void BIO_get_callback_arg(void){}
EXPORT
void BIO_get_ex_data(void);
void BIO_get_ex_data(void){}
EXPORT
void BIO_get_ex_new_index(void);
void BIO_get_ex_new_index(void){}
EXPORT
void BIO_get_retry_BIO(void);
void BIO_get_retry_BIO(void){}
EXPORT
void BIO_get_retry_reason(void);
void BIO_get_retry_reason(void){}
EXPORT
void BIO_gets(void);
void BIO_gets(void){}
EXPORT
void BIO_indent(void);
void BIO_indent(void){}
EXPORT
void BIO_int_ctrl(void);
void BIO_int_ctrl(void){}
EXPORT
void BIO_method_name(void);
void BIO_method_name(void){}
EXPORT
void BIO_method_type(void);
void BIO_method_type(void){}
EXPORT
void BIO_new(void);
void BIO_new(void){}
EXPORT
void BIO_new_file(void);
void BIO_new_file(void){}
EXPORT
void BIO_new_fp(void);
void BIO_new_fp(void){}
EXPORT
void BIO_new_socket(void);
void BIO_new_socket(void){}
EXPORT
void BIO_next(void);
void BIO_next(void){}
EXPORT
void BIO_number_read(void);
void BIO_number_read(void){}
EXPORT
void BIO_number_written(void);
void BIO_number_written(void){}
EXPORT
void BIO_pop(void);
void BIO_pop(void){}
EXPORT
void BIO_ptr_ctrl(void);
void BIO_ptr_ctrl(void){}
EXPORT
void BIO_push(void);
void BIO_push(void){}
EXPORT
void BIO_puts(void);
void BIO_puts(void){}
EXPORT
void BIO_read(void);
void BIO_read(void){}
EXPORT
void BIO_s_file(void);
void BIO_s_file(void){}
EXPORT
void BIO_s_socket(void);
void BIO_s_socket(void){}
EXPORT
void BIO_set(void);
void BIO_set(void){}
EXPORT
void BIO_set_callback(void);
void BIO_set_callback(void){}
EXPORT
void BIO_set_callback_arg(void);
void BIO_set_callback_arg(void){}
EXPORT
void BIO_set_ex_data(void);
void BIO_set_ex_data(void){}
EXPORT
void BIO_set_flags(void);
void BIO_set_flags(void){}
EXPORT
void BIO_test_flags(void);
void BIO_test_flags(void){}
EXPORT
void BIO_vfree(void);
void BIO_vfree(void){}
EXPORT
void BIO_write(void);
void BIO_write(void){}
EXPORT
void BN_add(void);
void BN_add(void){}
EXPORT
void BN_add_word(void);
void BN_add_word(void){}
EXPORT
void bn_add_words(void);
void bn_add_words(void){}
EXPORT
void BN_bin2bn(void);
void BN_bin2bn(void){}
EXPORT
void BN_BLINDING_convert(void);
void BN_BLINDING_convert(void){}
EXPORT
void BN_BLINDING_convert_ex(void);
void BN_BLINDING_convert_ex(void){}
EXPORT
void BN_BLINDING_create_param(void);
void BN_BLINDING_create_param(void){}
EXPORT
void BN_BLINDING_free(void);
void BN_BLINDING_free(void){}
EXPORT
void BN_BLINDING_get_flags(void);
void BN_BLINDING_get_flags(void){}
EXPORT
void BN_BLINDING_get_thread_id(void);
void BN_BLINDING_get_thread_id(void){}
EXPORT
void BN_BLINDING_invert(void);
void BN_BLINDING_invert(void){}
EXPORT
void BN_BLINDING_invert_ex(void);
void BN_BLINDING_invert_ex(void){}
EXPORT
void BN_BLINDING_new(void);
void BN_BLINDING_new(void){}
EXPORT
void BN_BLINDING_set_flags(void);
void BN_BLINDING_set_flags(void){}
EXPORT
void BN_BLINDING_set_thread_id(void);
void BN_BLINDING_set_thread_id(void){}
EXPORT
void BN_BLINDING_update(void);
void BN_BLINDING_update(void){}
EXPORT
void BN_bn2bin(void);
void BN_bn2bin(void){}
EXPORT
void BN_bn2dec(void);
void BN_bn2dec(void){}
EXPORT
void BN_bn2hex(void);
void BN_bn2hex(void){}
EXPORT
void BN_bntest_rand(void);
void BN_bntest_rand(void){}
EXPORT
void BN_clear(void);
void BN_clear(void){}
EXPORT
void BN_clear_bit(void);
void BN_clear_bit(void){}
EXPORT
void BN_clear_free(void);
void BN_clear_free(void){}
EXPORT
void BN_cmp(void);
void BN_cmp(void){}
EXPORT
void BN_copy(void);
void BN_copy(void){}
EXPORT
void BN_CTX_end(void);
void BN_CTX_end(void){}
EXPORT
void BN_CTX_free(void);
void BN_CTX_free(void){}
EXPORT
void BN_CTX_get(void);
void BN_CTX_get(void){}
EXPORT
void BN_CTX_init(void);
void BN_CTX_init(void){}
EXPORT
void BN_CTX_new(void);
void BN_CTX_new(void){}
EXPORT
void BN_CTX_start(void);
void BN_CTX_start(void){}
EXPORT
void BN_dec2bn(void);
void BN_dec2bn(void){}
EXPORT
void BN_div(void);
void BN_div(void){}
EXPORT
void BN_div_recp(void);
void BN_div_recp(void){}
EXPORT
void BN_div_word(void);
void BN_div_word(void){}
EXPORT
void bn_div_words(void);
void bn_div_words(void){}
EXPORT
void BN_dup(void);
void BN_dup(void){}
EXPORT
void bn_dup_expand(void);
void bn_dup_expand(void){}
EXPORT
void BN_exp(void);
void BN_exp(void){}
EXPORT
void bn_expand2(void);
void bn_expand2(void){}
EXPORT
void BN_free(void);
void BN_free(void){}
EXPORT
void BN_from_montgomery(void);
void BN_from_montgomery(void){}
EXPORT
void BN_gcd(void);
void BN_gcd(void){}
EXPORT
void BN_GENCB_call(void);
void BN_GENCB_call(void){}
EXPORT
void BN_generate_prime_ex(void);
void BN_generate_prime_ex(void){}
EXPORT
void BN_get0_nist_prime_192(void);
void BN_get0_nist_prime_192(void){}
EXPORT
void BN_get0_nist_prime_224(void);
void BN_get0_nist_prime_224(void){}
EXPORT
void BN_get0_nist_prime_256(void);
void BN_get0_nist_prime_256(void){}
EXPORT
void BN_get0_nist_prime_384(void);
void BN_get0_nist_prime_384(void){}
EXPORT
void BN_get0_nist_prime_521(void);
void BN_get0_nist_prime_521(void){}
EXPORT
void BN_get_params(void);
void BN_get_params(void){}
EXPORT
void BN_get_word(void);
void BN_get_word(void){}
EXPORT
void BN_GF2m_add(void);
void BN_GF2m_add(void){}
EXPORT
void BN_GF2m_arr2poly(void);
void BN_GF2m_arr2poly(void){}
EXPORT
void BN_GF2m_mod(void);
void BN_GF2m_mod(void){}
EXPORT
void BN_GF2m_mod_arr(void);
void BN_GF2m_mod_arr(void){}
EXPORT
void BN_GF2m_mod_div(void);
void BN_GF2m_mod_div(void){}
EXPORT
void BN_GF2m_mod_div_arr(void);
void BN_GF2m_mod_div_arr(void){}
EXPORT
void BN_GF2m_mod_exp(void);
void BN_GF2m_mod_exp(void){}
EXPORT
void BN_GF2m_mod_exp_arr(void);
void BN_GF2m_mod_exp_arr(void){}
EXPORT
void BN_GF2m_mod_inv(void);
void BN_GF2m_mod_inv(void){}
EXPORT
void BN_GF2m_mod_inv_arr(void);
void BN_GF2m_mod_inv_arr(void){}
EXPORT
void BN_GF2m_mod_mul(void);
void BN_GF2m_mod_mul(void){}
EXPORT
void BN_GF2m_mod_mul_arr(void);
void BN_GF2m_mod_mul_arr(void){}
EXPORT
void BN_GF2m_mod_solve_quad(void);
void BN_GF2m_mod_solve_quad(void){}
EXPORT
void BN_GF2m_mod_solve_quad_arr(void);
void BN_GF2m_mod_solve_quad_arr(void){}
EXPORT
void BN_GF2m_mod_sqr(void);
void BN_GF2m_mod_sqr(void){}
EXPORT
void BN_GF2m_mod_sqr_arr(void);
void BN_GF2m_mod_sqr_arr(void){}
EXPORT
void BN_GF2m_mod_sqrt(void);
void BN_GF2m_mod_sqrt(void){}
EXPORT
void BN_GF2m_mod_sqrt_arr(void);
void BN_GF2m_mod_sqrt_arr(void){}
EXPORT
void BN_GF2m_poly2arr(void);
void BN_GF2m_poly2arr(void){}
EXPORT
void BN_hex2bn(void);
void BN_hex2bn(void){}
EXPORT
void BN_init(void);
void BN_init(void){}
EXPORT
void BN_is_bit_set(void);
void BN_is_bit_set(void){}
EXPORT
void BN_is_prime_ex(void);
void BN_is_prime_ex(void){}
EXPORT
void BN_is_prime_fasttest_ex(void);
void BN_is_prime_fasttest_ex(void){}
EXPORT
void BN_kronecker(void);
void BN_kronecker(void){}
EXPORT
void BN_lshift(void);
void BN_lshift(void){}
EXPORT
void BN_lshift1(void);
void BN_lshift1(void){}
EXPORT
void BN_mask_bits(void);
void BN_mask_bits(void){}
EXPORT
void BN_mod_add(void);
void BN_mod_add(void){}
EXPORT
void BN_mod_add_quick(void);
void BN_mod_add_quick(void){}
EXPORT
void BN_mod_exp(void);
void BN_mod_exp(void){}
EXPORT
void BN_mod_exp_mont(void);
void BN_mod_exp_mont(void){}
EXPORT
void BN_mod_exp_mont_consttime(void);
void BN_mod_exp_mont_consttime(void){}
EXPORT
void BN_mod_exp_mont_word(void);
void BN_mod_exp_mont_word(void){}
EXPORT
void BN_mod_exp_recp(void);
void BN_mod_exp_recp(void){}
EXPORT
void BN_mod_exp_simple(void);
void BN_mod_exp_simple(void){}
EXPORT
void BN_mod_inverse(void);
void BN_mod_inverse(void){}
EXPORT
void BN_mod_lshift(void);
void BN_mod_lshift(void){}
EXPORT
void BN_mod_lshift1(void);
void BN_mod_lshift1(void){}
EXPORT
void BN_mod_lshift1_quick(void);
void BN_mod_lshift1_quick(void){}
EXPORT
void BN_mod_lshift_quick(void);
void BN_mod_lshift_quick(void){}
EXPORT
void BN_mod_mul(void);
void BN_mod_mul(void){}
EXPORT
void BN_mod_mul_montgomery(void);
void BN_mod_mul_montgomery(void){}
EXPORT
void BN_mod_mul_reciprocal(void);
void BN_mod_mul_reciprocal(void){}
EXPORT
void BN_mod_sqr(void);
void BN_mod_sqr(void){}
EXPORT
void BN_mod_sqrt(void);
void BN_mod_sqrt(void){}
EXPORT
void BN_mod_sub(void);
void BN_mod_sub(void){}
EXPORT
void BN_mod_sub_quick(void);
void BN_mod_sub_quick(void){}
EXPORT
void BN_mod_word(void);
void BN_mod_word(void){}
EXPORT
void BN_MONT_CTX_copy(void);
void BN_MONT_CTX_copy(void){}
EXPORT
void BN_MONT_CTX_free(void);
void BN_MONT_CTX_free(void){}
EXPORT
void BN_MONT_CTX_init(void);
void BN_MONT_CTX_init(void){}
EXPORT
void BN_MONT_CTX_new(void);
void BN_MONT_CTX_new(void){}
EXPORT
void BN_MONT_CTX_set(void);
void BN_MONT_CTX_set(void){}
EXPORT
void BN_MONT_CTX_set_locked(void);
void BN_MONT_CTX_set_locked(void){}
EXPORT
void BN_mul(void);
void BN_mul(void){}
EXPORT
void bn_mul_add_words(void);
void bn_mul_add_words(void){}
EXPORT
void BN_mul_word(void);
void BN_mul_word(void){}
EXPORT
void bn_mul_words(void);
void bn_mul_words(void){}
EXPORT
void BN_new(void);
void BN_new(void){}
EXPORT
void BN_nist_mod_192(void);
void BN_nist_mod_192(void){}
EXPORT
void BN_nist_mod_224(void);
void BN_nist_mod_224(void){}
EXPORT
void BN_nist_mod_256(void);
void BN_nist_mod_256(void){}
EXPORT
void BN_nist_mod_384(void);
void BN_nist_mod_384(void){}
EXPORT
void BN_nist_mod_521(void);
void BN_nist_mod_521(void){}
EXPORT
void BN_nnmod(void);
void BN_nnmod(void){}
EXPORT
void BN_num_bits(void);
void BN_num_bits(void){}
EXPORT
void BN_num_bits_word(void);
void BN_num_bits_word(void){}
EXPORT
void BN_print(void);
void BN_print(void){}
EXPORT
void BN_pseudo_rand(void);
void BN_pseudo_rand(void){}
EXPORT
void BN_pseudo_rand_range(void);
void BN_pseudo_rand_range(void){}
EXPORT
void BN_rand(void);
void BN_rand(void){}
EXPORT
void BN_rand_range(void);
void BN_rand_range(void){}
EXPORT
void BN_reciprocal(void);
void BN_reciprocal(void){}
EXPORT
void BN_RECP_CTX_free(void);
void BN_RECP_CTX_free(void){}
EXPORT
void BN_RECP_CTX_init(void);
void BN_RECP_CTX_init(void){}
EXPORT
void BN_RECP_CTX_new(void);
void BN_RECP_CTX_new(void){}
EXPORT
void BN_RECP_CTX_set(void);
void BN_RECP_CTX_set(void){}
EXPORT
void BN_rshift(void);
void BN_rshift(void){}
EXPORT
void BN_rshift1(void);
void BN_rshift1(void){}
EXPORT
void BN_set_bit(void);
void BN_set_bit(void){}
EXPORT
void BN_set_negative(void);
void BN_set_negative(void){}
EXPORT
void BN_set_params(void);
void BN_set_params(void){}
EXPORT
void BN_set_word(void);
void BN_set_word(void){}
EXPORT
void BN_sqr(void);
void BN_sqr(void){}
EXPORT
void bn_sqr_words(void);
void bn_sqr_words(void){}
EXPORT
void BN_sub(void);
void BN_sub(void){}
EXPORT
void BN_sub_word(void);
void BN_sub_word(void){}
EXPORT
void bn_sub_words(void);
void bn_sub_words(void){}
EXPORT
void BN_swap(void);
void BN_swap(void){}
EXPORT
void BN_to_ASN1_ENUMERATED(void);
void BN_to_ASN1_ENUMERATED(void){}
EXPORT
void BN_to_ASN1_INTEGER(void);
void BN_to_ASN1_INTEGER(void){}
EXPORT
void BN_uadd(void);
void BN_uadd(void){}
EXPORT
void BN_ucmp(void);
void BN_ucmp(void){}
EXPORT
void BN_usub(void);
void BN_usub(void){}
EXPORT
void BN_value_one(void);
void BN_value_one(void){}
EXPORT
void BUF_MEM_free(void);
void BUF_MEM_free(void){}
EXPORT
void BUF_MEM_grow(void);
void BUF_MEM_grow(void){}
EXPORT
void BUF_MEM_grow_clean(void);
void BUF_MEM_grow_clean(void){}
EXPORT
void BUF_MEM_new(void);
void BUF_MEM_new(void){}
EXPORT
void BUF_memdup(void);
void BUF_memdup(void){}
EXPORT
void BUF_strdup(void);
void BUF_strdup(void){}
EXPORT
void BUF_strlcat(void);
void BUF_strlcat(void){}
EXPORT
void BUF_strlcpy(void);
void BUF_strlcpy(void){}
EXPORT
void BUF_strndup(void);
void BUF_strndup(void){}
EXPORT
void c2i_ASN1_BIT_STRING(void);
void c2i_ASN1_BIT_STRING(void){}
EXPORT
void c2i_ASN1_INTEGER(void);
void c2i_ASN1_INTEGER(void){}
EXPORT
void c2i_ASN1_OBJECT(void);
void c2i_ASN1_OBJECT(void){}
EXPORT
void CERTIFICATEPOLICIES_free(void);
void CERTIFICATEPOLICIES_free(void){}
EXPORT
void CERTIFICATEPOLICIES_new(void);
void CERTIFICATEPOLICIES_new(void){}
EXPORT
void CONF_dump_bio(void);
void CONF_dump_bio(void){}
EXPORT
void CONF_dump_fp(void);
void CONF_dump_fp(void){}
EXPORT
void CONF_free(void);
void CONF_free(void){}
EXPORT
void CONF_get_number(void);
void CONF_get_number(void){}
EXPORT
void CONF_get_section(void);
void CONF_get_section(void){}
EXPORT
void CONF_get_string(void);
void CONF_get_string(void){}
EXPORT
void CONF_load(void);
void CONF_load(void){}
EXPORT
void CONF_load_bio(void);
void CONF_load_bio(void){}
EXPORT
void CONF_load_fp(void);
void CONF_load_fp(void){}
EXPORT
void CONF_parse_list(void);
void CONF_parse_list(void){}
EXPORT
void CONF_set_default_method(void);
void CONF_set_default_method(void){}
EXPORT
void CONF_set_nconf(void);
void CONF_set_nconf(void){}
EXPORT
void CRL_DIST_POINTS_free(void);
void CRL_DIST_POINTS_free(void){}
EXPORT
void CRL_DIST_POINTS_new(void);
void CRL_DIST_POINTS_new(void){}
EXPORT
void CRYPTO_add_lock(void);
void CRYPTO_add_lock(void){}
EXPORT
void CRYPTO_cleanup_all_ex_data(void);
void CRYPTO_cleanup_all_ex_data(void){}
EXPORT
void CRYPTO_dbg_free(void);
void CRYPTO_dbg_free(void){}
EXPORT
void CRYPTO_dbg_get_options(void);
void CRYPTO_dbg_get_options(void){}
EXPORT
void CRYPTO_dbg_malloc(void);
void CRYPTO_dbg_malloc(void){}
EXPORT
void CRYPTO_dbg_realloc(void);
void CRYPTO_dbg_realloc(void){}
EXPORT
void CRYPTO_dbg_set_options(void);
void CRYPTO_dbg_set_options(void){}
EXPORT
void CRYPTO_destroy_dynlockid(void);
void CRYPTO_destroy_dynlockid(void){}
EXPORT
void CRYPTO_dup_ex_data(void);
void CRYPTO_dup_ex_data(void){}
EXPORT
void CRYPTO_ex_data_new_class(void);
void CRYPTO_ex_data_new_class(void){}
EXPORT
void CRYPTO_free(void);
void CRYPTO_free(void){}
EXPORT
void CRYPTO_free_ex_data(void);
void CRYPTO_free_ex_data(void){}
EXPORT
void CRYPTO_free_locked(void);
void CRYPTO_free_locked(void){}
EXPORT
void CRYPTO_get_add_lock_callback(void);
void CRYPTO_get_add_lock_callback(void){}
EXPORT
void CRYPTO_get_dynlock_create_callback(void);
void CRYPTO_get_dynlock_create_callback(void){}
EXPORT
void CRYPTO_get_dynlock_destroy_callback(void);
void CRYPTO_get_dynlock_destroy_callback(void){}
EXPORT
void CRYPTO_get_dynlock_lock_callback(void);
void CRYPTO_get_dynlock_lock_callback(void){}
EXPORT
void CRYPTO_get_dynlock_value(void);
void CRYPTO_get_dynlock_value(void){}
EXPORT
void CRYPTO_get_ex_data(void);
void CRYPTO_get_ex_data(void){}
EXPORT
void CRYPTO_get_ex_data_implementation(void);
void CRYPTO_get_ex_data_implementation(void){}
EXPORT
void CRYPTO_get_ex_new_index(void);
void CRYPTO_get_ex_new_index(void){}
EXPORT
void CRYPTO_get_id_callback(void);
void CRYPTO_get_id_callback(void){}
EXPORT
void CRYPTO_get_locked_mem_ex_functions(void);
void CRYPTO_get_locked_mem_ex_functions(void){}
EXPORT
void CRYPTO_get_locked_mem_functions(void);
void CRYPTO_get_locked_mem_functions(void){}
EXPORT
void CRYPTO_get_locking_callback(void);
void CRYPTO_get_locking_callback(void){}
EXPORT
void CRYPTO_get_mem_debug_functions(void);
void CRYPTO_get_mem_debug_functions(void){}
EXPORT
void CRYPTO_get_mem_debug_options(void);
void CRYPTO_get_mem_debug_options(void){}
EXPORT
void CRYPTO_get_mem_ex_functions(void);
void CRYPTO_get_mem_ex_functions(void){}
EXPORT
void CRYPTO_get_mem_functions(void);
void CRYPTO_get_mem_functions(void){}
EXPORT
void CRYPTO_get_new_dynlockid(void);
void CRYPTO_get_new_dynlockid(void){}
EXPORT
void CRYPTO_get_new_lockid(void);
void CRYPTO_get_new_lockid(void){}
EXPORT
void CRYPTO_is_mem_check_on(void);
void CRYPTO_is_mem_check_on(void){}
EXPORT
void CRYPTO_lock(void);
void CRYPTO_lock(void){}
EXPORT
void CRYPTO_malloc(void);
void CRYPTO_malloc(void){}
EXPORT
void CRYPTO_malloc_locked(void);
void CRYPTO_malloc_locked(void){}
EXPORT
void CRYPTO_mem_ctrl(void);
void CRYPTO_mem_ctrl(void){}
EXPORT
void CRYPTO_mem_leaks(void);
void CRYPTO_mem_leaks(void){}
EXPORT
void CRYPTO_mem_leaks_cb(void);
void CRYPTO_mem_leaks_cb(void){}
EXPORT
void CRYPTO_mem_leaks_fp(void);
void CRYPTO_mem_leaks_fp(void){}
EXPORT
void CRYPTO_new_ex_data(void);
void CRYPTO_new_ex_data(void){}
EXPORT
void CRYPTO_num_locks(void);
void CRYPTO_num_locks(void){}
EXPORT
void CRYPTO_pop_info(void);
void CRYPTO_pop_info(void){}
EXPORT
void CRYPTO_push_info_(void);
void CRYPTO_push_info_(void){}
EXPORT
void CRYPTO_realloc(void);
void CRYPTO_realloc(void){}
EXPORT
void CRYPTO_realloc_clean(void);
void CRYPTO_realloc_clean(void){}
EXPORT
void CRYPTO_remalloc(void);
void CRYPTO_remalloc(void){}
EXPORT
void CRYPTO_remove_all_info(void);
void CRYPTO_remove_all_info(void){}
EXPORT
void CRYPTO_set_add_lock_callback(void);
void CRYPTO_set_add_lock_callback(void){}
EXPORT
void CRYPTO_set_dynlock_create_callback(void);
void CRYPTO_set_dynlock_create_callback(void){}
EXPORT
void CRYPTO_set_dynlock_destroy_callback(void);
void CRYPTO_set_dynlock_destroy_callback(void){}
EXPORT
void CRYPTO_set_dynlock_lock_callback(void);
void CRYPTO_set_dynlock_lock_callback(void){}
EXPORT
void CRYPTO_set_ex_data(void);
void CRYPTO_set_ex_data(void){}
EXPORT
void CRYPTO_set_ex_data_implementation(void);
void CRYPTO_set_ex_data_implementation(void){}
EXPORT
void CRYPTO_set_id_callback(void);
void CRYPTO_set_id_callback(void){}
EXPORT
void CRYPTO_set_locked_mem_ex_functions(void);
void CRYPTO_set_locked_mem_ex_functions(void){}
EXPORT
void CRYPTO_set_locked_mem_functions(void);
void CRYPTO_set_locked_mem_functions(void){}
EXPORT
void CRYPTO_set_locking_callback(void);
void CRYPTO_set_locking_callback(void){}
EXPORT
void CRYPTO_set_mem_debug_functions(void);
void CRYPTO_set_mem_debug_functions(void){}
EXPORT
void CRYPTO_set_mem_debug_options(void);
void CRYPTO_set_mem_debug_options(void){}
EXPORT
void CRYPTO_set_mem_ex_functions(void);
void CRYPTO_set_mem_ex_functions(void){}
EXPORT
void CRYPTO_set_mem_functions(void);
void CRYPTO_set_mem_functions(void){}
EXPORT
void CRYPTO_strdup(void);
void CRYPTO_strdup(void){}
EXPORT
void CRYPTO_thread_id(void);
void CRYPTO_thread_id(void){}
EXPORT
void d2i_ACCESS_DESCRIPTION(void);
void d2i_ACCESS_DESCRIPTION(void){}
EXPORT
void d2i_ASN1_BIT_STRING(void);
void d2i_ASN1_BIT_STRING(void){}
EXPORT
void d2i_ASN1_BMPSTRING(void);
void d2i_ASN1_BMPSTRING(void){}
EXPORT
void d2i_ASN1_BOOLEAN(void);
void d2i_ASN1_BOOLEAN(void){}
EXPORT
void d2i_ASN1_bytes(void);
void d2i_ASN1_bytes(void){}
EXPORT
void d2i_ASN1_ENUMERATED(void);
void d2i_ASN1_ENUMERATED(void){}
EXPORT
void d2i_ASN1_GENERALIZEDTIME(void);
void d2i_ASN1_GENERALIZEDTIME(void){}
EXPORT
void d2i_ASN1_GENERALSTRING(void);
void d2i_ASN1_GENERALSTRING(void){}
EXPORT
void d2i_ASN1_IA5STRING(void);
void d2i_ASN1_IA5STRING(void){}
EXPORT
void d2i_ASN1_INTEGER(void);
void d2i_ASN1_INTEGER(void){}
EXPORT
void d2i_ASN1_NULL(void);
void d2i_ASN1_NULL(void){}
EXPORT
void d2i_ASN1_OBJECT(void);
void d2i_ASN1_OBJECT(void){}
EXPORT
void d2i_ASN1_OCTET_STRING(void);
void d2i_ASN1_OCTET_STRING(void){}
EXPORT
void d2i_ASN1_PRINTABLE(void);
void d2i_ASN1_PRINTABLE(void){}
EXPORT
void d2i_ASN1_PRINTABLESTRING(void);
void d2i_ASN1_PRINTABLESTRING(void){}
EXPORT
void d2i_ASN1_SET(void);
void d2i_ASN1_SET(void){}
EXPORT
void d2i_ASN1_T61STRING(void);
void d2i_ASN1_T61STRING(void){}
EXPORT
void d2i_ASN1_TIME(void);
void d2i_ASN1_TIME(void){}
EXPORT
void d2i_ASN1_TYPE(void);
void d2i_ASN1_TYPE(void){}
EXPORT
void d2i_ASN1_type_bytes(void);
void d2i_ASN1_type_bytes(void){}
EXPORT
void d2i_ASN1_UINTEGER(void);
void d2i_ASN1_UINTEGER(void){}
EXPORT
void d2i_ASN1_UNIVERSALSTRING(void);
void d2i_ASN1_UNIVERSALSTRING(void){}
EXPORT
void d2i_ASN1_UTCTIME(void);
void d2i_ASN1_UTCTIME(void){}
EXPORT
void d2i_ASN1_UTF8STRING(void);
void d2i_ASN1_UTF8STRING(void){}
EXPORT
void d2i_ASN1_VISIBLESTRING(void);
void d2i_ASN1_VISIBLESTRING(void){}
EXPORT
void d2i_AUTHORITY_INFO_ACCESS(void);
void d2i_AUTHORITY_INFO_ACCESS(void){}
EXPORT
void d2i_AUTHORITY_KEYID(void);
void d2i_AUTHORITY_KEYID(void){}
EXPORT
void d2i_AutoPrivateKey(void);
void d2i_AutoPrivateKey(void){}
EXPORT
void d2i_BASIC_CONSTRAINTS(void);
void d2i_BASIC_CONSTRAINTS(void){}
EXPORT
void d2i_CERTIFICATEPOLICIES(void);
void d2i_CERTIFICATEPOLICIES(void){}
EXPORT
void d2i_CRL_DIST_POINTS(void);
void d2i_CRL_DIST_POINTS(void){}
EXPORT
void d2i_DHparams(void);
void d2i_DHparams(void){}
EXPORT
void d2i_DIRECTORYSTRING(void);
void d2i_DIRECTORYSTRING(void){}
EXPORT
void d2i_DISPLAYTEXT(void);
void d2i_DISPLAYTEXT(void){}
EXPORT
void d2i_DIST_POINT(void);
void d2i_DIST_POINT(void){}
EXPORT
void d2i_DIST_POINT_NAME(void);
void d2i_DIST_POINT_NAME(void){}
EXPORT
void d2i_EC_PUBKEY(void);
void d2i_EC_PUBKEY(void){}
EXPORT
void d2i_EC_PUBKEY_bio(void);
void d2i_EC_PUBKEY_bio(void){}
EXPORT
void d2i_ECDSA_SIG(void);
void d2i_ECDSA_SIG(void){}
EXPORT
void d2i_ECParameters(void);
void d2i_ECParameters(void){}
EXPORT
void d2i_ECPKParameters(void);
void d2i_ECPKParameters(void){}
EXPORT
void d2i_ECPrivateKey(void);
void d2i_ECPrivateKey(void){}
EXPORT
void d2i_ECPrivateKey_bio(void);
void d2i_ECPrivateKey_bio(void){}
EXPORT
void d2i_EDIPARTYNAME(void);
void d2i_EDIPARTYNAME(void){}
EXPORT
void d2i_EXTENDED_KEY_USAGE(void);
void d2i_EXTENDED_KEY_USAGE(void){}
EXPORT
void d2i_GENERAL_NAME(void);
void d2i_GENERAL_NAME(void){}
EXPORT
void d2i_GENERAL_NAMES(void);
void d2i_GENERAL_NAMES(void){}
EXPORT
void d2i_NETSCAPE_SPKAC(void);
void d2i_NETSCAPE_SPKAC(void){}
EXPORT
void d2i_NETSCAPE_SPKI(void);
void d2i_NETSCAPE_SPKI(void){}
EXPORT
void d2i_NOTICEREF(void);
void d2i_NOTICEREF(void){}
EXPORT
void d2i_OCSP_BASICRESP(void);
void d2i_OCSP_BASICRESP(void){}
EXPORT
void d2i_OCSP_CERTID(void);
void d2i_OCSP_CERTID(void){}
EXPORT
void d2i_OCSP_CERTSTATUS(void);
void d2i_OCSP_CERTSTATUS(void){}
EXPORT
void d2i_OCSP_CRLID(void);
void d2i_OCSP_CRLID(void){}
EXPORT
void d2i_OCSP_ONEREQ(void);
void d2i_OCSP_ONEREQ(void){}
EXPORT
void d2i_OCSP_REQINFO(void);
void d2i_OCSP_REQINFO(void){}
EXPORT
void d2i_OCSP_REQUEST(void);
void d2i_OCSP_REQUEST(void){}
EXPORT
void d2i_OCSP_RESPBYTES(void);
void d2i_OCSP_RESPBYTES(void){}
EXPORT
void d2i_OCSP_RESPDATA(void);
void d2i_OCSP_RESPDATA(void){}
EXPORT
void d2i_OCSP_RESPID(void);
void d2i_OCSP_RESPID(void){}
EXPORT
void d2i_OCSP_RESPONSE(void);
void d2i_OCSP_RESPONSE(void){}
EXPORT
void d2i_OCSP_REVOKEDINFO(void);
void d2i_OCSP_REVOKEDINFO(void){}
EXPORT
void d2i_OCSP_SERVICELOC(void);
void d2i_OCSP_SERVICELOC(void){}
EXPORT
void d2i_OCSP_SIGNATURE(void);
void d2i_OCSP_SIGNATURE(void){}
EXPORT
void d2i_OCSP_SINGLERESP(void);
void d2i_OCSP_SINGLERESP(void){}
EXPORT
void d2i_OTHERNAME(void);
void d2i_OTHERNAME(void){}
EXPORT
void d2i_PKCS7(void);
void d2i_PKCS7(void){}
EXPORT
void d2i_PKCS7_bio(void);
void d2i_PKCS7_bio(void){}
EXPORT
void d2i_PKCS7_DIGEST(void);
void d2i_PKCS7_DIGEST(void){}
EXPORT
void d2i_PKCS7_ENC_CONTENT(void);
void d2i_PKCS7_ENC_CONTENT(void){}
EXPORT
void d2i_PKCS7_ENCRYPT(void);
void d2i_PKCS7_ENCRYPT(void){}
EXPORT
void d2i_PKCS7_ENVELOPE(void);
void d2i_PKCS7_ENVELOPE(void){}
EXPORT
void d2i_PKCS7_ISSUER_AND_SERIAL(void);
void d2i_PKCS7_ISSUER_AND_SERIAL(void){}
EXPORT
void d2i_PKCS7_RECIP_INFO(void);
void d2i_PKCS7_RECIP_INFO(void){}
EXPORT
void d2i_PKCS7_SIGN_ENVELOPE(void);
void d2i_PKCS7_SIGN_ENVELOPE(void){}
EXPORT
void d2i_PKCS7_SIGNED(void);
void d2i_PKCS7_SIGNED(void){}
EXPORT
void d2i_PKCS7_SIGNER_INFO(void);
void d2i_PKCS7_SIGNER_INFO(void){}
EXPORT
void d2i_PKCS8_bio(void);
void d2i_PKCS8_bio(void){}
EXPORT
void d2i_PKCS8_PRIV_KEY_INFO(void);
void d2i_PKCS8_PRIV_KEY_INFO(void){}
EXPORT
void d2i_PKCS8_PRIV_KEY_INFO_bio(void);
void d2i_PKCS8_PRIV_KEY_INFO_bio(void){}
EXPORT
void d2i_PKEY_USAGE_PERIOD(void);
void d2i_PKEY_USAGE_PERIOD(void){}
EXPORT
void d2i_POLICYINFO(void);
void d2i_POLICYINFO(void){}
EXPORT
void d2i_POLICYQUALINFO(void);
void d2i_POLICYQUALINFO(void){}
EXPORT
void d2i_PrivateKey(void);
void d2i_PrivateKey(void){}
EXPORT
void d2i_PrivateKey_bio(void);
void d2i_PrivateKey_bio(void){}
EXPORT
void d2i_PROXY_CERT_INFO_EXTENSION(void);
void d2i_PROXY_CERT_INFO_EXTENSION(void){}
EXPORT
void d2i_PROXY_POLICY(void);
void d2i_PROXY_POLICY(void){}
EXPORT
void d2i_PUBKEY(void);
void d2i_PUBKEY(void){}
EXPORT
void d2i_PUBKEY_bio(void);
void d2i_PUBKEY_bio(void){}
EXPORT
void d2i_PublicKey(void);
void d2i_PublicKey(void){}
EXPORT
void d2i_RSA_PUBKEY(void);
void d2i_RSA_PUBKEY(void){}
EXPORT
void d2i_RSA_PUBKEY_bio(void);
void d2i_RSA_PUBKEY_bio(void){}
EXPORT
void d2i_RSAPrivateKey(void);
void d2i_RSAPrivateKey(void){}
EXPORT
void d2i_RSAPrivateKey_bio(void);
void d2i_RSAPrivateKey_bio(void){}
EXPORT
void d2i_RSAPublicKey(void);
void d2i_RSAPublicKey(void){}
EXPORT
void d2i_RSAPublicKey_bio(void);
void d2i_RSAPublicKey_bio(void){}
EXPORT
void d2i_SXNET(void);
void d2i_SXNET(void){}
EXPORT
void d2i_SXNETID(void);
void d2i_SXNETID(void){}
EXPORT
void d2i_USERNOTICE(void);
void d2i_USERNOTICE(void){}
EXPORT
void d2i_X509(void);
void d2i_X509(void){}
EXPORT
void d2i_X509_ALGOR(void);
void d2i_X509_ALGOR(void){}
EXPORT
void d2i_X509_ALGORS(void);
void d2i_X509_ALGORS(void){}
EXPORT
void d2i_X509_ATTRIBUTE(void);
void d2i_X509_ATTRIBUTE(void){}
EXPORT
void d2i_X509_AUX(void);
void d2i_X509_AUX(void){}
EXPORT
void d2i_X509_bio(void);
void d2i_X509_bio(void){}
EXPORT
void d2i_X509_CERT_AUX(void);
void d2i_X509_CERT_AUX(void){}
EXPORT
void d2i_X509_CERT_PAIR(void);
void d2i_X509_CERT_PAIR(void){}
EXPORT
void d2i_X509_CINF(void);
void d2i_X509_CINF(void){}
EXPORT
void d2i_X509_CRL(void);
void d2i_X509_CRL(void){}
EXPORT
void d2i_X509_CRL_bio(void);
void d2i_X509_CRL_bio(void){}
EXPORT
void d2i_X509_CRL_INFO(void);
void d2i_X509_CRL_INFO(void){}
EXPORT
void d2i_X509_EXTENSION(void);
void d2i_X509_EXTENSION(void){}
EXPORT
void d2i_X509_EXTENSIONS(void);
void d2i_X509_EXTENSIONS(void){}
EXPORT
void d2i_X509_NAME(void);
void d2i_X509_NAME(void){}
EXPORT
void d2i_X509_NAME_ENTRY(void);
void d2i_X509_NAME_ENTRY(void){}
EXPORT
void d2i_X509_PUBKEY(void);
void d2i_X509_PUBKEY(void){}
EXPORT
void d2i_X509_REQ(void);
void d2i_X509_REQ(void){}
EXPORT
void d2i_X509_REQ_bio(void);
void d2i_X509_REQ_bio(void){}
EXPORT
void d2i_X509_REQ_INFO(void);
void d2i_X509_REQ_INFO(void){}
EXPORT
void d2i_X509_REVOKED(void);
void d2i_X509_REVOKED(void){}
EXPORT
void d2i_X509_SIG(void);
void d2i_X509_SIG(void){}
EXPORT
void d2i_X509_VAL(void);
void d2i_X509_VAL(void){}
EXPORT
void DH_check(void);
void DH_check(void){}
EXPORT
void DH_check_pub_key(void);
void DH_check_pub_key(void){}
EXPORT
void DH_compute_key(void);
void DH_compute_key(void){}
EXPORT
void DH_free(void);
void DH_free(void){}
EXPORT
void DH_generate_key(void);
void DH_generate_key(void){}
EXPORT
void DH_get_default_method(void);
void DH_get_default_method(void){}
EXPORT
void DH_get_ex_data(void);
void DH_get_ex_data(void){}
EXPORT
void DH_get_ex_new_index(void);
void DH_get_ex_new_index(void){}
EXPORT
void DH_new(void);
void DH_new(void){}
EXPORT
void DH_new_method(void);
void DH_new_method(void){}
EXPORT
void DH_OpenSSL(void);
void DH_OpenSSL(void){}
EXPORT
void DH_set_default_method(void);
void DH_set_default_method(void){}
EXPORT
void DH_set_ex_data(void);
void DH_set_ex_data(void){}
EXPORT
void DH_set_method(void);
void DH_set_method(void){}
EXPORT
void DH_size(void);
void DH_size(void){}
EXPORT
void DH_up_ref(void);
void DH_up_ref(void){}
EXPORT
void DHparams_print(void);
void DHparams_print(void){}
EXPORT
void DHparams_print_fp(void);
void DHparams_print_fp(void){}
EXPORT
void DIRECTORYSTRING_free(void);
void DIRECTORYSTRING_free(void){}
EXPORT
void DIRECTORYSTRING_new(void);
void DIRECTORYSTRING_new(void){}
EXPORT
void DISPLAYTEXT_free(void);
void DISPLAYTEXT_free(void){}
EXPORT
void DISPLAYTEXT_new(void);
void DISPLAYTEXT_new(void){}
EXPORT
void DIST_POINT_free(void);
void DIST_POINT_free(void){}
EXPORT
void DIST_POINT_NAME_free(void);
void DIST_POINT_NAME_free(void){}
EXPORT
void DIST_POINT_NAME_new(void);
void DIST_POINT_NAME_new(void){}
EXPORT
void DIST_POINT_new(void);
void DIST_POINT_new(void){}
EXPORT
void EC_get_builtin_curves(void);
void EC_get_builtin_curves(void){}
EXPORT
void EC_GF2m_simple_method(void);
void EC_GF2m_simple_method(void){}
EXPORT
void EC_GFp_mont_method(void);
void EC_GFp_mont_method(void){}
EXPORT
void EC_GFp_nist_method(void);
void EC_GFp_nist_method(void){}
EXPORT
void EC_GFp_simple_method(void);
void EC_GFp_simple_method(void){}
EXPORT
void EC_GROUP_check_discriminant(void);
void EC_GROUP_check_discriminant(void){}
EXPORT
void EC_GROUP_clear_free(void);
void EC_GROUP_clear_free(void){}
EXPORT
void EC_GROUP_cmp(void);
void EC_GROUP_cmp(void){}
EXPORT
void EC_GROUP_copy(void);
void EC_GROUP_copy(void){}
EXPORT
void EC_GROUP_dup(void);
void EC_GROUP_dup(void){}
EXPORT
void EC_GROUP_free(void);
void EC_GROUP_free(void){}
EXPORT
void EC_GROUP_get0_generator(void);
void EC_GROUP_get0_generator(void){}
EXPORT
void EC_GROUP_get0_seed(void);
void EC_GROUP_get0_seed(void){}
EXPORT
void EC_GROUP_get_asn1_flag(void);
void EC_GROUP_get_asn1_flag(void){}
EXPORT
void EC_GROUP_get_basis_type(void);
void EC_GROUP_get_basis_type(void){}
EXPORT
void EC_GROUP_get_cofactor(void);
void EC_GROUP_get_cofactor(void){}
EXPORT
void EC_GROUP_get_curve_GF2m(void);
void EC_GROUP_get_curve_GF2m(void){}
EXPORT
void EC_GROUP_get_curve_GFp(void);
void EC_GROUP_get_curve_GFp(void){}
EXPORT
void EC_GROUP_get_curve_name(void);
void EC_GROUP_get_curve_name(void){}
EXPORT
void EC_GROUP_get_degree(void);
void EC_GROUP_get_degree(void){}
EXPORT
void EC_GROUP_get_order(void);
void EC_GROUP_get_order(void){}
EXPORT
void EC_GROUP_get_pentanomial_basis(void);
void EC_GROUP_get_pentanomial_basis(void){}
EXPORT
void EC_GROUP_get_point_conversion_form(void);
void EC_GROUP_get_point_conversion_form(void){}
EXPORT
void EC_GROUP_get_seed_len(void);
void EC_GROUP_get_seed_len(void){}
EXPORT
void EC_GROUP_get_trinomial_basis(void);
void EC_GROUP_get_trinomial_basis(void){}
EXPORT
void EC_GROUP_have_precompute_mult(void);
void EC_GROUP_have_precompute_mult(void){}
EXPORT
void EC_GROUP_method_of(void);
void EC_GROUP_method_of(void){}
EXPORT
void EC_GROUP_new(void);
void EC_GROUP_new(void){}
EXPORT
void EC_GROUP_new_by_curve_name(void);
void EC_GROUP_new_by_curve_name(void){}
EXPORT
void EC_GROUP_new_curve_GF2m(void);
void EC_GROUP_new_curve_GF2m(void){}
EXPORT
void EC_GROUP_new_curve_GFp(void);
void EC_GROUP_new_curve_GFp(void){}
EXPORT
void EC_GROUP_precompute_mult(void);
void EC_GROUP_precompute_mult(void){}
EXPORT
void EC_GROUP_set_asn1_flag(void);
void EC_GROUP_set_asn1_flag(void){}
EXPORT
void EC_GROUP_set_curve_GF2m(void);
void EC_GROUP_set_curve_GF2m(void){}
EXPORT
void EC_GROUP_set_curve_GFp(void);
void EC_GROUP_set_curve_GFp(void){}
EXPORT
void EC_GROUP_set_curve_name(void);
void EC_GROUP_set_curve_name(void){}
EXPORT
void EC_GROUP_set_generator(void);
void EC_GROUP_set_generator(void){}
EXPORT
void EC_GROUP_set_point_conversion_form(void);
void EC_GROUP_set_point_conversion_form(void){}
EXPORT
void EC_GROUP_set_seed(void);
void EC_GROUP_set_seed(void){}
EXPORT
void EC_KEY_check_key(void);
void EC_KEY_check_key(void){}
EXPORT
void EC_KEY_copy(void);
void EC_KEY_copy(void){}
EXPORT
void EC_KEY_dup(void);
void EC_KEY_dup(void){}
EXPORT
void EC_KEY_free(void);
void EC_KEY_free(void){}
EXPORT
void EC_KEY_generate_key(void);
void EC_KEY_generate_key(void){}
EXPORT
void EC_KEY_get0_group(void);
void EC_KEY_get0_group(void){}
EXPORT
void EC_KEY_get0_private_key(void);
void EC_KEY_get0_private_key(void){}
EXPORT
void EC_KEY_get0_public_key(void);
void EC_KEY_get0_public_key(void){}
EXPORT
void EC_KEY_get_conv_form(void);
void EC_KEY_get_conv_form(void){}
EXPORT
void EC_KEY_get_enc_flags(void);
void EC_KEY_get_enc_flags(void){}
EXPORT
void EC_KEY_get_key_method_data(void);
void EC_KEY_get_key_method_data(void){}
EXPORT
void EC_KEY_insert_key_method_data(void);
void EC_KEY_insert_key_method_data(void){}
EXPORT
void EC_KEY_new(void);
void EC_KEY_new(void){}
EXPORT
void EC_KEY_new_by_curve_name(void);
void EC_KEY_new_by_curve_name(void){}
EXPORT
void EC_KEY_precompute_mult(void);
void EC_KEY_precompute_mult(void){}
EXPORT
void EC_KEY_print(void);
void EC_KEY_print(void){}
EXPORT
void EC_KEY_print_fp(void);
void EC_KEY_print_fp(void){}
EXPORT
void EC_KEY_set_asn1_flag(void);
void EC_KEY_set_asn1_flag(void){}
EXPORT
void EC_KEY_set_conv_form(void);
void EC_KEY_set_conv_form(void){}
EXPORT
void EC_KEY_set_enc_flags(void);
void EC_KEY_set_enc_flags(void){}
EXPORT
void EC_KEY_set_group(void);
void EC_KEY_set_group(void){}
EXPORT
void EC_KEY_set_private_key(void);
void EC_KEY_set_private_key(void){}
EXPORT
void EC_KEY_set_public_key(void);
void EC_KEY_set_public_key(void){}
EXPORT
void EC_KEY_up_ref(void);
void EC_KEY_up_ref(void){}
EXPORT
void EC_METHOD_get_field_type(void);
void EC_METHOD_get_field_type(void){}
EXPORT
void EC_POINT_add(void);
void EC_POINT_add(void){}
EXPORT
void EC_POINT_bn2point(void);
void EC_POINT_bn2point(void){}
EXPORT
void EC_POINT_clear_free(void);
void EC_POINT_clear_free(void){}
EXPORT
void EC_POINT_cmp(void);
void EC_POINT_cmp(void){}
EXPORT
void EC_POINT_copy(void);
void EC_POINT_copy(void){}
EXPORT
void EC_POINT_dbl(void);
void EC_POINT_dbl(void){}
EXPORT
void EC_POINT_dup(void);
void EC_POINT_dup(void){}
EXPORT
void EC_POINT_free(void);
void EC_POINT_free(void){}
EXPORT
void EC_POINT_get_affine_coordinates_GF2m(void);
void EC_POINT_get_affine_coordinates_GF2m(void){}
EXPORT
void EC_POINT_get_affine_coordinates_GFp(void);
void EC_POINT_get_affine_coordinates_GFp(void){}
EXPORT
void EC_POINT_get_Jprojective_coordinates_GFp(void);
void EC_POINT_get_Jprojective_coordinates_GFp(void){}
EXPORT
void EC_POINT_hex2point(void);
void EC_POINT_hex2point(void){}
EXPORT
void EC_POINT_invert(void);
void EC_POINT_invert(void){}
EXPORT
void EC_POINT_is_at_infinity(void);
void EC_POINT_is_at_infinity(void){}
EXPORT
void EC_POINT_is_on_curve(void);
void EC_POINT_is_on_curve(void){}
EXPORT
void EC_POINT_make_affine(void);
void EC_POINT_make_affine(void){}
EXPORT
void EC_POINT_method_of(void);
void EC_POINT_method_of(void){}
EXPORT
void EC_POINT_mul(void);
void EC_POINT_mul(void){}
EXPORT
void EC_POINT_new(void);
void EC_POINT_new(void){}
EXPORT
void EC_POINT_oct2point(void);
void EC_POINT_oct2point(void){}
EXPORT
void EC_POINT_point2bn(void);
void EC_POINT_point2bn(void){}
EXPORT
void EC_POINT_point2hex(void);
void EC_POINT_point2hex(void){}
EXPORT
void EC_POINT_point2oct(void);
void EC_POINT_point2oct(void){}
EXPORT
void EC_POINT_set_affine_coordinates_GF2m(void);
void EC_POINT_set_affine_coordinates_GF2m(void){}
EXPORT
void EC_POINT_set_affine_coordinates_GFp(void);
void EC_POINT_set_affine_coordinates_GFp(void){}
EXPORT
void EC_POINT_set_compressed_coordinates_GF2m(void);
void EC_POINT_set_compressed_coordinates_GF2m(void){}
EXPORT
void EC_POINT_set_compressed_coordinates_GFp(void);
void EC_POINT_set_compressed_coordinates_GFp(void){}
EXPORT
void EC_POINT_set_Jprojective_coordinates_GFp(void);
void EC_POINT_set_Jprojective_coordinates_GFp(void){}
EXPORT
void EC_POINT_set_to_infinity(void);
void EC_POINT_set_to_infinity(void){}
EXPORT
void EC_POINTs_make_affine(void);
void EC_POINTs_make_affine(void){}
EXPORT
void EC_POINTs_mul(void);
void EC_POINTs_mul(void){}
EXPORT
void ECDSA_do_sign(void);
void ECDSA_do_sign(void){}
EXPORT
void ECDSA_do_sign_ex(void);
void ECDSA_do_sign_ex(void){}
EXPORT
void ECDSA_get_default_method(void);
void ECDSA_get_default_method(void){}
EXPORT
void ECDSA_get_ex_data(void);
void ECDSA_get_ex_data(void){}
EXPORT
void ECDSA_get_ex_new_index(void);
void ECDSA_get_ex_new_index(void){}
EXPORT
void ECDSA_OpenSSL(void);
void ECDSA_OpenSSL(void){}
EXPORT
void ECDSA_set_default_method(void);
void ECDSA_set_default_method(void){}
EXPORT
void ECDSA_set_ex_data(void);
void ECDSA_set_ex_data(void){}
EXPORT
void ECDSA_set_method(void);
void ECDSA_set_method(void){}
EXPORT
void ECDSA_SIG_free(void);
void ECDSA_SIG_free(void){}
EXPORT
void ECDSA_SIG_new(void);
void ECDSA_SIG_new(void){}
EXPORT
void ECDSA_sign(void);
void ECDSA_sign(void){}
EXPORT
void ECDSA_sign_ex(void);
void ECDSA_sign_ex(void){}
EXPORT
void ECDSA_sign_setup(void);
void ECDSA_sign_setup(void){}
EXPORT
void ECDSA_size(void);
void ECDSA_size(void){}
EXPORT
void ECDSA_verify(void);
void ECDSA_verify(void){}
EXPORT
void ECParameters_print(void);
void ECParameters_print(void){}
EXPORT
void ECParameters_print_fp(void);
void ECParameters_print_fp(void){}
EXPORT
void ECPKParameters_print(void);
void ECPKParameters_print(void){}
EXPORT
void ECPKParameters_print_fp(void);
void ECPKParameters_print_fp(void){}
EXPORT
void EDIPARTYNAME_free(void);
void EDIPARTYNAME_free(void){}
EXPORT
void EDIPARTYNAME_new(void);
void EDIPARTYNAME_new(void){}
EXPORT
void ERR_add_error_data(void);
void ERR_add_error_data(void){}
EXPORT
void ERR_clear_error(void);
void ERR_clear_error(void){}
EXPORT
void ERR_error_string(void);
void ERR_error_string(void){}
EXPORT
void ERR_error_string_n(void);
void ERR_error_string_n(void){}
EXPORT
void ERR_free_strings(void);
void ERR_free_strings(void){}
EXPORT
void ERR_func_error_string(void);
void ERR_func_error_string(void){}
EXPORT
void ERR_get_err_state_table(void);
void ERR_get_err_state_table(void){}
EXPORT
void ERR_get_error(void);
void ERR_get_error(void){}
EXPORT
void ERR_get_error_line(void);
void ERR_get_error_line(void){}
EXPORT
void ERR_get_error_line_data(void);
void ERR_get_error_line_data(void){}
EXPORT
void ERR_get_implementation(void);
void ERR_get_implementation(void){}
EXPORT
void ERR_get_next_error_library(void);
void ERR_get_next_error_library(void){}
EXPORT
void ERR_get_state(void);
void ERR_get_state(void){}
EXPORT
void ERR_get_string_table(void);
void ERR_get_string_table(void){}
EXPORT
void ERR_lib_error_string(void);
void ERR_lib_error_string(void){}
EXPORT
void ERR_load_ERR_strings(void);
void ERR_load_ERR_strings(void){}
EXPORT
void ERR_load_strings(void);
void ERR_load_strings(void){}
EXPORT
void ERR_peek_error(void);
void ERR_peek_error(void){}
EXPORT
void ERR_peek_error_line(void);
void ERR_peek_error_line(void){}
EXPORT
void ERR_peek_error_line_data(void);
void ERR_peek_error_line_data(void){}
EXPORT
void ERR_peek_last_error(void);
void ERR_peek_last_error(void){}
EXPORT
void ERR_peek_last_error_line(void);
void ERR_peek_last_error_line(void){}
EXPORT
void ERR_peek_last_error_line_data(void);
void ERR_peek_last_error_line_data(void){}
EXPORT
void ERR_print_errors(void);
void ERR_print_errors(void){}
EXPORT
void ERR_print_errors_cb(void);
void ERR_print_errors_cb(void){}
EXPORT
void ERR_put_error(void);
void ERR_put_error(void){}
EXPORT
void ERR_reason_error_string(void);
void ERR_reason_error_string(void){}
EXPORT
void ERR_release_err_state_table(void);
void ERR_release_err_state_table(void){}
EXPORT
void ERR_remove_state(void);
void ERR_remove_state(void){}
EXPORT
void ERR_set_error_data(void);
void ERR_set_error_data(void){}
EXPORT
void ERR_set_implementation(void);
void ERR_set_implementation(void){}
EXPORT
void ERR_unload_strings(void);
void ERR_unload_strings(void){}
EXPORT
void EVP_add_cipher(void);
void EVP_add_cipher(void){}
EXPORT
void EVP_add_digest(void);
void EVP_add_digest(void){}
EXPORT
void EVP_aes_128_cbc(void);
void EVP_aes_128_cbc(void){}
EXPORT
void EVP_aes_128_xts(void);
void EVP_aes_128_xts(void){}
EXPORT
void EVP_aes_192_cbc(void);
void EVP_aes_192_cbc(void){}
EXPORT
void EVP_aes_256_cbc(void);
void EVP_aes_256_cbc(void){}
EXPORT
void EVP_aes_256_xts(void);
void EVP_aes_256_xts(void){}
EXPORT
void EVP_BytesToKey(void);
void EVP_BytesToKey(void){}
EXPORT
void EVP_Cipher(void);
void EVP_Cipher(void){}
EXPORT
void EVP_CIPHER_asn1_to_param(void);
void EVP_CIPHER_asn1_to_param(void){}
EXPORT
void EVP_CIPHER_block_size(void);
void EVP_CIPHER_block_size(void){}
EXPORT
void EVP_CIPHER_CTX_block_size(void);
void EVP_CIPHER_CTX_block_size(void){}
EXPORT
void EVP_CIPHER_CTX_cipher(void);
void EVP_CIPHER_CTX_cipher(void){}
EXPORT
void EVP_CIPHER_CTX_cleanup(void);
void EVP_CIPHER_CTX_cleanup(void){}
EXPORT
void EVP_CIPHER_CTX_clear_flags(void);
void EVP_CIPHER_CTX_clear_flags(void){}
EXPORT
void EVP_CIPHER_CTX_ctrl(void);
void EVP_CIPHER_CTX_ctrl(void){}
EXPORT
void EVP_CIPHER_CTX_flags(void);
void EVP_CIPHER_CTX_flags(void){}
EXPORT
void EVP_CIPHER_CTX_free(void);
void EVP_CIPHER_CTX_free(void){}
EXPORT
void EVP_CIPHER_CTX_get_app_data(void);
void EVP_CIPHER_CTX_get_app_data(void){}
EXPORT
void EVP_CIPHER_CTX_init(void);
void EVP_CIPHER_CTX_init(void){}
EXPORT
void EVP_CIPHER_CTX_iv_length(void);
void EVP_CIPHER_CTX_iv_length(void){}
EXPORT
void EVP_CIPHER_CTX_key_length(void);
void EVP_CIPHER_CTX_key_length(void){}
EXPORT
void EVP_CIPHER_CTX_new(void);
void EVP_CIPHER_CTX_new(void){}
EXPORT
void EVP_CIPHER_CTX_nid(void);
void EVP_CIPHER_CTX_nid(void){}
EXPORT
void EVP_CIPHER_CTX_rand_key(void);
void EVP_CIPHER_CTX_rand_key(void){}
EXPORT
void EVP_CIPHER_CTX_set_app_data(void);
void EVP_CIPHER_CTX_set_app_data(void){}
EXPORT
void EVP_CIPHER_CTX_set_flags(void);
void EVP_CIPHER_CTX_set_flags(void){}
EXPORT
void EVP_CIPHER_CTX_set_key_length(void);
void EVP_CIPHER_CTX_set_key_length(void){}
EXPORT
void EVP_CIPHER_CTX_set_padding(void);
void EVP_CIPHER_CTX_set_padding(void){}
EXPORT
void EVP_CIPHER_CTX_test_flags(void);
void EVP_CIPHER_CTX_test_flags(void){}
EXPORT
void EVP_CIPHER_flags(void);
void EVP_CIPHER_flags(void){}
EXPORT
void EVP_CIPHER_get_asn1_iv(void);
void EVP_CIPHER_get_asn1_iv(void){}
EXPORT
void EVP_CIPHER_iv_length(void);
void EVP_CIPHER_iv_length(void){}
EXPORT
void EVP_CIPHER_key_length(void);
void EVP_CIPHER_key_length(void){}
EXPORT
void EVP_CIPHER_nid(void);
void EVP_CIPHER_nid(void){}
EXPORT
void EVP_CIPHER_param_to_asn1(void);
void EVP_CIPHER_param_to_asn1(void){}
EXPORT
void EVP_CIPHER_set_asn1_iv(void);
void EVP_CIPHER_set_asn1_iv(void){}
EXPORT
void EVP_CIPHER_type(void);
void EVP_CIPHER_type(void){}
EXPORT
void EVP_CipherFinal(void);
void EVP_CipherFinal(void){}
EXPORT
void EVP_CipherFinal_ex(void);
void EVP_CipherFinal_ex(void){}
EXPORT
void EVP_CipherInit(void);
void EVP_CipherInit(void){}
EXPORT
void EVP_CipherInit_ex(void);
void EVP_CipherInit_ex(void){}
EXPORT
void EVP_CipherUpdate(void);
void EVP_CipherUpdate(void){}
EXPORT
void EVP_cleanup(void);
void EVP_cleanup(void){}
EXPORT
void EVP_DecodeBlock(void);
void EVP_DecodeBlock(void){}
EXPORT
void EVP_DecodeFinal(void);
void EVP_DecodeFinal(void){}
EXPORT
void EVP_DecodeInit(void);
void EVP_DecodeInit(void){}
EXPORT
void EVP_DecodeUpdate(void);
void EVP_DecodeUpdate(void){}
EXPORT
void EVP_DecryptFinal(void);
void EVP_DecryptFinal(void){}
EXPORT
void EVP_DecryptFinal_ex(void);
void EVP_DecryptFinal_ex(void){}
EXPORT
void EVP_DecryptInit(void);
void EVP_DecryptInit(void){}
EXPORT
void EVP_DecryptInit_ex(void);
void EVP_DecryptInit_ex(void){}
EXPORT
void EVP_DecryptUpdate(void);
void EVP_DecryptUpdate(void){}
EXPORT
void EVP_Digest(void);
void EVP_Digest(void){}
EXPORT
void EVP_DigestFinal(void);
void EVP_DigestFinal(void){}
EXPORT
void EVP_DigestFinal_ex(void);
void EVP_DigestFinal_ex(void){}
EXPORT
void EVP_DigestInit(void);
void EVP_DigestInit(void){}
EXPORT
void EVP_DigestInit_ex(void);
void EVP_DigestInit_ex(void){}
EXPORT
void EVP_DigestUpdate(void);
void EVP_DigestUpdate(void){}
EXPORT
void EVP_ecdsa(void);
void EVP_ecdsa(void){}
EXPORT
void EVP_enc_null(void);
void EVP_enc_null(void){}
EXPORT
void EVP_EncodeBlock(void);
void EVP_EncodeBlock(void){}
EXPORT
void EVP_EncodeFinal(void);
void EVP_EncodeFinal(void){}
EXPORT
void EVP_EncodeInit(void);
void EVP_EncodeInit(void){}
EXPORT
void EVP_EncodeUpdate(void);
void EVP_EncodeUpdate(void){}
EXPORT
void EVP_EncryptFinal(void);
void EVP_EncryptFinal(void){}
EXPORT
void EVP_EncryptFinal_ex(void);
void EVP_EncryptFinal_ex(void){}
EXPORT
void EVP_EncryptInit(void);
void EVP_EncryptInit(void){}
EXPORT
void EVP_EncryptInit_ex(void);
void EVP_EncryptInit_ex(void){}
EXPORT
void EVP_EncryptUpdate(void);
void EVP_EncryptUpdate(void){}
EXPORT
void EVP_get_cipherbyname(void);
void EVP_get_cipherbyname(void){}
EXPORT
void EVP_get_digestbyname(void);
void EVP_get_digestbyname(void){}
EXPORT
void EVP_get_pw_prompt(void);
void EVP_get_pw_prompt(void){}
EXPORT
void EVP_md5(void);
void EVP_md5(void){}
EXPORT
void EVP_MD_block_size(void);
void EVP_MD_block_size(void){}
EXPORT
void EVP_MD_CTX_cleanup(void);
void EVP_MD_CTX_cleanup(void){}
EXPORT
void EVP_MD_CTX_clear_flags(void);
void EVP_MD_CTX_clear_flags(void){}
EXPORT
void EVP_MD_CTX_copy(void);
void EVP_MD_CTX_copy(void){}
EXPORT
void EVP_MD_CTX_copy_ex(void);
void EVP_MD_CTX_copy_ex(void){}
EXPORT
void EVP_MD_CTX_create(void);
void EVP_MD_CTX_create(void){}
EXPORT
void EVP_MD_CTX_destroy(void);
void EVP_MD_CTX_destroy(void){}
EXPORT
void EVP_MD_CTX_init(void);
void EVP_MD_CTX_init(void){}
EXPORT
void EVP_MD_CTX_md(void);
void EVP_MD_CTX_md(void){}
EXPORT
void EVP_MD_CTX_set_flags(void);
void EVP_MD_CTX_set_flags(void){}
EXPORT
void EVP_MD_CTX_test_flags(void);
void EVP_MD_CTX_test_flags(void){}
EXPORT
void EVP_MD_pkey_type(void);
void EVP_MD_pkey_type(void){}
EXPORT
void EVP_MD_size(void);
void EVP_MD_size(void){}
EXPORT
void EVP_MD_type(void);
void EVP_MD_type(void){}
EXPORT
void EVP_PBE_alg_add(void);
void EVP_PBE_alg_add(void){}
EXPORT
void EVP_PBE_CipherInit(void);
void EVP_PBE_CipherInit(void){}
EXPORT
void EVP_PBE_cleanup(void);
void EVP_PBE_cleanup(void){}
EXPORT
void EVP_PKCS82PKEY(void);
void EVP_PKCS82PKEY(void){}
EXPORT
void EVP_PKEY2PKCS8(void);
void EVP_PKEY2PKCS8(void){}
EXPORT
void EVP_PKEY2PKCS8_broken(void);
void EVP_PKEY2PKCS8_broken(void){}
EXPORT
void EVP_PKEY_add1_attr(void);
void EVP_PKEY_add1_attr(void){}
EXPORT
void EVP_PKEY_add1_attr_by_NID(void);
void EVP_PKEY_add1_attr_by_NID(void){}
EXPORT
void EVP_PKEY_add1_attr_by_OBJ(void);
void EVP_PKEY_add1_attr_by_OBJ(void){}
EXPORT
void EVP_PKEY_add1_attr_by_txt(void);
void EVP_PKEY_add1_attr_by_txt(void){}
EXPORT
void EVP_PKEY_assign(void);
void EVP_PKEY_assign(void){}
EXPORT
void EVP_PKEY_bits(void);
void EVP_PKEY_bits(void){}
EXPORT
void EVP_PKEY_cmp(void);
void EVP_PKEY_cmp(void){}
EXPORT
void EVP_PKEY_cmp_parameters(void);
void EVP_PKEY_cmp_parameters(void){}
EXPORT
void EVP_PKEY_copy_parameters(void);
void EVP_PKEY_copy_parameters(void){}
EXPORT
void EVP_PKEY_delete_attr(void);
void EVP_PKEY_delete_attr(void){}
EXPORT
void EVP_PKEY_free(void);
void EVP_PKEY_free(void){}
EXPORT
void EVP_PKEY_get1_DH(void);
void EVP_PKEY_get1_DH(void){}
EXPORT
void EVP_PKEY_get1_EC_KEY(void);
void EVP_PKEY_get1_EC_KEY(void){}
EXPORT
void EVP_PKEY_get1_RSA(void);
void EVP_PKEY_get1_RSA(void){}
EXPORT
void EVP_PKEY_get_attr(void);
void EVP_PKEY_get_attr(void){}
EXPORT
void EVP_PKEY_get_attr_by_NID(void);
void EVP_PKEY_get_attr_by_NID(void){}
EXPORT
void EVP_PKEY_get_attr_by_OBJ(void);
void EVP_PKEY_get_attr_by_OBJ(void){}
EXPORT
void EVP_PKEY_get_attr_count(void);
void EVP_PKEY_get_attr_count(void){}
EXPORT
void EVP_PKEY_missing_parameters(void);
void EVP_PKEY_missing_parameters(void){}
EXPORT
void EVP_PKEY_new(void);
void EVP_PKEY_new(void){}
EXPORT
void EVP_PKEY_save_parameters(void);
void EVP_PKEY_save_parameters(void){}
EXPORT
void EVP_PKEY_set1_DH(void);
void EVP_PKEY_set1_DH(void){}
EXPORT
void EVP_PKEY_set1_EC_KEY(void);
void EVP_PKEY_set1_EC_KEY(void){}
EXPORT
void EVP_PKEY_set1_RSA(void);
void EVP_PKEY_set1_RSA(void){}
EXPORT
void EVP_PKEY_size(void);
void EVP_PKEY_size(void){}
EXPORT
void EVP_PKEY_type(void);
void EVP_PKEY_type(void){}
EXPORT
void EVP_rc4(void);
void EVP_rc4(void){}
EXPORT
void EVP_read_pw_string(void);
void EVP_read_pw_string(void){}
EXPORT
void EVP_set_pw_prompt(void);
void EVP_set_pw_prompt(void){}
EXPORT
void EVP_sha1(void);
void EVP_sha1(void){}
EXPORT
void EVP_sha224(void);
void EVP_sha224(void){}
EXPORT
void EVP_sha256(void);
void EVP_sha256(void){}
EXPORT
void EVP_sha384(void);
void EVP_sha384(void){}
EXPORT
void EVP_sha512(void);
void EVP_sha512(void){}
EXPORT
void EVP_SignFinal(void);
void EVP_SignFinal(void){}
EXPORT
void EVP_VerifyFinal(void);
void EVP_VerifyFinal(void){}
EXPORT
void EXTENDED_KEY_USAGE_free(void);
void EXTENDED_KEY_USAGE_free(void){}
EXPORT
void EXTENDED_KEY_USAGE_new(void);
void EXTENDED_KEY_USAGE_new(void){}
EXPORT
void GENERAL_NAME_free(void);
void GENERAL_NAME_free(void){}
EXPORT
void GENERAL_NAME_new(void);
void GENERAL_NAME_new(void){}
EXPORT
void GENERAL_NAME_print(void);
void GENERAL_NAME_print(void){}
EXPORT
void GENERAL_NAMES_free(void);
void GENERAL_NAMES_free(void){}
EXPORT
void GENERAL_NAMES_new(void);
void GENERAL_NAMES_new(void){}
EXPORT
void GENERAL_SUBTREE_free(void);
void GENERAL_SUBTREE_free(void){}
EXPORT
void GENERAL_SUBTREE_new(void);
void GENERAL_SUBTREE_new(void){}
EXPORT
void hex_to_string(void);
void hex_to_string(void){}
EXPORT
void HMAC(void);
void HMAC(void){}
EXPORT
void HMAC_CTX_cleanup(void);
void HMAC_CTX_cleanup(void){}
EXPORT
void HMAC_CTX_init(void);
void HMAC_CTX_init(void){}
EXPORT
void HMAC_CTX_set_flags(void);
void HMAC_CTX_set_flags(void){}
EXPORT
void HMAC_Final(void);
void HMAC_Final(void){}
EXPORT
void HMAC_Init(void);
void HMAC_Init(void){}
EXPORT
void HMAC_Init_ex(void);
void HMAC_Init_ex(void){}
EXPORT
void HMAC_Update(void);
void HMAC_Update(void){}
EXPORT
void i2a_ACCESS_DESCRIPTION(void);
void i2a_ACCESS_DESCRIPTION(void){}
EXPORT
void i2a_ASN1_INTEGER(void);
void i2a_ASN1_INTEGER(void){}
EXPORT
void i2a_ASN1_OBJECT(void);
void i2a_ASN1_OBJECT(void){}
EXPORT
void i2a_ASN1_STRING(void);
void i2a_ASN1_STRING(void){}
EXPORT
void i2c_ASN1_BIT_STRING(void);
void i2c_ASN1_BIT_STRING(void){}
EXPORT
void i2c_ASN1_INTEGER(void);
void i2c_ASN1_INTEGER(void){}
EXPORT
void i2d_ACCESS_DESCRIPTION(void);
void i2d_ACCESS_DESCRIPTION(void){}
EXPORT
void i2d_ASN1_BIT_STRING(void);
void i2d_ASN1_BIT_STRING(void){}
EXPORT
void i2d_ASN1_BMPSTRING(void);
void i2d_ASN1_BMPSTRING(void){}
EXPORT
void i2d_ASN1_BOOLEAN(void);
void i2d_ASN1_BOOLEAN(void){}
EXPORT
void i2d_ASN1_bytes(void);
void i2d_ASN1_bytes(void){}
EXPORT
void i2d_ASN1_ENUMERATED(void);
void i2d_ASN1_ENUMERATED(void){}
EXPORT
void i2d_ASN1_GENERALIZEDTIME(void);
void i2d_ASN1_GENERALIZEDTIME(void){}
EXPORT
void i2d_ASN1_GENERALSTRING(void);
void i2d_ASN1_GENERALSTRING(void){}
EXPORT
void i2d_ASN1_IA5STRING(void);
void i2d_ASN1_IA5STRING(void){}
EXPORT
void i2d_ASN1_INTEGER(void);
void i2d_ASN1_INTEGER(void){}
EXPORT
void i2d_ASN1_NULL(void);
void i2d_ASN1_NULL(void){}
EXPORT
void i2d_ASN1_OBJECT(void);
void i2d_ASN1_OBJECT(void){}
EXPORT
void i2d_ASN1_OCTET_STRING(void);
void i2d_ASN1_OCTET_STRING(void){}
EXPORT
void i2d_ASN1_PRINTABLE(void);
void i2d_ASN1_PRINTABLE(void){}
EXPORT
void i2d_ASN1_PRINTABLESTRING(void);
void i2d_ASN1_PRINTABLESTRING(void){}
EXPORT
void i2d_ASN1_SET(void);
void i2d_ASN1_SET(void){}
EXPORT
void i2d_ASN1_T61STRING(void);
void i2d_ASN1_T61STRING(void){}
EXPORT
void i2d_ASN1_TIME(void);
void i2d_ASN1_TIME(void){}
EXPORT
void i2d_ASN1_TYPE(void);
void i2d_ASN1_TYPE(void){}
EXPORT
void i2d_ASN1_UNIVERSALSTRING(void);
void i2d_ASN1_UNIVERSALSTRING(void){}
EXPORT
void i2d_ASN1_UTCTIME(void);
void i2d_ASN1_UTCTIME(void){}
EXPORT
void i2d_ASN1_UTF8STRING(void);
void i2d_ASN1_UTF8STRING(void){}
EXPORT
void i2d_ASN1_VISIBLESTRING(void);
void i2d_ASN1_VISIBLESTRING(void){}
EXPORT
void i2d_AUTHORITY_INFO_ACCESS(void);
void i2d_AUTHORITY_INFO_ACCESS(void){}
EXPORT
void i2d_AUTHORITY_KEYID(void);
void i2d_AUTHORITY_KEYID(void){}
EXPORT
void i2d_BASIC_CONSTRAINTS(void);
void i2d_BASIC_CONSTRAINTS(void){}
EXPORT
void i2d_CERTIFICATEPOLICIES(void);
void i2d_CERTIFICATEPOLICIES(void){}
EXPORT
void i2d_CRL_DIST_POINTS(void);
void i2d_CRL_DIST_POINTS(void){}
EXPORT
void i2d_DHparams(void);
void i2d_DHparams(void){}
EXPORT
void i2d_DIRECTORYSTRING(void);
void i2d_DIRECTORYSTRING(void){}
EXPORT
void i2d_DISPLAYTEXT(void);
void i2d_DISPLAYTEXT(void){}
EXPORT
void i2d_DIST_POINT(void);
void i2d_DIST_POINT(void){}
EXPORT
void i2d_DIST_POINT_NAME(void);
void i2d_DIST_POINT_NAME(void){}
EXPORT
void i2d_EC_PUBKEY(void);
void i2d_EC_PUBKEY(void){}
EXPORT
void i2d_EC_PUBKEY_bio(void);
void i2d_EC_PUBKEY_bio(void){}
EXPORT
void i2d_ECDSA_SIG(void);
void i2d_ECDSA_SIG(void){}
EXPORT
void i2d_ECParameters(void);
void i2d_ECParameters(void){}
EXPORT
void i2d_ECPKParameters(void);
void i2d_ECPKParameters(void){}
EXPORT
void i2d_ECPrivateKey(void);
void i2d_ECPrivateKey(void){}
EXPORT
void i2d_ECPrivateKey_bio(void);
void i2d_ECPrivateKey_bio(void){}
EXPORT
void i2d_EDIPARTYNAME(void);
void i2d_EDIPARTYNAME(void){}
EXPORT
void i2d_EXTENDED_KEY_USAGE(void);
void i2d_EXTENDED_KEY_USAGE(void){}
EXPORT
void i2d_GENERAL_NAME(void);
void i2d_GENERAL_NAME(void){}
EXPORT
void i2d_GENERAL_NAMES(void);
void i2d_GENERAL_NAMES(void){}
EXPORT
void i2d_NETSCAPE_SPKAC(void);
void i2d_NETSCAPE_SPKAC(void){}
EXPORT
void i2d_NETSCAPE_SPKI(void);
void i2d_NETSCAPE_SPKI(void){}
EXPORT
void i2d_NOTICEREF(void);
void i2d_NOTICEREF(void){}
EXPORT
void i2d_OCSP_BASICRESP(void);
void i2d_OCSP_BASICRESP(void){}
EXPORT
void i2d_OCSP_CERTID(void);
void i2d_OCSP_CERTID(void){}
EXPORT
void i2d_OCSP_CERTSTATUS(void);
void i2d_OCSP_CERTSTATUS(void){}
EXPORT
void i2d_OCSP_CRLID(void);
void i2d_OCSP_CRLID(void){}
EXPORT
void i2d_OCSP_ONEREQ(void);
void i2d_OCSP_ONEREQ(void){}
EXPORT
void i2d_OCSP_REQINFO(void);
void i2d_OCSP_REQINFO(void){}
EXPORT
void i2d_OCSP_REQUEST(void);
void i2d_OCSP_REQUEST(void){}
EXPORT
void i2d_OCSP_RESPBYTES(void);
void i2d_OCSP_RESPBYTES(void){}
EXPORT
void i2d_OCSP_RESPDATA(void);
void i2d_OCSP_RESPDATA(void){}
EXPORT
void i2d_OCSP_RESPID(void);
void i2d_OCSP_RESPID(void){}
EXPORT
void i2d_OCSP_RESPONSE(void);
void i2d_OCSP_RESPONSE(void){}
EXPORT
void i2d_OCSP_REVOKEDINFO(void);
void i2d_OCSP_REVOKEDINFO(void){}
EXPORT
void i2d_OCSP_SERVICELOC(void);
void i2d_OCSP_SERVICELOC(void){}
EXPORT
void i2d_OCSP_SIGNATURE(void);
void i2d_OCSP_SIGNATURE(void){}
EXPORT
void i2d_OCSP_SINGLERESP(void);
void i2d_OCSP_SINGLERESP(void){}
EXPORT
void i2d_OTHERNAME(void);
void i2d_OTHERNAME(void){}
EXPORT
void i2d_PKCS7(void);
void i2d_PKCS7(void){}
EXPORT
void i2d_PKCS7_bio(void);
void i2d_PKCS7_bio(void){}
EXPORT
void i2d_PKCS7_DIGEST(void);
void i2d_PKCS7_DIGEST(void){}
EXPORT
void i2d_PKCS7_ENC_CONTENT(void);
void i2d_PKCS7_ENC_CONTENT(void){}
EXPORT
void i2d_PKCS7_ENCRYPT(void);
void i2d_PKCS7_ENCRYPT(void){}
EXPORT
void i2d_PKCS7_ENVELOPE(void);
void i2d_PKCS7_ENVELOPE(void){}
EXPORT
void i2d_PKCS7_ISSUER_AND_SERIAL(void);
void i2d_PKCS7_ISSUER_AND_SERIAL(void){}
EXPORT
void i2d_PKCS7_NDEF(void);
void i2d_PKCS7_NDEF(void){}
EXPORT
void i2d_PKCS7_RECIP_INFO(void);
void i2d_PKCS7_RECIP_INFO(void){}
EXPORT
void i2d_PKCS7_SIGN_ENVELOPE(void);
void i2d_PKCS7_SIGN_ENVELOPE(void){}
EXPORT
void i2d_PKCS7_SIGNED(void);
void i2d_PKCS7_SIGNED(void){}
EXPORT
void i2d_PKCS7_SIGNER_INFO(void);
void i2d_PKCS7_SIGNER_INFO(void){}
EXPORT
void i2d_PKCS8_bio(void);
void i2d_PKCS8_bio(void){}
EXPORT
void i2d_PKCS8_PRIV_KEY_INFO(void);
void i2d_PKCS8_PRIV_KEY_INFO(void){}
EXPORT
void i2d_PKCS8_PRIV_KEY_INFO_bio(void);
void i2d_PKCS8_PRIV_KEY_INFO_bio(void){}
EXPORT
void i2d_PKCS8PrivateKeyInfo_bio(void);
void i2d_PKCS8PrivateKeyInfo_bio(void){}
EXPORT
void i2d_PKEY_USAGE_PERIOD(void);
void i2d_PKEY_USAGE_PERIOD(void){}
EXPORT
void i2d_POLICYINFO(void);
void i2d_POLICYINFO(void){}
EXPORT
void i2d_POLICYQUALINFO(void);
void i2d_POLICYQUALINFO(void){}
EXPORT
void i2d_PrivateKey(void);
void i2d_PrivateKey(void){}
EXPORT
void i2d_PrivateKey_bio(void);
void i2d_PrivateKey_bio(void){}
EXPORT
void i2d_PROXY_CERT_INFO_EXTENSION(void);
void i2d_PROXY_CERT_INFO_EXTENSION(void){}
EXPORT
void i2d_PROXY_POLICY(void);
void i2d_PROXY_POLICY(void){}
EXPORT
void i2d_PUBKEY(void);
void i2d_PUBKEY(void){}
EXPORT
void i2d_PUBKEY_bio(void);
void i2d_PUBKEY_bio(void){}
EXPORT
void i2d_PublicKey(void);
void i2d_PublicKey(void){}
EXPORT
void i2d_RSA_PUBKEY(void);
void i2d_RSA_PUBKEY(void){}
EXPORT
void i2d_RSA_PUBKEY_bio(void);
void i2d_RSA_PUBKEY_bio(void){}
EXPORT
void i2d_RSAPrivateKey(void);
void i2d_RSAPrivateKey(void){}
EXPORT
void i2d_RSAPrivateKey_bio(void);
void i2d_RSAPrivateKey_bio(void){}
EXPORT
void i2d_RSAPublicKey(void);
void i2d_RSAPublicKey(void){}
EXPORT
void i2d_RSAPublicKey_bio(void);
void i2d_RSAPublicKey_bio(void){}
EXPORT
void i2d_SXNET(void);
void i2d_SXNET(void){}
EXPORT
void i2d_SXNETID(void);
void i2d_SXNETID(void){}
EXPORT
void i2d_USERNOTICE(void);
void i2d_USERNOTICE(void){}
EXPORT
void i2d_X509(void);
void i2d_X509(void){}
EXPORT
void i2d_X509_ALGOR(void);
void i2d_X509_ALGOR(void){}
EXPORT
void i2d_X509_ALGORS(void);
void i2d_X509_ALGORS(void){}
EXPORT
void i2d_X509_ATTRIBUTE(void);
void i2d_X509_ATTRIBUTE(void){}
EXPORT
void i2d_X509_AUX(void);
void i2d_X509_AUX(void){}
EXPORT
void i2d_X509_bio(void);
void i2d_X509_bio(void){}
EXPORT
void i2d_X509_CERT_AUX(void);
void i2d_X509_CERT_AUX(void){}
EXPORT
void i2d_X509_CERT_PAIR(void);
void i2d_X509_CERT_PAIR(void){}
EXPORT
void i2d_X509_CINF(void);
void i2d_X509_CINF(void){}
EXPORT
void i2d_X509_CRL(void);
void i2d_X509_CRL(void){}
EXPORT
void i2d_X509_CRL_bio(void);
void i2d_X509_CRL_bio(void){}
EXPORT
void i2d_X509_CRL_INFO(void);
void i2d_X509_CRL_INFO(void){}
EXPORT
void i2d_X509_EXTENSION(void);
void i2d_X509_EXTENSION(void){}
EXPORT
void i2d_X509_EXTENSIONS(void);
void i2d_X509_EXTENSIONS(void){}
EXPORT
void i2d_X509_NAME(void);
void i2d_X509_NAME(void){}
EXPORT
void i2d_X509_NAME_ENTRY(void);
void i2d_X509_NAME_ENTRY(void){}
EXPORT
void i2d_X509_PUBKEY(void);
void i2d_X509_PUBKEY(void){}
EXPORT
void i2d_X509_REQ(void);
void i2d_X509_REQ(void){}
EXPORT
void i2d_X509_REQ_bio(void);
void i2d_X509_REQ_bio(void){}
EXPORT
void i2d_X509_REQ_INFO(void);
void i2d_X509_REQ_INFO(void){}
EXPORT
void i2d_X509_REVOKED(void);
void i2d_X509_REVOKED(void){}
EXPORT
void i2d_X509_SIG(void);
void i2d_X509_SIG(void){}
EXPORT
void i2d_X509_VAL(void);
void i2d_X509_VAL(void){}
EXPORT
void i2o_ECPublicKey(void);
void i2o_ECPublicKey(void){}
EXPORT
void i2s_ASN1_ENUMERATED(void);
void i2s_ASN1_ENUMERATED(void){}
EXPORT
void i2s_ASN1_ENUMERATED_TABLE(void);
void i2s_ASN1_ENUMERATED_TABLE(void){}
EXPORT
void i2s_ASN1_INTEGER(void);
void i2s_ASN1_INTEGER(void){}
EXPORT
void i2s_ASN1_OCTET_STRING(void);
void i2s_ASN1_OCTET_STRING(void){}
EXPORT
void i2t_ASN1_OBJECT(void);
void i2t_ASN1_OBJECT(void){}
EXPORT
void i2v_ASN1_BIT_STRING(void);
void i2v_ASN1_BIT_STRING(void){}
EXPORT
void i2v_GENERAL_NAME(void);
void i2v_GENERAL_NAME(void){}
EXPORT
void i2v_GENERAL_NAMES(void);
void i2v_GENERAL_NAMES(void){}
EXPORT
void lh_delete(void);
void lh_delete(void){}
EXPORT
void lh_doall(void);
void lh_doall(void){}
EXPORT
void lh_doall_arg(void);
void lh_doall_arg(void){}
EXPORT
void lh_free(void);
void lh_free(void){}
EXPORT
void lh_insert(void);
void lh_insert(void){}
EXPORT
void lh_new(void);
void lh_new(void){}
EXPORT
void lh_num_items(void);
void lh_num_items(void){}
EXPORT
void lh_retrieve(void);
void lh_retrieve(void){}
EXPORT
void lh_strhash(void);
void lh_strhash(void){}
EXPORT
void MD5_Final(void);
void MD5_Final(void){}
EXPORT
void MD5_Init(void);
void MD5_Init(void){}
EXPORT
void MD5_Transform(void);
void MD5_Transform(void){}
EXPORT
void MD5_Update(void);
void MD5_Update(void){}
EXPORT
void name_cmp(void);
void name_cmp(void){}
EXPORT
void NAME_CONSTRAINTS_free(void);
void NAME_CONSTRAINTS_free(void){}
EXPORT
void NAME_CONSTRAINTS_new(void);
void NAME_CONSTRAINTS_new(void){}
EXPORT
void NCONF_default(void);
void NCONF_default(void){}
EXPORT
void NCONF_dump_bio(void);
void NCONF_dump_bio(void){}
EXPORT
void NCONF_dump_fp(void);
void NCONF_dump_fp(void){}
EXPORT
void NCONF_free(void);
void NCONF_free(void){}
EXPORT
void NCONF_free_data(void);
void NCONF_free_data(void){}
EXPORT
void NCONF_get_number_e(void);
void NCONF_get_number_e(void){}
EXPORT
void NCONF_get_section(void);
void NCONF_get_section(void){}
EXPORT
void NCONF_get_string(void);
void NCONF_get_string(void){}
EXPORT
void NCONF_load(void);
void NCONF_load(void){}
EXPORT
void NCONF_load_bio(void);
void NCONF_load_bio(void){}
EXPORT
void NCONF_load_fp(void);
void NCONF_load_fp(void){}
EXPORT
void NCONF_new(void);
void NCONF_new(void){}
EXPORT
void NCONF_WIN32(void);
void NCONF_WIN32(void){}
EXPORT
void NETSCAPE_SPKAC_free(void);
void NETSCAPE_SPKAC_free(void){}
EXPORT
void NETSCAPE_SPKAC_new(void);
void NETSCAPE_SPKAC_new(void){}
EXPORT
void NETSCAPE_SPKI_free(void);
void NETSCAPE_SPKI_free(void){}
EXPORT
void NETSCAPE_SPKI_new(void);
void NETSCAPE_SPKI_new(void){}
EXPORT
void NETSCAPE_SPKI_sign(void);
void NETSCAPE_SPKI_sign(void){}
EXPORT
void NETSCAPE_SPKI_verify(void);
void NETSCAPE_SPKI_verify(void){}
EXPORT
void NOTICEREF_free(void);
void NOTICEREF_free(void){}
EXPORT
void NOTICEREF_new(void);
void NOTICEREF_new(void){}
EXPORT
void o2i_ECPublicKey(void);
void o2i_ECPublicKey(void){}
EXPORT
void OBJ_add_object(void);
void OBJ_add_object(void){}
EXPORT
void OBJ_cleanup(void);
void OBJ_cleanup(void){}
EXPORT
void OBJ_cmp(void);
void OBJ_cmp(void){}
EXPORT
void OBJ_create(void);
void OBJ_create(void){}
EXPORT
void OBJ_create_objects(void);
void OBJ_create_objects(void){}
EXPORT
void OBJ_dup(void);
void OBJ_dup(void){}
EXPORT
void OBJ_ln2nid(void);
void OBJ_ln2nid(void){}
EXPORT
void OBJ_NAME_add(void);
void OBJ_NAME_add(void){}
EXPORT
void OBJ_NAME_cleanup(void);
void OBJ_NAME_cleanup(void){}
EXPORT
void OBJ_NAME_do_all(void);
void OBJ_NAME_do_all(void){}
EXPORT
void OBJ_NAME_do_all_sorted(void);
void OBJ_NAME_do_all_sorted(void){}
EXPORT
void OBJ_NAME_get(void);
void OBJ_NAME_get(void){}
EXPORT
void OBJ_NAME_init(void);
void OBJ_NAME_init(void){}
EXPORT
void OBJ_NAME_new_index(void);
void OBJ_NAME_new_index(void){}
EXPORT
void OBJ_NAME_remove(void);
void OBJ_NAME_remove(void){}
EXPORT
void OBJ_new_nid(void);
void OBJ_new_nid(void){}
EXPORT
void OBJ_nid2ln(void);
void OBJ_nid2ln(void){}
EXPORT
void OBJ_nid2obj(void);
void OBJ_nid2obj(void){}
EXPORT
void OBJ_nid2sn(void);
void OBJ_nid2sn(void){}
EXPORT
void OBJ_obj2nid(void);
void OBJ_obj2nid(void){}
EXPORT
void OBJ_obj2txt(void);
void OBJ_obj2txt(void){}
EXPORT
void OBJ_sn2nid(void);
void OBJ_sn2nid(void){}
EXPORT
void OBJ_txt2nid(void);
void OBJ_txt2nid(void){}
EXPORT
void OBJ_txt2obj(void);
void OBJ_txt2obj(void){}
EXPORT
void OCSP_BASICRESP_free(void);
void OCSP_BASICRESP_free(void){}
EXPORT
void OCSP_BASICRESP_new(void);
void OCSP_BASICRESP_new(void){}
EXPORT
void OCSP_CERTID_free(void);
void OCSP_CERTID_free(void){}
EXPORT
void OCSP_CERTID_new(void);
void OCSP_CERTID_new(void){}
EXPORT
void OCSP_CERTSTATUS_free(void);
void OCSP_CERTSTATUS_free(void){}
EXPORT
void OCSP_CERTSTATUS_new(void);
void OCSP_CERTSTATUS_new(void){}
EXPORT
void OCSP_CRLID_free(void);
void OCSP_CRLID_free(void){}
EXPORT
void OCSP_CRLID_new(void);
void OCSP_CRLID_new(void){}
EXPORT
void OCSP_ONEREQ_free(void);
void OCSP_ONEREQ_free(void){}
EXPORT
void OCSP_ONEREQ_new(void);
void OCSP_ONEREQ_new(void){}
EXPORT
void OCSP_REQINFO_free(void);
void OCSP_REQINFO_free(void){}
EXPORT
void OCSP_REQINFO_new(void);
void OCSP_REQINFO_new(void){}
EXPORT
void OCSP_REQUEST_free(void);
void OCSP_REQUEST_free(void){}
EXPORT
void OCSP_REQUEST_new(void);
void OCSP_REQUEST_new(void){}
EXPORT
void OCSP_RESPBYTES_free(void);
void OCSP_RESPBYTES_free(void){}
EXPORT
void OCSP_RESPBYTES_new(void);
void OCSP_RESPBYTES_new(void){}
EXPORT
void OCSP_RESPDATA_free(void);
void OCSP_RESPDATA_free(void){}
EXPORT
void OCSP_RESPDATA_new(void);
void OCSP_RESPDATA_new(void){}
EXPORT
void OCSP_RESPID_free(void);
void OCSP_RESPID_free(void){}
EXPORT
void OCSP_RESPID_new(void);
void OCSP_RESPID_new(void){}
EXPORT
void OCSP_RESPONSE_free(void);
void OCSP_RESPONSE_free(void){}
EXPORT
void OCSP_RESPONSE_new(void);
void OCSP_RESPONSE_new(void){}
EXPORT
void OCSP_REVOKEDINFO_free(void);
void OCSP_REVOKEDINFO_free(void){}
EXPORT
void OCSP_REVOKEDINFO_new(void);
void OCSP_REVOKEDINFO_new(void){}
EXPORT
void OCSP_SERVICELOC_free(void);
void OCSP_SERVICELOC_free(void){}
EXPORT
void OCSP_SERVICELOC_new(void);
void OCSP_SERVICELOC_new(void){}
EXPORT
void OCSP_SIGNATURE_free(void);
void OCSP_SIGNATURE_free(void){}
EXPORT
void OCSP_SIGNATURE_new(void);
void OCSP_SIGNATURE_new(void){}
EXPORT
void OCSP_SINGLERESP_free(void);
void OCSP_SINGLERESP_free(void){}
EXPORT
void OCSP_SINGLERESP_new(void);
void OCSP_SINGLERESP_new(void){}
EXPORT
void OPENSSL_cleanse(void);
void OPENSSL_cleanse(void){}
EXPORT
void OPENSSL_isservice(void);
void OPENSSL_isservice(void){}
EXPORT
void OpenSSLDie(void);
void OpenSSLDie(void){}
EXPORT
void OTHERNAME_free(void);
void OTHERNAME_free(void){}
EXPORT
void OTHERNAME_new(void);
void OTHERNAME_new(void){}
EXPORT
void PEM_ASN1_read_bio(void);
void PEM_ASN1_read_bio(void){}
EXPORT
void PEM_ASN1_write_bio(void);
void PEM_ASN1_write_bio(void){}
EXPORT
void PEM_bytes_read_bio(void);
void PEM_bytes_read_bio(void){}
EXPORT
void PEM_def_callback(void);
void PEM_def_callback(void){}
EXPORT
void PEM_dek_info(void);
void PEM_dek_info(void){}
EXPORT
void PEM_do_header(void);
void PEM_do_header(void){}
EXPORT
void PEM_get_EVP_CIPHER_INFO(void);
void PEM_get_EVP_CIPHER_INFO(void){}
EXPORT
void PEM_proc_type(void);
void PEM_proc_type(void){}
EXPORT
void PEM_read_bio(void);
void PEM_read_bio(void){}
EXPORT
void PEM_read_bio_PrivateKey(void);
void PEM_read_bio_PrivateKey(void){}
EXPORT
void PEM_read_bio_RSAPrivateKey(void);
void PEM_read_bio_RSAPrivateKey(void){}
EXPORT
void PEM_read_bio_X509(void);
void PEM_read_bio_X509(void){}
EXPORT
void PEM_read_bio_X509_AUX(void);
void PEM_read_bio_X509_AUX(void){}
EXPORT
void PEM_write_bio(void);
void PEM_write_bio(void){}
EXPORT
void PEM_write_bio_X509(void);
void PEM_write_bio_X509(void){}
EXPORT
void PKCS7_DIGEST_free(void);
void PKCS7_DIGEST_free(void){}
EXPORT
void PKCS7_DIGEST_new(void);
void PKCS7_DIGEST_new(void){}
EXPORT
void PKCS7_dup(void);
void PKCS7_dup(void){}
EXPORT
void PKCS7_ENC_CONTENT_free(void);
void PKCS7_ENC_CONTENT_free(void){}
EXPORT
void PKCS7_ENC_CONTENT_new(void);
void PKCS7_ENC_CONTENT_new(void){}
EXPORT
void PKCS7_ENCRYPT_free(void);
void PKCS7_ENCRYPT_free(void){}
EXPORT
void PKCS7_ENCRYPT_new(void);
void PKCS7_ENCRYPT_new(void){}
EXPORT
void PKCS7_ENVELOPE_free(void);
void PKCS7_ENVELOPE_free(void){}
EXPORT
void PKCS7_ENVELOPE_new(void);
void PKCS7_ENVELOPE_new(void){}
EXPORT
void PKCS7_free(void);
void PKCS7_free(void){}
EXPORT
void PKCS7_ISSUER_AND_SERIAL_digest(void);
void PKCS7_ISSUER_AND_SERIAL_digest(void){}
EXPORT
void PKCS7_ISSUER_AND_SERIAL_free(void);
void PKCS7_ISSUER_AND_SERIAL_free(void){}
EXPORT
void PKCS7_ISSUER_AND_SERIAL_new(void);
void PKCS7_ISSUER_AND_SERIAL_new(void){}
EXPORT
void PKCS7_new(void);
void PKCS7_new(void){}
EXPORT
void PKCS7_RECIP_INFO_free(void);
void PKCS7_RECIP_INFO_free(void){}
EXPORT
void PKCS7_RECIP_INFO_new(void);
void PKCS7_RECIP_INFO_new(void){}
EXPORT
void PKCS7_SIGN_ENVELOPE_free(void);
void PKCS7_SIGN_ENVELOPE_free(void){}
EXPORT
void PKCS7_SIGN_ENVELOPE_new(void);
void PKCS7_SIGN_ENVELOPE_new(void){}
EXPORT
void PKCS7_SIGNED_free(void);
void PKCS7_SIGNED_free(void){}
EXPORT
void PKCS7_SIGNED_new(void);
void PKCS7_SIGNED_new(void){}
EXPORT
void PKCS7_SIGNER_INFO_free(void);
void PKCS7_SIGNER_INFO_free(void){}
EXPORT
void PKCS7_SIGNER_INFO_new(void);
void PKCS7_SIGNER_INFO_new(void){}
EXPORT
void PKCS8_PRIV_KEY_INFO_free(void);
void PKCS8_PRIV_KEY_INFO_free(void){}
EXPORT
void PKCS8_PRIV_KEY_INFO_new(void);
void PKCS8_PRIV_KEY_INFO_new(void){}
EXPORT
void PKCS8_set_broken(void);
void PKCS8_set_broken(void){}
EXPORT
void PKEY_USAGE_PERIOD_free(void);
void PKEY_USAGE_PERIOD_free(void){}
EXPORT
void PKEY_USAGE_PERIOD_new(void);
void PKEY_USAGE_PERIOD_new(void){}
EXPORT
void POLICY_CONSTRAINTS_free(void);
void POLICY_CONSTRAINTS_free(void){}
EXPORT
void POLICY_CONSTRAINTS_new(void);
void POLICY_CONSTRAINTS_new(void){}
EXPORT
void POLICY_MAPPING_free(void);
void POLICY_MAPPING_free(void){}
EXPORT
void POLICY_MAPPING_new(void);
void POLICY_MAPPING_new(void){}
EXPORT
void POLICYINFO_free(void);
void POLICYINFO_free(void){}
EXPORT
void POLICYINFO_new(void);
void POLICYINFO_new(void){}
EXPORT
void POLICYQUALINFO_free(void);
void POLICYQUALINFO_free(void){}
EXPORT
void POLICYQUALINFO_new(void);
void POLICYQUALINFO_new(void){}
EXPORT
void PROXY_CERT_INFO_EXTENSION_free(void);
void PROXY_CERT_INFO_EXTENSION_free(void){}
EXPORT
void PROXY_CERT_INFO_EXTENSION_new(void);
void PROXY_CERT_INFO_EXTENSION_new(void){}
EXPORT
void PROXY_POLICY_free(void);
void PROXY_POLICY_free(void){}
EXPORT
void PROXY_POLICY_new(void);
void PROXY_POLICY_new(void){}
EXPORT
void RAND_add(void);
void RAND_add(void){}
EXPORT
void RAND_bytes(void);
void RAND_bytes(void){}
EXPORT
void RAND_cleanup(void);
void RAND_cleanup(void){}
EXPORT
void RAND_egd(void);
void RAND_egd(void){}
EXPORT
void RAND_egd_bytes(void);
void RAND_egd_bytes(void){}
EXPORT
void RAND_event(void);
void RAND_event(void){}
EXPORT
void RAND_get_rand_method(void);
void RAND_get_rand_method(void){}
EXPORT
void RAND_poll(void);
void RAND_poll(void){}
EXPORT
void RAND_pseudo_bytes(void);
void RAND_pseudo_bytes(void){}
EXPORT
void RAND_query_egd_bytes(void);
void RAND_query_egd_bytes(void){}
EXPORT
void RAND_screen(void);
void RAND_screen(void){}
EXPORT
void RAND_seed(void);
void RAND_seed(void){}
EXPORT
void RAND_set_rand_method(void);
void RAND_set_rand_method(void){}
EXPORT
void RAND_SSLeay(void);
void RAND_SSLeay(void){}
EXPORT
void RAND_status(void);
void RAND_status(void){}
EXPORT
void RC4(void);
void RC4(void){}
EXPORT
void RC4_options(void);
void RC4_options(void){}
EXPORT
void RC4_set_key(void);
void RC4_set_key(void){}
EXPORT
void RSA_blinding_off(void);
void RSA_blinding_off(void){}
EXPORT
void RSA_blinding_on(void);
void RSA_blinding_on(void){}
EXPORT
void RSA_flags(void);
void RSA_flags(void){}
EXPORT
void RSA_free(void);
void RSA_free(void){}
EXPORT
void RSA_generate_key(void);
void RSA_generate_key(void){}
EXPORT
void RSA_generate_key_ex(void);
void RSA_generate_key_ex(void){}
EXPORT
void RSA_get_default_method(void);
void RSA_get_default_method(void){}
EXPORT
void RSA_get_ex_data(void);
void RSA_get_ex_data(void){}
EXPORT
void RSA_get_ex_new_index(void);
void RSA_get_ex_new_index(void){}
EXPORT
void RSA_get_method(void);
void RSA_get_method(void){}
EXPORT
void RSA_memory_lock(void);
void RSA_memory_lock(void){}
EXPORT
void RSA_new(void);
void RSA_new(void){}
EXPORT
void RSA_new_method(void);
void RSA_new_method(void){}
EXPORT
void RSA_null_method(void);
void RSA_null_method(void){}
EXPORT
void RSA_print(void);
void RSA_print(void){}
EXPORT
void RSA_print_fp(void);
void RSA_print_fp(void){}
EXPORT
void RSA_private_decrypt(void);
void RSA_private_decrypt(void){}
EXPORT
void RSA_private_encrypt(void);
void RSA_private_encrypt(void){}
EXPORT
void RSA_public_decrypt(void);
void RSA_public_decrypt(void){}
EXPORT
void RSA_public_encrypt(void);
void RSA_public_encrypt(void){}
EXPORT
void RSA_set_default_method(void);
void RSA_set_default_method(void){}
EXPORT
void RSA_set_ex_data(void);
void RSA_set_ex_data(void){}
EXPORT
void RSA_set_method(void);
void RSA_set_method(void){}
EXPORT
void RSA_setup_blinding(void);
void RSA_setup_blinding(void){}
EXPORT
void RSA_sign(void);
void RSA_sign(void){}
EXPORT
void RSA_size(void);
void RSA_size(void){}
EXPORT
void RSA_up_ref(void);
void RSA_up_ref(void){}
EXPORT
void RSA_verify(void);
void RSA_verify(void){}
EXPORT
void RSAPrivateKey_dup(void);
void RSAPrivateKey_dup(void){}
EXPORT
void RSAPublicKey_dup(void);
void RSAPublicKey_dup(void){}
EXPORT
void s2i_ASN1_INTEGER(void);
void s2i_ASN1_INTEGER(void){}
EXPORT
void s2i_ASN1_OCTET_STRING(void);
void s2i_ASN1_OCTET_STRING(void){}
EXPORT
void SHA1_Final(void);
void SHA1_Final(void){}
EXPORT
void SHA1_Init(void);
void SHA1_Init(void){}
EXPORT
void SHA1_Transform(void);
void SHA1_Transform(void){}
EXPORT
void SHA1_Update(void);
void SHA1_Update(void){}
EXPORT
void SHA224(void);
void SHA224(void){}
EXPORT
void SHA224_Final(void);
void SHA224_Final(void){}
EXPORT
void SHA224_Init(void);
void SHA224_Init(void){}
EXPORT
void SHA224_Update(void);
void SHA224_Update(void){}
EXPORT
void SHA256(void);
void SHA256(void){}
EXPORT
void SHA256_Final(void);
void SHA256_Final(void){}
EXPORT
void SHA256_Init(void);
void SHA256_Init(void){}
EXPORT
void SHA256_Transform(void);
void SHA256_Transform(void){}
EXPORT
void SHA256_Update(void);
void SHA256_Update(void){}
EXPORT
void SHA384(void);
void SHA384(void){}
EXPORT
void SHA384_Final(void);
void SHA384_Final(void){}
EXPORT
void SHA384_Init(void);
void SHA384_Init(void){}
EXPORT
void SHA384_Update(void);
void SHA384_Update(void){}
EXPORT
void SHA512(void);
void SHA512(void){}
EXPORT
void SHA512_Final(void);
void SHA512_Final(void){}
EXPORT
void SHA512_Init(void);
void SHA512_Init(void){}
EXPORT
void SHA512_Transform(void);
void SHA512_Transform(void){}
EXPORT
void SHA512_Update(void);
void SHA512_Update(void){}
EXPORT
void sk_delete(void);
void sk_delete(void){}
EXPORT
void sk_delete_ptr(void);
void sk_delete_ptr(void){}
EXPORT
void sk_dup(void);
void sk_dup(void){}
EXPORT
void sk_find(void);
void sk_find(void){}
EXPORT
void sk_find_ex(void);
void sk_find_ex(void){}
EXPORT
void sk_free(void);
void sk_free(void){}
EXPORT
void sk_insert(void);
void sk_insert(void){}
EXPORT
void sk_is_sorted(void);
void sk_is_sorted(void){}
EXPORT
void sk_new(void);
void sk_new(void){}
EXPORT
void sk_new_null(void);
void sk_new_null(void){}
EXPORT
void sk_num(void);
void sk_num(void){}
EXPORT
void sk_pop(void);
void sk_pop(void){}
EXPORT
void sk_pop_free(void);
void sk_pop_free(void){}
EXPORT
void sk_push(void);
void sk_push(void){}
EXPORT
void sk_set(void);
void sk_set(void){}
EXPORT
void sk_set_cmp_func(void);
void sk_set_cmp_func(void){}
EXPORT
void sk_shift(void);
void sk_shift(void){}
EXPORT
void sk_sort(void);
void sk_sort(void){}
EXPORT
void sk_unshift(void);
void sk_unshift(void){}
EXPORT
void sk_value(void);
void sk_value(void){}
EXPORT
void sk_zero(void);
void sk_zero(void){}
EXPORT
void SSLeay(void);
void SSLeay(void){}
EXPORT
void SSLeay_version(void);
void SSLeay_version(void){}
EXPORT
void SSL_accept(void);
void SSL_accept(void){}
EXPORT
void SSL_CTX_free(void);
void SSL_CTX_free(void){}
EXPORT
void SSL_CTX_load_verify_locations(void);
void SSL_CTX_load_verify_locations(void){}
EXPORT
void SSL_CTX_new(void);
void SSL_CTX_new(void){}
EXPORT
void SSL_CTX_set_verify(void);
void SSL_CTX_set_verify(void){}
EXPORT
void SSL_CTX_use_certificate_file(void);
void SSL_CTX_use_certificate_file(void){}
EXPORT
void SSL_CTX_use_PrivateKey_file(void);
void SSL_CTX_use_PrivateKey_file(void){}
EXPORT
void SSL_free(void);
void SSL_free(void){}
EXPORT
void SSL_get_certificate(void);
void SSL_get_certificate(void){}
EXPORT
void SSL_library_init(void);
void SSL_library_init(void){}
EXPORT
void SSL_new(void);
void SSL_new(void){}
EXPORT
void SSL_pending(void);
void SSL_pending(void){}
EXPORT
void SSL_read(void);
void SSL_read(void){}
EXPORT
void SSL_set_bio(void);
void SSL_set_bio(void){}
EXPORT
void SSL_set_read_ahead(void);
void SSL_set_read_ahead(void){}
EXPORT
void SSL_write(void);
void SSL_write(void){}
EXPORT
void string_to_hex(void);
void string_to_hex(void){}
EXPORT
void SXNET_add_id_asc(void);
void SXNET_add_id_asc(void){}
EXPORT
void SXNET_add_id_INTEGER(void);
void SXNET_add_id_INTEGER(void){}
EXPORT
void SXNET_add_id_ulong(void);
void SXNET_add_id_ulong(void){}
EXPORT
void SXNET_free(void);
void SXNET_free(void){}
EXPORT
void SXNET_get_id_asc(void);
void SXNET_get_id_asc(void){}
EXPORT
void SXNET_get_id_INTEGER(void);
void SXNET_get_id_INTEGER(void){}
EXPORT
void SXNET_get_id_ulong(void);
void SXNET_get_id_ulong(void){}
EXPORT
void SXNET_new(void);
void SXNET_new(void){}
EXPORT
void SXNETID_free(void);
void SXNETID_free(void){}
EXPORT
void SXNETID_new(void);
void SXNETID_new(void){}
EXPORT
void TLSv1_server_method(void);
void TLSv1_server_method(void){}
EXPORT
void UI_add_error_string(void);
void UI_add_error_string(void){}
EXPORT
void UI_add_info_string(void);
void UI_add_info_string(void){}
EXPORT
void UI_add_input_boolean(void);
void UI_add_input_boolean(void){}
EXPORT
void UI_add_input_string(void);
void UI_add_input_string(void){}
EXPORT
void UI_add_user_data(void);
void UI_add_user_data(void){}
EXPORT
void UI_add_verify_string(void);
void UI_add_verify_string(void){}
EXPORT
void UI_construct_prompt(void);
void UI_construct_prompt(void){}
EXPORT
void UI_create_method(void);
void UI_create_method(void){}
EXPORT
void UI_ctrl(void);
void UI_ctrl(void){}
EXPORT
void UI_destroy_method(void);
void UI_destroy_method(void){}
EXPORT
void UI_dup_error_string(void);
void UI_dup_error_string(void){}
EXPORT
void UI_dup_info_string(void);
void UI_dup_info_string(void){}
EXPORT
void UI_dup_input_boolean(void);
void UI_dup_input_boolean(void){}
EXPORT
void UI_dup_input_string(void);
void UI_dup_input_string(void){}
EXPORT
void UI_dup_verify_string(void);
void UI_dup_verify_string(void){}
EXPORT
void UI_free(void);
void UI_free(void){}
EXPORT
void UI_get0_action_string(void);
void UI_get0_action_string(void){}
EXPORT
void UI_get0_output_string(void);
void UI_get0_output_string(void){}
EXPORT
void UI_get0_result(void);
void UI_get0_result(void){}
EXPORT
void UI_get0_result_string(void);
void UI_get0_result_string(void){}
EXPORT
void UI_get0_test_string(void);
void UI_get0_test_string(void){}
EXPORT
void UI_get0_user_data(void);
void UI_get0_user_data(void){}
EXPORT
void UI_get_default_method(void);
void UI_get_default_method(void){}
EXPORT
void UI_get_ex_data(void);
void UI_get_ex_data(void){}
EXPORT
void UI_get_ex_new_index(void);
void UI_get_ex_new_index(void){}
EXPORT
void UI_get_input_flags(void);
void UI_get_input_flags(void){}
EXPORT
void UI_get_method(void);
void UI_get_method(void){}
EXPORT
void UI_get_result_maxsize(void);
void UI_get_result_maxsize(void){}
EXPORT
void UI_get_result_minsize(void);
void UI_get_result_minsize(void){}
EXPORT
void UI_get_string_type(void);
void UI_get_string_type(void){}
EXPORT
void UI_method_get_closer(void);
void UI_method_get_closer(void){}
EXPORT
void UI_method_get_flusher(void);
void UI_method_get_flusher(void){}
EXPORT
void UI_method_get_opener(void);
void UI_method_get_opener(void){}
EXPORT
void UI_method_get_reader(void);
void UI_method_get_reader(void){}
EXPORT
void UI_method_get_writer(void);
void UI_method_get_writer(void){}
EXPORT
void UI_method_set_closer(void);
void UI_method_set_closer(void){}
EXPORT
void UI_method_set_flusher(void);
void UI_method_set_flusher(void){}
EXPORT
void UI_method_set_opener(void);
void UI_method_set_opener(void){}
EXPORT
void UI_method_set_reader(void);
void UI_method_set_reader(void){}
EXPORT
void UI_method_set_writer(void);
void UI_method_set_writer(void){}
EXPORT
void UI_new(void);
void UI_new(void){}
EXPORT
void UI_new_method(void);
void UI_new_method(void){}
EXPORT
void UI_OpenSSL(void);
void UI_OpenSSL(void){}
EXPORT
void UI_process(void);
void UI_process(void){}
EXPORT
void UI_set_default_method(void);
void UI_set_default_method(void){}
EXPORT
void UI_set_ex_data(void);
void UI_set_ex_data(void){}
EXPORT
void UI_set_method(void);
void UI_set_method(void){}
EXPORT
void UI_set_result(void);
void UI_set_result(void){}
EXPORT
void USERNOTICE_free(void);
void USERNOTICE_free(void){}
EXPORT
void USERNOTICE_new(void);
void USERNOTICE_new(void){}
EXPORT
void UTF8_getc(void);
void UTF8_getc(void){}
EXPORT
void UTF8_putc(void);
void UTF8_putc(void){}
EXPORT
void v2i_ASN1_BIT_STRING(void);
void v2i_ASN1_BIT_STRING(void){}
EXPORT
void v2i_GENERAL_NAME(void);
void v2i_GENERAL_NAME(void){}
EXPORT
void v2i_GENERAL_NAME_ex(void);
void v2i_GENERAL_NAME_ex(void){}
EXPORT
void v2i_GENERAL_NAMES(void);
void v2i_GENERAL_NAMES(void){}
EXPORT
void X509_add1_ext_i2d(void);
void X509_add1_ext_i2d(void){}
EXPORT
void X509_add1_reject_object(void);
void X509_add1_reject_object(void){}
EXPORT
void X509_add1_trust_object(void);
void X509_add1_trust_object(void){}
EXPORT
void X509_add_ext(void);
void X509_add_ext(void){}
EXPORT
void X509_ALGOR_dup(void);
void X509_ALGOR_dup(void){}
EXPORT
void X509_ALGOR_free(void);
void X509_ALGOR_free(void){}
EXPORT
void X509_ALGOR_get0(void);
void X509_ALGOR_get0(void){}
EXPORT
void X509_ALGOR_new(void);
void X509_ALGOR_new(void){}
EXPORT
void X509_ALGOR_set0(void);
void X509_ALGOR_set0(void){}
EXPORT
void X509_alias_get0(void);
void X509_alias_get0(void){}
EXPORT
void X509_alias_set1(void);
void X509_alias_set1(void){}
EXPORT
void X509_ATTRIBUTE_count(void);
void X509_ATTRIBUTE_count(void){}
EXPORT
void X509_ATTRIBUTE_create(void);
void X509_ATTRIBUTE_create(void){}
EXPORT
void X509_ATTRIBUTE_create_by_NID(void);
void X509_ATTRIBUTE_create_by_NID(void){}
EXPORT
void X509_ATTRIBUTE_create_by_OBJ(void);
void X509_ATTRIBUTE_create_by_OBJ(void){}
EXPORT
void X509_ATTRIBUTE_create_by_txt(void);
void X509_ATTRIBUTE_create_by_txt(void){}
EXPORT
void X509_ATTRIBUTE_dup(void);
void X509_ATTRIBUTE_dup(void){}
EXPORT
void X509_ATTRIBUTE_free(void);
void X509_ATTRIBUTE_free(void){}
EXPORT
void X509_ATTRIBUTE_get0_data(void);
void X509_ATTRIBUTE_get0_data(void){}
EXPORT
void X509_ATTRIBUTE_get0_object(void);
void X509_ATTRIBUTE_get0_object(void){}
EXPORT
void X509_ATTRIBUTE_get0_type(void);
void X509_ATTRIBUTE_get0_type(void){}
EXPORT
void X509_ATTRIBUTE_new(void);
void X509_ATTRIBUTE_new(void){}
EXPORT
void X509_ATTRIBUTE_set1_data(void);
void X509_ATTRIBUTE_set1_data(void){}
EXPORT
void X509_ATTRIBUTE_set1_object(void);
void X509_ATTRIBUTE_set1_object(void){}
EXPORT
void X509_CERT_AUX_free(void);
void X509_CERT_AUX_free(void){}
EXPORT
void X509_CERT_AUX_new(void);
void X509_CERT_AUX_new(void){}
EXPORT
void X509_CERT_AUX_print(void);
void X509_CERT_AUX_print(void){}
EXPORT
void X509_CERT_PAIR_free(void);
void X509_CERT_PAIR_free(void){}
EXPORT
void X509_CERT_PAIR_new(void);
void X509_CERT_PAIR_new(void){}
EXPORT
void X509_certificate_type(void);
void X509_certificate_type(void){}
EXPORT
void X509_check_ca(void);
void X509_check_ca(void){}
EXPORT
void X509_check_issued(void);
void X509_check_issued(void){}
EXPORT
void X509_check_private_key(void);
void X509_check_private_key(void){}
EXPORT
void X509_check_purpose(void);
void X509_check_purpose(void){}
EXPORT
void X509_CINF_free(void);
void X509_CINF_free(void){}
EXPORT
void X509_CINF_new(void);
void X509_CINF_new(void){}
EXPORT
void X509_cmp(void);
void X509_cmp(void){}
EXPORT
void X509_CRL_add0_revoked(void);
void X509_CRL_add0_revoked(void){}
EXPORT
void X509_CRL_add1_ext_i2d(void);
void X509_CRL_add1_ext_i2d(void){}
EXPORT
void X509_CRL_add_ext(void);
void X509_CRL_add_ext(void){}
EXPORT
void X509_CRL_cmp(void);
void X509_CRL_cmp(void){}
EXPORT
void X509_CRL_delete_ext(void);
void X509_CRL_delete_ext(void){}
EXPORT
void X509_CRL_digest(void);
void X509_CRL_digest(void){}
EXPORT
void X509_CRL_dup(void);
void X509_CRL_dup(void){}
EXPORT
void X509_CRL_free(void);
void X509_CRL_free(void){}
EXPORT
void X509_CRL_get_ext(void);
void X509_CRL_get_ext(void){}
EXPORT
void X509_CRL_get_ext_by_critical(void);
void X509_CRL_get_ext_by_critical(void){}
EXPORT
void X509_CRL_get_ext_by_NID(void);
void X509_CRL_get_ext_by_NID(void){}
EXPORT
void X509_CRL_get_ext_by_OBJ(void);
void X509_CRL_get_ext_by_OBJ(void){}
EXPORT
void X509_CRL_get_ext_count(void);
void X509_CRL_get_ext_count(void){}
EXPORT
void X509_CRL_get_ext_d2i(void);
void X509_CRL_get_ext_d2i(void){}
EXPORT
void X509_CRL_INFO_free(void);
void X509_CRL_INFO_free(void){}
EXPORT
void X509_CRL_INFO_new(void);
void X509_CRL_INFO_new(void){}
EXPORT
void X509_CRL_new(void);
void X509_CRL_new(void){}
EXPORT
void X509_CRL_sign(void);
void X509_CRL_sign(void){}
EXPORT
void X509_CRL_verify(void);
void X509_CRL_verify(void){}
EXPORT
void X509_delete_ext(void);
void X509_delete_ext(void){}
EXPORT
void X509_digest(void);
void X509_digest(void){}
EXPORT
void X509_dup(void);
void X509_dup(void){}
EXPORT
void X509_email_free(void);
void X509_email_free(void){}
EXPORT
void X509_EXTENSION_create_by_NID(void);
void X509_EXTENSION_create_by_NID(void){}
EXPORT
void X509_EXTENSION_create_by_OBJ(void);
void X509_EXTENSION_create_by_OBJ(void){}
EXPORT
void X509_EXTENSION_dup(void);
void X509_EXTENSION_dup(void){}
EXPORT
void X509_EXTENSION_free(void);
void X509_EXTENSION_free(void){}
EXPORT
void X509_EXTENSION_get_critical(void);
void X509_EXTENSION_get_critical(void){}
EXPORT
void X509_EXTENSION_get_data(void);
void X509_EXTENSION_get_data(void){}
EXPORT
void X509_EXTENSION_get_object(void);
void X509_EXTENSION_get_object(void){}
EXPORT
void X509_EXTENSION_new(void);
void X509_EXTENSION_new(void){}
EXPORT
void X509_EXTENSION_set_critical(void);
void X509_EXTENSION_set_critical(void){}
EXPORT
void X509_EXTENSION_set_data(void);
void X509_EXTENSION_set_data(void){}
EXPORT
void X509_EXTENSION_set_object(void);
void X509_EXTENSION_set_object(void){}
EXPORT
void X509_find_by_issuer_and_serial(void);
void X509_find_by_issuer_and_serial(void){}
EXPORT
void X509_find_by_subject(void);
void X509_find_by_subject(void){}
EXPORT
void X509_free(void);
void X509_free(void){}
EXPORT
void X509_get0_pubkey_bitstr(void);
void X509_get0_pubkey_bitstr(void){}
EXPORT
void X509_get1_email(void);
void X509_get1_email(void){}
EXPORT
void X509_get1_ocsp(void);
void X509_get1_ocsp(void){}
EXPORT
void X509_get_ex_data(void);
void X509_get_ex_data(void){}
EXPORT
void X509_get_ex_new_index(void);
void X509_get_ex_new_index(void){}
EXPORT
void X509_get_ext(void);
void X509_get_ext(void){}
EXPORT
void X509_get_ext_by_critical(void);
void X509_get_ext_by_critical(void){}
EXPORT
void X509_get_ext_by_NID(void);
void X509_get_ext_by_NID(void){}
EXPORT
void X509_get_ext_by_OBJ(void);
void X509_get_ext_by_OBJ(void){}
EXPORT
void X509_get_ext_count(void);
void X509_get_ext_count(void){}
EXPORT
void X509_get_ext_d2i(void);
void X509_get_ext_d2i(void){}
EXPORT
void X509_get_issuer_name(void);
void X509_get_issuer_name(void){}
EXPORT
void X509_get_pubkey(void);
void X509_get_pubkey(void){}
EXPORT
void X509_get_serialNumber(void);
void X509_get_serialNumber(void){}
EXPORT
void X509_get_subject_name(void);
void X509_get_subject_name(void){}
EXPORT
void X509_issuer_and_serial_cmp(void);
void X509_issuer_and_serial_cmp(void){}
EXPORT
void X509_issuer_and_serial_hash(void);
void X509_issuer_and_serial_hash(void){}
EXPORT
void X509_issuer_name_cmp(void);
void X509_issuer_name_cmp(void){}
EXPORT
void X509_issuer_name_hash(void);
void X509_issuer_name_hash(void){}
EXPORT
void X509_keyid_get0(void);
void X509_keyid_get0(void){}
EXPORT
void X509_keyid_set1(void);
void X509_keyid_set1(void){}
EXPORT
void X509_NAME_add_entry(void);
void X509_NAME_add_entry(void){}
EXPORT
void X509_NAME_add_entry_by_NID(void);
void X509_NAME_add_entry_by_NID(void){}
EXPORT
void X509_NAME_add_entry_by_OBJ(void);
void X509_NAME_add_entry_by_OBJ(void){}
EXPORT
void X509_NAME_add_entry_by_txt(void);
void X509_NAME_add_entry_by_txt(void){}
EXPORT
void X509_NAME_cmp(void);
void X509_NAME_cmp(void){}
EXPORT
void X509_NAME_delete_entry(void);
void X509_NAME_delete_entry(void){}
EXPORT
void X509_NAME_digest(void);
void X509_NAME_digest(void){}
EXPORT
void X509_NAME_dup(void);
void X509_NAME_dup(void){}
EXPORT
void X509_NAME_entry_count(void);
void X509_NAME_entry_count(void){}
EXPORT
void X509_NAME_ENTRY_create_by_NID(void);
void X509_NAME_ENTRY_create_by_NID(void){}
EXPORT
void X509_NAME_ENTRY_create_by_OBJ(void);
void X509_NAME_ENTRY_create_by_OBJ(void){}
EXPORT
void X509_NAME_ENTRY_create_by_txt(void);
void X509_NAME_ENTRY_create_by_txt(void){}
EXPORT
void X509_NAME_ENTRY_dup(void);
void X509_NAME_ENTRY_dup(void){}
EXPORT
void X509_NAME_ENTRY_free(void);
void X509_NAME_ENTRY_free(void){}
EXPORT
void X509_NAME_ENTRY_get_data(void);
void X509_NAME_ENTRY_get_data(void){}
EXPORT
void X509_NAME_ENTRY_get_object(void);
void X509_NAME_ENTRY_get_object(void){}
EXPORT
void X509_NAME_ENTRY_new(void);
void X509_NAME_ENTRY_new(void){}
EXPORT
void X509_NAME_ENTRY_set_data(void);
void X509_NAME_ENTRY_set_data(void){}
EXPORT
void X509_NAME_ENTRY_set_object(void);
void X509_NAME_ENTRY_set_object(void){}
EXPORT
void X509_NAME_free(void);
void X509_NAME_free(void){}
EXPORT
void X509_NAME_get_entry(void);
void X509_NAME_get_entry(void){}
EXPORT
void X509_NAME_get_index_by_NID(void);
void X509_NAME_get_index_by_NID(void){}
EXPORT
void X509_NAME_get_index_by_OBJ(void);
void X509_NAME_get_index_by_OBJ(void){}
EXPORT
void X509_NAME_get_text_by_NID(void);
void X509_NAME_get_text_by_NID(void){}
EXPORT
void X509_NAME_get_text_by_OBJ(void);
void X509_NAME_get_text_by_OBJ(void){}
EXPORT
void X509_NAME_hash(void);
void X509_NAME_hash(void){}
EXPORT
void X509_NAME_new(void);
void X509_NAME_new(void){}
EXPORT
void X509_NAME_oneline(void);
void X509_NAME_oneline(void){}
EXPORT
void X509_NAME_print(void);
void X509_NAME_print(void){}
EXPORT
void X509_NAME_print_ex(void);
void X509_NAME_print_ex(void){}
EXPORT
void X509_NAME_print_ex_fp(void);
void X509_NAME_print_ex_fp(void){}
EXPORT
void X509_NAME_set(void);
void X509_NAME_set(void){}
EXPORT
void X509_new(void);
void X509_new(void){}
EXPORT
void X509_ocspid_print(void);
void X509_ocspid_print(void){}
EXPORT
void X509_POLICY_NODE_print(void);
void X509_POLICY_NODE_print(void){}
EXPORT
void X509_print(void);
void X509_print(void){}
EXPORT
void X509_print_ex(void);
void X509_print_ex(void){}
EXPORT
void X509_print_ex_fp(void);
void X509_print_ex_fp(void){}
EXPORT
void X509_print_fp(void);
void X509_print_fp(void){}
EXPORT
void X509_pubkey_digest(void);
void X509_pubkey_digest(void){}
EXPORT
void X509_PUBKEY_free(void);
void X509_PUBKEY_free(void){}
EXPORT
void X509_PUBKEY_get(void);
void X509_PUBKEY_get(void){}
EXPORT
void X509_PUBKEY_new(void);
void X509_PUBKEY_new(void){}
EXPORT
void X509_PUBKEY_set(void);
void X509_PUBKEY_set(void){}
EXPORT
void X509_PURPOSE_add(void);
void X509_PURPOSE_add(void){}
EXPORT
void X509_PURPOSE_cleanup(void);
void X509_PURPOSE_cleanup(void){}
EXPORT
void X509_PURPOSE_get0(void);
void X509_PURPOSE_get0(void){}
EXPORT
void X509_PURPOSE_get0_name(void);
void X509_PURPOSE_get0_name(void){}
EXPORT
void X509_PURPOSE_get0_sname(void);
void X509_PURPOSE_get0_sname(void){}
EXPORT
void X509_PURPOSE_get_by_id(void);
void X509_PURPOSE_get_by_id(void){}
EXPORT
void X509_PURPOSE_get_by_sname(void);
void X509_PURPOSE_get_by_sname(void){}
EXPORT
void X509_PURPOSE_get_count(void);
void X509_PURPOSE_get_count(void){}
EXPORT
void X509_PURPOSE_get_id(void);
void X509_PURPOSE_get_id(void){}
EXPORT
void X509_PURPOSE_get_trust(void);
void X509_PURPOSE_get_trust(void){}
EXPORT
void X509_PURPOSE_set(void);
void X509_PURPOSE_set(void){}
EXPORT
void X509_reject_clear(void);
void X509_reject_clear(void){}
EXPORT
void X509_REQ_add1_attr(void);
void X509_REQ_add1_attr(void){}
EXPORT
void X509_REQ_add1_attr_by_NID(void);
void X509_REQ_add1_attr_by_NID(void){}
EXPORT
void X509_REQ_add1_attr_by_OBJ(void);
void X509_REQ_add1_attr_by_OBJ(void){}
EXPORT
void X509_REQ_add1_attr_by_txt(void);
void X509_REQ_add1_attr_by_txt(void){}
EXPORT
void X509_REQ_add_extensions(void);
void X509_REQ_add_extensions(void){}
EXPORT
void X509_REQ_add_extensions_nid(void);
void X509_REQ_add_extensions_nid(void){}
EXPORT
void X509_REQ_check_private_key(void);
void X509_REQ_check_private_key(void){}
EXPORT
void X509_REQ_delete_attr(void);
void X509_REQ_delete_attr(void){}
EXPORT
void X509_REQ_digest(void);
void X509_REQ_digest(void){}
EXPORT
void X509_REQ_dup(void);
void X509_REQ_dup(void){}
EXPORT
void X509_REQ_extension_nid(void);
void X509_REQ_extension_nid(void){}
EXPORT
void X509_REQ_free(void);
void X509_REQ_free(void){}
EXPORT
void X509_REQ_get1_email(void);
void X509_REQ_get1_email(void){}
EXPORT
void X509_REQ_get_attr(void);
void X509_REQ_get_attr(void){}
EXPORT
void X509_REQ_get_attr_by_NID(void);
void X509_REQ_get_attr_by_NID(void){}
EXPORT
void X509_REQ_get_attr_by_OBJ(void);
void X509_REQ_get_attr_by_OBJ(void){}
EXPORT
void X509_REQ_get_attr_count(void);
void X509_REQ_get_attr_count(void){}
EXPORT
void X509_REQ_get_extension_nids(void);
void X509_REQ_get_extension_nids(void){}
EXPORT
void X509_REQ_get_extensions(void);
void X509_REQ_get_extensions(void){}
EXPORT
void X509_REQ_get_pubkey(void);
void X509_REQ_get_pubkey(void){}
EXPORT
void X509_REQ_INFO_free(void);
void X509_REQ_INFO_free(void){}
EXPORT
void X509_REQ_INFO_new(void);
void X509_REQ_INFO_new(void){}
EXPORT
void X509_REQ_new(void);
void X509_REQ_new(void){}
EXPORT
void X509_REQ_set_extension_nids(void);
void X509_REQ_set_extension_nids(void){}
EXPORT
void X509_REQ_set_pubkey(void);
void X509_REQ_set_pubkey(void){}
EXPORT
void X509_REQ_set_subject_name(void);
void X509_REQ_set_subject_name(void){}
EXPORT
void X509_REQ_set_version(void);
void X509_REQ_set_version(void){}
EXPORT
void X509_REQ_sign(void);
void X509_REQ_sign(void){}
EXPORT
void X509_REQ_verify(void);
void X509_REQ_verify(void){}
EXPORT
void X509_REVOKED_add1_ext_i2d(void);
void X509_REVOKED_add1_ext_i2d(void){}
EXPORT
void X509_REVOKED_add_ext(void);
void X509_REVOKED_add_ext(void){}
EXPORT
void X509_REVOKED_delete_ext(void);
void X509_REVOKED_delete_ext(void){}
EXPORT
void X509_REVOKED_free(void);
void X509_REVOKED_free(void){}
EXPORT
void X509_REVOKED_get_ext(void);
void X509_REVOKED_get_ext(void){}
EXPORT
void X509_REVOKED_get_ext_by_critical(void);
void X509_REVOKED_get_ext_by_critical(void){}
EXPORT
void X509_REVOKED_get_ext_by_NID(void);
void X509_REVOKED_get_ext_by_NID(void){}
EXPORT
void X509_REVOKED_get_ext_by_OBJ(void);
void X509_REVOKED_get_ext_by_OBJ(void){}
EXPORT
void X509_REVOKED_get_ext_count(void);
void X509_REVOKED_get_ext_count(void){}
EXPORT
void X509_REVOKED_get_ext_d2i(void);
void X509_REVOKED_get_ext_d2i(void){}
EXPORT
void X509_REVOKED_new(void);
void X509_REVOKED_new(void){}
EXPORT
void X509_set_ex_data(void);
void X509_set_ex_data(void){}
EXPORT
void X509_SIG_free(void);
void X509_SIG_free(void){}
EXPORT
void X509_SIG_new(void);
void X509_SIG_new(void){}
EXPORT
void X509_sign(void);
void X509_sign(void){}
EXPORT
void X509_signature_print(void);
void X509_signature_print(void){}
EXPORT
void X509_STORE_CTX_cleanup(void);
void X509_STORE_CTX_cleanup(void){}
EXPORT
void X509_STORE_CTX_get_ex_new_index(void);
void X509_STORE_CTX_get_ex_new_index(void){}
EXPORT
void X509_STORE_CTX_get0_param(void);
void X509_STORE_CTX_get0_param(void){}
EXPORT
void X509_STORE_CTX_init(void);
void X509_STORE_CTX_init(void){}
EXPORT
void X509_STORE_CTX_set_default(void);
void X509_STORE_CTX_set_default(void){}
EXPORT
void X509_STORE_CTX_set_ex_data(void);
void X509_STORE_CTX_set_ex_data(void){}
EXPORT
void X509_STORE_CTX_set_verify_cb(void);
void X509_STORE_CTX_set_verify_cb(void){}
EXPORT
void X509_STORE_free(void);
void X509_STORE_free(void){}
EXPORT
void X509_STORE_load_locations(void);
void X509_STORE_load_locations(void){}
EXPORT
void X509_STORE_new(void);
void X509_STORE_new(void){}
EXPORT
void X509_STORE_set_default_paths(void);
void X509_STORE_set_default_paths(void){}
EXPORT
void X509_subject_name_cmp(void);
void X509_subject_name_cmp(void){}
EXPORT
void X509_subject_name_hash(void);
void X509_subject_name_hash(void){}
EXPORT
void X509_supported_extension(void);
void X509_supported_extension(void){}
EXPORT
void X509_to_X509_REQ(void);
void X509_to_X509_REQ(void){}
EXPORT
void X509_trust_clear(void);
void X509_trust_clear(void){}
EXPORT
void X509_VAL_free(void);
void X509_VAL_free(void){}
EXPORT
void X509_VAL_new(void);
void X509_VAL_new(void){}
EXPORT
void X509_verify(void);
void X509_verify(void){}
EXPORT
void X509_verify_cert(void);
void X509_verify_cert(void){}
EXPORT
void X509_VERIFY_PARAM_free(void);
void X509_VERIFY_PARAM_free(void){}
EXPORT
void X509_VERIFY_PARAM_get_depth(void);
void X509_VERIFY_PARAM_get_depth(void){}
EXPORT
void X509_VERIFY_PARAM_inherit(void);
void X509_VERIFY_PARAM_inherit(void){}
EXPORT
void X509_VERIFY_PARAM_new(void);
void X509_VERIFY_PARAM_new(void){}
EXPORT
void X509_VERIFY_PARAM_set_depth(void);
void X509_VERIFY_PARAM_set_depth(void){}
EXPORT
void X509_VERIFY_PARAM_set_purpose(void);
void X509_VERIFY_PARAM_set_purpose(void){}
EXPORT
void X509_VERIFY_PARAM_set_trust(void);
void X509_VERIFY_PARAM_set_trust(void){}
EXPORT
void X509_VERIFY_PARAM_set1(void);
void X509_VERIFY_PARAM_set1(void){}
EXPORT
void X509at_add1_attr(void);
void X509at_add1_attr(void){}
EXPORT
void X509at_add1_attr_by_NID(void);
void X509at_add1_attr_by_NID(void){}
EXPORT
void X509at_add1_attr_by_OBJ(void);
void X509at_add1_attr_by_OBJ(void){}
EXPORT
void X509at_add1_attr_by_txt(void);
void X509at_add1_attr_by_txt(void){}
EXPORT
void X509at_delete_attr(void);
void X509at_delete_attr(void){}
EXPORT
void X509at_get0_data_by_OBJ(void);
void X509at_get0_data_by_OBJ(void){}
EXPORT
void X509at_get_attr(void);
void X509at_get_attr(void){}
EXPORT
void X509at_get_attr_by_NID(void);
void X509at_get_attr_by_NID(void){}
EXPORT
void X509at_get_attr_by_OBJ(void);
void X509at_get_attr_by_OBJ(void){}
EXPORT
void X509at_get_attr_count(void);
void X509at_get_attr_count(void){}
EXPORT
void X509V3_add1_i2d(void);
void X509V3_add1_i2d(void){}
EXPORT
void X509v3_add_ext(void);
void X509v3_add_ext(void){}
EXPORT
void X509V3_add_standard_extensions(void);
void X509V3_add_standard_extensions(void){}
EXPORT
void X509V3_add_value(void);
void X509V3_add_value(void){}
EXPORT
void X509V3_add_value_bool(void);
void X509V3_add_value_bool(void){}
EXPORT
void X509V3_add_value_bool_nf(void);
void X509V3_add_value_bool_nf(void){}
EXPORT
void X509V3_add_value_int(void);
void X509V3_add_value_int(void){}
EXPORT
void X509V3_add_value_uchar(void);
void X509V3_add_value_uchar(void){}
EXPORT
void X509V3_conf_free(void);
void X509V3_conf_free(void){}
EXPORT
void X509v3_delete_ext(void);
void X509v3_delete_ext(void){}
EXPORT
void X509V3_EXT_add(void);
void X509V3_EXT_add(void){}
EXPORT
void X509V3_EXT_add_alias(void);
void X509V3_EXT_add_alias(void){}
EXPORT
void X509V3_EXT_add_conf(void);
void X509V3_EXT_add_conf(void){}
EXPORT
void X509V3_EXT_add_list(void);
void X509V3_EXT_add_list(void){}
EXPORT
void X509V3_EXT_add_nconf(void);
void X509V3_EXT_add_nconf(void){}
EXPORT
void X509V3_EXT_add_nconf_sk(void);
void X509V3_EXT_add_nconf_sk(void){}
EXPORT
void X509V3_EXT_cleanup(void);
void X509V3_EXT_cleanup(void){}
EXPORT
void X509V3_EXT_conf(void);
void X509V3_EXT_conf(void){}
EXPORT
void X509V3_EXT_conf_nid(void);
void X509V3_EXT_conf_nid(void){}
EXPORT
void X509V3_EXT_CRL_add_conf(void);
void X509V3_EXT_CRL_add_conf(void){}
EXPORT
void X509V3_EXT_CRL_add_nconf(void);
void X509V3_EXT_CRL_add_nconf(void){}
EXPORT
void X509V3_EXT_d2i(void);
void X509V3_EXT_d2i(void){}
EXPORT
void X509V3_EXT_get(void);
void X509V3_EXT_get(void){}
EXPORT
void X509V3_EXT_get_nid(void);
void X509V3_EXT_get_nid(void){}
EXPORT
void X509V3_EXT_i2d(void);
void X509V3_EXT_i2d(void){}
EXPORT
void X509V3_EXT_nconf(void);
void X509V3_EXT_nconf(void){}
EXPORT
void X509V3_EXT_nconf_nid(void);
void X509V3_EXT_nconf_nid(void){}
EXPORT
void X509V3_EXT_print(void);
void X509V3_EXT_print(void){}
EXPORT
void X509V3_EXT_print_fp(void);
void X509V3_EXT_print_fp(void){}
EXPORT
void X509V3_EXT_REQ_add_conf(void);
void X509V3_EXT_REQ_add_conf(void){}
EXPORT
void X509V3_EXT_REQ_add_nconf(void);
void X509V3_EXT_REQ_add_nconf(void){}
EXPORT
void X509V3_EXT_val_prn(void);
void X509V3_EXT_val_prn(void){}
EXPORT
void X509V3_extensions_print(void);
void X509V3_extensions_print(void){}
EXPORT
void X509V3_get_d2i(void);
void X509V3_get_d2i(void){}
EXPORT
void X509v3_get_ext(void);
void X509v3_get_ext(void){}
EXPORT
void X509v3_get_ext_by_critical(void);
void X509v3_get_ext_by_critical(void){}
EXPORT
void X509v3_get_ext_by_NID(void);
void X509v3_get_ext_by_NID(void){}
EXPORT
void X509v3_get_ext_by_OBJ(void);
void X509v3_get_ext_by_OBJ(void){}
EXPORT
void X509v3_get_ext_count(void);
void X509v3_get_ext_count(void){}
EXPORT
void X509V3_get_section(void);
void X509V3_get_section(void){}
EXPORT
void X509V3_get_string(void);
void X509V3_get_string(void){}
EXPORT
void X509V3_get_value_bool(void);
void X509V3_get_value_bool(void){}
EXPORT
void X509V3_get_value_int(void);
void X509V3_get_value_int(void){}
EXPORT
void X509V3_NAME_from_section(void);
void X509V3_NAME_from_section(void){}
EXPORT
void X509V3_parse_list(void);
void X509V3_parse_list(void){}
EXPORT
void X509V3_section_free(void);
void X509V3_section_free(void){}
EXPORT
void X509V3_set_conf_lhash(void);
void X509V3_set_conf_lhash(void){}
EXPORT
void X509V3_set_ctx(void);
void X509V3_set_ctx(void){}
EXPORT
void X509V3_set_nconf(void);
void X509V3_set_nconf(void){}
EXPORT
void X509V3_string_free(void);
void X509V3_string_free(void){}
