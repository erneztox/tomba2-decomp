// FUN_80030264

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80030264(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  short sVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 in_stack_ffffffa4;
  undefined4 uVar21;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined2 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  undefined4 *local_34;
  int local_30;
  
  sVar18 = *(short *)(param_1 + 0x50);
  iVar19 = (int)sVar18;
  if (*(char *)(param_1 + 4) == '\x01') {
    if (iVar19 < 0) {
      sVar18 = 0;
    }
    uVar21 = CONCAT22((short)((uint)in_stack_ffffffa4 >> 0x10),*(undefined2 *)(param_1 + 0x30));
    uVar20 = CONCAT22(*(short *)(param_1 + 0x2e) + sVar18 * -10,*(undefined2 *)(param_1 + 0x2c));
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    _DAT_1f800090 = 0;
    FUN_80085480(param_1 + 0x48,0x1f800000,0x1f800000,param_4,uVar20,uVar21);
    local_58 = (uint)DAT_800a1cd4 << 2;
    local_54 = (uint)DAT_800a1cd5 << 2;
    local_50 = (uint)DAT_800a1cd6 << 2;
    FUN_80084520(0x1f800000,&local_58);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar5 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar4 = getCopReg(2,0x4800);
    uVar6 = getCopReg(2,0x5000);
    uVar8 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar4,(short)uVar3);
    _DAT_1f80000c = CONCAT22((short)uVar8,(short)uVar7);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar5,(short)uVar3);
    _DAT_1f800008 = CONCAT22((short)uVar4,(short)uVar6);
    _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar7);
    setCopReg(2,in_zero,uVar20);
    setCopReg(2,extraout_at,uVar21);
    copFunction(2,0x486012);
    _DAT_1f800014 = getCopReg(2,0x19);
    _DAT_1f800018 = getCopReg(2,0x1a);
    _DAT_1f80001c = getCopReg(2,0x1b);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
    setCopControlWord(2,0,_DAT_1f800000);
    setCopControlWord(2,0x800,_DAT_1f800004);
    setCopControlWord(2,0x1000,_DAT_1f800008);
    setCopControlWord(2,0x1800,_DAT_1f80000c);
    setCopControlWord(2,0x2000,_DAT_1f800010);
    setCopControlWord(2,0x2800,_DAT_1f800014);
    setCopControlWord(2,0x3000,_DAT_1f800018);
    setCopControlWord(2,0x3800,_DAT_1f80001c);
    FUN_80027768(&DAT_8009f428,0,(int)*(short *)(param_1 + 0x32),0);
  }
  else {
    iVar13 = 0x12d687;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    local_34 = &local_58;
    _DAT_1f800090 = 0;
    local_38 = 0;
    local_30 = 0;
    do {
      iVar16 = iVar13 + iVar19;
      uVar14 = iVar13 * 5 + 1;
      uVar9 = uVar14 & 0xfff;
      uVar14 = uVar14 * 5 + 1;
      uVar17 = uVar14 & 0xfff;
      uVar15 = uVar14 * 5 + 1;
      uVar14 = uVar15 & 0x1ff;
      iVar13 = uVar15 * 5 + 1;
      if ((int)(uVar14 - 0x100) < 0) {
        iVar10 = uVar14 - 0x140;
      }
      else {
        iVar10 = uVar14 - 0xc0;
      }
      iVar11 = iVar10 * iVar19 >> 9;
      iVar10 = FUN_80083e80(uVar9);
      iVar1 = FUN_80083f50(uVar9);
      iVar12 = iVar1 * iVar11 >> 0xc;
      iVar1 = FUN_80083e80(uVar17);
      iVar2 = FUN_80083f50(uVar17);
      local_58 = CONCAT22(*(short *)(param_1 + 0x2e) +
                          ((short)(iVar10 * iVar11 >> 0xc) - (short)local_30),
                          *(short *)(param_1 + 0x2c) + (short)(iVar12 * iVar1 >> 0xc));
      sVar18 = (short)iVar16;
      local_50 = CONCAT22(sVar18 * 2,sVar18);
      local_4c = (undefined2)(iVar16 >> 2);
      local_54 = CONCAT22(local_54._2_2_,*(short *)(param_1 + 0x30) + (short)(iVar12 * iVar2 >> 0xc)
                         );
      FUN_80085480(&local_50,0x1f800000);
      local_48 = (uint)DAT_800a1cd4 << 2;
      local_44 = (uint)DAT_800a1cd5 << 2;
      local_40 = (uint)DAT_800a1cd6 << 2;
      FUN_80084520(0x1f800000,&local_48);
      setCopControlWord(2,0,_DAT_1f8000f8);
      setCopControlWord(2,0x800,_DAT_1f8000fc);
      setCopControlWord(2,0x1000,_DAT_1f800100);
      setCopControlWord(2,0x1800,_DAT_1f800104);
      setCopControlWord(2,0x2000,_DAT_1f800108);
      setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
      setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
      setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
      copFunction(2,0x49e012);
      uVar3 = getCopReg(2,0x4800);
      uVar5 = getCopReg(2,0x5000);
      uVar7 = getCopReg(2,0x5800);
      setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
      setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
      setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
      copFunction(2,0x49e012);
      uVar4 = getCopReg(2,0x4800);
      uVar6 = getCopReg(2,0x5000);
      uVar8 = getCopReg(2,0x5800);
      _DAT_1f800000 = CONCAT22((short)uVar4,(short)uVar3);
      _DAT_1f80000c = CONCAT22((short)uVar8,(short)uVar7);
      setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
      setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
      setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
      copFunction(2,0x49e012);
      uVar3 = getCopReg(2,0x4800);
      uVar4 = getCopReg(2,0x5000);
      uVar7 = getCopReg(2,0x5800);
      _DAT_1f800004 = CONCAT22((short)uVar5,(short)uVar3);
      _DAT_1f800008 = CONCAT22((short)uVar4,(short)uVar6);
      _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar7);
      setCopReg(2,in_zero,*local_34);
      setCopReg(2,extraout_at_00,local_34[1]);
      copFunction(2,0x486012);
      _DAT_1f800014 = getCopReg(2,0x19);
      _DAT_1f800018 = getCopReg(2,0x1a);
      _DAT_1f80001c = getCopReg(2,0x1b);
      _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
      _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
      _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
      setCopControlWord(2,0,_DAT_1f800000);
      setCopControlWord(2,0x800,_DAT_1f800004);
      setCopControlWord(2,0x1000,_DAT_1f800008);
      setCopControlWord(2,0x1800,_DAT_1f80000c);
      setCopControlWord(2,0x2000,_DAT_1f800010);
      setCopControlWord(2,0x2800,_DAT_1f800014);
      setCopControlWord(2,0x3000,_DAT_1f800018);
      setCopControlWord(2,0x3800,_DAT_1f80001c);
      local_30 = local_30 + 0x14;
      local_38 = local_38 + 1;
      FUN_80027768(&DAT_8009f620,0,(int)*(short *)(param_1 + 0x32),0);
    } while (local_38 < 10);
  }
  return;
}

