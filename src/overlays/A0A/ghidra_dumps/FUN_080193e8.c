// FUN_080193e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080193e8(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar10 = _DAT_800bf544;
  func_0x000329e0(6);
  pbVar8 = (byte *)(param_1 + 0x34);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
  setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
  iVar4 = func_0x000317cc(0xffffffec);
  iVar12 = 0;
  puVar7 = _DAT_800bf544;
  if (iVar4 == 0) {
    iVar4 = 0;
    puVar11 = puVar10 + 2;
    do {
      iVar9 = (uint)pbVar8[2] * 0x10;
      iVar5 = func_0x00083f50(iVar4);
      bVar1 = pbVar8[1];
      iVar6 = func_0x00083e80(iVar4);
      sVar2 = *(short *)(param_1 + 0x2c);
      local_2c = CONCAT22(local_2c._2_2_,
                          *(short *)(param_1 + 0x30) +
                          (short)((int)(iVar6 * (uint)pbVar8[1] * iVar9) >> 0x15));
      iVar6 = func_0x00083e80(iVar9);
      local_30 = CONCAT22(*(short *)(param_1 + 0x2e) - (short)((int)(iVar6 * (uint)*pbVar8) >> 9),
                          sVar2 + (short)((int)(iVar5 * (uint)bVar1 * iVar9) >> 0x15));
      setCopReg(2,in_zero,local_30);
      setCopReg(2,extraout_at_00,local_2c);
      copFunction(2,0x180001);
      uVar3 = getCopReg(2,0xe);
      *puVar11 = uVar3;
      puVar11[-1] = pbVar8[3] | 0x68000000;
      puVar7 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar10 = *puVar7 | 0x2000000;
      *puVar7 = (uint)puVar10;
      puVar11 = puVar11 + 3;
      puVar10 = puVar10 + 3;
      pbVar8 = pbVar8 + 4;
      iVar12 = iVar12 + 1;
      iVar4 = iVar4 + 0xc3;
      puVar7 = puVar10;
    } while (iVar12 < 0x15);
  }
  _DAT_800bf544 = puVar7;
  return;
}

