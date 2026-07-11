// FUN_0801152c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801152c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
    func_0x00022d08(param_1,param_2,1,1);
  }
  return;
}

