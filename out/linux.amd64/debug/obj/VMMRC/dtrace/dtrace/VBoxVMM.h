/* $Id: VBoxTpG.cpp $ */
/** @file
 * Automatically generated from /home/se170/VirtualBox-4.3.28/src/VBox/VMM/VBoxVMM.d.  Do NOT edit!
 */

#ifndef ___VBoxVMM_d___
#define ___VBoxVMM_d___

#include <VBox/VBoxTpG.h>

#ifndef IN_RC
# error "Expected 'IN_RC' to be defined"
#endif

RT_C_DECLS_BEGIN

#ifdef VBOX_WITH_DTRACE

# ifdef _MSC_VER
#  pragma data_seg(VTG_LOC_SECT)
#  pragma data_seg()
# endif

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__state__changed;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__state__changed;
DECLASM(void)          VTGProbeStub_vboxvmm_em__state__changed(PVTGPROBELOC, RTR0PTR, int, int, int);
# define VBOXVMM_EM_STATE_CHANGED_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__state__changed)) 
# define VBOXVMM_EM_STATE_CHANGED(a_pVCpu, a_enmOldState, a_enmNewState, a_rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__state__changed)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__state__changed }; \
            VTGProbeStub_vboxvmm_em__state__changed(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_enmOldState, a_enmNewState, a_rc); \
        } \
        { \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_enmOldState) <= 4); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_enmNewState) <= 4); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__state__unchanged;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__state__unchanged;
DECLASM(void)          VTGProbeStub_vboxvmm_em__state__unchanged(PVTGPROBELOC, RTR0PTR, int, int);
# define VBOXVMM_EM_STATE_UNCHANGED_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__state__unchanged)) 
# define VBOXVMM_EM_STATE_UNCHANGED(a_pVCpu, a_enmState, a_rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__state__unchanged)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__state__unchanged }; \
            VTGProbeStub_vboxvmm_em__state__unchanged(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_enmState, a_rc); \
        } \
        { \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_enmState) <= 4); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__raw__run__pre;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__raw__run__pre;
DECLASM(void)          VTGProbeStub_vboxvmm_em__raw__run__pre(PVTGPROBELOC, RTR0PTR, RTR0PTR);
# define VBOXVMM_EM_RAW_RUN_PRE_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__raw__run__pre)) 
# define VBOXVMM_EM_RAW_RUN_PRE(a_pVCpu, a_pCtx) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__raw__run__pre)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__raw__run__pre }; \
            VTGProbeStub_vboxvmm_em__raw__run__pre(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), VTG_CPUMCTX_TO_R0(a_pVCpu, a_pCtx)); \
        } \
        { \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__raw__run__ret;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__raw__run__ret;
DECLASM(void)          VTGProbeStub_vboxvmm_em__raw__run__ret(PVTGPROBELOC, RTR0PTR, RTR0PTR, int);
# define VBOXVMM_EM_RAW_RUN_RET_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__raw__run__ret)) 
# define VBOXVMM_EM_RAW_RUN_RET(a_pVCpu, a_pCtx, a_rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__raw__run__ret)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__raw__run__ret }; \
            VTGProbeStub_vboxvmm_em__raw__run__ret(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), VTG_CPUMCTX_TO_R0(a_pVCpu, a_pCtx), a_rc); \
        } \
        { \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__ff__high;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__ff__high;
DECLASM(void)          VTGProbeStub_vboxvmm_em__ff__high(PVTGPROBELOC, RTR0PTR, uint32_t, uint32_t, int);
# define VBOXVMM_EM_FF_HIGH_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__high)) 
# define VBOXVMM_EM_FF_HIGH(a_pVCpu, a_fGlobal, a_fLocal, a_rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__high)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__ff__high }; \
            VTGProbeStub_vboxvmm_em__ff__high(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_fGlobal, a_fLocal, a_rc); \
        } \
        { \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_fGlobal) <= 4); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_fLocal) <= 4); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__ff__all;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__ff__all;
