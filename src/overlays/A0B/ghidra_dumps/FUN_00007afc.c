// FUN_00007afc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00007b70) */
/* WARNING: Removing unreachable block (ram,0x00007b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007afc(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  byte *pbVar18;
  uint *puVar19;
  undefined4 local_d8;
  undefined4 local_d4;
  short local_d0 [48];
  uint local_70 [12];
  undefined1 local_40 [16];
  int local_30;
  int local_2c;
  
  pbVar18 = (byte *)(param_1 + 0x50);
  if (*(char *)(param_1 + 4) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_30 = 600;
  local_2c = (uint)*(byte *)(param_1 + 5) << 2;
  func_0x000329e0(6);
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  do {
    if (*pbVar18 != 0) {
      iVar16 = *(int *)(pbVar18 + 4);
      iVar13 = (uint)*pbVar18 * 0x30 + (int)*(short *)(param_1 + 0x4e);
      if (iVar16 == 0) {
        if (pbVar18[1] == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (pbVar18[1] != 1) {
          pbVar18[1] = 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar16 = -0x7fee561c;
        pbVar18[1] = 2;
      }
      iVar4 = func_0x00083f50(iVar13);
      sVar1 = *(short *)(param_1 + 0x2c);
      iVar13 = func_0x00083e80(iVar13);
      local_d4 = CONCAT22(local_d4._2_2_,*(short *)(param_1 + 0x30) + (short)((iVar13 << 5) >> 0xc))
      ;
      local_d8 = CONCAT22(*(short *)(param_1 + 0x2e) - (short)((int)((uint)*pbVar18 * 0x200) >> 7),
                          sVar1 + (short)((iVar4 << 5) >> 0xc));
      setCopReg(2,in_zero,local_d8);
      setCopReg(2,extraout_at,local_d4);
      iVar13 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
      if (iVar13 == 0) {
        _DAT_1f800090 = ((int)((uint)*pbVar18 * (uint)*pbVar18) >> 7) * 2 + 0x40;
        if (*(char *)(param_1 + 4) == '\x02') {
          _DAT_1f800090 = _DAT_1f800090 + (0x40 - (uint)*(byte *)(param_1 + 5)) * 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_1f800084 = _DAT_1f800084 * _DAT_1f800090 >> 8;
        _DAT_1f800088 = _DAT_1f800084;
        uVar5 = func_0x00027a4c(iVar16,_DAT_8011aa40);
        *(undefined4 *)(pbVar18 + 4) = uVar5;
      }
    }
    pbVar18 = pbVar18 + 8;
    puVar17 = local_70;
  } while ((int)pbVar18 < param_1 + 0x70);
  iVar16 = (int)*(short *)(param_1 + 0x4e);
  iVar13 = 0;
  iVar4 = 0;
  do {
    iVar6 = func_0x00083f50(iVar16);
    local_d0[iVar13 * 4] = *(short *)(param_1 + 0x2c) + (short)((iVar6 << 5) >> 0xc);
    iVar6 = func_0x00083e80(iVar16);
    local_d0[iVar13 * 4 + 2] = *(short *)(param_1 + 0x30) + (short)((iVar6 << 5) >> 0xc);
    local_d0[iVar13 * 4 + 1] = *(short *)(param_1 + 0x2e) - (short)(iVar4 / 0xc);
    if ((iVar13 == 0) || (iVar13 == 0xb)) {
      *puVar17 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((iVar13 == 1) || (iVar13 == 10)) {
      *puVar17 = 0x303030;
      halt_baddata();
    }
    if ((iVar13 == 2) || (iVar13 == 9)) {
      *puVar17 = 0x606060;
      halt_baddata();
    }
    iVar6 = func_0x00083f50(iVar16);
    uVar7 = (iVar6 >> 4 & 0x7fU) + 0x80;
    *puVar17 = uVar7 * 0x10000 | uVar7 * 0x100 | uVar7;
    iVar6 = iVar13 * iVar13;
    puVar11 = local_40 + iVar13;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    puVar17 = puVar17 + 1;
    iVar4 = iVar4 + 800;
    iVar13 = iVar13 + 1;
    *puVar11 = (char)((int)(((iVar6 >> 3) + 6) * (uint)*(byte *)(param_1 + 6)) >> 7);
    iVar16 = iVar16 + 0x200;
  } while (iVar13 < 0xc);
  func_0x00029664(local_d0,0xc,local_70);
  puVar17 = _DAT_800bf544;
  func_0x000329e0(6);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
  setCopReg(2,extraout_at_00,*(undefined4 *)(param_1 + 0x30));
  iVar13 = func_0x000317cc(0xffffffec);
  iVar16 = 0;
  puVar12 = _DAT_800bf544;
  if (iVar13 == 0) {
    iVar13 = 0;
    iVar4 = (int)((uint)*(byte *)(param_1 + 6) * 0x4b) >> 6;
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 0x14;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 1;
    puVar12 = puVar17;
    if (iVar4 != 0) {
      puVar19 = puVar17 + 2;
      do {
        iVar4 = iVar4 + -1;
        iVar16 = (short)iVar16 * 5 + 1;
        uVar7 = (iVar16 * 0x10000 >> 0x10) + (int)*(short *)(param_1 + 0x48) & 0x3ff;
        iVar6 = uVar7 * uVar7 * local_2c;
        iVar13 = (short)iVar13 * 0x7b + 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0xfffff;
        }
        iVar15 = (iVar6 >> 0x14) + 0x3c;
        iVar6 = ((int)*(short *)(param_1 + 0x4e) + uVar7) * 4 + (iVar13 * 0x10000 >> 0x10);
        iVar8 = func_0x00083f50(iVar6);
        iVar9 = func_0x00083e80(iVar6);
        iVar6 = uVar7 * local_30;
        sVar1 = *(short *)(param_1 + 0x2c);
        sVar2 = *(short *)(param_1 + 0x30);
        sVar3 = *(short *)(param_1 + 0x2e);
        iVar14 = (uVar7 * 0x1800) / 600 + (int)*(short *)(param_1 + 0x4e);
        iVar10 = func_0x00083f50(iVar14);
        local_d8 = CONCAT22(sVar3 - (short)(iVar6 >> 10),
                            sVar1 + (short)(iVar8 * iVar15 >> 0xc) + (short)((iVar10 << 5) >> 0xc));
        iVar6 = func_0x00083e80(iVar14);
        local_d4 = CONCAT22(local_d4._2_2_,
                            sVar2 + (short)(iVar9 * iVar15 >> 0xc) + (short)((iVar6 << 5) >> 0xc));
        setCopReg(2,in_zero,local_d8);
        setCopReg(2,extraout_at_01,local_d4);
        copFunction(2,0x180001);
        uVar7 = getCopReg(2,0xe);
        *puVar19 = uVar7;
        puVar19[-1] = 0x68ffffff;
        puVar12 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
        *puVar17 = *puVar12 | 0x2000000;
        *puVar12 = (uint)puVar17;
        puVar19 = puVar19 + 3;
        puVar17 = puVar17 + 3;
        puVar12 = puVar17;
      } while (0 < iVar4);
    }
  }
  _DAT_800bf544 = puVar12;
  return;
}

