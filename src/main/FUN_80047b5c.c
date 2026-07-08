
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80047b5c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  byte *pbVar4;
  uint uVar5;
  ushort uVar6;
  
  if (param_2 == 0) {
    uVar6 = 0xfff3;
    uVar5 = (uint)(byte)_DAT_1f8001e4[3];
  }
  else {
    uVar6 = 0xfffd;
    uVar5 = (uint)(_DAT_1f8001e4[3] >> 8);
  }
  pbVar4 = (byte *)(_DAT_1f8001d4 + (uint)_DAT_1f8001e4[1] * 8 + ((int)(uVar5 << 0x10) >> 0xd));
  if (((*_DAT_1f8001e4 & 1) == 0) ||
     (uVar2 = 0,
     (ushort)(*(short *)(pbVar4 + 4) - (*(short *)(param_1 + 0x32) + -0x80)) <=
     *(ushort *)(pbVar4 + 6))) {
    psVar3 = (short *)(_DAT_1f8001c8 + (uint)*(ushort *)((uint)*pbVar4 * 2 + _DAT_1f8001c8) * 2);
    sVar1 = FUN_80085690((int)psVar3[3] - (int)psVar3[2],(int)psVar3[1] - (int)*psVar3);
    _DAT_1f8001a0 = -sVar1;
    _DAT_1f8001a2 = _DAT_1f8001a0;
    if ((*_DAT_1f8001e4 & 0x10) == 0) {
      _DAT_1f8001a2 = _DAT_1f8001a0 + 0x800 & 0xfff;
    }
    if (param_2 != 0) {
      _DAT_1f8001a2 = _DAT_1f8001a2 + 0x800 & 0xfff;
    }
    uVar2 = 1;
  }
  else {
    _DAT_1f8001a8 = _DAT_1f8001a8 & uVar6;
  }
  return uVar2;
}

