/**
 * @brief Entity enemy behavior main: entity[6] switch, AI states
 * @note Original: func_8006A384 at 0x8006A384
 */
// Entity_Behavior_EnemyMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006a384(undefined1 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  
  switch(param_1[6]) {
  case 0:
    FUN_80069bec(param_1,0);
    cVar1 = param_1[6];
    goto LAB_8006a52c;
  case 1:
    FUN_80069ae4(param_1);
    sVar7 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar7 + -1;
    if (sVar7 != 1) break;
    FUN_80074590(0xb,0,0);
    *param_1 = 1;
    param_1[6] = param_1[6] + '\x01';
LAB_8006a47c:
    iVar3 = FUN_80069948(param_1);
    if (iVar3 != 1) break;
    goto LAB_8006a490;
  case 2:
    if (param_1[0x29] != '\0') goto LAB_8006a4b8;
    FUN_80069ae4(param_1);
    param_1[7] = 0;
    param_1[6] = param_1[6] + '\x01';
    if (param_1[0x2b] == '\0') goto LAB_8006a47c;
LAB_8006a490:
    param_1[6] = 8;
    *(undefined2 *)(param_1 + 0x44) = 0;
    break;
  case 3:
    FUN_8006a240(param_1);
    if (param_1[0x29] == '\0') break;
LAB_8006a4b8:
    param_1[5] = 2;
    param_1[6] = 0;
    param_1[7] = 0;
    break;
  case 4:
    param_1[6] = param_1[6] + '\x01';
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -0x500;
  case 5:
    *(undefined2 *)(param_1 + 0x66) = 2;
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -0x40;
    sVar7 = *(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x44) = sVar7 + 0x28;
    if (0x3c < (short)(sVar7 + 0x28)) {
      cVar1 = param_1[6];
      *(undefined2 *)(param_1 + 0x40) = 0;
LAB_8006a52c:
      param_1[6] = cVar1 + '\x01';
    }
    break;
  case 6:
    *(undefined2 *)(param_1 + 0x72) = 1;
    DAT_1f800252 = 1;
    uVar2 = FUN_800782b0(param_1 + 0x2c,(int)*(short *)(_DAT_800e7f5c + 0x2c),
                         (int)*(short *)(_DAT_800e7f5c + 0x34));
    *(undefined2 *)(param_1 + 0x74) = uVar2;
    uVar2 = FUN_80069a2c(param_1,(int)*(short *)(_DAT_800e7f5c + 0x2c),
                         (int)*(short *)(_DAT_800e7f5c + 0x30),(int)*(short *)(_DAT_800e7f5c + 0x34)
                        );
    *(undefined2 *)(param_1 + 0x6a) = uVar2;
    sVar7 = *(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x44) = sVar7 + 0x32;
    if (0x1a4 < (short)(sVar7 + 0x32)) {
      *(undefined2 *)(param_1 + 0x44) = 0x1a4;
    }
    iVar3 = FUN_80069b6c(param_1);
    if (iVar3 != 0) goto switchD_8006a3dc_caseD_7;
    break;
  case 7:
switchD_8006a3dc_caseD_7:
    *param_1 = 2;
    param_1[4] = param_1[4] + '\x01';
    if ((DAT_800e7fc6 & 1) != 0) {
      DAT_800e7ef9 = 0;
    }
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(_DAT_800e7f5c + 0x2c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(_DAT_800e7f5c + 0x30);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(_DAT_800e7f5c + 0x34);
    return;
  case 8:
    DAT_1f800252 = 1;
    *param_1 = 2;
    param_1[4] = param_1[4] + '\x01';
    if ((DAT_800e7fc6 & 1) == 0) {
      return;
    }
    DAT_800e7ef9 = 0;
    return;
  }
  if (DAT_800e7fc6 == 0) {
    *param_1 = 2;
    param_1[4] = 3;
  }
  else if (2 < (byte)param_1[6]) {
    if ((param_1[0x46] & 1) == 0) {
      sVar7 = *(short *)(param_1 + 0x6a);
    }
    else {
      sVar7 = 0x800 - *(short *)(param_1 + 0x6a);
    }
    if (*(short *)(param_1 + 0x72) == 0) {
      iVar3 = (int)*(short *)(param_1 + 0x44);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x3f;
      }
      iVar5 = 0;
      if (0 < iVar3 >> 6) {
        do {
          iVar4 = FUN_80083e80((int)sVar7);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar4 * 0x400;
          iVar4 = FUN_80083f50((int)sVar7);
          iVar4 = iVar4 * 0x40 >> 4;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar4;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar4;
          iVar4 = FUN_80069948(param_1);
          iVar5 = iVar5 + 1;
          if (iVar4 != 0) {
            return;
          }
        } while (iVar5 < iVar3 >> 6);
      }
      uVar6 = *(ushort *)(param_1 + 0x44) & 0x3f;
      if ((*(ushort *)(param_1 + 0x44) & 0x3f) != 0) {
        iVar3 = FUN_80083e80((int)sVar7);
        *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3 * uVar6 * 0x10;
        iVar3 = FUN_80083f50((int)sVar7);
        iVar3 = (int)(iVar3 * uVar6) >> 4;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar3;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar3;
        FUN_80069948();
      }
    }
    else {
      iVar3 = FUN_80083e80((int)sVar7);
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + iVar3 * *(short *)(param_1 + 0x44) * 0x10;
      iVar3 = FUN_80083f50((int)sVar7);
      iVar3 = iVar3 * *(short *)(param_1 + 0x44) >> 4;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar5 = FUN_80083f50((int)*(short *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar5 * iVar3 >> 4);
      iVar5 = FUN_80083e80((int)*(short *)(param_1 + 0x74));
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar5 * iVar3 >> 4);
    }
  }
  return;
}