DECLASM(void)          VTGProbeStub_vboxvmm_em__ff__all(PVTGPROBELOC, RTR0PTR, uint32_t, uint32_t, int);
# define VBOXVMM_EM_FF_ALL_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__all)) 
# define VBOXVMM_EM_FF_ALL(a_pVCpu, a_fGlobal, a_fLocal, a_rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__all)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__ff__all }; \
            VTGProbeStub_vboxvmm_em__ff__all(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_fGlobal, a_fLocal, a_rc); \
        } \
        { \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_fGlobal) <= 4); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_fLocal) <= 4); \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__ff__all_ret;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__ff__all_ret;
DECLASM(void)          VTGProbeStub_vboxvmm_em__ff__all_ret(PVTGPROBELOC, RTR0PTR, int);
# define VBOXVMM_EM_FF_ALL_RET_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__all_ret)) 
# define VBOXVMM_EM_FF_ALL_RET(a_pVCpu, a_rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__all_ret)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__ff__all_ret }; \
            VTGProbeStub_vboxvmm_em__ff__all_ret(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_rc); \
        } \
        { \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__ff__raw;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__ff__raw;
DECLASM(void)          VTGProbeStub_vboxvmm_em__ff__raw(PVTGPROBELOC, RTR0PTR, uint32_t, uint32_t);
# define VBOXVMM_EM_FF_RAW_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__raw)) 
# define VBOXVMM_EM_FF_RAW(a_pVCpu, a_fGlobal, a_fLocal) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__raw)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__ff__raw }; \
            VTGProbeStub_vboxvmm_em__ff__raw(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_fGlobal, a_fLocal); \
        } \
        { \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_fGlobal) <= 4); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_fLocal) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_em__ff__raw_ret;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_em__ff__raw_ret;
DECLASM(void)          VTGProbeStub_vboxvmm_em__ff__raw_ret(PVTGPROBELOC, RTR0PTR, int);
# define VBOXVMM_EM_FF_RAW_RET_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__raw_ret)) 
# define VBOXVMM_EM_FF_RAW_RET(a_pVCpu, a_rc) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_em__ff__raw_ret)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_em__ff__raw_ret }; \
            VTGProbeStub_vboxvmm_em__ff__raw_ret(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_rc); \
        } \
        { \
        AssertCompile(sizeof(int) == 4); \
        AssertCompile(sizeof(a_rc) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_pdm__irq__get;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_pdm__irq__get;
DECLASM(void)          VTGProbeStub_vboxvmm_pdm__irq__get(PVTGPROBELOC, RTR0PTR, uint32_t, uint32_t, uint32_t);
# define VBOXVMM_PDM_IRQ_GET_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_pdm__irq__get)) 
# define VBOXVMM_PDM_IRQ_GET(a_pVCpu, a_uTag, a_idSource, a_iIrq) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_pdm__irq__get)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_pdm__irq__get }; \
            VTGProbeStub_vboxvmm_pdm__irq__get(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_uTag, a_idSource, a_iIrq); \
        } \
        { \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_uTag) <= 4); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_idSource) <= 4); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_iIrq) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_pdm__irq__high;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_pdm__irq__high;
DECLASM(void)          VTGProbeStub_vboxvmm_pdm__irq__high(PVTGPROBELOC, RTR0PTR, uint32_t, uint32_t);
# define VBOXVMM_PDM_IRQ_HIGH_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_pdm__irq__high)) 
# define VBOXVMM_PDM_IRQ_HIGH(a_pVCpu, a_uTag, a_idSource) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_pdm__irq__high)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_pdm__irq__high }; \
            VTGProbeStub_vboxvmm_pdm__irq__high(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_uTag, a_idSource); \
        } \
        { \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_uTag) <= 4); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_idSource) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_pdm__irq__low;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_pdm__irq__low;
DECLASM(void)          VTGProbeStub_vboxvmm_pdm__irq__low(PVTGPROBELOC, RTR0PTR, uint32_t, uint32_t);
# define VBOXVMM_PDM_IRQ_LOW_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_pdm__irq__low)) 
# define VBOXVMM_PDM_IRQ_LOW(a_pVCpu, a_uTag, a_idSource) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_pdm__irq__low)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_pdm__irq__low }; \
            VTGProbeStub_vboxvmm_pdm__irq__low(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_uTag, a_idSource); \
        } \
        { \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_uTag) <= 4); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_idSource) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_pdm__irq__hilo;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_pdm__irq__hilo;
