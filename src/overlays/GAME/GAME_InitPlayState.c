// GAME_InitPlayState (GAME_InitPlayState) - Initialize play state: clears flags, sets entity sub-states

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_InitPlayState(void)

{
  int iVar1;
  
  iVar1 = g_OverlayEntity;
  g_OverlayEntity->normal_x = 2;
  iVar1->velocity_y = 1;
  iVar1->normal_z = 0;
  *(u8 *)(iVar1 + 0x69) = 0;
  g_ScreenBrightness = 0xff;
  _DAT_1f800278 = 0;
  Entity_SaveGlobals();
  g_LevelId = 0;
  g_GameMode2 = 0;
  g_LoadingFlag = 0;
  return;
}

