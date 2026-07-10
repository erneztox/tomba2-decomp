// FUN_80077d8c

void FUN_80077d8c(void)

{
  if (DAT_800bf842 != 0) {
    if ((DAT_800bf842 & 0x7f) == 1) {
      FUN_80074590(0x29,2,0xffffffbf);
      DAT_800bf842 = 0x87;
    }
    else if ((DAT_800bf842 & 0x7f) == 2) {
      FUN_80074590(0x2a,2,0xffffffbf);
      DAT_800bf842 = 0;
    }
    else {
      DAT_800bf842 = DAT_800bf842 - 1;
    }
  }
  return;
}

