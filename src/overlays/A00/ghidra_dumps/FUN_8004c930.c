// FUN_8004c930

/* WARNING: Removing unreachable block (ram,0x8004c9cc) */
/* WARNING: Removing unreachable block (ram,0x8004c9dc) */
/* WARNING: Removing unreachable block (ram,0x8004c9e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004c930(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      FUN_8004a828(param_1);
      param_1[4] = param_1[4] + '\x01';
      iVar9 = (int)_DAT_800e7eae;
      iVar8 = (int)_DAT_800e7eb2;
      iVar7 = (int)_DAT_800e7eb6;
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      iVar5 = (int)*(short *)(param_1 + 0x40);
      iVar8 = (iVar8 - (*(short *)(param_1 + 0x32) + 200)) * 0x10;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar8 == -0x80000000)) {
        trap(0x1800);
      }
      iVar6 = (int)*(short *)(param_1 + 0x40);
      iVar7 = (iVar7 - *(short *)(param_1 + 0x36)) * 0x10;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      *(undefined2 *)(param_1 + 0x50) = 0xd800;
      *(undefined2 *)(param_1 + 0x52) = 0x280;
      *(short *)(param_1 + 0x48) = (short)(((iVar9 - *(short *)(param_1 + 0x2e)) * 0x10) / 0x1e);
      *(short *)(param_1 + 0x4a) = (short)(iVar8 / iVar5);
      *(short *)(param_1 + 0x4c) = (short)(iVar7 / iVar6);
      return;
    }
    if (bVar1 == 2) {
      iVar5 = FUN_8004a3d4(param_1);
      if (iVar5 == 0) {
        return;
      }
      param_1[4] = 3;
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_8007a624(param_1);
    return;
  }
  if (param_1[5] == '\0') {
    sVar2 = *(short *)(param_1 + 0x50);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x1000;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x1000;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x1000;
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x52);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
    if (sVar3 == 1) {
      *param_1 = 1;
      param_1[5] = param_1[5] + '\x01';
    }
  }
  else {
    if (param_1[5] != '\x01') {
      param_1[1] = 1;
      goto LAB_8004cb94;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
    bVar4 = _DAT_1f800162 < *(short *)(param_1 + 0x32);
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x52);
    if (bVar4) {
      param_1[4] = 2;
      param_1[5] = 0;
    }
  }
  param_1[1] = 1;
LAB_8004cb94:
  FUN_80077efc(param_1);
  return;
}

