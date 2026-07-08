
void FUN_8001fc9c(undefined4 *param_1,uint param_2)

{
  FUN_8001f5b8();
  *DAT_80027420 = *DAT_80027420 | 0x88;
  *DAT_800273e8 = (int)(param_1 + 1);
  *DAT_800273ec = (param_2 >> 5) << 0x10 | 0x20;
  *DAT_80027418 = *param_1;
  *DAT_800273f0 = 0x1000201;
  return;
}

