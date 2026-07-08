
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80063158(byte *param_1)

{
  byte bVar1;
  short sVar2;
  
  sVar2 = *(short *)(param_1 + 0x154);
  *(short *)(param_1 + 0x154) = sVar2 + -0x20;
  if ((short)(sVar2 + -0x20) < 0x20) {
    param_1[0x154] = 0x20;
    param_1[0x155] = 0;
  }
  *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + *(short *)(param_1 + 0x154);
  if (param_1[0x15c] == param_1[0x147]) {
    sVar2 = *(short *)(param_1 + 0x56) - *(short *)(param_1 + 0x154);
  }
  else {
    sVar2 = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x154);
  }
  *(short *)(param_1 + 0x56) = sVar2;
  if (0x400 < *(short *)(param_1 + 0x42)) {
    if ((_DAT_800e7e68 & _DAT_1f800172) != 0) {
      param_1[0x5e] = param_1[0x5e] | 1;
    }
    if (((param_1[0x174] & 7) == 0) && ((_DAT_800e7e68 & _DAT_1f800174) != 0)) {
      param_1[0x5e] = param_1[0x5e] | 2;
    }
  }
  if (*(short *)(param_1 + 0x42) < 0x801) {
    return;
  }
  if (param_1[0x147] == 0) {
    param_1[0x147] = 1;
    param_1[0x149] = 3;
    param_1[0x14a] = 3;
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x140) + 0x800;
  }
  else {
    param_1[0x147] = 0;
    param_1[0x149] = 2;
    param_1[0x14a] = 2;
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x140);
  }
  if ((*(short *)(param_1 + 0x16e) < 1) || (bVar1 = *param_1, (bVar1 & 2) != 0)) {
    bVar1 = *param_1;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  else {
    if ((param_1[0x5e] & 1) != 0) {
      *param_1 = bVar1 & 3;
      param_1[0x5e] = 0;
      FUN_80064524();
      return;
    }
    if ((param_1[0x5e] & 2) != 0) {
      *param_1 = bVar1 & 3;
      param_1[0x5e] = 0;
      FUN_800645cc();
      return;
    }
    param_1[0x154] = 0;
    param_1[0x155] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    if ((((_DAT_800ecf54 & _DAT_1f80016c) != 0) && (param_1[0x147] == 0)) ||
       (((_DAT_800ecf54 & _DAT_1f80016e) != 0 && (param_1[0x147] == 1)))) {
      param_1[7] = 0;
      return;
    }
    bVar1 = *param_1;
  }
  param_1[7] = 2;
  *param_1 = bVar1 & 3;
  return;
}

