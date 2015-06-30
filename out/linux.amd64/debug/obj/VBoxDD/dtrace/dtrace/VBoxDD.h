/* $Id: VBoxTpG.cpp $ */
/** @file
 * Automatically generated from /home/se170/VirtualBox-4.3.28/src/VBox/Devices/build/VBoxDD.d.  Do NOT edit!
 */

#ifndef ___VBoxDD_d___
#define ___VBoxDD_d___

#include <VBox/VBoxTpG.h>

#ifndef IN_RING3
# error "Expected 'IN_RING3' to be defined"
#endif

RT_C_DECLS_BEGIN

#ifdef VBOX_WITH_DTRACE

# ifdef _MSC_VER
#  pragma data_seg(VTG_LOC_SECT)
#  pragma data_seg()
# endif

extern uint32_t        g_cVTGProbeEnabled_vboxdd_hgcmcall__enter;
extern VTGDESCPROBE    g_VTGProbeData_vboxdd_hgcmcall__enter;
DECLASM(void)          VTGProbeStub_vboxdd_hgcmcall__enter(PVTGPROBELOC, void *, unsigned int, unsigned int, unsigned int);
# define VBOXDD_HGCMCALL_ENTER_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_hgcmcall__enter)) 
# define VBOXDD_HGCMCALL_ENTER(pvCmd, idFunction, idClient, cbCmd) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_hgcmcall__enter)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdd_hgcmcall__enter }; \
            VTGProbeStub_vboxdd_hgcmcall__enter(&s_VTGProbeLoc, pvCmd, idFunction, idClient, cbCmd); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(pvCmd) <= 8); \
        AssertCompile(sizeof(unsigned int) == 4); \
        AssertCompile(sizeof(idFunction) <= 4); \
        AssertCompile(sizeof(unsigned int) == 4); \
        AssertCompile(sizeof(idClient) <= 4); \
        AssertCompile(sizeof(unsigned int) == 4); \
        AssertCompile(sizeof(cbCmd) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__req;
extern VTGDESCPROBE    g_VTGProbeData_vboxdd_hgcmcall__completed__req;
DECLASM(void)          VTGProbeStub_vboxdd_hgcmcall__completed__req(PVTGPROBELOC, void *, int);
# define VBOXDD_HGCMCALL_COMPLETED_REQ_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__req)) 
# define VBOXDD_HGCMCALL_COMPLETED_REQ(pvCmd, rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__req)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdd_hgcmcall__completed__req }; \
            VTGProbeStub_vboxdd_hgcmcall__completed__req(&s_VTGProbeLoc, pvCmd, rc); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(pvCmd) <= 8); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__emt;
extern VTGDESCPROBE    g_VTGProbeData_vboxdd_hgcmcall__completed__emt;
DECLASM(void)          VTGProbeStub_vboxdd_hgcmcall__completed__emt(PVTGPROBELOC, void *, int);
# define VBOXDD_HGCMCALL_COMPLETED_EMT_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__emt)) 
# define VBOXDD_HGCMCALL_COMPLETED_EMT(pvCmd, rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__emt)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdd_hgcmcall__completed__emt }; \
            VTGProbeStub_vboxdd_hgcmcall__completed__emt(&s_VTGProbeLoc, pvCmd, rc); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(pvCmd) <= 8); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__done;
extern VTGDESCPROBE    g_VTGProbeData_vboxdd_hgcmcall__completed__done;
DECLASM(void)          VTGProbeStub_vboxdd_hgcmcall__completed__done(PVTGPROBELOC, void *, unsigned int, unsigned int, int);
# define VBOXDD_HGCMCALL_COMPLETED_DONE_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__done)) 
# define VBOXDD_HGCMCALL_COMPLETED_DONE(pvCmd, idFunction, idClient, rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_hgcmcall__completed__done)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdd_hgcmcall__completed__done }; \
            VTGProbeStub_vboxdd_hgcmcall__completed__done(&s_VTGProbeLoc, pvCmd, idFunction, idClient, rc); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(pvCmd) <= 8); \
        AssertCompile(sizeof(unsigned int) == 4); \
        AssertCompile(sizeof(idFunction) <= 4); \
        AssertCompile(sizeof(unsigned int) == 4); \
        AssertCompile(sizeof(idClient) <= 4); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdd_ahci__req__submit;
extern VTGDESCPROBE    g_VTGProbeData_vboxdd_ahci__req__submit;
DECLASM(void)          VTGProbeStub_vboxdd_ahci__req__submit(PVTGPROBELOC, void *, int, uint64_t, uint32_t);
# define VBOXDD_AHCI_REQ_SUBMIT_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_ahci__req__submit)) 
# define VBOXDD_AHCI_REQ_SUBMIT(pvReq, iTxDir, offStart, cbXfer) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_ahci__req__submit)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdd_ahci__req__submit }; \
            VTGProbeStub_vboxdd_ahci__req__submit(&s_VTGProbeLoc, pvReq, iTxDir, offStart, cbXfer); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(pvReq) <= 8); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(iTxDir) <= 4); \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(offStart) <= 8); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(cbXfer) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdd_ahci__req__submit__timestamp;
