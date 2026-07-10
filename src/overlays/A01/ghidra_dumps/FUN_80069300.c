// FUN_80069300

void FUN_80069300(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[1] = 1;
        param_1[4] = param_1[4] + '\x01';
        FUN_8003116c(0x2f,param_1 + 0x2c,0xfffffff6);
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      if (*(short *)(param_1 + 0x6e) == 0) {
        DAT_1f800251 = DAT_1f800251 + -1;
      }
      FUN_8007ab44(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1[0x5f] = 0;
    FUN_8006acac(param_1);
    *param_1 = 2;
    param_1[0x2b] = 0;
    param_1[4] = param_1[4] + '\x01';
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x56);
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    param_1[1] = 1;
    FUN_8006b020(param_1,2);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      FUN_80074590(0xb,0,0);
      *(undefined2 *)(param_1 + 0x40) = 0x14;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x42) = 0x1e;
      param_1[5] = param_1[5] + '\x01';
      FUN_8006918c(param_1);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[1] = 1;
      FUN_8006923c(param_1);
      param_1[5] = param_1[5] + '\x01';
    }
  }
  else {
    if (bVar1 == 2) {
      param_1[5] = 3;
    }
    else if (bVar1 != 3) goto LAB_80069498;
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if ((sVar2 == 1) || (param_1[0x2b] != '\0')) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *param_1 = 2;
      param_1[4] = 2;
    }
  }
LAB_80069498:
  if (2 < (byte)param_1[5]) {
    if ((param_1[0x46] & 1) == 0) {
      sVar2 = *(short *)(param_1 + 0x6a);
    }
    else {
      sVar2 = 0x800 - *(short *)(param_1 + 0x6a);
    }
    iVar3 = FUN_80083e80((int)sVar2);
    *(int *)(param_1 + 0x30) =
         *(int *)(param_1 + 0x30) + ((iVar3 * 0x50) / 100) * (int)*(short *)(param_1 + 0x44) * 0x10;
    iVar3 = FUN_80083f50((int)sVar2);
    iVar3 = iVar3 * *(short *)(param_1 + 0x44) >> 4;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar3;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar3;
    FUN_8006918c(param_1,0);
    iVar3 = FUN_80077acc(param_1,(int)*(short *)(param_1 + 0x2e),(int)*(short *)(param_1 + 0x32),
                         (int)*(short *)(param_1 + 0x36));
    if ((iVar3 == 0) &&
       (sVar2 = *(short *)(param_1 + 0x42), *(short *)(param_1 + 0x42) = sVar2 + -1, sVar2 == 1)) {
      *param_1 = 2;
      param_1[4] = 3;
    }
  }
  return;
}

