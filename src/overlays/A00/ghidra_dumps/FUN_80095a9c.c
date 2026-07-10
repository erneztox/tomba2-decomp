// FUN_80095a9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80095a9c(uint param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  
  _DAT_80105d0c = (short)param_1;
  iVar1 = *(int *)(&DAT_80104c30 + (param_1 & 0xff) * 4) + ((int)(param_1 & 0xff00) >> 8) * 0xb0;
  *param_2 = *(undefined2 *)(iVar1 + 0x58);
  *param_3 = *(undefined2 *)(iVar1 + 0x5a);
  return (int)_DAT_80105d0c;
}

