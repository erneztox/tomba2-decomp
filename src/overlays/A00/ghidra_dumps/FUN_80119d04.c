// FUN_80119d04

void FUN_80119d04(undefined1 *param_1,undefined4 param_2)

{
  if (DAT_800bf8b9 != -1) {
    param_1[4] = 3;
    func_0x80074590(param_1,param_2,0x1e);
    return;
  }
  if (param_1[6] != '\0') {
    if (param_1[6] != '\x01') {
      FUN_80122d38();
      return;
    }
    func_0x80076d68(param_1);
    func_0x800518fc(param_1);
    func_0x8007778c(param_1);
    return;
  }
  param_1[6] = 1;
  *param_1 = 2;
  *(undefined2 *)(param_1 + 0x56) = 0x400;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0x40) = 8;
  func_0x80077cfc(param_1,&DAT_8014e4ec,4,4);
  FUN_80122d38();
  return;
}

