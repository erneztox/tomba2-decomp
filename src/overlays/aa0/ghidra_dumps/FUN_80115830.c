// FUN_80115830

undefined4 FUN_80115830(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int local_10 [4];
  
  iVar11 = 0;
  sVar4 = *(short *)(param_1 + 0x62) + *(short *)(param_1 + 100);
  iVar7 = *(int *)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feb6ba0) + *(short *)(param_1 + 0x60) * 6;
  *(short *)(param_1 + 0x62) = sVar4;
  if (0x7f < sVar4) {
    *(short *)(param_1 + 0x62) = sVar4 + -0x80;
    uVar1 = *(ushort *)(iVar7 + 2);
    uVar2 = *(short *)(param_1 + 0x60) + 1;
    *(ushort *)(param_1 + 0x60) = uVar2;
    iVar7 = iVar7 + 6;
    if (0x130000 < (int)((uint)uVar2 << 0x10)) {
      *(undefined2 *)(param_1 + 0x60) = 0;
      iVar7 = *(int *)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feb6ba0);
    }
    iVar11 = (uint)uVar1 - (uint)*(ushort *)(iVar7 + 2);
  }
  iVar8 = (int)*(short *)(param_1 + 0x62);
  iVar7 = iVar8 + -0x80;
  iVar10 = iVar8 + -0x100;
  iVar5 = iVar8 + 0x80;
  local_10[0] = (-iVar8 * iVar7 * iVar10 >> 5) / 6;
  local_10[1] = iVar5 * iVar7 * iVar10 >> 6;
  local_10[2] = -iVar8 * iVar5 * iVar10 >> 6;
  local_10[3] = (iVar8 * iVar5 * iVar7 >> 5) / 6;
  iVar7 = *(ushort *)(param_1 + 0x60) - 1;
  if (*(short *)(param_1 + 0x60) == 0) {
    iVar7 = 0x13;
  }
  psVar9 = (short *)(*(int *)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feb6ba0) + (short)iVar7 * 6);
  *(int *)(param_1 + 0x2c) = local_10[0] * *psVar9;
  *(int *)(param_1 + 0x30) = local_10[0] * psVar9[1];
  iVar5 = 1;
  *(int *)(param_1 + 0x34) = local_10[0] * psVar9[2];
  do {
    psVar9 = psVar9 + 3;
    iVar7 = iVar7 + 1;
    if (0x13 < iVar7 * 0x10000 >> 0x10) {
      iVar7 = 0;
      psVar9 = *(short **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feb6ba0);
    }
    piVar6 = (int *)((int)local_10 + ((iVar5 << 0x10) >> 0xe));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *piVar6 * (int)*psVar9;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *piVar6 * (int)psVar9[1];
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *piVar6 * (int)psVar9[2];
  } while (iVar5 * 0x10000 >> 0x10 < 4);
  if (iVar11 << 0x10 < 1) {
    uVar3 = FUN_8011eac8();
    return uVar3;
  }
  return 1;
}

