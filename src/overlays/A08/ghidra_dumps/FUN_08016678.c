// FUN_08016678

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016678(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    if ((param_2[3] == '\0') || (DAT_800bfad7 == '\0')) {
      *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
      func_0x00022d08(param_1,param_2,1,0);
    }
    *param_2 = 2;
    param_2[4] = 2;
    param_2[5] = 2;
    param_2[6] = 0;
  }
  return;
}

