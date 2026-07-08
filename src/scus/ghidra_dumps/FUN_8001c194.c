
void FUN_8001c194(void)

{
  DAT_80026c00 = DAT_80026c00 + DAT_80026c08 * 4;
  DAT_80026c0c = DAT_80026c0c + -1;
  DAT_80026c18 = DAT_80026c18 + 1;
  if (DAT_80026c0c == 0) {
    FUN_80019024(DAT_80026c24);
    if ((DAT_8002683c & 1) != 0) {
      FUN_80019454(DAT_80026c28);
    }
    FUN_80019010(0x8001b6ec);
    FUN_80019174(9,0);
    DAT_80026c1c = 1;
    if (DAT_80026838 != (code *)0x0) {
      (*DAT_80026838)(2,DAT_80026c2c);
    }
  }
  return;
}

