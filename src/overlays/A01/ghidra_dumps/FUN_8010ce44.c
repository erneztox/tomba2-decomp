// FUN_8010ce44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010ce44(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x80051b70(param_1,0xc,0x18);
  if (iVar1 == 0) {
    *(short *)(param_1 + 0x2e) =
         (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
    *(short *)(param_1 + 0x32) =
         (short)((*(int *)(_DAT_800e7f50 + 0x30) + *(int *)(_DAT_800e7f5c + 0x30)) / 2);
    iVar1 = *(int *)(_DAT_800e7f50 + 0x34);
    iVar2 = *(int *)(_DAT_800e7f5c + 0x34);
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x20;
    *(undefined2 *)(param_1 + 0x80) = 0x40;
    *(undefined2 *)(param_1 + 0x82) = 0x80;
    *(undefined2 *)(param_1 + 0x84) = 100;
    *(undefined2 *)(param_1 + 0x86) = 100;
    *(short *)(param_1 + 0x36) = (short)((iVar1 + iVar2) / 2);
  }
  return;
}

