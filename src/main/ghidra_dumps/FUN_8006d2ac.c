
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006d2ac(int param_1)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  
  if ((((DAT_800e7ee1 & 0x80) == 0) && (DAT_800e7ffa == '\0')) &&
     ((DAT_800e7ee1 == 0 || (((DAT_800e7ee1 & 1) != 0 || (DAT_800bf816 == '\0')))))) {
    *(undefined2 *)(param_1 + 0x22) = 0xf0;
  }
  else {
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  if ((*(byte *)(param_1 + 0x72) & 4) != 0) {
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  bVar10 = *(byte *)(param_1 + 0x72) & 1;
  iVar8 = _DAT_800e7eac;
  iVar11 = _DAT_800e7eb4;
  if ((*(byte *)(param_1 + 0x72) & 2) != 0) goto LAB_8006d420;
  bVar10 = DAT_800e7fc7;
  switch(DAT_800e7fe4) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 9:
  case 10:
  case 0xb:
    if (_DAT_800e7fd8 != 0) {
      bVar10 = 1 - DAT_800e7fc7;
    }
    break;
  case 2:
  case 3:
    iVar8 = *(int *)(_DAT_800e7e90 + 0x2c) << 0x10;
    iVar11 = *(int *)(_DAT_800e7e90 + 0x34) << 0x10;
    break;
  case 7:
    sVar3 = _DAT_800e7fd0;
    sVar1 = _DAT_800e7fcc;
    goto LAB_8006d404;
  default:
    break;
  case 0xc:
    sVar3 = _DAT_1f800204;
    sVar1 = _DAT_1f800200;
LAB_8006d404:
    iVar8 = (int)sVar1 << 0x10;
    iVar11 = (int)sVar3 << 0x10;
  }
LAB_8006d420:
  sVar3 = _DAT_800e7fc0;
  if (bVar10 != 0) {
    sVar3 = _DAT_800e7fc0 + 0x800;
  }
  iVar4 = FUN_80083f50((int)sVar3);
  sVar1 = *(short *)(param_1 + 0x22);
  iVar5 = FUN_80083e80((int)sVar3);
  sVar3 = *(short *)(param_1 + 0x22);
  iVar6 = FUN_80083f50((int)_DAT_800e7fc0);
  iVar9 = *(int *)(param_1 + 0x58);
  iVar7 = FUN_80083e80((int)_DAT_800e7fc0);
  iVar9 = iVar4 * sVar1 * 0x10 - (iVar6 * iVar9 >> 4) >> 8;
  iVar6 = iVar5 * sVar3 * -0x10 + (iVar7 * *(int *)(param_1 + 0x58) >> 4) >> 8;
  iVar5 = FUN_80084080(iVar9 * iVar9 + iVar6 * iVar6);
  iVar4 = iVar5 * 0x100;
  sVar3 = FUN_80085690(-iVar6,iVar9);
  bVar2 = 0x7ff < ((sVar3 - _DAT_800e7fc0) - 0x400U & 0xfff);
  if (iVar4 < 0x140001) {
    if (!bVar2) {
      iVar4 = iVar5 * -0x100;
    }
  }
  else if (bVar2) {
    if (*(int *)(param_1 + 0x14) <= iVar4) {
      if (*(int *)(param_1 + 0x14) < 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x14);
      iVar5 = 0x10000;
      goto LAB_8006d5ac;
    }
    if (0x27ffff < iVar4) {
      *(undefined4 *)(param_1 + 0x14) = 0x280000;
      goto LAB_8006d5c8;
    }
  }
  else {
    iVar4 = iVar5 * -0x100;
    if (iVar4 <= *(int *)(param_1 + 0x14)) {
      if (0 < *(int *)(param_1 + 0x14)) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x14);
      iVar5 = -0x10000;
LAB_8006d5ac:
      *(int *)(param_1 + 0x14) = iVar4 + iVar5;
      goto LAB_8006d5c8;
    }
    if (iVar4 < -0x27ffff) {
      *(undefined4 *)(param_1 + 0x14) = 0xffd80000;
      goto LAB_8006d5c8;
    }
  }
  *(int *)(param_1 + 0x14) = iVar4;
LAB_8006d5c8:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (*(int *)(param_1 + 0x14) >> 8);
  iVar4 = FUN_80083f50((int)_DAT_800e7fc0);
  *(int *)(param_1 + 8) = iVar8 + (iVar4 * *(int *)(param_1 + 0x58) >> 4);
  iVar8 = FUN_80083e80((int)_DAT_800e7fc0);
  *(int *)(param_1 + 0x10) = iVar11 - (iVar8 * *(int *)(param_1 + 0x58) >> 4);
  return;
}

