
void FUN_8001fd2c(undefined4 param_1,uint param_2)

{
  FUN_8001f64c();
  *DAT_80027420 = *DAT_80027420 | 0x88;
  *DAT_800273fc = 0;
  *DAT_800273f4 = param_1;
  *DAT_800273f8 = (param_2 >> 5) << 0x10 | 0x20;
  *DAT_800273fc = 0x1000200;
  return;
}

