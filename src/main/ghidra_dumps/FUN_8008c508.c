
void FUN_8008c508(void)

{
  DAT_800ac2ec = DAT_800ac2ec + DAT_800ac2f4 * 4;
  DAT_800ac2f8 = DAT_800ac2f8 + -1;
  DAT_800ac304 = DAT_800ac304 + 1;
  if (DAT_800ac2f8 == 0) {
    FUN_80089b98(DAT_800ac310);
    if ((DAT_800abf28 & 1) != 0) {
      FUN_80089fc8(DAT_800ac314);
    }
    FUN_80089b84(FUN_8008c260);
    FUN_80089ce8(9,0);
    DAT_800ac308 = 1;
    if (DAT_800abf24 != (code *)0x0) {
      (*DAT_800abf24)(2,DAT_800ac318);
    }
  }
  return;
}

