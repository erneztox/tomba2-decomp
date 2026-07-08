
undefined4 FUN_8001598c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_v0;
  int iVar1;
  int in_v1;
  
  iVar1 = in_v1 * 0x60 + -0x7ffc79fc;
  *(int *)(&DAT_800385fc + in_v0 * 0x60) = iVar1;
  *(int *)(param_3 + 0x14) = iVar1;
  FUN_80014f44(&DAT_800384a8);
  return 0;
}