extern VTGDESCPROBE    g_VTGProbeData_vboxdd_ahci__req__submit__timestamp;
DECLASM(void)          VTGProbeStub_vboxdd_ahci__req__submit__timestamp(PVTGPROBELOC, void *, uint64_t);
# define VBOXDD_AHCI_REQ_SUBMIT_TIMESTAMP_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_ahci__req__submit__timestamp)) 
# define VBOXDD_AHCI_REQ_SUBMIT_TIMESTAMP(pvReq, tsStart) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_ahci__req__submit__timestamp)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdd_ahci__req__submit__timestamp }; \
            VTGProbeStub_vboxdd_ahci__req__submit__timestamp(&s_VTGProbeLoc, pvReq, tsStart); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(pvReq) <= 8); \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(tsStart) <= 8); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdd_ahci__req__completed;
extern VTGDESCPROBE    g_VTGProbeData_vboxdd_ahci__req__completed;
DECLASM(void)          VTGProbeStub_vboxdd_ahci__req__completed(PVTGPROBELOC, void *, int, int, uint64_t, uint32_t);
# define VBOXDD_AHCI_REQ_COMPLETED_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_ahci__req__completed)) 
# define VBOXDD_AHCI_REQ_COMPLETED(pvReq, rcReq, iState, offStart, cbXfer) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_ahci__req__completed)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdd_ahci__req__completed }; \
            VTGProbeStub_vboxdd_ahci__req__completed(&s_VTGProbeLoc, pvReq, rcReq, iState, offStart, cbXfer); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(pvReq) <= 8); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(rcReq) <= 4); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(iState) <= 4); \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(offStart) <= 8); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(cbXfer) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxdd_ahci__req__completed__timestamp;
extern VTGDESCPROBE    g_VTGProbeData_vboxdd_ahci__req__completed__timestamp;
DECLASM(void)          VTGProbeStub_vboxdd_ahci__req__completed__timestamp(PVTGPROBELOC, void *, uint64_t);
# define VBOXDD_AHCI_REQ_COMPLETED_TIMESTAMP_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_ahci__req__completed__timestamp)) 
# define VBOXDD_AHCI_REQ_COMPLETED_TIMESTAMP(pvReq, tsEnd) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxdd_ahci__req__completed__timestamp)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxdd_ahci__req__completed__timestamp }; \
            VTGProbeStub_vboxdd_ahci__req__completed__timestamp(&s_VTGProbeLoc, pvReq, tsEnd); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(pvReq) <= 8); \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(tsEnd) <= 8); \
        } \
    } while (0)


#else

# define VBOXDD_HGCMCALL_ENTER_ENABLED() (false)
# define VBOXDD_HGCMCALL_ENTER(pvCmd, idFunction, idClient, cbCmd) do { } while (0)
# define VBOXDD_HGCMCALL_COMPLETED_REQ_ENABLED() (false)
# define VBOXDD_HGCMCALL_COMPLETED_REQ(pvCmd, rc) do { } while (0)
# define VBOXDD_HGCMCALL_COMPLETED_EMT_ENABLED() (false)
# define VBOXDD_HGCMCALL_COMPLETED_EMT(pvCmd, rc) do { } while (0)
# define VBOXDD_HGCMCALL_COMPLETED_DONE_ENABLED() (false)
# define VBOXDD_HGCMCALL_COMPLETED_DONE(pvCmd, idFunction, idClient, rc) do { } while (0)
# define VBOXDD_AHCI_REQ_SUBMIT_ENABLED() (false)
# define VBOXDD_AHCI_REQ_SUBMIT(pvReq, iTxDir, offStart, cbXfer) do { } while (0)
# define VBOXDD_AHCI_REQ_SUBMIT_TIMESTAMP_ENABLED() (false)
# define VBOXDD_AHCI_REQ_SUBMIT_TIMESTAMP(pvReq, tsStart) do { } while (0)
# define VBOXDD_AHCI_REQ_COMPLETED_ENABLED() (false)
# define VBOXDD_AHCI_REQ_COMPLETED(pvReq, rcReq, iState, offStart, cbXfer) do { } while (0)
# define VBOXDD_AHCI_REQ_COMPLETED_TIMESTAMP_ENABLED() (false)
# define VBOXDD_AHCI_REQ_COMPLETED_TIMESTAMP(pvReq, tsEnd) do { } while (0)

#endif

RT_C_DECLS_END
#endif
