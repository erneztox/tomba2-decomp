// FUN_8009ae60

void FUN_8009ae60(byte param_1)

{
  if (param_1 == 9) {
    do {
      FUN_8009ae60(0x20);
    } while ((DAT_800acf04 & 7) != 0);
  }
  else {
    if (param_1 == 10) {
      FUN_8009ae60(0xd);
      DAT_800acf04 = 0;
    }
    else if (((int)(char)(&DAT_800ace75)[param_1] & 0x97U) != 0) {
      DAT_800acf04 = DAT_800acf04 + 1;
    }
    if (0x1f < DAT_800acf08) {
      FUN_800808e0(1,0x80105ef8);
      DAT_800acf08 = 0;
    }
    *(byte *)(DAT_800acf08 + -0x7fefa108) = param_1;
    DAT_800acf08 = DAT_800acf08 + 1;
  }
  return;
}

