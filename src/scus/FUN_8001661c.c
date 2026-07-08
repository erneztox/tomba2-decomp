
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8001661c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_80016168(_DAT_80039df8,param_1);
  if (iVar1 != -1) {
    _DAT_80039df8 = _DAT_80039df8 + iVar1 * 4;
    uVar2 = FUN_80015e70();
    return uVar2;
  }
  return 0;
}

