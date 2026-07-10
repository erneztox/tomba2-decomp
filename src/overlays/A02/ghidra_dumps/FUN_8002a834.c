// FUN_8002a834

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002a834(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short local_40;
  short local_3e;
  short local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  int local_30;
  int local_2c;
  int local_28;
  
  pbVar2 = (byte *)(param_1 + 0x50);
  iVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 2) * 4;
  setCopControlWord(2,0xa800,(uint)(byte)(&DAT_800a1fc4)[iVar1] << 4);
  setCopControlWord(2,0xb000,(uint)(byte)(&DAT_800a1fc5)[iVar1] << 4);
  setCopControlWord(2,0xb800,(uint)(byte)(&DAT_800a1fc6)[iVar1] << 4);
  iVar1 = 0;
  _DAT_1f800090 = 0xfff;
  do {
    local_38 = pbVar2[3];
    local_40 = (ushort)*pbVar2 << 4;
    local_3e = (ushort)pbVar2[1] << 4;
    local_3c = (ushort)pbVar2[2] << 4;
    local_37 = local_38;
    local_36 = local_38;
    FUN_80085480(&local_40,0x1f800000);
    local_30 = (uint)local_38 << 2;
    local_28 = (uint)local_36 << 2;
    local_2c = (uint)local_37 << 2;
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
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
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
    pbVar2 = pbVar2 + 4;
    iVar1 = iVar1 + 1;
    FUN_80027768(&DAT_8009fb0c,0,(int)*(short *)(param_1 + 0x32),0);
  } while (iVar1 < 10);
  return;
}

