#ifdef VBOX_HAVE_VISIBILITY_HIDDEN
# define EXPORT __attribute__((visibility("default")))
#else
# define EXPORT
#endif


EXPORT
void REMR3Init(void);
void REMR3Init(void){}
EXPORT
void REMR3InitFinalize(void);
void REMR3InitFinalize(void){}
EXPORT
void REMR3Term(void);
void REMR3Term(void){}
EXPORT
void REMR3Reset(void);
void REMR3Reset(void){}
EXPORT
void REMR3Step(void);
void REMR3Step(void){}
EXPORT
void REMR3BreakpointSet(void);
void REMR3BreakpointSet(void){}
EXPORT
void REMR3BreakpointClear(void);
void REMR3BreakpointClear(void){}
EXPORT
void REMR3Run(void);
void REMR3Run(void){}
EXPORT
void REMR3EmulateInstruction(void);
void REMR3EmulateInstruction(void){}
EXPORT
void REMR3State(void);
void REMR3State(void){}
EXPORT
void REMR3StateBack(void);
void REMR3StateBack(void){}
EXPORT
void REMR3StateUpdate(void);
void REMR3StateUpdate(void){}
EXPORT
void REMR3A20Set(void);
void REMR3A20Set(void){}
EXPORT
void REMR3DisasEnableStepping(void);
void REMR3DisasEnableStepping(void){}
EXPORT
void REMR3ReplayHandlerNotifications(void);
void REMR3ReplayHandlerNotifications(void){}
EXPORT
void REMR3NotifyPhysRamRegister(void);
void REMR3NotifyPhysRamRegister(void){}
EXPORT
void REMR3NotifyPhysRamDeregister(void);
void REMR3NotifyPhysRamDeregister(void){}
EXPORT
void REMR3NotifyPhysRomRegister(void);
void REMR3NotifyPhysRomRegister(void){}
EXPORT
void REMR3NotifyHandlerPhysicalModify(void);
void REMR3NotifyHandlerPhysicalModify(void){}
EXPORT
void REMR3NotifyHandlerPhysicalRegister(void);
void REMR3NotifyHandlerPhysicalRegister(void){}
EXPORT
void REMR3NotifyHandlerPhysicalDeregister(void);
void REMR3NotifyHandlerPhysicalDeregister(void){}
EXPORT
void REMR3NotifyInterruptSet(void);
void REMR3NotifyInterruptSet(void){}
EXPORT
void REMR3NotifyInterruptClear(void);
void REMR3NotifyInterruptClear(void){}
EXPORT
void REMR3NotifyTimerPending(void);
void REMR3NotifyTimerPending(void){}
EXPORT
void REMR3NotifyDmaPending(void);
void REMR3NotifyDmaPending(void){}
EXPORT
void REMR3NotifyQueuePending(void);
void REMR3NotifyQueuePending(void){}
EXPORT
void REMR3NotifyFF(void);
void REMR3NotifyFF(void){}
EXPORT
void REMR3NotifyCodePageChanged(void);
void REMR3NotifyCodePageChanged(void){}
EXPORT
void REMR3IsPageAccessHandled(void);
void REMR3IsPageAccessHandled(void){}
EXPORT
void REMR3NotifyPendingInterrupt(void);
void REMR3NotifyPendingInterrupt(void){}
EXPORT
void REMR3QueryPendingInterrupt(void);
void REMR3QueryPendingInterrupt(void){}
