
uint FUN_80094474(short param_1,int param_2,ushort param_3,uint param_4)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = (int)(((param_4 & 0xff) + param_2) * 0x10000) >> 0x10;
  iVar1 = iVar5;
  if (iVar5 < 0) {
    iVar1 = iVar5 + 0x7f;
  }
  sVar2 = (param_1 + (short)(iVar1 >> 7)) - (param_3 & 0xff);
  iVar5 = iVar5 + (iVar1 >> 7) * -0x80;
  if (iVar5 * 0x10000 < 0) {
    iVar5 = iVar5 + 0x80;
    iVar1 = iVar5 * 0x10000 >> 0x10;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x7f;
    }
    sVar2 = sVar2 + -1 + (short)(iVar1 >> 7);
  }
  sVar4 = sVar2 / 0xc + -2;
  iVar1 = (int)sVar2 % 0xc;
  if (iVar1 * 0x10000 < 0) {
    iVar1 = iVar1 + 0xc;
    sVar4 = sVar2 / 0xc + -3;
  }
  if (sVar4 < 0) {
    uVar3 = -(int)sVar4;
    uVar3 = (uint)(((int)((uint)*(ushort *)(&DAT_800ac464 + ((iVar1 << 0x10) >> 0xf)) *
                         (uint)*(ushort *)(&DAT_800ac47c + ((iVar5 << 0x10) >> 0xf))) >> 0x10) +
                  (1 << (uVar3 - 1 & 0x1f))) >> (uVar3 & 0x1f);
  }
  else {
    uVar3 = 0x3fff;
  }
  return uVar3 & 0xffff;
}

