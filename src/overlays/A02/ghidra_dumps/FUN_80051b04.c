// FUN_80051b04

void FUN_80051b04(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x40) =
       *(int *)(&DAT_800ecf58 + param_2 * 4) +
       *(int *)(*(int *)(&DAT_800ecf58 + param_2 * 4) + param_3 * 4 + 4);
  return;
}

