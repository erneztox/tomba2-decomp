// FUN_8010bed8

void FUN_8010bed8(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x164) != '\x05') || (*(char *)(param_1 + 0x147) != param_2[0x47])) &&
     (iVar1 = func_0x80022f04(param_1,param_2), iVar1 != 0)) {
    *param_2 = 2;
    param_2[4] = 2;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  return;
}

