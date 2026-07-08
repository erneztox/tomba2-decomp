
void FUN_80045258(int param_1,int param_2)

{
  FUN_8001dc40(*(undefined4 *)(&DAT_800ecf58 + param_2 * 4),
               DAT_800be100 + (*(uint *)(&DAT_800fb170 + param_1 * 4) >> 0xb),
               *(int *)(&DAT_800fb170 + (param_1 + 1) * 4) - *(uint *)(&DAT_800fb170 + param_1 * 4))
  ;
  return;
}

