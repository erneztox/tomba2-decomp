// FUN_0801eee8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801eee8(int param_1)

{
  undefined4 in_zero;
  undefined4 uVar1;
  undefined4 extraout_at;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 *puVar17;
  int local_2c;
  
  iVar2 = (int)*(short *)(param_1 + 0x54);
  iVar7 = (*(short *)(param_1 + 0x50) + -0x14) * 0x80;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  uVar1 = 0x80000000;
  if ((iVar2 == -1) && (iVar7 == -0x80000000)) {
    trap(0x1800);
  }
  uVar4 = (int)*(short *)(param_1 + 0x50) << 4;
  _DAT_1f800000 = uVar4 & 0xffff;
  _DAT_1f800008 = uVar4 & 0xffff;
  uVar3 = (0x80 - iVar7 / iVar2) * 0x10000 >> 0x10;
  uVar3 = uVar3 << 0x10 | uVar3 << 8 | 0x4a000000 | uVar3;
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopReg(2,0x4800,_DAT_1f800000);
  setCopReg(2,0x5000,0);
  setCopReg(2,0x5800,0);
  copFunction(2,0x49e012);
  uVar8 = getCopReg(2,0x4800);
  uVar11 = getCopReg(2,0x5000);
  uVar13 = getCopReg(2,0x5800);
  setCopReg(2,0x4800,0);
  setCopReg(2,0x5000,_DAT_1f800008);
  setCopReg(2,0x5800,0);
  copFunction(2,0x49e012);
  uVar9 = getCopReg(2,0x4800);
  uVar12 = getCopReg(2,0x5000);
  uVar14 = getCopReg(2,0x5800);
  _DAT_1f800000 = CONCAT22((short)uVar9,(short)uVar8);
  _DAT_1f80000c = CONCAT22((short)uVar14,(short)uVar13);
  setCopReg(2,0x4800,0);
  setCopReg(2,0x5000,0);
  setCopReg(2,0x5800,uVar4 & 0xffff);
  copFunction(2,0x49e012);
  uVar8 = getCopReg(2,0x4800);
  uVar9 = getCopReg(2,0x5000);
  uVar13 = getCopReg(2,0x5800);
  _DAT_1f800004 = CONCAT22((short)uVar11,(short)uVar8);
  _DAT_1f800008 = CONCAT22((short)uVar9,(short)uVar12);
  _DAT_1f800010 = CONCAT22(DAT_1f800010_2,(short)uVar13);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
  setCopReg(2,0x80000000,*(undefined4 *)(param_1 + 0x30));
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
  puVar17 = (undefined4 *)&DAT_80148668;
  iVar7 = 0;
  puVar5 = _DAT_1f800114;
  iVar2 = _DAT_1f800110;
  puVar16 = _DAT_800bf544;
  do {
    setCopReg(2,in_zero,*puVar17);
    setCopReg(2,uVar1,puVar17[1]);
    setCopReg(2,puVar17 + 4,puVar17[2]);
    setCopReg(2,puVar17 + 2,puVar17[3]);
    setCopReg(2,puVar5,puVar17[4]);
    setCopReg(2,iVar2,puVar17[5]);
    copFunction(2,0x280030);
    iVar10 = getCopControlWord(2,0xf800);
    if (-1 < iVar10) {
      copFunction(2,0x158002d);
      iVar10 = getCopReg(2,7);
      iVar10 = iVar10 + *(short *)(param_1 + 0x32);
      uVar4 = iVar10 >> 10;
      local_2c = (iVar10 >> (uVar4 & 0x1f)) + uVar4 * 0x200;
      if (0x7fb < local_2c - 4U) {
        local_2c = -1;
      }
      if (0 < local_2c) {
        uVar4 = getCopReg(2,0xc);
        puVar16[2] = uVar4;
        uVar4 = getCopReg(2,0xd);
        puVar16[3] = uVar4;
        uVar4 = getCopReg(2,0xe);
        puVar16[4] = uVar4;
        puVar16[1] = uVar3;
        puVar16[5] = 0x55555555;
        puVar5 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar16 = *puVar5 | 0x5000000;
        *puVar5 = (uint)puVar16;
        puVar6 = puVar16 + 6;
        func_0x00083de0(puVar6,0,1,0x35,0);
        puVar5 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar6 = *puVar5 | 0x2000000;
        *puVar5 = (uint)puVar6;
        uVar4 = getCopReg(2,0xc);
        puVar16[0xb] = uVar4;
        uVar4 = getCopReg(2,0xd);
        puVar16[0xc] = uVar4;
        uVar4 = getCopReg(2,0xe);
        puVar16[0xd] = uVar4;
        puVar16[10] = uVar3;
        puVar16[0xe] = 0x55555555;
        *(short *)(puVar16 + 0xb) = (short)puVar16[0xb] + 2;
        *(short *)(puVar16 + 0xc) = (short)puVar16[0xc] + 2;
        *(short *)(puVar16 + 0xd) = (short)puVar16[0xd] + 2;
        *(short *)((int)puVar16 + 0x2e) = *(short *)((int)puVar16 + 0x2e) + 1;
        *(short *)((int)puVar16 + 0x32) = *(short *)((int)puVar16 + 0x32) + 1;
        *(short *)((int)puVar16 + 0x36) = *(short *)((int)puVar16 + 0x36) + 1;
        puVar5 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        puVar16[9] = *puVar5 | 0x5000000;
        *puVar5 = (uint)(puVar16 + 9);
        puVar15 = puVar16 + 0xf;
        iVar2 = 0;
        puVar5 = puVar15;
        func_0x00083de0(puVar15,0,1,0x55,0);
        puVar6 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar15 = *puVar6 | 0x2000000;
        *puVar6 = (uint)puVar15;
        puVar16 = puVar16 + 0x12;
        uVar1 = extraout_at;
      }
    }
    iVar7 = iVar7 + 1;
    puVar17 = puVar17 + 4;
  } while (iVar7 * 0x10000 >> 0x10 < 7);
  _DAT_800bf544 = puVar16;
  return;
}

