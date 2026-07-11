// FUN_80102b48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80102b48(void)

{
  func_0x80054198(&DAT_800e7e80);
  DAT_800e7e85 = 0x24;
  if (DAT_800bf817 == '\x04') {
    DAT_800e7e86 = 6;
    FUN_8010bb48();
    return;
  }
  if (DAT_800bf817 == '\x05') {
    DAT_800e7e86 = DAT_800bf817;
    FUN_8010bb48();
    return;
  }
  DAT_800e7e86 = 0;
  DAT_800e7feb = 0;
  DAT_800bf816 = 0;
  DAT_800e806c = 0;
  _DAT_1f800184 = 0;
  return;
}

