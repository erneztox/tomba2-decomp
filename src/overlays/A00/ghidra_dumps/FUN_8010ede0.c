// FUN_8010ede0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010ede0(undefined1 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  param_1[0xb] = 0x10;
  param_1[8] = 0xf8;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0xd] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x80077b38(param_1,0x8014c808,1);
  *(undefined4 *)(param_1 + 0x2c) = 0x13d20000;
  *(undefined4 *)(param_1 + 0x30) = 0xf7e00000;
  *(undefined4 *)(param_1 + 0x34) = 0x15aa0000;
  *(undefined2 *)(param_1 + 0x80) = 0x3c;
  *(undefined2 *)(param_1 + 0x82) = 0x78;
  *(undefined2 *)(param_1 + 0x84) = 0x50;
  *(undefined2 *)(param_1 + 0x86) = 0xa0;
  *param_1 = 4;
  *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(param_1 + 0x2e);
  *(short *)(iVar2 + 8) = *(short *)(param_1 + 0x32) + -0x1a4;
  uVar1 = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(iVar2 + 0x16) = 0x1e;
  *(undefined2 *)(iVar2 + 10) = uVar1;
  param_1[4] = param_1[4] + '\x01';
  func_0x8004b354(param_1,0);
  return;
}

