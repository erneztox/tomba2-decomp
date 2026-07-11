// FUN_0804217c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080424ec) */
/* WARNING: Removing unreachable block (ram,0x080424f0) */
/* WARNING: Removing unreachable block (ram,0x0013b514) */
/* WARNING: Removing unreachable block (ram,0x08042220) */
/* WARNING: Removing unreachable block (ram,0x08042224) */
/* WARNING: Removing unreachable block (ram,0x0013b244) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0804217c(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 extraout_at_02;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  undefined4 local_c8 [4];
  undefined4 local_b8;
  short sStack_b2;
  undefined4 local_b0 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [12];
  undefined4 local_38 [6];
  
  func_0x000329e0(6);
  uVar9 = local_70;
  if (0x2b < DAT_800e7eaa) {
    local_c8[0] = _DAT_8010a3dc;
    local_c8[1] = _DAT_8010a3e0;
    local_c8[2] = _DAT_8010a3e4;
    local_c8[3] = _DAT_8010a3e8;
    puVar7 = (undefined4 *)&DAT_8010a3ec;
    puVar8 = &local_b8;
    do {
      puVar6 = puVar8;
      puVar5 = puVar7;
      uVar9 = puVar5[1];
      uVar10 = puVar5[2];
      uVar11 = puVar5[3];
      *puVar6 = *puVar5;
      puVar6[1] = uVar9;
      puVar6[2] = uVar10;
      puVar6[3] = uVar11;
      puVar7 = puVar5 + 4;
      puVar8 = puVar6 + 4;
    } while (puVar5 + 4 != (undefined4 *)0x8010a42c);
    uVar9 = puVar5[5];
    puVar6[4] = uRam8010a42c;
    puVar6[5] = uVar9;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar13 = 0;
    puVar7 = &local_b8;
    _DAT_1f800090 = 0;
    uVar9 = extraout_at;
    do {
      setCopReg(2,in_zero,*puVar7);
      setCopReg(2,uVar9,puVar7[1]);
      iVar4 = func_0x00032eb8(0);
      uVar9 = extraout_at_00;
      if (iVar4 == 0) {
        _DAT_1f800084 = _DAT_1f800084 * 3;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x000328ec(local_c8[*(short *)((int)puVar7 + 6)]);
        uVar9 = extraout_at_01;
      }
      iVar13 = iVar13 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar13 < 9);
    uVar12 = 0x140b;
    iVar13 = 0;
    local_70 = CONCAT22(local_70._2_2_,0x4e00);
    uVar14 = 0;
    do {
      iVar4 = func_0x00083f50(iVar13 << 1);
      local_70 = CONCAT22(local_70._2_2_,(short)(iVar4 * 0x96 >> 0xc) + 0x4e00);
      iVar4 = func_0x00083e80(iVar13);
      local_70 = CONCAT22((short)(iVar4 * 0x96 >> 0xc) + -0x17be,(undefined2)local_70);
      local_6c = CONCAT22(local_6c._2_2_,uVar12 + 0x140b);
      setCopReg(2,in_zero,local_70);
      setCopReg(2,extraout_at_02,local_6c);
      iVar4 = func_0x00032eb8(0);
      if (iVar4 == 0) {
        _DAT_1f800088 = _DAT_1f800084;
        func_0x000328ec(local_c8[uVar14 & 3]);
      }
      uVar2 = uVar12 * 5 + 0x7b;
      do {
        uVar12 = uVar2;
        uVar2 = uVar12 + 0xb82a;
      } while (0x47d5 < uVar12);
      uVar14 = uVar14 + 1;
      iVar13 = iVar13 + 0x40;
    } while ((int)uVar14 < 0x40);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_800bfe56 & 0x10) == 0) {
    func_0x0013ad90(param_1);
    if (*(char *)(param_1 + 5) != '\0') {
      if (0 < *(short *)(param_1 + 0x58)) {
        *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0x80;
      }
      sVar1 = *(short *)(param_1 + 0x56);
      sVar3 = sVar1 + 4;
      *(short *)(param_1 + 0x56) = sVar3;
      if (0x3f < sVar3) {
        *(short *)(param_1 + 0x56) = sVar1 + -0x3c;
      }
      setCopControlWord(2,0xa800,0);
      setCopControlWord(2,0xb000,0);
      setCopControlWord(2,0xb800,0);
      uVar14 = func_0x0009a450();
      puVar8 = local_68;
      puVar7 = (undefined4 *)&DAT_8010a434;
      _DAT_1f800090 = (int)*(short *)(param_1 + 0x58) + (uVar14 & 0x1ff);
      do {
        uVar11 = puVar7[1];
        uVar9 = puVar7[2];
        uVar10 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar11;
        puVar8[2] = uVar9;
        puVar8[3] = uVar10;
        puVar7 = puVar7 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar7 != (undefined4 *)&DAT_8010a464);
      local_38[0] = _DAT_8010a464;
      local_38[1] = _DAT_8010a468;
      local_38[2] = _DAT_8010a46c;
      local_38[3] = _DAT_8010a470;
      local_38[4] = _DAT_8010a474;
      local_38[5] = _DAT_8010a478;
      iVar13 = 0;
      puVar7 = local_68;
      do {
        func_0x000318a0(puVar7,param_1 + 0x5c,0x800a1ccc);
        puVar7 = puVar7 + 2;
        puVar8 = local_38 + iVar13;
        iVar13 = iVar13 + 1;
        func_0x00027768(*puVar8,0,0xffffff60,(int)*(short *)(param_1 + 0x56));
      } while (iVar13 < 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x58) < 0x1000) {
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0xcc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if ((_DAT_1f80017c & 1) != 0) {
      *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x20U & 0xf8;
    }
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar13 = 0;
    puVar7 = local_c8;
    local_c8[0] = _DAT_8010a47c;
    local_c8[1] = _DAT_8010a480;
    local_c8[2] = _DAT_8010a484;
    local_c8[3] = _DAT_8010a488;
    _DAT_1f800090 = 0;
    local_70._0_2_ = CONCAT11(DAT_8010a48d,DAT_8010a48c);
    local_70._3_1_ = SUB41(uVar9,3);
    local_70._0_3_ = CONCAT12(DAT_8010a48e,(undefined2)local_70);
    do {
      func_0x000318a0(puVar7,&local_70,0x800a1ccc);
      puVar7 = puVar7 + 2;
      iVar13 = iVar13 + 1;
      func_0x00027768(0x80143b4c,0,0,(int)*(short *)(param_1 + 0x56));
    } while (iVar13 < 2);
  }
  if (DAT_1f800207 - 2 < 3) {
    local_c8[0] = _DAT_8010a490;
    local_c8[2] = _DAT_8010a494;
    local_c8[3] = _DAT_8010a498;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    func_0x000318a0(local_c8 + 2,local_c8,0x800a1ccc);
    uVar14 = func_0x0009a450();
    _DAT_1f800090 = (int)*(short *)(param_1 + 0x62) + (uVar14 & 0x7f);
    func_0x00027768(0x80143270,0,0xffffff9c,0);
    uVar14 = func_0x0009a450();
    _DAT_1f800090 = (int)*(short *)(param_1 + 0x66) + (uVar14 & 0x7f);
    func_0x00027768(0x80143198,0,0xffffff9c,0);
  }
  return;
}

