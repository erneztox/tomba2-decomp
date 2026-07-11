// A0G_LevelCleanup - Level cleanup: clear DAT_800bf816, reset player state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0G_LevelCleanup(void)

{
  DAT_800bf816 = 0;
  DAT_800e806c = 0;
  _DAT_1f800184 = 0;
  DAT_800e7e85 = 0x24;
  DAT_800e7e87 = 0;
  DAT_800e7e86 = 0;
  func_0x00054198(&DAT_800e7e80);
  DAT_800e7feb = 0;
  return;
}

