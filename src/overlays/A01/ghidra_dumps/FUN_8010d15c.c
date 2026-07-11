// FUN_8010d15c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010d15c(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  iVar1 = func_0x8009a450();
  func_0x80077b38(param_1,0x80139294,iVar1 % 3 + 0x10);
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined2 *)(param_1 + 0x2e) = 0x4c2c;
  *(undefined2 *)(param_1 + 0x32) = 0xf814;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0x1d60;
  return;
}

