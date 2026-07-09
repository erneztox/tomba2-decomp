// FUN_801350f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801350f0(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_2c;
  
  iVar11 = 0;
  _DAT_1f800002 = 0;
  _DAT_1f800004 = 0;
  _DAT_1f800006 = 0;
  _DAT_1f80000a = 0;
  _DAT_1f80000c = 0;
  _DAT_1f80000e = 0;
  _DAT_1f80001c = 0;
  _DAT_1f800018 = 0;
  _DAT_1f800014 = 0;
  _DAT_1f800000 = (undefined2)((int)*(short *)(param_1 + 0x50) << 4);
  uVar2 = (0x80 - ((*(short *)(param_1 + 0x50) + -0x14) * 0x80) / 200) * 0x10000 >> 0x10;
  uVar2 = uVar2 << 0x10 | uVar2 << 8 | 0x4a000000 | uVar2;
  _DAT_1f800008 = _DAT_1f800000;
  _DAT_1f800010 = _DAT_1f800000;
  func_0x80084110(&DAT_1f8000f8,0x1f800000,0x1f800000);
  func_0x80084220(param_1 + 0x2c,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
  _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
  _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
  iVar6 = _DAT_1f800110;
  func_0x80084660(0x1f800000);
  puVar5 = (uint *)&DAT_1f800000;
  func_0x80084690(0x1f800000);
  puVar10 = (undefined4 *)&DAT_8014c780;
  uVar1 = extraout_at;
  puVar9 = _DAT_800bf544;
  do {
    setCopReg(2,in_zero,*puVar10);
    setCopReg(2,uVar1,puVar10[1]);
    setCopReg(2,puVar10 + 4,puVar10[2]);
    setCopReg(2,puVar10 + 2,puVar10[3]);
    setCopReg(2,puVar5,puVar10[4]);
    setCopReg(2,iVar6,puVar10[5]);
    copFunction(2,0x280030);
    iVar7 = getCopControlWord(2,0xf800);
    if (-1 < iVar7) {
      copFunction(2,0x158002d);
      iVar7 = getCopReg(2,7);
      iVar7 = iVar7 + *(short *)(param_1 + 0x32);
      uVar3 = iVar7 >> 10;
      local_2c = (iVar7 >> (uVar3 & 0x1f)) + uVar3 * 0x200;
      if (0x7fb < local_2c - 4U) {
        local_2c = -1;
      }
      if (0 < local_2c) {
        uVar3 = getCopReg(2,0xc);
        puVar9[2] = uVar3;
        uVar3 = getCopReg(2,0xd);
        puVar9[3] = uVar3;
        uVar3 = getCopReg(2,0xe);
        puVar9[4] = uVar3;
        puVar9[1] = uVar2;
        puVar9[5] = 0x55555555;
        puVar5 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar9 = *puVar5 | 0x5000000;
        *puVar5 = (uint)puVar9;
        puVar4 = puVar9 + 6;
        func_0x80083de0(puVar4,0,1,0x35,0);
        puVar5 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar4 = *puVar5 | 0x2000000;
        *puVar5 = (uint)puVar4;
        uVar3 = getCopReg(2,0xc);
        puVar9[0xb] = uVar3;
        uVar3 = getCopReg(2,0xd);
        puVar9[0xc] = uVar3;
        uVar3 = getCopReg(2,0xe);
        puVar9[0xd] = uVar3;
        puVar9[10] = uVar2;
        puVar9[0xe] = 0x55555555;
        *(short *)(puVar9 + 0xb) = (short)puVar9[0xb] + 2;
        *(short *)(puVar9 + 0xc) = (short)puVar9[0xc] + 2;
        *(short *)(puVar9 + 0xd) = (short)puVar9[0xd] + 2;
        *(short *)((int)puVar9 + 0x2e) = *(short *)((int)puVar9 + 0x2e) + 1;
        *(short *)((int)puVar9 + 0x32) = *(short *)((int)puVar9 + 0x32) + 1;
        *(short *)((int)puVar9 + 0x36) = *(short *)((int)puVar9 + 0x36) + 1;
        puVar5 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        puVar9[9] = *puVar5 | 0x5000000;
        *puVar5 = (uint)(puVar9 + 9);
        puVar8 = puVar9 + 0xf;
        iVar6 = 0;
        puVar5 = puVar8;
        func_0x80083de0(puVar8,0,1,0x55,0);
        puVar4 = (uint *)(_DAT_800ed8c8 + local_2c * 4);
        *puVar8 = *puVar4 | 0x2000000;
        *puVar4 = (uint)puVar8;
        puVar9 = puVar9 + 0x12;
        uVar1 = extraout_at_00;
      }
    }
    iVar11 = iVar11 + 1;
    puVar10 = puVar10 + 4;
  } while (iVar11 * 0x10000 >> 0x10 < 7);
  _DAT_800bf544 = puVar9;
  return;
}

