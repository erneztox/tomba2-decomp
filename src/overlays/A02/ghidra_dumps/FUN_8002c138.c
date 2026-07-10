// FUN_8002c138

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002c138(int param_1)

{
  int iVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_2c = 0;
  local_30 = 0;
  local_2e = *(undefined2 *)(param_1 + 0x56);
  iVar1 = ((int)((uint)*(ushort *)(param_1 + 0x60) << 0x10) >> 0x11) * 5;
  if ((*(ushort *)(param_1 + 0x60) & 1) != 0) {
    local_2c = 0xaa;
  }
  local_28 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
  local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(param_1 + 0x36));
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = 0;
  FUN_80085480(&local_30,0x1f800000);
  local_20 = (uint)(byte)(&DAT_800a203c)[iVar1] << 2;
  local_1c = (uint)(byte)(&DAT_800a203d)[iVar1] << 2;
  local_18 = (uint)(byte)(&DAT_800a203e)[iVar1] << 2;
  FUN_80084520(0x1f800000,&local_20);
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
  copFunction(2,0x49e012);
  uVar2 = getCopReg(2,0x4800);
  uVar4 = getCopReg(2,0x5000);
  uVar6 = getCopReg(2,0x5800);
  setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
  setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
  setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
  copFunction(2,0x49e012);
  uVar3 = getCopReg(2,0x4800);
  uVar5 = getCopReg(2,0x5000);
  uVar7 = getCopReg(2,0x5800);
  _DAT_1f800000 = CONCAT22((short)uVar3,(short)uVar2);
  _DAT_1f80000c = CONCAT22((short)uVar7,(short)uVar6);
  setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
  copFunction(2,0x49e012);
  uVar2 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar6 = getCopReg(2,0x5800);
  _DAT_1f800004 = CONCAT22((short)uVar4,(short)uVar2);
  _DAT_1f800008 = CONCAT22((short)uVar3,(short)uVar5);
  _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar6);
  setCopReg(2,in_zero,local_28);
  setCopReg(2,extraout_at,local_24);
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
  FUN_80027768(&DAT_8009f05c,(&DAT_800a203f)[iVar1],0xfffffff6,(&DAT_800a2040)[iVar1]);
  return;
}

