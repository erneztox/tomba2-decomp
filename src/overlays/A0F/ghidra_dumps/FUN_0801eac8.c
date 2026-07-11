// FUN_0801eac8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801eac8(undefined1 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  param_1[8] = 1;
  if (_DAT_800ed098 < 1) {
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[9] = 1;
  *param_1 = 1;
  param_1[0xb] = 2;
  *(undefined2 *)(param_1 + 0x60) = 10;
  *(undefined2 *)(param_1 + 0x62) = 0x3feb;
  *(undefined2 *)(param_1 + 100) = 0xe400;
  *(undefined2 *)(param_1 + 0x66) = 0xe40f;
  *(undefined2 *)(param_1 + 0x68) = 0xf400;
  *(undefined2 *)(param_1 + 0x6a) = 0xf40f;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x5e] = 0;
  param_1[0xbf] = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0x50;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  param_1[4] = param_1[4] + '\x01';
  iVar2 = func_0x0007aae8();
  *(int *)(param_1 + 0xc0) = iVar2;
  *(undefined2 *)(iVar2 + 6) = 0xffff;
  uVar1 = _DAT_80120998;
  **(undefined2 **)(param_1 + 0xc0) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x88) = uVar1;
  *(undefined2 *)(param_1 + 0x8a) = _DAT_8012099a;
  *(undefined2 *)(param_1 + 0x8c) = _DAT_8012099c;
  *(undefined2 *)(param_1 + 0x54) = _DAT_8012099e;
  *(undefined2 *)(param_1 + 0x56) = _DAT_801209a0;
  *(undefined2 *)(param_1 + 0x58) = _DAT_801209a2;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = _DAT_801209a4;
  *(undefined2 *)(param_1 + 0x80) = _DAT_801209a6;
  *(undefined2 *)(param_1 + 0x82) = _DAT_801209a8;
  *(undefined2 *)(param_1 + 0x84) = _DAT_801209aa;
  *(undefined2 *)(param_1 + 0x86) = _DAT_801209ac;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x200;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x16) =
       *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x12) = 0;
  uVar1 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2);
  param_1[0x47] = 3;
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) - *(short *)(*(int *)(param_1 + 0xc0) + 0x3a);
  *(short *)(param_1 + 0x56) = -_DAT_1f8000f2;
  func_0x000517f8(param_1);
  return;
}