DECLASM(void)          VTGProbeStub_vboxvmm_pdm__irq__hilo(PVTGPROBELOC, RTR0PTR, uint32_t, uint32_t);
# define VBOXVMM_PDM_IRQ_HILO_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_pdm__irq__hilo)) 
# define VBOXVMM_PDM_IRQ_HILO(a_pVCpu, a_uTag, a_idSource) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_pdm__irq__hilo)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_pdm__irq__hilo }; \
            VTGProbeStub_vboxvmm_pdm__irq__hilo(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), a_uTag, a_idSource); \
        } \
        { \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_uTag) <= 4); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_idSource) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_r0__gvmm__vm__created;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_r0__gvmm__vm__created;
DECLASM(void)          VTGProbeStub_vboxvmm_r0__gvmm__vm__created(PVTGPROBELOC, void *, void *, uint32_t, void *, uint32_t);
# define VBOXVMM_R0_GVMM_VM_CREATED_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_r0__gvmm__vm__created)) 
# define VBOXVMM_R0_GVMM_VM_CREATED(a_pGVM, a_pVM, a_Pid, a_hEMT0, a_cCpus) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_r0__gvmm__vm__created)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_r0__gvmm__vm__created }; \
            VTGProbeStub_vboxvmm_r0__gvmm__vm__created(&s_VTGProbeLoc, a_pGVM, a_pVM, a_Pid, a_hEMT0, a_cCpus); \
        } \
        { \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(a_pGVM) <= 8); \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(a_pVM) <= 8); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_Pid) <= 4); \
        AssertCompile(sizeof(void *) == 8); \
        AssertCompile(sizeof(a_hEMT0) <= 8); \
        AssertCompile(sizeof(uint32_t) == 4); \
        AssertCompile(sizeof(a_cCpus) <= 4); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_r0__hmsvm__vmexit;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_r0__hmsvm__vmexit;
DECLASM(void)          VTGProbeStub_vboxvmm_r0__hmsvm__vmexit(PVTGPROBELOC, RTR0PTR, RTR0PTR, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);
# define VBOXVMM_R0_HMSVM_VMEXIT_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_r0__hmsvm__vmexit)) 
# define VBOXVMM_R0_HMSVM_VMEXIT(a_pVCpu, a_pCtx, a_ExitCode, a_ExitInfo1, a_ExitInfo2, a_ExitIntInfo, a_TestArgument) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_r0__hmsvm__vmexit)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_r0__hmsvm__vmexit }; \
            VTGProbeStub_vboxvmm_r0__hmsvm__vmexit(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), VTG_CPUMCTX_TO_R0(a_pVCpu, a_pCtx), a_ExitCode, a_ExitInfo1, a_ExitInfo2, a_ExitIntInfo, a_TestArgument); \
        } \
        { \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(a_ExitCode) <= 8); \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(a_ExitInfo1) <= 8); \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(a_ExitInfo2) <= 8); \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(a_ExitIntInfo) <= 8); \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(a_TestArgument) <= 8); \
        } \
    } while (0)

extern uint32_t        g_cVTGProbeEnabled_vboxvmm_r0__hmvmx__vmexit;
extern VTGDESCPROBE    g_VTGProbeData_vboxvmm_r0__hmvmx__vmexit;
DECLASM(void)          VTGProbeStub_vboxvmm_r0__hmvmx__vmexit(PVTGPROBELOC, RTR0PTR, RTR0PTR, uint64_t);
# define VBOXVMM_R0_HMVMX_VMEXIT_ENABLED() \
    (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_r0__hmvmx__vmexit)) 
