// FUN_0801d228

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d228(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0x17,5);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfb8;
    **(short **)(param_1 + 0xc0) = **(short **)(param_1 + 0xc0) + -100;
    if (param_1[5] == '\0') {
      *param_1 = 1;
    }
    *(undefined2 *)(param_1 + 0x80) = 100;
    *(undefined2 *)(param_1 + 0x82) = 200;
    *(undefined2 *)(param_1 + 0x84) = 0x14;
    *(undefined2 *)(param_1 + 0x86) = 0x32;
    func_0x0004b354(param_1,1);
  }
  return;
}

