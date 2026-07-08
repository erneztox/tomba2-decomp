
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006b494(undefined1 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  switch(param_1[6]) {
  case 0:
    FUN_8006b124(param_1,0);
    param_1[6] = param_1[6] + '\x01';
    break;
  case 1:
    FUN_8006b020(param_1,0);
    sVar7 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar7 + -1;
    if (sVar7 == 1) {
      FUN_80074590(0xb,0,0);
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[6] = param_1[6] + '\x01';
      iVar2 = FUN_8006b390(param_1);
      if ((iVar2 != 0) && (param_1[2] == '\x04')) {
        param_1[0x2b] = 2;
        param_1[4] = 2;
      }
    }
    break;
  case 2:
    param_1[7] = 0;
    param_1[6] = param_1[6] + '\x01';
    *(undefined2 *)(param_1 + 0x66) = 0;
    if (1 < (byte)param_1[0x2b]) {
      *(undefined2 *)(param_1 + 0x44) = 0;
    }
    break;
  case 3:
    FUN_8006b1fc(param_1);
    FUN_8006b0d8(param_1);
    break;
  case 4:
    param_1[6] = param_1[6] + '\x01';
    *(undefined2 *)(param_1 + 0x70) = 0x40;
  case 5:
    if ((param_1[0x2b] == '\x01') &&
       (sVar7 = *(short *)(param_1 + 0x42), *(short *)(param_1 + 0x42) = sVar7 + -1, sVar7 == 1)) {
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x42) = 2;
    }
    sVar7 = *(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x44) = sVar7 + 0x12;
    if (0x50 < (short)(sVar7 + 0x12)) {
      param_1[0x2b] = 2;
      *(undefined2 *)(param_1 + 0x40) = 0;
      param_1[6] = param_1[6] + '\x01';
    }
    FUN_8006b0d8(param_1);
    sVar7 = FUN_80069a2c(param_1,*(undefined4 *)(_DAT_800e7f5c + 0x2c),
                         *(undefined4 *)(_DAT_800e7f5c + 0x30),*(undefined4 *)(_DAT_800e7f5c + 0x34)
                        );
    uVar1 = FUN_800776f8((int)sVar7,(int)*(short *)(param_1 + 0x6a),(int)*(short *)(param_1 + 0x70))
    ;
    *(undefined2 *)(param_1 + 0x6a) = uVar1;
    *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + *(short *)(param_1 + 0x44);
    break;
  case 6:
    uVar1 = FUN_80069a2c(param_1,*(undefined4 *)(_DAT_800e7f5c + 0x2c),
                         *(undefined4 *)(_DAT_800e7f5c + 0x30),*(undefined4 *)(_DAT_800e7f5c + 0x34)
                        );
    *(undefined2 *)(param_1 + 0x6a) = uVar1;
    *(undefined2 *)(param_1 + 0x72) = 1;
    uVar1 = FUN_800782b0(param_1 + 0x2c,(int)*(short *)(_DAT_800e7f5c + 0x2c),
                         (int)*(short *)(_DAT_800e7f5c + 0x34));
    *(undefined2 *)(param_1 + 0x74) = uVar1;
    sVar7 = *(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x44) = sVar7 + 0x32;
    if (0x1a4 < (short)(sVar7 + 0x32)) {
      *(undefined2 *)(param_1 + 0x44) = 0x1a4;
    }
    iVar2 = FUN_80069b6c(param_1);
    if (iVar2 != 0) goto switchD_8006b4f0_caseD_7;
    break;
  case 7:
switchD_8006b4f0_caseD_7:
    param_1[1] = 0;
    *param_1 = 2;
    param_1[4] = param_1[4] + '\x01';
    *(undefined2 *)(param_1 + 0x6e) = 1;
    *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
    *(undefined2 *)(param_1 + 0x32) = _DAT_800e7eb2;
    DAT_1f800231 = DAT_1f800231 + -1;
    *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
    return;
  }
  if (2 < (byte)param_1[6]) {
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x280;
    if ((param_1[0x46] & 1) == 0) {
      sVar7 = *(short *)(param_1 + 0x6a);
    }
    else {
      sVar7 = 0x800 - *(short *)(param_1 + 0x6a);
    }
    iVar2 = FUN_80083e80((int)sVar7);
    iVar2 = (iVar2 * 0x50) / 100;
    if (*(short *)(param_1 + 0x72) == 0) {
      iVar3 = (int)*(short *)(param_1 + 0x44);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x3f;
      }
      iVar6 = 0;
      if (0 < iVar3 >> 6) {
        do {
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar2 * 0x400;
          iVar4 = FUN_80083f50((int)sVar7);
          iVar4 = iVar4 * 0x40 >> 4;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar4;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar4;
          iVar4 = FUN_8006b390(param_1);
          iVar6 = iVar6 + 1;
          if (iVar4 != 0) {
            return;
          }
        } while (iVar6 < iVar3 >> 6);
      }
      uVar5 = *(ushort *)(param_1 + 0x44) & 0x3f;
      if ((*(ushort *)(param_1 + 0x44) & 0x3f) != 0) {
        *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar2 * uVar5 * 0x10;
        iVar2 = FUN_80083f50((int)sVar7);
        iVar2 = (int)(iVar2 * uVar5) >> 4;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar2;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar2;
        FUN_8006b390();
      }
    }
    else {
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + iVar2 * *(short *)(param_1 + 0x44) * 0x10;
      iVar2 = FUN_80083f50((int)sVar7);
      iVar2 = iVar2 * *(short *)(param_1 + 0x44) >> 4;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * iVar2 >> 4);
      iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x74));
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar3 * iVar2 >> 4);
    }
  }
  return;
}

