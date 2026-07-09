// FUN_8013731c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8013731c(int param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(byte *)(param_1 + 0x46) != param_2) {
    *(char *)(param_1 + 0x46) = (char)param_2;
    if (param_3 == '\0') {
      func_0x80077c40(param_1,0x8014cda8,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x80077cfc(param_1,0x8014cda8,param_2,param_3);
    uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x38) + 2);
    iVar2 = uVar4 * 8;
    *(ushort *)(param_1 + 0x80) = (ushort)*(byte *)(iVar2 + -0x7feb40fc);
    *(ushort *)(param_1 + 0x82) = (ushort)*(byte *)(iVar2 + -0x7feb40fb);
    *(ushort *)(param_1 + 0x84) = (ushort)*(byte *)(iVar2 + -0x7feb40fa);
    *(ushort *)(param_1 + 0x86) = (ushort)*(byte *)(iVar2 + -0x7feb40f9);
    *(short *)(param_1 + 0x7c) = (short)*(char *)(iVar2 + -0x7feb40f8);
    *(short *)(param_1 + 0x7e) = (short)*(char *)(iVar2 + -0x7feb40f7);
    iVar1 = _DAT_800ecfb0;
    iVar3 = _DAT_800ecfb0 + 4;
    *(int *)(*(int *)(param_1 + 0xc4) + 0x40) =
         _DAT_800ecfb0 +
         *(int *)((uint)*(byte *)((*(byte *)(iVar2 + -0x7feb40f6) & 0xf) + 0x8014bf58) * 4 + iVar3);
    *(int *)(*(int *)(param_1 + 0xe4) + 0x40) =
         iVar1 + *(int *)((uint)*(byte *)((*(byte *)(iVar2 + -0x7feb40f5) & 0xf) + 0x8014bf54) * 4 +
                         iVar3);
    if ((*(byte *)(iVar2 + -0x7feb40f5) & 0x80) != 0) {
      FUN_8014041c();
      return;
    }
    *(int *)(*(int *)(param_1 + 0xfc) + 0x40) = iVar1 + *(int *)(iVar1 + 0x40);
    if ((*(byte *)(uVar4 * 8 + -0x7feb40f5) & 0x10) != 0) {
      FUN_80140464();
      return;
    }
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
  }
  return;
}

