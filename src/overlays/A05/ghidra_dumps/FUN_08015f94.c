// FUN_08015f94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015f94(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x000240fc();
  if ((iVar1 != 0) &&
     (((DAT_800e7ef8 == '\0' || (param_1 != _DAT_800e7e90)) && ((byte)param_1[4] < 3)))) {
    *param_1 = 2;
    param_1[4] = 3;
  }
  return;
}

