// FUN_08034ef8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08034ef8(undefined1 *param_1)

{
  if (param_1[0x5e] == '\x01') {
    param_1[0x5e] = 0;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    func_0x00077b38(param_1,0x80140e40,0xc);
    func_0x0003116c(0x24,param_1 + 0x2c,0xfffffff6);
    *(undefined2 *)(param_1 + 0x84) = 0x28;
    param_1[0xd] = 0;
    *(undefined2 *)(param_1 + 0x86) = 0x50;
  }
  *param_1 = 1;
  param_1[4] = 1;
  param_1[5] = 0;
  return;
}

