// FUN_8004ee88

void FUN_8004ee88(int param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar2 = *(short *)(param_1 + 8) - 1;
  *(ushort *)(param_1 + 8) = uVar2;
  iVar6 = 0;
  if (0 < (int)((uint)uVar2 << 0x10)) {
    iVar8 = 0x8c;
    iVar7 = param_1;
    do {
      puVar4 = (undefined4 *)(param_1 + iVar8 + 0xc);
      puVar1 = (undefined4 *)(iVar7 + 0xc);
      do {
        puVar5 = puVar1;
        puVar3 = puVar4;
        uVar9 = puVar3[1];
        uVar10 = puVar3[2];
        uVar11 = puVar3[3];
        *puVar5 = *puVar3;
        puVar5[1] = uVar9;
        puVar5[2] = uVar10;
        puVar5[3] = uVar11;
        puVar4 = puVar3 + 4;
        puVar1 = puVar5 + 4;
      } while (puVar4 != (undefined4 *)(param_1 + iVar8 + 0x8c));
      iVar8 = iVar8 + 0x8c;
      uVar9 = puVar3[5];
      uVar10 = puVar3[6];
      puVar5[4] = *puVar4;
      puVar5[5] = uVar9;
      puVar5[6] = uVar10;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x8c;
    } while (iVar6 < *(short *)(param_1 + 8));
  }
  FUN_8004ee50(param_1 + iVar6 * 0x8c + 0xc);
  return;
}

