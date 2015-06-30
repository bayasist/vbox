#pragma D option quiet
int g_cErrors;

dtrace:::BEGIN
{
    g_cErrors = 0;
}

dtrace:::BEGIN
/sizeof(X86CPUIDFEATECX) != 4/
{
    printf("error: sizeof(X86CPUIDFEATECX) should be 4, not %u\n", sizeof(X86CPUIDFEATECX));
    g_cErrors++;
}

dtrace:::BEGIN
/sizeof(CPUM) != 648/
{
    printf("error: sizeof(CPUM) should be 648, not %u\n", sizeof(CPUM));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, offCPUMCPU0) != 0/
{
    printf("error: offsetof(CPUM, offCPUMCPU0) should be 0, not %u\n", offsetof(CPUM, offCPUMCPU0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, fHostUseFlags) != 4/
{
    printf("error: offsetof(CPUM, fHostUseFlags) should be 4, not %u\n", offsetof(CPUM, fHostUseFlags));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, CPUFeatures) != 8/
{
    printf("error: offsetof(CPUM, CPUFeatures) should be 8, not %u\n", offsetof(CPUM, CPUFeatures));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, CPUFeaturesExt) != 16/
{
    printf("error: offsetof(CPUM, CPUFeaturesExt) should be 16, not %u\n", offsetof(CPUM, CPUFeaturesExt));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, CPUFeaturesExt) != 16/
{
    printf("error: offsetof(CPUM, CPUFeaturesExt) should be 16, not %u\n", offsetof(CPUM, CPUFeaturesExt));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, CR4) != 24/
{
    printf("error: offsetof(CPUM, CR4) should be 24, not %u\n", offsetof(CPUM, CR4));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, aGuestCpuIdStd) != 40/
{
    printf("error: offsetof(CPUM, aGuestCpuIdStd) should be 40, not %u\n", offsetof(CPUM, aGuestCpuIdStd));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, aGuestCpuIdExt) != 136/
{
    printf("error: offsetof(CPUM, aGuestCpuIdExt) should be 136, not %u\n", offsetof(CPUM, aGuestCpuIdExt));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, aGuestCpuIdCentaur) != 296/
{
    printf("error: offsetof(CPUM, aGuestCpuIdCentaur) should be 296, not %u\n", offsetof(CPUM, aGuestCpuIdCentaur));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, aGuestCpuIdHyper) != 360/
{
    printf("error: offsetof(CPUM, aGuestCpuIdHyper) should be 360, not %u\n", offsetof(CPUM, aGuestCpuIdHyper));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUM, GuestCpuIdDef) != 424/
{
    printf("error: offsetof(CPUM, GuestCpuIdDef) should be 424, not %u\n", offsetof(CPUM, GuestCpuIdDef));
    g_cErrors++;
}

dtrace:::BEGIN
/sizeof(CPUMCPU) != 3584/
{
    printf("error: sizeof(CPUMCPU) should be 3584, not %u\n", sizeof(CPUMCPU));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, Hyper) != 0/
{
    printf("error: offsetof(CPUMCPU, Hyper) should be 0, not %u\n", offsetof(CPUMCPU, Hyper));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, Host) != 1088/
{
    printf("error: offsetof(CPUMCPU, Host) should be 1088, not %u\n", offsetof(CPUMCPU, Host));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, Guest) != 1920/
{
    printf("error: offsetof(CPUMCPU, Guest) should be 1920, not %u\n", offsetof(CPUMCPU, Guest));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, GuestMsrs) != 3008/
{
    printf("error: offsetof(CPUMCPU, GuestMsrs) should be 3008, not %u\n", offsetof(CPUMCPU, GuestMsrs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, fUseFlags) != 3520/
{
    printf("error: offsetof(CPUMCPU, fUseFlags) should be 3520, not %u\n", offsetof(CPUMCPU, fUseFlags));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, fChanged) != 3524/
{
    printf("error: offsetof(CPUMCPU, fChanged) should be 3524, not %u\n", offsetof(CPUMCPU, fChanged));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, offCPUM) != 3528/
{
    printf("error: offsetof(CPUMCPU, offCPUM) should be 3528, not %u\n", offsetof(CPUMCPU, offCPUM));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, u32RetCode) != 3532/
{
    printf("error: offsetof(CPUMCPU, u32RetCode) should be 3532, not %u\n", offsetof(CPUMCPU, u32RetCode));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, pvApicBase) != 3536/
{
    printf("error: offsetof(CPUMCPU, pvApicBase) should be 3536, not %u\n", offsetof(CPUMCPU, pvApicBase));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, fApicDisVectors) != 3544/
{
    printf("error: offsetof(CPUMCPU, fApicDisVectors) should be 3544, not %u\n", offsetof(CPUMCPU, fApicDisVectors));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, fX2Apic) != 3548/
{
    printf("error: offsetof(CPUMCPU, fX2Apic) should be 3548, not %u\n", offsetof(CPUMCPU, fX2Apic));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, fRawEntered) != 3549/
{
    printf("error: offsetof(CPUMCPU, fRawEntered) should be 3549, not %u\n", offsetof(CPUMCPU, fRawEntered));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCPU, fRemEntered) != 3550/
{
    printf("error: offsetof(CPUMCPU, fRemEntered) should be 3550, not %u\n", offsetof(CPUMCPU, fRemEntered));
    g_cErrors++;
}

dtrace:::BEGIN
/sizeof(CPUMHOSTCTX) != 832/
{
    printf("error: sizeof(CPUMHOSTCTX) should be 832, not %u\n", sizeof(CPUMHOSTCTX));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, fpu) != 0/
{
    printf("error: offsetof(CPUMHOSTCTX, fpu) should be 0, not %u\n", offsetof(CPUMHOSTCTX, fpu));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, rbx) != 512/
{
    printf("error: offsetof(CPUMHOSTCTX, rbx) should be 512, not %u\n", offsetof(CPUMHOSTCTX, rbx));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, rdi) != 520/
{
    printf("error: offsetof(CPUMHOSTCTX, rdi) should be 520, not %u\n", offsetof(CPUMHOSTCTX, rdi));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, rsi) != 528/
{
    printf("error: offsetof(CPUMHOSTCTX, rsi) should be 528, not %u\n", offsetof(CPUMHOSTCTX, rsi));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, rbp) != 536/
{
    printf("error: offsetof(CPUMHOSTCTX, rbp) should be 536, not %u\n", offsetof(CPUMHOSTCTX, rbp));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, rsp) != 544/
{
    printf("error: offsetof(CPUMHOSTCTX, rsp) should be 544, not %u\n", offsetof(CPUMHOSTCTX, rsp));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, r10) != 552/
{
    printf("error: offsetof(CPUMHOSTCTX, r10) should be 552, not %u\n", offsetof(CPUMHOSTCTX, r10));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, r11) != 560/
{
    printf("error: offsetof(CPUMHOSTCTX, r11) should be 560, not %u\n", offsetof(CPUMHOSTCTX, r11));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, r12) != 568/
{
    printf("error: offsetof(CPUMHOSTCTX, r12) should be 568, not %u\n", offsetof(CPUMHOSTCTX, r12));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, r13) != 576/
{
    printf("error: offsetof(CPUMHOSTCTX, r13) should be 576, not %u\n", offsetof(CPUMHOSTCTX, r13));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, r14) != 584/
{
    printf("error: offsetof(CPUMHOSTCTX, r14) should be 584, not %u\n", offsetof(CPUMHOSTCTX, r14));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, r15) != 592/
{
    printf("error: offsetof(CPUMHOSTCTX, r15) should be 592, not %u\n", offsetof(CPUMHOSTCTX, r15));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, rflags) != 600/
{
    printf("error: offsetof(CPUMHOSTCTX, rflags) should be 600, not %u\n", offsetof(CPUMHOSTCTX, rflags));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, ss) != 608/
{
    printf("error: offsetof(CPUMHOSTCTX, ss) should be 608, not %u\n", offsetof(CPUMHOSTCTX, ss));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, gs) != 612/
{
    printf("error: offsetof(CPUMHOSTCTX, gs) should be 612, not %u\n", offsetof(CPUMHOSTCTX, gs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, fs) != 616/
{
    printf("error: offsetof(CPUMHOSTCTX, fs) should be 616, not %u\n", offsetof(CPUMHOSTCTX, fs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, es) != 620/
{
    printf("error: offsetof(CPUMHOSTCTX, es) should be 620, not %u\n", offsetof(CPUMHOSTCTX, es));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, ds) != 624/
{
    printf("error: offsetof(CPUMHOSTCTX, ds) should be 624, not %u\n", offsetof(CPUMHOSTCTX, ds));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, cs) != 628/
{
    printf("error: offsetof(CPUMHOSTCTX, cs) should be 628, not %u\n", offsetof(CPUMHOSTCTX, cs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, cr0) != 632/
{
    printf("error: offsetof(CPUMHOSTCTX, cr0) should be 632, not %u\n", offsetof(CPUMHOSTCTX, cr0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, cr3) != 640/
{
    printf("error: offsetof(CPUMHOSTCTX, cr3) should be 640, not %u\n", offsetof(CPUMHOSTCTX, cr3));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, cr4) != 648/
{
    printf("error: offsetof(CPUMHOSTCTX, cr4) should be 648, not %u\n", offsetof(CPUMHOSTCTX, cr4));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, cr8) != 656/
{
    printf("error: offsetof(CPUMHOSTCTX, cr8) should be 656, not %u\n", offsetof(CPUMHOSTCTX, cr8));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, dr0) != 664/
{
    printf("error: offsetof(CPUMHOSTCTX, dr0) should be 664, not %u\n", offsetof(CPUMHOSTCTX, dr0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, dr1) != 672/
{
    printf("error: offsetof(CPUMHOSTCTX, dr1) should be 672, not %u\n", offsetof(CPUMHOSTCTX, dr1));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, dr2) != 680/
{
    printf("error: offsetof(CPUMHOSTCTX, dr2) should be 680, not %u\n", offsetof(CPUMHOSTCTX, dr2));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, dr3) != 688/
{
    printf("error: offsetof(CPUMHOSTCTX, dr3) should be 688, not %u\n", offsetof(CPUMHOSTCTX, dr3));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, dr6) != 696/
{
    printf("error: offsetof(CPUMHOSTCTX, dr6) should be 696, not %u\n", offsetof(CPUMHOSTCTX, dr6));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, dr7) != 704/
{
    printf("error: offsetof(CPUMHOSTCTX, dr7) should be 704, not %u\n", offsetof(CPUMHOSTCTX, dr7));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, gdtr) != 712/
{
    printf("error: offsetof(CPUMHOSTCTX, gdtr) should be 712, not %u\n", offsetof(CPUMHOSTCTX, gdtr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, idtr) != 724/
{
    printf("error: offsetof(CPUMHOSTCTX, idtr) should be 724, not %u\n", offsetof(CPUMHOSTCTX, idtr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, ldtr) != 736/
{
    printf("error: offsetof(CPUMHOSTCTX, ldtr) should be 736, not %u\n", offsetof(CPUMHOSTCTX, ldtr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, tr) != 740/
{
    printf("error: offsetof(CPUMHOSTCTX, tr) should be 740, not %u\n", offsetof(CPUMHOSTCTX, tr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, SysEnter) != 744/
{
    printf("error: offsetof(CPUMHOSTCTX, SysEnter) should be 744, not %u\n", offsetof(CPUMHOSTCTX, SysEnter));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, FSbase) != 768/
{
    printf("error: offsetof(CPUMHOSTCTX, FSbase) should be 768, not %u\n", offsetof(CPUMHOSTCTX, FSbase));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, GSbase) != 776/
{
    printf("error: offsetof(CPUMHOSTCTX, GSbase) should be 776, not %u\n", offsetof(CPUMHOSTCTX, GSbase));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMHOSTCTX, efer) != 784/
{
    printf("error: offsetof(CPUMHOSTCTX, efer) should be 784, not %u\n", offsetof(CPUMHOSTCTX, efer));
    g_cErrors++;
}

dtrace:::BEGIN
/sizeof(CPUMCTX) != 1088/
{
    printf("error: sizeof(CPUMCTX) should be 1088, not %u\n", sizeof(CPUMCTX));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, fpu) != 0/
{
    printf("error: offsetof(CPUMCTX, fpu) should be 0, not %u\n", offsetof(CPUMCTX, fpu));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rdi) != 568/
{
    printf("error: offsetof(CPUMCTX, rdi) should be 568, not %u\n", offsetof(CPUMCTX, rdi));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rsi) != 560/
{
    printf("error: offsetof(CPUMCTX, rsi) should be 560, not %u\n", offsetof(CPUMCTX, rsi));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rbp) != 552/
{
    printf("error: offsetof(CPUMCTX, rbp) should be 552, not %u\n", offsetof(CPUMCTX, rbp));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rax) != 512/
{
    printf("error: offsetof(CPUMCTX, rax) should be 512, not %u\n", offsetof(CPUMCTX, rax));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rbx) != 536/
{
    printf("error: offsetof(CPUMCTX, rbx) should be 536, not %u\n", offsetof(CPUMCTX, rbx));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rdx) != 528/
{
    printf("error: offsetof(CPUMCTX, rdx) should be 528, not %u\n", offsetof(CPUMCTX, rdx));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rcx) != 520/
{
    printf("error: offsetof(CPUMCTX, rcx) should be 520, not %u\n", offsetof(CPUMCTX, rcx));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rsp) != 544/
{
    printf("error: offsetof(CPUMCTX, rsp) should be 544, not %u\n", offsetof(CPUMCTX, rsp));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, es) != 640/
{
    printf("error: offsetof(CPUMCTX, es) should be 640, not %u\n", offsetof(CPUMCTX, es));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, cs) != 664/
{
    printf("error: offsetof(CPUMCTX, cs) should be 664, not %u\n", offsetof(CPUMCTX, cs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, ss) != 688/
{
    printf("error: offsetof(CPUMCTX, ss) should be 688, not %u\n", offsetof(CPUMCTX, ss));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, ds) != 712/
{
    printf("error: offsetof(CPUMCTX, ds) should be 712, not %u\n", offsetof(CPUMCTX, ds));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, fs) != 736/
{
    printf("error: offsetof(CPUMCTX, fs) should be 736, not %u\n", offsetof(CPUMCTX, fs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, gs) != 760/
{
    printf("error: offsetof(CPUMCTX, gs) should be 760, not %u\n", offsetof(CPUMCTX, gs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rflags) != 792/
{
    printf("error: offsetof(CPUMCTX, rflags) should be 792, not %u\n", offsetof(CPUMCTX, rflags));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, rip) != 784/
{
    printf("error: offsetof(CPUMCTX, rip) should be 784, not %u\n", offsetof(CPUMCTX, rip));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, r8) != 576/
{
    printf("error: offsetof(CPUMCTX, r8) should be 576, not %u\n", offsetof(CPUMCTX, r8));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, r9) != 584/
{
    printf("error: offsetof(CPUMCTX, r9) should be 584, not %u\n", offsetof(CPUMCTX, r9));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, r10) != 592/
{
    printf("error: offsetof(CPUMCTX, r10) should be 592, not %u\n", offsetof(CPUMCTX, r10));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, r11) != 600/
{
    printf("error: offsetof(CPUMCTX, r11) should be 600, not %u\n", offsetof(CPUMCTX, r11));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, r12) != 608/
{
    printf("error: offsetof(CPUMCTX, r12) should be 608, not %u\n", offsetof(CPUMCTX, r12));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, r13) != 616/
{
    printf("error: offsetof(CPUMCTX, r13) should be 616, not %u\n", offsetof(CPUMCTX, r13));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, r14) != 624/
{
    printf("error: offsetof(CPUMCTX, r14) should be 624, not %u\n", offsetof(CPUMCTX, r14));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, r15) != 632/
{
    printf("error: offsetof(CPUMCTX, r15) should be 632, not %u\n", offsetof(CPUMCTX, r15));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, cr0) != 800/
{
    printf("error: offsetof(CPUMCTX, cr0) should be 800, not %u\n", offsetof(CPUMCTX, cr0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, cr2) != 808/
{
    printf("error: offsetof(CPUMCTX, cr2) should be 808, not %u\n", offsetof(CPUMCTX, cr2));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, cr3) != 816/
{
    printf("error: offsetof(CPUMCTX, cr3) should be 816, not %u\n", offsetof(CPUMCTX, cr3));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, cr4) != 824/
{
    printf("error: offsetof(CPUMCTX, cr4) should be 824, not %u\n", offsetof(CPUMCTX, cr4));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, dr) != 832/
{
    printf("error: offsetof(CPUMCTX, dr) should be 832, not %u\n", offsetof(CPUMCTX, dr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, gdtr) != 902/
{
    printf("error: offsetof(CPUMCTX, gdtr) should be 902, not %u\n", offsetof(CPUMCTX, gdtr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, idtr) != 918/
{
    printf("error: offsetof(CPUMCTX, idtr) should be 918, not %u\n", offsetof(CPUMCTX, idtr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, ldtr) != 928/
{
    printf("error: offsetof(CPUMCTX, ldtr) should be 928, not %u\n", offsetof(CPUMCTX, ldtr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, tr) != 952/
{
    printf("error: offsetof(CPUMCTX, tr) should be 952, not %u\n", offsetof(CPUMCTX, tr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, SysEnter) != 976/
{
    printf("error: offsetof(CPUMCTX, SysEnter) should be 976, not %u\n", offsetof(CPUMCTX, SysEnter));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, msrEFER) != 1000/
{
    printf("error: offsetof(CPUMCTX, msrEFER) should be 1000, not %u\n", offsetof(CPUMCTX, msrEFER));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, msrSTAR) != 1008/
{
    printf("error: offsetof(CPUMCTX, msrSTAR) should be 1008, not %u\n", offsetof(CPUMCTX, msrSTAR));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, msrPAT) != 1016/
{
    printf("error: offsetof(CPUMCTX, msrPAT) should be 1016, not %u\n", offsetof(CPUMCTX, msrPAT));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, msrLSTAR) != 1024/
{
    printf("error: offsetof(CPUMCTX, msrLSTAR) should be 1024, not %u\n", offsetof(CPUMCTX, msrLSTAR));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, msrCSTAR) != 1032/
{
    printf("error: offsetof(CPUMCTX, msrCSTAR) should be 1032, not %u\n", offsetof(CPUMCTX, msrCSTAR));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, msrSFMASK) != 1040/
{
    printf("error: offsetof(CPUMCTX, msrSFMASK) should be 1040, not %u\n", offsetof(CPUMCTX, msrSFMASK));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, msrKERNELGSBASE) != 1048/
{
    printf("error: offsetof(CPUMCTX, msrKERNELGSBASE) should be 1048, not %u\n", offsetof(CPUMCTX, msrKERNELGSBASE));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, msrApicBase) != 1056/
{
    printf("error: offsetof(CPUMCTX, msrApicBase) should be 1056, not %u\n", offsetof(CPUMCTX, msrApicBase));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, ldtr) != 928/
{
    printf("error: offsetof(CPUMCTX, ldtr) should be 928, not %u\n", offsetof(CPUMCTX, ldtr));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(CPUMCTX, tr) != 952/
{
    printf("error: offsetof(CPUMCTX, tr) should be 952, not %u\n", offsetof(CPUMCTX, tr));
    g_cErrors++;
}

dtrace:::BEGIN
/sizeof(CPUMCTXMSRS) != 512/
{
    printf("error: sizeof(CPUMCTXMSRS) should be 512, not %u\n", sizeof(CPUMCTXMSRS));
    g_cErrors++;
}

dtrace:::BEGIN
/sizeof(CPUMCTXCORE) != 288/
{
    printf("error: sizeof(CPUMCTXCORE) should be 288, not %u\n", sizeof(CPUMCTXCORE));
    g_cErrors++;
}

dtrace:::BEGIN
/sizeof(VM) != 131072/
{
    printf("error: sizeof(VM) should be 131072, not %u\n", sizeof(VM));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, enmVMState) != 0/
{
    printf("error: offsetof(VM, enmVMState) should be 0, not %u\n", offsetof(VM, enmVMState));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fGlobalForcedActions) != 4/
{
    printf("error: offsetof(VM, fGlobalForcedActions) should be 4, not %u\n", offsetof(VM, fGlobalForcedActions));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, paVMPagesR3) != 8/
{
    printf("error: offsetof(VM, paVMPagesR3) should be 8, not %u\n", offsetof(VM, paVMPagesR3));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pSession) != 16/
{
    printf("error: offsetof(VM, pSession) should be 16, not %u\n", offsetof(VM, pSession));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pUVM) != 24/
{
    printf("error: offsetof(VM, pUVM) should be 24, not %u\n", offsetof(VM, pUVM));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pVMR3) != 32/
{
    printf("error: offsetof(VM, pVMR3) should be 32, not %u\n", offsetof(VM, pVMR3));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pVMR0) != 40/
{
    printf("error: offsetof(VM, pVMR0) should be 40, not %u\n", offsetof(VM, pVMR0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pVMRC) != 48/
{
    printf("error: offsetof(VM, pVMRC) should be 48, not %u\n", offsetof(VM, pVMRC));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, hSelf) != 52/
{
    printf("error: offsetof(VM, hSelf) should be 52, not %u\n", offsetof(VM, hSelf));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, cCpus) != 56/
{
    printf("error: offsetof(VM, cCpus) should be 56, not %u\n", offsetof(VM, cCpus));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, uCpuExecutionCap) != 60/
{
    printf("error: offsetof(VM, uCpuExecutionCap) should be 60, not %u\n", offsetof(VM, uCpuExecutionCap));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, cbSelf) != 64/
{
    printf("error: offsetof(VM, cbSelf) should be 64, not %u\n", offsetof(VM, cbSelf));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pfnVMMRCToHostAsm) != 72/
{
    printf("error: offsetof(VM, pfnVMMRCToHostAsm) should be 72, not %u\n", offsetof(VM, pfnVMMRCToHostAsm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pfnVMMRCToHostAsmNoReturn) != 76/
{
    printf("error: offsetof(VM, pfnVMMRCToHostAsmNoReturn) should be 76, not %u\n", offsetof(VM, pfnVMMRCToHostAsmNoReturn));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fRecompileUser) != 80/
{
    printf("error: offsetof(VM, fRecompileUser) should be 80, not %u\n", offsetof(VM, fRecompileUser));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fRecompileSupervisor) != 81/
{
    printf("error: offsetof(VM, fRecompileSupervisor) should be 81, not %u\n", offsetof(VM, fRecompileSupervisor));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fPATMEnabled) != 83/
{
    printf("error: offsetof(VM, fPATMEnabled) should be 83, not %u\n", offsetof(VM, fPATMEnabled));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fCSAMEnabled) != 84/
{
    printf("error: offsetof(VM, fCSAMEnabled) should be 84, not %u\n", offsetof(VM, fCSAMEnabled));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fHMEnabled) != 85/
{
    printf("error: offsetof(VM, fHMEnabled) should be 85, not %u\n", offsetof(VM, fHMEnabled));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fHMEnabledFixed) != 86/
{
    printf("error: offsetof(VM, fHMEnabledFixed) should be 86, not %u\n", offsetof(VM, fHMEnabledFixed));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fFaultTolerantMaster) != 88/
{
    printf("error: offsetof(VM, fFaultTolerantMaster) should be 88, not %u\n", offsetof(VM, fFaultTolerantMaster));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, fUseLargePages) != 89/
{
    printf("error: offsetof(VM, fUseLargePages) should be 89, not %u\n", offsetof(VM, fUseLargePages));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, hTraceBufRC) != 92/
{
    printf("error: offsetof(VM, hTraceBufRC) should be 92, not %u\n", offsetof(VM, hTraceBufRC));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, hTraceBufR3) != 96/
{
    printf("error: offsetof(VM, hTraceBufR3) should be 96, not %u\n", offsetof(VM, hTraceBufR3));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, hTraceBufR0) != 104/
{
    printf("error: offsetof(VM, hTraceBufR0) should be 104, not %u\n", offsetof(VM, hTraceBufR0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatTotalQemuToGC) != 112/
{
    printf("error: offsetof(VM, StatTotalQemuToGC) should be 112, not %u\n", offsetof(VM, StatTotalQemuToGC));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatTotalGCToQemu) != 152/
{
    printf("error: offsetof(VM, StatTotalGCToQemu) should be 152, not %u\n", offsetof(VM, StatTotalGCToQemu));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatTotalInGC) != 192/
{
    printf("error: offsetof(VM, StatTotalInGC) should be 192, not %u\n", offsetof(VM, StatTotalInGC));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatTotalInQemu) != 232/
{
    printf("error: offsetof(VM, StatTotalInQemu) should be 232, not %u\n", offsetof(VM, StatTotalInQemu));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherToGC) != 272/
{
    printf("error: offsetof(VM, StatSwitcherToGC) should be 272, not %u\n", offsetof(VM, StatSwitcherToGC));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherToHC) != 312/
{
    printf("error: offsetof(VM, StatSwitcherToHC) should be 312, not %u\n", offsetof(VM, StatSwitcherToHC));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherSaveRegs) != 352/
{
    printf("error: offsetof(VM, StatSwitcherSaveRegs) should be 352, not %u\n", offsetof(VM, StatSwitcherSaveRegs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherSysEnter) != 392/
{
    printf("error: offsetof(VM, StatSwitcherSysEnter) should be 392, not %u\n", offsetof(VM, StatSwitcherSysEnter));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherDebug) != 432/
{
    printf("error: offsetof(VM, StatSwitcherDebug) should be 432, not %u\n", offsetof(VM, StatSwitcherDebug));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherCR0) != 472/
{
    printf("error: offsetof(VM, StatSwitcherCR0) should be 472, not %u\n", offsetof(VM, StatSwitcherCR0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherCR4) != 512/
{
    printf("error: offsetof(VM, StatSwitcherCR4) should be 512, not %u\n", offsetof(VM, StatSwitcherCR4));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherJmpCR3) != 552/
{
    printf("error: offsetof(VM, StatSwitcherJmpCR3) should be 552, not %u\n", offsetof(VM, StatSwitcherJmpCR3));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherRstrRegs) != 592/
{
    printf("error: offsetof(VM, StatSwitcherRstrRegs) should be 592, not %u\n", offsetof(VM, StatSwitcherRstrRegs));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherLgdt) != 632/
{
    printf("error: offsetof(VM, StatSwitcherLgdt) should be 632, not %u\n", offsetof(VM, StatSwitcherLgdt));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherLidt) != 672/
{
    printf("error: offsetof(VM, StatSwitcherLidt) should be 672, not %u\n", offsetof(VM, StatSwitcherLidt));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherLldt) != 712/
{
    printf("error: offsetof(VM, StatSwitcherLldt) should be 712, not %u\n", offsetof(VM, StatSwitcherLldt));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, StatSwitcherTSS) != 752/
{
    printf("error: offsetof(VM, StatSwitcherTSS) should be 752, not %u\n", offsetof(VM, StatSwitcherTSS));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, cpum) != 832/
{
    printf("error: offsetof(VM, cpum) should be 832, not %u\n", offsetof(VM, cpum));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, vmm) != 2368/
{
    printf("error: offsetof(VM, vmm) should be 2368, not %u\n", offsetof(VM, vmm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pgm) != 3968/
{
    printf("error: offsetof(VM, pgm) should be 3968, not %u\n", offsetof(VM, pgm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, hm) != 18240/
{
    printf("error: offsetof(VM, hm) should be 18240, not %u\n", offsetof(VM, hm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, trpm) != 23680/
{
    printf("error: offsetof(VM, trpm) should be 23680, not %u\n", offsetof(VM, trpm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, selm) != 28928/
{
    printf("error: offsetof(VM, selm) should be 28928, not %u\n", offsetof(VM, selm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, mm) != 29696/
{
    printf("error: offsetof(VM, mm) should be 29696, not %u\n", offsetof(VM, mm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, pdm) != 29888/
{
    printf("error: offsetof(VM, pdm) should be 29888, not %u\n", offsetof(VM, pdm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, iom) != 31808/
{
    printf("error: offsetof(VM, iom) should be 31808, not %u\n", offsetof(VM, iom));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, patm) != 32704/
{
    printf("error: offsetof(VM, patm) should be 32704, not %u\n", offsetof(VM, patm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, csam) != 33472/
{
    printf("error: offsetof(VM, csam) should be 33472, not %u\n", offsetof(VM, csam));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, em) != 34560/
{
    printf("error: offsetof(VM, em) should be 34560, not %u\n", offsetof(VM, em));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, tm) != 34816/
{
    printf("error: offsetof(VM, tm) should be 34816, not %u\n", offsetof(VM, tm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, dbgf) != 37312/
{
    printf("error: offsetof(VM, dbgf) should be 37312, not %u\n", offsetof(VM, dbgf));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, ssm) != 39680/
{
    printf("error: offsetof(VM, ssm) should be 39680, not %u\n", offsetof(VM, ssm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, ftm) != 39808/
{
    printf("error: offsetof(VM, ftm) should be 39808, not %u\n", offsetof(VM, ftm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, rem) != 40320/
{
    printf("error: offsetof(VM, rem) should be 40320, not %u\n", offsetof(VM, rem));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, vm) != 110208/
{
    printf("error: offsetof(VM, vm) should be 110208, not %u\n", offsetof(VM, vm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, cfgm) != 110232/
{
    printf("error: offsetof(VM, cfgm) should be 110232, not %u\n", offsetof(VM, cfgm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VM, aCpus) != 110592/
{
    printf("error: offsetof(VM, aCpus) should be 110592, not %u\n", offsetof(VM, aCpus));
    g_cErrors++;
}

dtrace:::BEGIN
/sizeof(VMCPU) != 20480/
{
    printf("error: sizeof(VMCPU) should be 20480, not %u\n", sizeof(VMCPU));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, fLocalForcedActions) != 0/
{
    printf("error: offsetof(VMCPU, fLocalForcedActions) should be 0, not %u\n", offsetof(VMCPU, fLocalForcedActions));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, enmState) != 4/
{
    printf("error: offsetof(VMCPU, enmState) should be 4, not %u\n", offsetof(VMCPU, enmState));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, pUVCpu) != 8/
{
    printf("error: offsetof(VMCPU, pUVCpu) should be 8, not %u\n", offsetof(VMCPU, pUVCpu));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, pVMR3) != 16/
{
    printf("error: offsetof(VMCPU, pVMR3) should be 16, not %u\n", offsetof(VMCPU, pVMR3));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, pVMR0) != 24/
{
    printf("error: offsetof(VMCPU, pVMR0) should be 24, not %u\n", offsetof(VMCPU, pVMR0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, pVMRC) != 32/
{
    printf("error: offsetof(VMCPU, pVMRC) should be 32, not %u\n", offsetof(VMCPU, pVMRC));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, idCpu) != 36/
{
    printf("error: offsetof(VMCPU, idCpu) should be 36, not %u\n", offsetof(VMCPU, idCpu));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, hNativeThread) != 40/
{
    printf("error: offsetof(VMCPU, hNativeThread) should be 40, not %u\n", offsetof(VMCPU, hNativeThread));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, hNativeThreadR0) != 48/
{
    printf("error: offsetof(VMCPU, hNativeThreadR0) should be 48, not %u\n", offsetof(VMCPU, hNativeThreadR0));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, idHostCpu) != 56/
{
    printf("error: offsetof(VMCPU, idHostCpu) should be 56, not %u\n", offsetof(VMCPU, idHostCpu));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, fTraceGroups) != 60/
{
    printf("error: offsetof(VMCPU, fTraceGroups) should be 60, not %u\n", offsetof(VMCPU, fTraceGroups));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, uAdHoc) != 124/
{
    printf("error: offsetof(VMCPU, uAdHoc) should be 124, not %u\n", offsetof(VMCPU, uAdHoc));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, aStatAdHoc) != 128/
{
    printf("error: offsetof(VMCPU, aStatAdHoc) should be 128, not %u\n", offsetof(VMCPU, aStatAdHoc));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, cpum) != 448/
{
    printf("error: offsetof(VMCPU, cpum) should be 448, not %u\n", offsetof(VMCPU, cpum));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, hm) != 4032/
{
    printf("error: offsetof(VMCPU, hm) should be 4032, not %u\n", offsetof(VMCPU, hm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, em) != 9600/
{
    printf("error: offsetof(VMCPU, em) should be 9600, not %u\n", offsetof(VMCPU, em));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, iem) != 11072/
{
    printf("error: offsetof(VMCPU, iem) should be 11072, not %u\n", offsetof(VMCPU, iem));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, trpm) != 14144/
{
    printf("error: offsetof(VMCPU, trpm) should be 14144, not %u\n", offsetof(VMCPU, trpm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, tm) != 14272/
{
    printf("error: offsetof(VMCPU, tm) should be 14272, not %u\n", offsetof(VMCPU, tm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, vmm) != 14656/
{
    printf("error: offsetof(VMCPU, vmm) should be 14656, not %u\n", offsetof(VMCPU, vmm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, pdm) != 15360/
{
    printf("error: offsetof(VMCPU, pdm) should be 15360, not %u\n", offsetof(VMCPU, pdm));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, iom) != 15616/
{
    printf("error: offsetof(VMCPU, iom) should be 15616, not %u\n", offsetof(VMCPU, iom));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, dbgf) != 16128/
{
    printf("error: offsetof(VMCPU, dbgf) should be 16128, not %u\n", offsetof(VMCPU, dbgf));
    g_cErrors++;
}

dtrace:::BEGIN
/offsetof(VMCPU, pgm) != 16384/
{
    printf("error: offsetof(VMCPU, pgm) should be 16384, not %u\n", offsetof(VMCPU, pgm));
    g_cErrors++;
}

dtrace:::BEGIN
/g_cErrors != 0/
{
    printf("%u errors!\n", g_cErrors);
    exit(1);
}

dtrace:::BEGIN
{
    printf("Success!\n");
    exit(0);
}

