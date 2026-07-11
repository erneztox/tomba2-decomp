// A0G_LevelCleanup - Level cleanup: clear DAT_800bf816, reset player state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0G_LevelCleanup(void)

{
  DAT_800bf816 = 0;
  g_LoadSubState = 0;
  _g_InputHeld = 0;
  DAT_800e7e85 = 0x24;
  DAT_800e7e87 = 0;
  DAT_800e7e86 = 0;
  Entity_ResetState_2(&g_PlayerEntity);
  DAT_800e7feb = 0;
  return;
}

