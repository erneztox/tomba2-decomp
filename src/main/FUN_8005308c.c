
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8005308c(void)

{
  if ((_DAT_800e7e84 & 0xff) != 1) {
    return 0;
  }
  if (1 < DAT_800e7e85) {
    if (DAT_800e7fe4 != '\0') {
      _DAT_1f800166 = 0;
      _DAT_1f800190 = 0;
      DAT_1f800230 = 1;
      DAT_800bf81e = 0;
      return 1;
    }
    if ((_DAT_800e7e84 & 0xffff00) != 0x20200) {
      DAT_1f800230 = DAT_800e7e84;
      return 0;
    }
  }
  if (DAT_800e7fe4 == '\0') {
    FUN_80054198(&DAT_800e7e80);
  }
  DAT_800bf81e = 0;
  DAT_1f800230 = 1;
  _DAT_1f800190 = 0;
  _DAT_1f800166 = 0;
  return 1;
}

