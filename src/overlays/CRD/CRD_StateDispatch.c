// CRD_StateDispatch (CRD_StateDispatch) - Card game state dispatch

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 CRD_StateDispatch(int param_1,uint param_2,u8 *param_3)

{
  u8 bVar1;
  u8 bVar2;
  int iVar3;
  u8 *pbVar4;
  u8 auStack_30 [32];
  
  if (((param_2 & 0xff) != 0xff) && (*param_3 < 0xf)) {
    CD_EventMain(auStack_30,0x8018a090,(param_2 & 0xf) << 4,0x8018a0a0,*param_3);
    if (param_3->kind == 0) {
      _DAT_800bf49c = func_0x000808b0(auStack_30,0x10200);
      if (_DAT_800bf49c != -1) {
        func_0x000808f0();
        param_3->kind = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(u8 *)(param_1 + 0x97e) = 3;
      pbVar4 = (u8 *)(param_1 + 0x380);
      bVar2 = 0;
      iVar3 = 0x5fe;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar3 = iVar3 + -1;
        bVar2 = bVar2 ^ bVar1;
      } while (-1 < iVar3);
      *(u8 *)(param_1 + 0x97f) = bVar2;
      _DAT_800bf49c = func_0x000808b0(auStack_30,0x8002);
      if (_DAT_800bf49c != -1) {
        BIOS_Syscall_B0_80080840(_DAT_800bf4b4);
        BIOS_Syscall_B0_80080840(_DAT_800bf4b8);
        BIOS_Syscall_B0_80080840(_DAT_800bf4bc);
        BIOS_Syscall_B0_80080840(_DAT_800bf4c0);
        BIOS_Syscall_B0_800808E0(_DAT_800bf49c,param_1,0x980);
        halt_baddata();
      }
    }
    func_0x000808f0(_DAT_800bf49c);
  }
  return 0;
}

