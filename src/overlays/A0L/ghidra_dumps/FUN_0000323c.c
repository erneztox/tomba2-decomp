// FUN_0000323c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000323c(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  puVar16 = _DAT_800bf544;
  cVar2 = (char)((ushort)*(undefined2 *)(param_1 + 0x40) >> 8) * ' ';
  if (3 < DAT_800bfa55) {
    func_0x00085480(param_1 + 0x54,0x1f800000);
    local_40 = (int)*(short *)(param_1 + 0x68);
    local_3c = (int)*(short *)(param_1 + 0x6a);
    local_38 = (int)*(short *)(param_1 + 0x6c);
    func_0x00084520(0x1f800000,&local_40);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar10 = getCopReg(2,0x4800);
    uVar12 = getCopReg(2,0x5000);
    uVar14 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar11 = getCopReg(2,0x4800);
    uVar13 = getCopReg(2,0x5000);
    uVar15 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar11,(short)uVar10);
    _DAT_1f80000c = CONCAT22((short)uVar15,(short)uVar14);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar10 = getCopReg(2,0x4800);
    uVar11 = getCopReg(2,0x5000);
    uVar14 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar12,(short)uVar10);
    _DAT_1f800008 = CONCAT22((short)uVar11,(short)uVar13);
    _DAT_1f800010 = CONCAT22(DAT_1f800010_2,(short)uVar14);
    local_30 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
    local_2c = CONCAT22(local_2c._2_2_,*(undefined2 *)(param_1 + 0x36));
    setCopReg(2,in_zero,local_30);
    setCopReg(2,extraout_at,local_2c);
    copFunction(2,0x486012);
    _DAT_1f800014 = getCopReg(2,0x19);
    _DAT_1f800018 = getCopReg(2,0x1a);
    _DAT_1f80001c = getCopReg(2,0x1b);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + (int)_DAT_1f800114;
    setCopControlWord(2,0,_DAT_1f800000);
    setCopControlWord(2,0x800,_DAT_1f800004);
    setCopControlWord(2,0x1000,_DAT_1f800008);
    setCopControlWord(2,0x1800,_DAT_1f80000c);
    setCopControlWord(2,0x2000,_DAT_1f800010);
    setCopControlWord(2,0x2800,_DAT_1f800014);
    setCopControlWord(2,0x3000,_DAT_1f800018);
    setCopControlWord(2,0x3800,_DAT_1f80001c);
    puVar8 = (uint *)&DAT_801154e0;
    puVar6 = (uint *)&DAT_801154f8;
    puVar7 = puVar16 + 0xc;
    puVar5 = _DAT_1f800114;
    do {
      uVar9 = puVar6[-5];
      local_60 = CONCAT22(*(char *)((int)puVar6 + 6) * 8,(char)puVar6[1] * 8);
      local_5c = CONCAT22(local_5c._2_2_,*(char *)((int)puVar6 + -9) * 8);
      local_58 = CONCAT22(*(char *)((int)puVar6 + 7) * 8,*(char *)((int)puVar6 + 5) * 8);
      local_54 = CONCAT22(local_54._2_2_,*(char *)((int)puVar6 + -5) * 8);
      local_50 = CONCAT22(*(char *)((int)puVar6 + 10) * 8,(char)puVar6[2] * 8);
      local_4c = CONCAT22(local_4c._2_2_,*(char *)((int)puVar6 + -1) * 8);
      local_48 = CONCAT22(*(char *)((int)puVar6 + 0xb) * 8,*(char *)((int)puVar6 + 9) * 8);
      local_44 = CONCAT22(local_44._2_2_,*(char *)((int)puVar6 + 3) * 8);
      setCopReg(2,in_zero,local_60);
      setCopReg(2,extraout_at,local_5c);
      setCopReg(2,&local_60,local_58);
      setCopReg(2,&local_50,local_54);
      setCopReg(2,puVar5,local_50);
      setCopReg(2,puVar6,local_4c);
      copFunction(2,0x280030);
      local_28 = getCopControlWord(2,0xf800);
      if (-1 < local_28) {
        uVar4 = getCopReg(2,0xc);
        puVar16[2] = uVar4;
        uVar4 = getCopReg(2,0xd);
        puVar16[5] = uVar4;
        uVar4 = getCopReg(2,0xe);
        puVar16[8] = uVar4;
        setCopReg(2,in_zero,local_48);
        setCopReg(2,extraout_at,local_44);
        copFunction(2,0x180001);
        local_28 = getCopControlWord(2,0xf800);
        if (-1 < local_28) {
          uVar4 = getCopReg(2,0xe);
          puVar16[0xb] = uVar4;
          copFunction(2,0x168002e);
          iVar3 = getCopReg(2,7);
          uVar4 = iVar3 + -100 >> 10;
          local_24 = (iVar3 + -100 >> (uVar4 & 0x1f)) + uVar4 * 0x200;
          if (0x7fb < local_24 - 4U) {
            local_24 = -1;
          }
          if (-1 < local_24) {
            puVar7[-0xb] = puVar6[-3] & 0xffffff | 0x3e000000;
            uVar4 = *puVar8;
            puVar7[-6] = uVar9 & 0x7fffff;
            puVar7[-9] = uVar4;
            uVar4 = puVar6[-4];
            puVar7[-3] = uVar4;
            *puVar7 = (int)uVar4 >> 0x10;
            puVar7[-8] = puVar6[-2];
            puVar7[-5] = puVar6[-1];
            uVar4 = *puVar6;
            *(char *)(puVar7 + -6) = (char)puVar7[-6] + cVar2;
            *(char *)(puVar7 + -9) = (char)puVar7[-9] + cVar2;
            *(char *)puVar7 = (char)*puVar7 + cVar2;
            puVar7[-2] = uVar4;
            *(char *)(puVar7 + -3) = (char)puVar7[-3] + cVar2;
            puVar5 = (uint *)(_DAT_800ed8c8 + local_24 * 4);
            *puVar16 = *puVar5 | 0xc000000;
            *puVar5 = (uint)puVar16;
            puVar7 = puVar7 + 0xd;
            puVar16 = puVar16 + 0xd;
          }
        }
      }
      puVar6 = puVar6 + 9;
      puVar8 = puVar8 + 9;
    } while (0 < (int)uVar9);
    uVar1 = *(ushort *)(param_1 + 0x40);
    _DAT_800bf544 = puVar16;
    if (3 < DAT_800bfa55) {
      func_0x000329e0(6);
      setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x60));
      setCopReg(2,extraout_at_00,*(undefined4 *)(param_1 + 100));
      iVar3 = func_0x000317cc(0xffffff9c);
      if (iVar3 == 0) {
        _DAT_1f800084 = _DAT_1f800084 * *(short *)(param_1 + 0x70) >> 0xb;
        _DAT_1f800088 = _DAT_1f800084;
        if (*(char *)(param_1 + 3) == '\b') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x000328ec(*(undefined4 *)(((int)((uint)uVar1 << 0x10) >> 0x18) * 4 + -0x7feea79c));
      }
    }
  }
  return;
}

