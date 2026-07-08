
undefined4 FUN_8001b3bc(undefined4 param_1,uint param_2,uint param_3)

{
  byte bVar1;
  
  *DAT_80026ba0 = 0x80;
  *DAT_80026bc8 = param_3 | 0x843;
  *DAT_80026ba4 = 0x1325;
  *DAT_80026bcc = *DAT_80026bcc | 0x8000;
  *DAT_80026bd0 = param_1;
  *DAT_80026bd4 = param_2 | 0x10000;
  bVar1 = *DAT_80026b94;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *DAT_80026b94;
  }
  *DAT_80026bd8 = 0x11400100;
  return 0;
}

