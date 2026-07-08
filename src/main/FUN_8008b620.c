
undefined4 FUN_8008b620(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  *DAT_800ac280 = 0;
  *DAT_800ac28c = 0x80;
  *DAT_800ac2b4 = 0x20943;
  *DAT_800ac290 = 0x1323;
  *DAT_800ac2b8 = *DAT_800ac2b8 | 0x8000;
  *DAT_800ac2bc = param_1;
  *DAT_800ac2c0 = param_2 | 0x10000;
  do {
  } while ((*DAT_800ac280 & 0x40) == 0);
  *DAT_800ac2c4 = 0x11000000;
  uVar1 = *DAT_800ac2c4;
  while ((uVar1 & 0x1000000) != 0) {
    uVar1 = *DAT_800ac2c4;
  }
  *DAT_800ac290 = 0x1325;
  return 0;
}

