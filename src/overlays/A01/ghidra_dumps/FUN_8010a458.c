// FUN_8010a458

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010a458(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc0);
  if (param_1[5] == '\0') {
    param_1[5] = 1;
    *param_1 = 1;
    func_0x8004b354(param_1,0);
  }
  else if (param_1[5] != '\x01') {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0x5e] = 0;
    FUN_8011aff0(param_1);
    iVar1 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32))
                                         * 0x10000) >> 0x10);
    if (iVar1 != 0) {
      func_0x800517f8(param_1);
    }
    return;
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar1 + 0x2c);
  *(short *)(param_1 + 0x32) = *(short *)(iVar1 + 0x30) + -0x48;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar1 + 0x34);
  iVar1 = func_0x8007778c(param_1);
  if (iVar1 != 0) {
    func_0x8004b374(param_1,0);
  }
  return;
}

