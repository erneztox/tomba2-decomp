// A09_CameraSetup1 - Camera setup mode 1: DAT_800e806c=2, sets zoom params

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 A09_CameraSetup1(void)

{
  DAT_800e806c = 2;
  _DAT_800e8076 = 0x80;
  _DAT_800e8078 = 0x400;
  _DAT_800e8074 = _DAT_801003f8 * 5;
  func_0x0006cba8(&DAT_800e7eac);
  return 1;
}

