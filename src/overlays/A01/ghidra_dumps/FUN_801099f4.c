// FUN_801099f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801099f4(undefined1 *param_1)

{
  param_1[0xb] = 0x11;
  *(undefined2 *)(param_1 + 0x7a) = 0x1c00;
  *(undefined2 *)(param_1 + 0x7c) = 0x1c00;
  *(undefined2 *)(param_1 + 0x7e) = 0x1c00;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x80077b38(param_1,0x80139294,4);
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x20;
  *(undefined2 *)(param_1 + 0x82) = 0x40;
  *(undefined2 *)(param_1 + 0x84) = 0x20;
  *(undefined2 *)(param_1 + 0x86) = 0x40;
  func_0x8004b354(param_1,0);
  return;
}

