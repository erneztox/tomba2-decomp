
undefined4 FUN_8001b3dc(undefined4 param_1,uint param_2)

{
  byte bVar1;
  
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

