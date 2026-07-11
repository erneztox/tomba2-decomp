// FUN_0801e9e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e9e8(int param_1)

{
  _DAT_1f8000c0 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x2c);
  _DAT_1f8000c2 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x30);
  _DAT_1f8000c4 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x34);
  func_0x00084110(&DAT_1f8000f8,*(int *)(param_1 + 0xc0) + 0x18,0x1f800000);
  func_0x00084220(&DAT_1f8000c0,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
  _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
  _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
  func_0x00084660(0x1f800000);
  func_0x00084690(0x1f800000);
  func_0x001175c0(param_1);
  return;
}