# define VBOXVMM_R0_HMVMX_VMEXIT(a_pVCpu, a_pCtx, a_ExitReason) \
    do { \
        if (RT_UNLIKELY(g_cVTGProbeEnabled_vboxvmm_r0__hmvmx__vmexit)) \
        { \
            VTG_DECL_VTGPROBELOC(s_VTGProbeLoc) = \
            { __LINE__, 0, 0, __FUNCTION__, &g_VTGProbeData_vboxvmm_r0__hmvmx__vmexit }; \
            VTGProbeStub_vboxvmm_r0__hmvmx__vmexit(&s_VTGProbeLoc, VTG_VMCPU_TO_R0(a_pVCpu), VTG_CPUMCTX_TO_R0(a_pVCpu, a_pCtx), a_ExitReason); \
        } \
        { \
        AssertCompile(sizeof(uint64_t) == 8); \
        AssertCompile(sizeof(a_ExitReason) <= 8); \
        } \
    } while (0)


#else

# define VBOXVMM_EM_STATE_CHANGED_ENABLED() (false)
# define VBOXVMM_EM_STATE_CHANGED(a_pVCpu, a_enmOldState, a_enmNewState, a_rc) do { } while (0)
# define VBOXVMM_EM_STATE_UNCHANGED_ENABLED() (false)
# define VBOXVMM_EM_STATE_UNCHANGED(a_pVCpu, a_enmState, a_rc) do { } while (0)
# define VBOXVMM_EM_RAW_RUN_PRE_ENABLED() (false)
# define VBOXVMM_EM_RAW_RUN_PRE(a_pVCpu, a_pCtx) do { } while (0)
# define VBOXVMM_EM_RAW_RUN_RET_ENABLED() (false)
# define VBOXVMM_EM_RAW_RUN_RET(a_pVCpu, a_pCtx, a_rc) do { } while (0)
# define VBOXVMM_EM_FF_HIGH_ENABLED() (false)
# define VBOXVMM_EM_FF_HIGH(a_pVCpu, a_fGlobal, a_fLocal, a_rc) do { } while (0)
# define VBOXVMM_EM_FF_ALL_ENABLED() (false)
# define VBOXVMM_EM_FF_ALL(a_pVCpu, a_fGlobal, a_fLocal, a_rc) do { } while (0)
# define VBOXVMM_EM_FF_ALL_RET_ENABLED() (false)
# define VBOXVMM_EM_FF_ALL_RET(a_pVCpu, a_rc) do { } while (0)
# define VBOXVMM_EM_FF_RAW_ENABLED() (false)
# define VBOXVMM_EM_FF_RAW(a_pVCpu, a_fGlobal, a_fLocal) do { } while (0)
# define VBOXVMM_EM_FF_RAW_RET_ENABLED() (false)
# define VBOXVMM_EM_FF_RAW_RET(a_pVCpu, a_rc) do { } while (0)
# define VBOXVMM_PDM_IRQ_GET_ENABLED() (false)
# define VBOXVMM_PDM_IRQ_GET(a_pVCpu, a_uTag, a_idSource, a_iIrq) do { } while (0)
# define VBOXVMM_PDM_IRQ_HIGH_ENABLED() (false)
# define VBOXVMM_PDM_IRQ_HIGH(a_pVCpu, a_uTag, a_idSource) do { } while (0)
# define VBOXVMM_PDM_IRQ_LOW_ENABLED() (false)
# define VBOXVMM_PDM_IRQ_LOW(a_pVCpu, a_uTag, a_idSource) do { } while (0)
# define VBOXVMM_PDM_IRQ_HILO_ENABLED() (false)
# define VBOXVMM_PDM_IRQ_HILO(a_pVCpu, a_uTag, a_idSource) do { } while (0)
# define VBOXVMM_R0_GVMM_VM_CREATED_ENABLED() (false)
# define VBOXVMM_R0_GVMM_VM_CREATED(a_pGVM, a_pVM, a_Pid, a_hEMT0, a_cCpus) do { } while (0)
# define VBOXVMM_R0_HMSVM_VMEXIT_ENABLED() (false)
# define VBOXVMM_R0_HMSVM_VMEXIT(a_pVCpu, a_pCtx, a_ExitCode, a_ExitInfo1, a_ExitInfo2, a_ExitIntInfo, a_TestArgument) do { } while (0)
# define VBOXVMM_R0_HMVMX_VMEXIT_ENABLED() (false)
# define VBOXVMM_R0_HMVMX_VMEXIT(a_pVCpu, a_pCtx, a_ExitReason) do { } while (0)

#endif

RT_C_DECLS_END
#endif
