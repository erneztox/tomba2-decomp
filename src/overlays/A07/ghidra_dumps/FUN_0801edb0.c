// FUN_0801edb0

void FUN_0801edb0(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 auStack_d8 [64];
  int local_98 [16];
  undefined1 local_58 [16];
  undefined2 local_48;
  short local_46;
  undefined2 local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 *local_34;
  int *local_30;
  undefined1 *local_2c;
  
  func_0x00084660(&DAT_1f8000f8);
  func_0x00084690(&DAT_1f8000f8);
  iVar12 = 0;
  iVar10 = 0;
  local_38 = -0x330a353d;
  local_34 = local_58;
  iVar9 = 0;
  piVar7 = local_98;
  puVar11 = auStack_d8;
  iVar8 = 0;
  sVar1 = *(short *)(param_1 + 0x62);
  local_48 = 0x26a0;
  local_40 = *(short *)(param_1 + 100) + 0xc80;
  local_3c = sVar1 + -0x24a0;
  local_30 = piVar7;
  local_2c = puVar11;
  do {
    iVar2 = func_0x00083e80(iVar12);
    local_46 = (short)(iVar2 * local_40 >> 0xc) + -0xc80;
    iVar2 = iVar8;
    if (iVar8 < 0) {
      iVar2 = iVar8 + 7;
    }
    iVar5 = (iVar2 >> 3) + 0x24a0;
    iVar2 = ((iVar5 * 0x10000 >> 0x10) + -0x24a0) * 0xd8;
    local_44 = (undefined2)iVar5;
    local_34[iVar10] =
         (char)((int)((ulonglong)((longlong)iVar2 * (longlong)local_38) >> 0x20) + iVar2 >> 0xb) -
         (char)(iVar2 >> 0x1f);
    iVar2 = func_0x0003f7a0(&local_48,puVar11);
    *piVar7 = iVar2;
    iVar2 = iVar9;
    if (iVar9 < 0) {
      iVar2 = iVar9 + 7;
    }
    iVar6 = (iVar2 >> 3) + 0x2e9e;
    iVar2 = ((iVar6 * 0x10000 >> 0x10) + -0x24a0) * 0xd8;
    iVar5 = 0xf - iVar10;
    local_44 = (undefined2)iVar6;
    local_34[iVar5] =
         (char)((int)((ulonglong)((longlong)iVar2 * (longlong)local_38) >> 0x20) + iVar2 >> 0xb) -
         (char)(iVar2 >> 0x1f);
    iVar2 = func_0x0003f7a0(&local_48,local_2c + iVar5 * 4);
    piVar4 = local_30 + iVar5;
    *piVar4 = iVar2;
    uVar3 = *piVar7 >> 10;
    iVar2 = (*piVar7 >> (uVar3 & 0x1f)) + uVar3 * 0x200;
    *piVar7 = iVar2;
    if (0x7fb < iVar2 - 4U) {
      *piVar7 = -1;
    }
    uVar3 = *piVar4 >> 10;
    iVar2 = (*piVar4 >> (uVar3 & 0x1f)) + uVar3 * 0x200;
    *piVar4 = iVar2;
    if (0x7fb < iVar2 - 4U) {
      *piVar4 = -1;
    }
    iVar12 = iVar12 + 0x80;
    iVar9 = iVar9 + sVar1 + -0x2e9e;
    piVar7 = piVar7 + 1;
    puVar11 = puVar11 + 4;
    iVar10 = iVar10 + 1;
    iVar8 = iVar8 + local_3c;
  } while (iVar10 < 8);
  func_0x00117ab8(0x10,auStack_d8,local_98,local_58);
  return;
}

