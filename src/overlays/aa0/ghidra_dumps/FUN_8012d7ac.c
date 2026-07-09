// FUN_8012d7ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012d7ac(int param_1)

{
  func_0x8003cca4();
  _DAT_1f8000c0 = *(undefined2 *)(*(int *)(param_1 + 200) + 0x2c);
  _DAT_1f8000c2 = *(undefined2 *)(*(int *)(param_1 + 200) + 0x30);
  _DAT_1f8000c4 = *(short *)(*(int *)(param_1 + 200) + 0x34) + 0x2e;
  func_0x80084470(&DAT_1f8000f8,&DAT_1f8000c0,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
  _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
  _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
  func_0x80084660(&DAT_1f8000f8);
  func_0x80084690(0x1f800000);
  FUN_801365c4(param_1,(int)*(short *)(param_1 + 0xba));
  return;
}

