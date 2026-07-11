// FUN_80110be4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80110be4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x800782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  return 0x800 < ((param_2 - iVar1) + 0x400U & 0xfff);
}

