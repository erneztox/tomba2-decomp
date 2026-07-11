// FUN_08039bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08039bc0(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  uVar2 = func_0x0009a450();
  func_0x00077b38(param_1,0x80140e40,(uVar2 & 3) + 0xe);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  bVar1 = func_0x0009a450();
  *(byte *)(param_1 + 0x5e) = bVar1 & 3;
  *(undefined2 *)(param_1 + 0x2e) = 0x3a41;
  *(undefined2 *)(param_1 + 0x32) = 0xd2c9;
  *(undefined2 *)(param_1 + 0x36) = 0x46be;
  return;
}

