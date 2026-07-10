// FUN_000040f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000040f8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x00077b38(param_1,0x8010d8ac,4);
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 8) = 0xe0;
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar1 + 0x2e);
  *(short *)(param_1 + 0x32) = *(short *)(iVar1 + 0x32) + -0x118;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar1 + 0x36);
  return;
}

