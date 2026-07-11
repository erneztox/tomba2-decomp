// FUN_08012e68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012e68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x00077b38(param_1,0x8010d490,0);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar1 + 0xdc) + 0x2c);
  *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar1 + 0xdc) + 0x30) + 0x14;
  *(short *)(param_1 + 0x36) = *(short *)(*(int *)(iVar1 + 0xdc) + 0x34) + -0x50;
  return;
}

