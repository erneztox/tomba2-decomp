// FUN_80092080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80092080(int param_1,short param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  piVar7 = (int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe));
  iVar5 = param_2 * 0xb0;
  iVar4 = *piVar7 + iVar5;
  iVar2 = *(int *)(iVar4 + 0xa8) + -1;
  *(int *)(iVar4 + 0xa8) = iVar2;
  if (iVar2 < 0) {
    *(uint *)(iVar5 + *piVar7 + 0x98) = *(uint *)(iVar5 + *piVar7 + 0x98) & 0xffffffbf;
    iVar5 = iVar5 + *piVar7;
    goto LAB_80092284;
  }
  iVar5 = (int)*(short *)(iVar4 + 0x4e);
  if (iVar5 < 1) {
    uVar3 = *(uint *)(iVar4 + 0x94);
    uVar6 = *(uint *)(iVar4 + 0xac);
    if (uVar6 < uVar3) {
      *(uint *)(iVar4 + 0x94) = uVar3 + iVar5;
      bVar1 = uVar3 + iVar5 < uVar6;
    }
    else {
      if (uVar6 <= uVar3) goto LAB_800921b0;
      uVar6 = *(uint *)(iVar4 + 0xac);
      *(uint *)(iVar4 + 0x94) = uVar3 - iVar5;
      bVar1 = uVar6 < uVar3 - iVar5;
    }
    if (bVar1) {
      *(uint *)(iVar4 + 0x94) = uVar6;
    }
  }
  else {
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar2 % iVar5 != 0) {
      return;
    }
    uVar3 = *(uint *)(iVar4 + 0x94);
    iVar2 = uVar3 - 1;
    if ((*(uint *)(iVar4 + 0xac) < uVar3) || (iVar2 = uVar3 + 1, uVar3 < *(uint *)(iVar4 + 0xac))) {
      *(int *)(iVar4 + 0x94) = iVar2;
    }
  }
LAB_800921b0:
  uVar3 = (uint)((int)*(short *)(iVar4 + 0x50) * *(int *)(iVar4 + 0x94) * 10) /
          (uint)(_DAT_80104c2c * 0x3c);
  if (_DAT_80104c2c * 0x3c == 0) {
    trap(0x1c00);
  }
  *(short *)(iVar4 + 0x54) = (short)uVar3;
  if ((int)(uVar3 << 0x10) < 1) {
    *(undefined2 *)(iVar4 + 0x54) = 1;
  }
  if ((*(int *)(iVar4 + 0xa8) != 0) && (*(int *)(iVar4 + 0x94) != *(int *)(iVar4 + 0xac))) {
    return;
  }
  iVar2 = param_2 * 0xb0 + *(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe));
  *(uint *)(iVar2 + 0x98) = *(uint *)(iVar2 + 0x98) & 0xffffffbf;
  iVar5 = param_2 * 0xb0 + *(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe));
LAB_80092284:
  *(uint *)(iVar5 + 0x98) = *(uint *)(iVar5 + 0x98) & 0xffffff7f;
  return;
}

