// FUN_8006f04c

void FUN_8006f04c(void)

{
  uint uVar1;
  
  if ((DAT_800bf840 & 0x80) == 0) {
    return;
  }
  uVar1 = DAT_800bf840 & 0xf;
  switch(uVar1) {
  case 0:
  case 1:
  case 6:
    if (*(byte *)(uVar1 + 0x800bfe3a) < 3) {
      *(byte *)(uVar1 + 0x800bfe3a) = *(byte *)(uVar1 + 0x800bfe3a) + 1;
      DAT_800bf840 = 0;
      return;
    }
    break;
  default:
    goto LAB_8006f0d4;
  case 7:
  case 8:
    FUN_8006f02c(uVar1);
  }
  FUN_8006f00c(uVar1);
LAB_8006f0d4:
  DAT_800bf840 = 0;
  return;
}

