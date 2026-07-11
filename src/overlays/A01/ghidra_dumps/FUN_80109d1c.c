// FUN_80109d1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80109d1c(int param_1)

{
  short extraout_var;
  int iVar1;
  
  *(short *)(param_1 + 0x2e) =
       (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
  *(short *)(param_1 + 0x32) =
       (short)((*(int *)(_DAT_800e7f50 + 0x30) + *(int *)(_DAT_800e7f5c + 0x30)) / 2);
  *(short *)(param_1 + 0x36) =
       (short)((*(int *)(_DAT_800e7f50 + 0x34) + *(int *)(_DAT_800e7f5c + 0x34)) / 2);
  iVar1 = func_0x80083f50((int)_DAT_800e7ed6);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar1 >> 6);
  func_0x80083f50((int)_DAT_800e7ed6);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + extraout_var;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x14;
  return;
}

