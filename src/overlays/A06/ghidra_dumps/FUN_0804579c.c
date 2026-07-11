// FUN_0804579c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0804579c(int param_1)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int local_2c;
  
  uVar2 = (int)*(short *)(param_1 + 0x50) << 4;
  _DAT_1f800000 = uVar2 & 0xffff;
  _DAT_1f800008 = uVar2 & 0xffff;
  uVar1 = (0x80 - ((*(short *)(param_1 + 0x50) + -0x14) * 0x80) / 200) * 0x10000 >> 0x10;
  uVar1 = uVar1 << 0x10 | uVar1 << 8 | 0x4a000000 | uVar1;
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopReg(2,0x4800,_DAT_1f800000);
  setCopReg(2,0x5000,0);
  setCopReg(2,0x5800,0);
  copFunction(2,0x49e012);
  uVar6 = getCopReg(2,0x4800);
  uVar9 = getCopReg(2,0x5000);
  uVar11 = getCopReg(2,0x5800);
  setCopReg(2,0x4800,0);
  setCopReg(2,0x5000,_DAT_1f800008);
  setCopReg(2,0x5800,0);
  copFunction(2,0x49e012);
  uVar7 = getCopReg(2,0x4800);
  uVar10 = getCopReg(2,0x5000);
  uVar12 = getCopReg(2,0x5800);
  _DAT_1f800000 = CONCAT22((short)uVar7,(short)uVar6);
  _DAT_1f80000c = CONCAT22((short)uVar12,(short)uVar11);
  setCopReg(2,0x4800,0);
  setCopReg(2,0x5000,0);
  setCopReg(2,0x5800,uVar2 & 0xffff);
  copFunction(2,0x49e012);
  uVar6 = getCopReg(2,0x4800);
  uVar7 = getCopReg(2,0x5000);
  uVar11 = getCopReg(2,0x5800);
  _DAT_1f800004 = CONCAT22((short)uVar9,(short)uVar6);
  _DAT_1f800008 = CONCAT22((short)uVar7,(short)uVar10);
  _DAT_1f800010 = CONCAT22(DAT_1f800010_2,(short)uVar11);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
  setCopReg(2,in_at,*(undefined4 *)(param_1 + 0x30));
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
  puVar15 = (undefined4 *)&DAT_8014ce70;
  iVar16 = 0;
  puVar3 = _DAT_1f800114;
  iVar5 = _DAT_1f800110;
  puVar14 = _DAT_800bf544;
  do {
    setCopReg(2,in_zero,*puVar15);
    setCopReg(2,in_at,puVar15[1]);
    setCopReg(2,puVar15 + 4,puVar15[2]);
    setCopReg(2,puVar15 + 2,puVar15[3]);
    setCopReg(2,puVar3,puVar15[4]);
    setCopReg(2,iVar5,puVar15[5]);
    copFunction(2,0x280030);
    iVar8 = getCopControlWord(2,0xf800);
    if (-1 < iVar8) {
      copFunction(2,0x158002d);
      iVar8 = getCopReg(2,7);
      iVar8 = iVar8 + *(short *)(param_1 + 0x32);
      uVar2 = iVar8 >> 10;
      local_2c = (iVar8 >> (uVar2 & 0x1f)) + uVar2 * 0x200;
      if (0x7fb < local_2c - 4U) {
        local_2c = -1;
      }
      if (0 < local_2c) {
        uVar2 = getCopReg(2,0xc);
        puVar14[2] = uVar2;
        uVar2 = getCopReg(2,0xd);
        puVar14[3] = uVar2;
        uVar2 = getCopReg(2,0xe);
        puVar14[4] = uVar2;
        puVar14[1] = uVar1;
        puVar14[5] = 0x55555555;
        puVar3 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar14 = *puVar3 | 0x5000000;
        *puVar3 = (uint)puVar14;
        puVar4 = puVar14 + 6;
        func_0x00083de0(puVar4,0,1,0x35,0);
        puVar3 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar4 = *puVar3 | 0x2000000;
        *puVar3 = (uint)puVar4;
        uVar2 = getCopReg(2,0xc);
        puVar14[0xb] = uVar2;
        uVar2 = getCopReg(2,0xd);
        puVar14[0xc] = uVar2;
        uVar2 = getCopReg(2,0xe);
        puVar14[0xd] = uVar2;
        puVar14[10] = uVar1;
        puVar14[0xe] = 0x55555555;
        *(short *)(puVar14 + 0xb) = (short)puVar14[0xb] + 2;
        *(short *)(puVar14 + 0xc) = (short)puVar14[0xc] + 2;
        *(short *)(puVar14 + 0xd) = (short)puVar14[0xd] + 2;
        *(short *)((int)puVar14 + 0x2e) = *(short *)((int)puVar14 + 0x2e) + 1;
        *(short *)((int)puVar14 + 0x32) = *(short *)((int)puVar14 + 0x32) + 1;
        *(short *)((int)puVar14 + 0x36) = *(short *)((int)puVar14 + 0x36) + 1;
        puVar3 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        puVar14[9] = *puVar3 | 0x5000000;
        *puVar3 = (uint)(puVar14 + 9);
        puVar13 = puVar14 + 0xf;
        iVar5 = 0;
        puVar3 = puVar13;
        func_0x00083de0(puVar13,0,1,0x55,0);
        puVar4 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar13 = *puVar4 | 0x2000000;
        *puVar4 = (uint)puVar13;
        puVar14 = puVar14 + 0x12;
        in_at = extraout_at;
      }
    }
    iVar16 = iVar16 + 1;
    puVar15 = puVar15 + 4;
  } while (iVar16 * 0x10000 >> 0x10 < 7);
  _DAT_800bf544 = puVar14;
  return;
}

