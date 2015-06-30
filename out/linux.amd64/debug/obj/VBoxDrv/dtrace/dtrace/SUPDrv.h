/* $Id: VBoxTpG.cpp $ */
/** @file
 * Automatically generated from /home/se170/VirtualBox-4.3.28/src/VBox/HostDrivers/Support/SUPDrv.d.  Do NOT edit!
 */

#ifndef ___SUPDrv_d___
#define ___SUPDrv_d___

#include <VBox/VBoxTpG.h>

#ifndef IN_RING0
# error "Expected 'IN_RING0' to be defined"
#endif

RT_C_DECLS_BEGIN

#ifdef VBOX_WITH_DTRACE

# ifdef _MSC_VER
#  pragma data_seg(VTG_LOC_SECT)
#  pragma data_seg()
# endif

extern uint32_t        g_cVTGProbeEnabled_vboxdrv_session__create;
extern VTGDESCPROBE    g_VTGProbeData_vboxdrv_session__create;
DECLASM(void)          VTGProbeStub_vboxdrv_session__create(PVTGPROBELOC, struct SUPDRVSESSION *, int);
# define VBOXDRV_SESSION_CREATE_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdrv_session__create)) 
# define VBOXDRV_SESSION_CREATE(pSession, fUser) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdrv_session__create)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdrv_session__create }; \
            VTGProbeStub_vboxdrv_session__create(&s_VTGProbeLoc, pSession, fUser); \
        } \
        { \
        AssertCompile(sizeof(pSession) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(struct SUPDRVSESSION *) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(fUser) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdrv_session__close;
extern VTGDESCPROBE    g_VTGProbeData_vboxdrv_session__close;
DECLASM(void)          VTGProbeStub_vboxdrv_session__close(PVTGPROBELOC, struct SUPDRVSESSION *);
# define VBOXDRV_SESSION_CLOSE_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdrv_session__close)) 
# define VBOXDRV_SESSION_CLOSE(pSession) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdrv_session__close)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdrv_session__close }; \
            VTGProbeStub_vboxdrv_session__close(&s_VTGProbeLoc, pSession); \
        } \
        { \
        AssertCompile(sizeof(pSession) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(struct SUPDRVSESSION *) <= sizeof(uintptr_t)); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdrv_ioctl__entry;
extern VTGDESCPROBE    g_VTGProbeData_vboxdrv_ioctl__entry;
DECLASM(void)          VTGProbeStub_vboxdrv_ioctl__entry(PVTGPROBELOC, struct SUPDRVSESSION *, uintptr_t, void *);
# define VBOXDRV_IOCTL_ENTRY_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdrv_ioctl__entry)) 
# define VBOXDRV_IOCTL_ENTRY(pSession, uIOCtl, pvReqHdr) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdrv_ioctl__entry)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdrv_ioctl__entry }; \
            VTGProbeStub_vboxdrv_ioctl__entry(&s_VTGProbeLoc, pSession, uIOCtl, pvReqHdr); \
        } \
        { \
        AssertCompile(sizeof(pSession) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(struct SUPDRVSESSION *) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(uIOCtl) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(uintptr_t) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(pvReqHdr) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(void *) <= sizeof(uintptr_t)); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdrv_ioctl__return;
extern VTGDESCPROBE    g_VTGProbeData_vboxdrv_ioctl__return;
DECLASM(void)          VTGProbeStub_vboxdrv_ioctl__return(PVTGPROBELOC, struct SUPDRVSESSION *, uintptr_t, void *, int, int);
# define VBOXDRV_IOCTL_RETURN_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdrv_ioctl__return)) 
# define VBOXDRV_IOCTL_RETURN(pSession, uIOCtl, pvReqHdr, rc, rcReq) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdrv_ioctl__return)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdrv_ioctl__return }; \
            VTGProbeStub_vboxdrv_ioctl__return(&s_VTGProbeLoc, pSession, uIOCtl, pvReqHdr, rc, rcReq); \
        } \
        { \
        AssertCompile(sizeof(pSession) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(struct SUPDRVSESSION *) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(uIOCtl) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(uintptr_t) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(pvReqHdr) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(void *) <= sizeof(uintptr_t)); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(rc) <= 4); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(rcReq) <= 4); \
        } \
    } while (0)


#else

# define VBOXDRV_SESSION_CREATE_ENABLED() (false)
# define VBOXDRV_SESSION_CREATE(pSession, fUser) do { } while (0)
# define VBOXDRV_SESSION_CLOSE_ENABLED() (false)
# define VBOXDRV_SESSION_CLOSE(pSession) do { } while (0)
# define VBOXDRV_IOCTL_ENTRY_ENABLED() (false)
# define VBOXDRV_IOCTL_ENTRY(pSession, uIOCtl, pvReqHdr) do { } while (0)
# define VBOXDRV_IOCTL_RETURN_ENABLED() (false)
# define VBOXDRV_IOCTL_RETURN(pSession, uIOCtl, pvReqHdr, rc, rcReq) do { } while (0)

#endif

RT_C_DECLS_END
#endif
