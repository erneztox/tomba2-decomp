
undefined4 FUN_8001366c(int param_1,int param_2)

{
  *(uint *)(*(int *)(param_2 + 0x54a4) + 4) =
       *(uint *)(*(int *)(param_2 + 0x54a4) + 4) & ~*(uint *)(&DAT_800254ac + param_1);
  return 1;
}

