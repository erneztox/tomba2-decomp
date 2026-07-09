// FUN_801214a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801214a0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -1;
  func_0x8003cca4();
  bVar1 = *(char *)(param_1 + 8) + 1;
  *(byte *)(param_1 + 8) = bVar1;
  iVar2 = *(int *)(param_1 + (bVar1 - 1) * 4 + 0xc0);
  _DAT_1f8000c0 = *(undefined2 *)(iVar2 + 0x2c);
  _DAT_1f8000c2 = *(undefined2 *)(iVar2 + 0x30);
  _DAT_1f8000c4 = *(undefined2 *)(iVar2 + 0x34);
  func_0x80084110(&DAT_1f8000f8,iVar2 + 0x18,0x1f800000);
  func_0x80084220(&DAT_1f8000c0,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
  _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
  _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
  func_0x80084660(0x1f800000);
  func_0x80084690(0x1f800000);
  FUN_8012a2d8(param_1,iVar2);
  return;
}

