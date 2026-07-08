
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002ab5c(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_28;
  int local_24;
  int local_20;
  
  _DAT_1f800090 = (0x80 - *(short *)(param_1 + 0x4e)) * 0x20;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  DAT_800a2014 = (byte)((int)*(short *)(param_1 + 0x40) * (int)*(short *)(param_1 + 0x50) >> 0xb);
  DAT_800a2016 = (byte)((int)*(short *)(param_1 + 0x42) * (int)*(short *)(param_1 + 0x50) >> 0xb);
  FUN_80085480(param_1 + 0x54,0x1f800000);
  local_28 = (uint)DAT_800a2014 << 2;
  local_24 = (uint)DAT_800a2015 << 2;
  local_20 = (uint)DAT_800a2016 << 2;
  FUN_80084520(0x1f800000,&local_28);
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
  copFunction(2,0x49e012);
  uVar1 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar5 = getCopReg(2,0x5800);
  setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
  setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
  setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
  copFunction(2,0x49e012);
  uVar2 = getCopReg(2,0x4800);
  uVar4 = getCopReg(2,0x5000);
  uVar6 = getCopReg(2,0x5800);
  _DAT_1f800000 = CONCAT22((short)uVar2,(short)uVar1);
  _DAT_1f80000c = CONCAT22((short)uVar6,(short)uVar5);
  setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
  copFunction(2,0x49e012);
  uVar1 = getCopReg(2,0x4800);
  uVar2 = getCopReg(2,0x5000);
  uVar5 = getCopReg(2,0x5800);
  _DAT_1f800004 = CONCAT22((short)uVar3,(short)uVar1);
  _DAT_1f800008 = CONCAT22((short)uVar2,(short)uVar4);
  _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar5);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x48));
  setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x4c));
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
  FUN_80027768(&DAT_8009fae8,0,0,0);
  return;
}

