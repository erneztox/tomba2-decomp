// FUN_80110ec4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80110ec4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x800781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                          (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
  if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
    return 0;
  }
  if (iVar1 < 0x641) {
    if (iVar1 < 0x385) {
      if (iVar1 < 0x12d) {
        iVar1 = func_0x8009a450();
        return (uint)*(byte *)((iVar1 >> 8 & 0xfU) + 0x80135c18);
      }
      iVar1 = -0x7feca3f8;
    }
    else {
      iVar1 = -0x7feca408;
    }
    uVar2 = func_0x80077768(0,(int)*(short *)(iVar1 + 0x60),0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

