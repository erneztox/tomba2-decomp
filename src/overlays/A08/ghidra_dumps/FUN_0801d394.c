// FUN_0801d394

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d394(undefined1 *param_1)

{
  param_1[0xb] = 0x10;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x00077b38(param_1,0x801486ec,0x10);
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x14;
  *(undefined2 *)(param_1 + 0x82) = 0x28;
  *(undefined2 *)(param_1 + 0x84) = 0x14;
  *(undefined2 *)(param_1 + 0x86) = 0x28;
  func_0x0004b354(param_1,0);
  return;
}

