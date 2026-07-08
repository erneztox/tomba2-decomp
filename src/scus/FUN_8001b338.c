
undefined4 FUN_8001b338(void)

{
  uint uVar1;
  byte *in_v1;
  
  do {
  } while ((*in_v1 & 0x40) == 0);
  *DAT_80026bd8 = 0x11000000;
  uVar1 = *DAT_80026bd8;
  while ((uVar1 & 0x1000000) != 0) {
    uVar1 = *DAT_80026bd8;
  }
  *DAT_80026ba4 = 0x1325;
  return 0;
}

