// FUN_80110cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80110cb0(int param_1)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  
  sVar1 = *(short *)(param_1 + 100);
  sVar3 = func_0x800782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  bVar2 = ((sVar1 - sVar3) + 0x400U & 0xfff) < 0x801;
  if ((*(ushort *)(param_1 + 0x66) & 1) == 0) {
    uVar4 = 1;
    if (bVar2) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
    if (bVar2) {
      uVar4 = FUN_80119cc0();
      return uVar4;
    }
  }
  return uVar4;
}

