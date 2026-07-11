// FUN_08034f7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08034f7c(undefined1 *param_1)

{
  *param_1 = 1;
  param_1[4] = 1;
  param_1[5] = 0;
  if (param_1[0x5e] == '\0') {
    param_1[0x5e] = 1;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    func_0x00077b38(param_1,0x80140e40,8);
    *(undefined2 *)(param_1 + 0x84) = 100;
    param_1[0xd] = 1;
    *(undefined2 *)(param_1 + 0x86) = 0x8c;
  }
  return;
}

