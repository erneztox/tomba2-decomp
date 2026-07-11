// FUN_801134d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801134d0(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 1;
  param_1[4] = 1;
  param_1[5] = 1;
  param_1[6] = 0;
  iVar1 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                       0x10000) >> 0x10);
  if (iVar1 != 0) {
    func_0x800517f8(param_1);
  }
  return;
}

