// A09_LevelInit - Level init: reset player, swim anim 0x24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_LevelInit(void)

{
  Entity_ResetState_2(&g_PlayerEntity);
  DAT_800bf816 = 1;
  _g_InputHeld = 0;
  DAT_800e7e85 = 0x24;
  DAT_800e7e86 = 0;
  DAT_800e7feb = 8;
  _DAT_1f800210 = _DAT_800e7fc0;
  return;
}

