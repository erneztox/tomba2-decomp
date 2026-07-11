// FUN_0803feec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0803ff2c) */
/* WARNING: Removing unreachable block (ram,0x0803ff30) */
/* WARNING: Removing unreachable block (ram,0x00138f54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803feec(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  short *psVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  byte local_68 [4];
  undefined4 local_64 [9];
  undefined4 local_40 [2];
  short local_38;
  short local_36;
  short local_34;
  short local_30 [4];
  
  pbVar11 = (byte *)(param_1 + 0x2c);
  pbVar5 = local_68;
  puVar4 = (undefined4 *)&DAT_8010a2a8;
  do {
    uVar6 = puVar4[1];
    uVar7 = puVar4[2];
    uVar8 = puVar4[3];
    *(undefined4 *)pbVar5 = *puVar4;
    *(undefined4 *)(pbVar5 + 4) = uVar6;
    *(undefined4 *)(pbVar5 + 8) = uVar7;
    *(undefined4 *)(pbVar5 + 0xc) = uVar8;
    puVar4 = puVar4 + 4;
    pbVar5 = pbVar5 + 0x10;
  } while (puVar4 != (undefined4 *)&DAT_8010a2c8);
  iVar13 = 0;
  psVar10 = (short *)(param_1 + 0x32);
  iVar12 = 0;
  *(undefined4 *)pbVar5 = _DAT_8010a2c8;
  local_40[0] = _DAT_8010a2cc;
  sVar14 = _DAT_1f8000d2 + -0x4b0;
  do {
    sVar9 = (ushort)*pbVar11 << 4;
    iVar2 = func_0x00083f50(sVar9);
    bVar1 = *(byte *)(psVar10 + -2);
    iVar3 = func_0x00083e80(sVar9);
    iVar3 = iVar3 >> (*(byte *)((int)psVar10 + -3) & 0x1f);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    local_34 = (short)(iVar2 >> (bVar1 & 0x1f)) + psVar10[-1];
    local_36 = (short)(iVar3 >> 4) + *psVar10;
    local_38 = sVar14;
    iVar3 = func_0x00083f50(sVar9);
    local_30[0] = (short)(iVar3 >> 3) + 0x400;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = sVar9;
    setCopControlWord(2,0xa800,(uint)*(byte *)((int)local_64 + iVar12 + -4) << 4);
    setCopControlWord(2,0xb000,(uint)*(byte *)((int)local_64 + iVar12 + -3) << 4);
    setCopControlWord(2,0xb800,(uint)*(byte *)((int)local_64 + iVar12 + -2) << 4);
    _DAT_1f800090 = 0xc00;
    func_0x00031d24(&local_38,local_40,local_30);
    func_0x00027768(0x8013fa40,0,0,0);
    iVar12 = iVar12 + 3;
    iVar13 = iVar13 + 1;
    psVar10 = psVar10 + 4;
    pbVar11 = pbVar11 + 8;
  } while (iVar13 < 0xb);
  return;
}

