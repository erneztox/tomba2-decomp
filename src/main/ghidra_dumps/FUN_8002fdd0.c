
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002fdd0(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 in_stack_ffffffc4;
  undefined4 uVar12;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar2 = DAT_800102ec;
  sVar3 = *(short *)(param_1 + 0x50);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  sVar1 = *(short *)(param_1 + 0x52);
  uVar12 = CONCAT22((short)((uint)in_stack_ffffffc4 >> 0x10),*(undefined2 *)(param_1 + 0x30));
  uVar11 = CONCAT22(*(short *)(param_1 + 0x2e) + sVar3 * -10,*(undefined2 *)(param_1 + 0x2c));
  setCopControlWord(2,0xa800,0x1e0);
  setCopControlWord(2,0xb000,0x3c0);
  setCopControlWord(2,0xb800,0x640);
  iVar10 = 0;
  _DAT_1f800090 = 0x1000;
  do {
    FUN_80085480(param_1 + 0x48,0x1f800000);
    local_30 = (uVar2 & 0xff) << 2;
    local_28 = (uVar2 >> 0x10 & 0xff) << 2;
    local_2c = (uVar2 >> 8 & 0xff) << 2;
    FUN_80084520(0x1f800000,&local_30);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar4 = getCopReg(2,0x4800);
    uVar6 = getCopReg(2,0x5000);
    uVar8 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar5 = getCopReg(2,0x4800);
    uVar7 = getCopReg(2,0x5000);
    uVar9 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar5,(short)uVar4);
    _DAT_1f80000c = CONCAT22((short)uVar9,(short)uVar8);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar4 = getCopReg(2,0x4800);
    uVar5 = getCopReg(2,0x5000);
    uVar8 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar6,(short)uVar4);
    _DAT_1f800008 = CONCAT22((short)uVar5,(short)uVar7);
    _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar8);
    setCopReg(2,in_zero,uVar11);
    setCopReg(2,extraout_at,uVar12);
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
    FUN_80027768(&DAT_8009f3e0,0,(int)*(short *)(param_1 + 0x32),(int)sVar1,uVar11,uVar12);
    iVar10 = iVar10 + 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
  } while (iVar10 < 4);
  return;
}

