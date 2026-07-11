// FUN_080225e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080225e0(int param_1)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
  *(undefined2 *)(param_1 + 0x32) = _DAT_800e7eb2;
  *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
  *(undefined2 *)(param_1 + 0x56) = _DAT_800e7fc0;
  *(undefined2 *)(param_1 + 0x58) = _DAT_800e7ed8;
  if (DAT_800e7ea9 != '\0') {
    func_0x0003116c(0x506,param_1 + 0x2c,0xffffffce);
    *(undefined1 *)(param_1 + 4) = 3;
  }
  iVar1 = func_0x0007778c(param_1);
  if (iVar1 != 0) {
    func_0x000517f8(param_1);
  }
  return;
}

