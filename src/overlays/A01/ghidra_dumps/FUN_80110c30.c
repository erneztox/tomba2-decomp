// FUN_80110c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80110c30(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_1 + 100);
  sVar2 = func_0x800782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  if (0x800 < ((sVar1 - sVar2) + 0x400U & 0xfff)) {
    uVar3 = FUN_80119c30();
    return uVar3;
  }
  *(ushort *)(param_1 + 0x66) = *(ushort *)(param_1 + 0x66) & 0xfffe;
  return 0;
}

