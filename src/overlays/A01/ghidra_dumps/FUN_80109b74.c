// FUN_80109b74

/* WARNING: Removing unreachable block (ram,0x80112ba0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80109b74(undefined1 *param_1)

{
  if (*(short *)(param_1 + 0x68) == 0x7c) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    func_0x80077b38(param_1,0x80139294,7);
    return;
  }
  if (*(short *)(param_1 + 0x68) != 0x7d) {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    param_1[4] = param_1[4] + '\x01';
    param_1[0xd] = 0;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0xfc00;
    func_0x8004130c(param_1);
    param_1[0x46] = param_1[0xbe];
    thunk_FUN_80124efc();
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x80077b38(param_1,0x80139294,8);
  param_1[0xd] = 1;
  *(undefined2 *)(param_1 + 0x68) = 0x7e;
  param_1[3] = 5;
  DAT_800bf9ff = 5;
  return;
}

