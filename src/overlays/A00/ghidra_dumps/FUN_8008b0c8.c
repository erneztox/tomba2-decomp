// FUN_8008b0c8

void FUN_8008b0c8(void)

{
  byte bVar1;
  
  *DAT_800ac280 = 1;
  bVar1 = *DAT_800ac28c;
  while ((bVar1 & 7) != 0) {
    *DAT_800ac280 = 1;
    *DAT_800ac28c = 7;
    *DAT_800ac288 = 7;
    bVar1 = *DAT_800ac28c;
  }
  DAT_800ac29a = 0;
  DAT_800ac299 = 0;
  DAT_800ac298 = 2;
  *DAT_800ac280 = 0;
  *DAT_800ac28c = 0;
  *DAT_800ac290 = 0x1325;
  return;
}

