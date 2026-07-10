// FUN_80066de8

void FUN_80066de8(undefined1 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_1[6] == '\0') {
    *(undefined2 *)(param_1 + 0x172) = 0x78;
    FUN_80074590(0x23,0,0);
    *(undefined2 *)(param_1 + 0x58) = 0;
    FUN_80053d90(param_1);
    param_1[0x146] = 0;
    param_1[0x61] = 0;
    iVar2 = FUN_80077768((int)*(short *)(param_1 + 0x140),(uint)(byte)param_1[0x2b] << 4,0);
    uVar1 = 0xf000;
    if (iVar2 == 0) {
      param_1[0x147] = 1;
      uVar1 = 0x1000;
    }
    else {
      param_1[0x147] = 0;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar1;
    param_1[0x14a] = param_1[0x147] + '\x02';
    param_1[0x149] = param_1[0x147] + '\x02';
    FUN_80054d14(param_1,0x56,0);
    *(undefined2 *)(param_1 + 0x4a) = 0xe000;
    param_1[7] = 0;
    param_1[0x29] = 0;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] != '\x01') {
    return;
  }
  FUN_80076d68(param_1);
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_800574e0(param_1,0x11);
  param_1[0x144] = 0;
  iVar2 = FUN_800665f4(param_1);
  if (iVar2 == 0) {
    if (param_1[0x29] == '\0') {
      if (0x2800 < *(short *)(param_1 + 0x4a)) {
        *param_1 = 3;
        *(undefined2 *)(param_1 + 0x172) = 0x1e;
        param_1[4] = 1;
        *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x4a);
        FUN_80056d44(param_1,0);
        *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x50);
      }
    }
    else {
      *param_1 = 3;
      *(undefined2 *)(param_1 + 0x172) = 0x1e;
      *(undefined2 *)(param_1 + 0x50) = 0;
      param_1[0x148] = 0;
      param_1[4] = 1;
      param_1[6] = 0;
      param_1[7] = 0;
      iVar2 = FUN_8005344c();
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 0x44) = 0;
        FUN_80054d14(param_1,2,0);
        param_1[5] = 0;
      }
    }
    FUN_800551c4(param_1);
  }
  return;
}

