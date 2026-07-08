
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80029f6c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  short local_3c;
  short local_3a;
  int local_38;
  int local_34;
  int local_30;
  
  iVar12 = *(int *)(param_1 + 0x10);
  FUN_80029664(param_1 + 0x38,4,(uint)*(byte *)(param_1 + 3) * 0x14 + -0x7ff5e110,
               (uint)*(byte *)(param_1 + 3) * 4 + -0x7ff5e05c);
  if ((*(byte *)(param_1 + 5) - 2 < 2) && ((*(ushort *)(param_1 + 0x36) & 7) < 3)) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    local_40 = 0;
    local_44 = CONCAT22(local_44._2_2_,*(undefined2 *)(param_1 + 0x34));
    local_3e = *(undefined2 *)(iVar12 + 0x68);
    iVar4 = (uint)*(byte *)(param_1 + 3) * 4;
    local_3a = 0;
    local_3c = *(short *)(param_1 + 0x36) + -0x400;
    sVar1 = *(short *)(param_1 + 0x36);
    setCopControlWord(2,0xa800,(uint)(byte)(&DAT_800a1fc8)[iVar4] << 4);
    setCopControlWord(2,0xb000,(uint)(byte)(&DAT_800a1fc9)[iVar4] << 4);
    setCopControlWord(2,0xb800,(uint)(byte)(&DAT_800a1fca)[iVar4] << 4);
    iVar4 = 0;
    _DAT_1f800090 = 0xfff;
    do {
      if (*(byte *)(param_1 + 3) < 6) {
        iVar11 = (uint)*(byte *)(param_1 + 6) * 4;
        FUN_80085480(&local_40,0x1f800000);
        FUN_80051794(&DAT_1f800020);
        FUN_80084eb0((int)local_3a,&DAT_1f800020);
        FUN_80084250(0x1f800000,&DAT_1f800020);
        local_38 = (uint)(byte)(&DAT_800a1fec)[iVar11] << 2;
        local_34 = (uint)(byte)(&DAT_800a1fed)[iVar11] << 2;
        local_30 = (uint)(byte)(&DAT_800a1fee)[iVar11] << 2;
        FUN_80084520(0x1f800000,&local_38);
        setCopControlWord(2,0,_DAT_1f8000f8);
        setCopControlWord(2,0x800,_DAT_1f8000fc);
        setCopControlWord(2,0x1000,_DAT_1f800100);
        setCopControlWord(2,0x1800,_DAT_1f800104);
        setCopControlWord(2,0x2000,_DAT_1f800108);
        setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
        setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
        setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
        copFunction(2,0x49e012);
        uVar5 = getCopReg(2,0x4800);
        uVar7 = getCopReg(2,0x5000);
        uVar9 = getCopReg(2,0x5800);
        setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
        setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
        setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
        copFunction(2,0x49e012);
        uVar6 = getCopReg(2,0x4800);
        uVar8 = getCopReg(2,0x5000);
        uVar10 = getCopReg(2,0x5800);
        _DAT_1f800000 = CONCAT22((short)uVar6,(short)uVar5);
        _DAT_1f80000c = CONCAT22((short)uVar10,(short)uVar9);
        setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
        setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
        setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
        copFunction(2,0x49e012);
        uVar5 = getCopReg(2,0x4800);
        uVar6 = getCopReg(2,0x5000);
        uVar9 = getCopReg(2,0x5800);
        _DAT_1f800004 = CONCAT22((short)uVar7,(short)uVar5);
        _DAT_1f800008 = CONCAT22((short)uVar6,(short)uVar8);
        _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar9);
        setCopReg(2,in_zero,uVar2);
        setCopReg(2,extraout_at,local_44);
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
        puVar3 = &DAT_8009f3e0;
      }
      else {
        FUN_80051b34(iVar12 + 0x98,0x1f800000);
        FUN_80051794(&DAT_1f800020);
        FUN_80085050((int)local_3a,&DAT_1f800020);
        FUN_80084250(0x1f800000,&DAT_1f800020);
        local_38 = (uint)DAT_800a1cd4 << 2;
        local_34 = (uint)DAT_800a1cd5 << 2;
        local_30 = (uint)DAT_800a1cd6 << 2;
        FUN_80084520(0x1f800000,&local_38);
        setCopControlWord(2,0,_DAT_1f8000f8);
        setCopControlWord(2,0x800,_DAT_1f8000fc);
        setCopControlWord(2,0x1000,_DAT_1f800100);
        setCopControlWord(2,0x1800,_DAT_1f800104);
        setCopControlWord(2,0x2000,_DAT_1f800108);
        setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
        setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
        setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
        copFunction(2,0x49e012);
        uVar5 = getCopReg(2,0x4800);
        uVar7 = getCopReg(2,0x5000);
        uVar9 = getCopReg(2,0x5800);
        setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
        setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
        setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
        copFunction(2,0x49e012);
        uVar6 = getCopReg(2,0x4800);
        uVar8 = getCopReg(2,0x5000);
        uVar10 = getCopReg(2,0x5800);
        _DAT_1f800000 = CONCAT22((short)uVar6,(short)uVar5);
        _DAT_1f80000c = CONCAT22((short)uVar10,(short)uVar9);
        setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
        setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
        setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
        copFunction(2,0x49e012);
        uVar5 = getCopReg(2,0x4800);
        uVar6 = getCopReg(2,0x5000);
        uVar9 = getCopReg(2,0x5800);
        _DAT_1f800004 = CONCAT22((short)uVar7,(short)uVar5);
        _DAT_1f800008 = CONCAT22((short)uVar6,(short)uVar8);
        _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar9);
        setCopReg(2,in_zero,uVar2);
        setCopReg(2,extraout_at_00,local_44);
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
        puVar3 = &DAT_8009f398;
      }
      FUN_80027768(puVar3,0,0,((int)sVar1 << 0x15) >> 0x10);
      iVar4 = iVar4 + 1;
      local_3a = local_3a + 0x400;
    } while (iVar4 < 4);
  }
  return;
}

