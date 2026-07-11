// FUN_08017954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017954(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_zero;
  undefined4 extraout_at;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar9 = _DAT_800bf544;
  func_0x000329e0(6);
  iVar12 = 0;
  pbVar5 = (byte *)(param_1 + 0x34);
  iVar11 = 0;
  puVar10 = puVar9 + 2;
  do {
    iVar8 = (uint)pbVar5[2] * 0x10;
    iVar6 = func_0x00083f50(iVar11);
    bVar1 = pbVar5[1];
    iVar7 = func_0x00083e80(iVar11);
    sVar2 = *(short *)(param_1 + 0x2c);
    local_2c = CONCAT22(local_2c._2_2_,
                        *(short *)(param_1 + 0x30) +
                        (short)((int)(iVar7 * (uint)pbVar5[1] * iVar8) >> 0x13));
    iVar7 = func_0x00083e80(iVar8);
    local_30 = CONCAT22(*(short *)(param_1 + 0x2e) - (short)(iVar7 * (uint)*pbVar5 >> 8),
                        sVar2 + (short)((int)(iVar6 * (uint)bVar1 * iVar8) >> 0x13));
    setCopReg(2,in_zero,local_30);
    setCopReg(2,extraout_at,local_2c);
    copFunction(2,0x180001);
    uVar3 = getCopReg(2,0xe);
    *puVar10 = uVar3;
    bVar1 = pbVar5[3];
    puVar10[-1] = (uint)bVar1 << 0x10 | (bVar1 & 0xfe) << 7 | (uint)(bVar1 >> 1) | 0x68000000;
    puVar4 = _DAT_800ed8c8;
    *puVar9 = *_DAT_800ed8c8 | 0x2000000;
    *puVar4 = (uint)puVar9;
    puVar10 = puVar10 + 3;
    puVar9 = puVar9 + 3;
    pbVar5 = pbVar5 + 4;
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 0xc3;
  } while (iVar12 < 0x15);
  _DAT_800bf544 = puVar9;
  return;
}

