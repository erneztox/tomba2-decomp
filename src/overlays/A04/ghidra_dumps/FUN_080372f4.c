// FUN_080372f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080372f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x000519e0(param_1,0xf,_DAT_800ecfcc,0x8013fb64);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    uVar2 = func_0x00040cdc(param_1,0x80144404,0x800a3d18);
    return uVar2;
  }
  return 0;
}

