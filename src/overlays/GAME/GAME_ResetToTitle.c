// GAME_ResetToTitle (GAME_ResetToTitle) - Reset to title screen: resets entity state, calls pool init

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_ResetToTitle(void)

{
  int iVar1;
  
  iVar1 = g_OverlayEntity;
  g_OverlayEntity->normal_x = 2;
  iVar1->velocity_y = 0;
  iVar1->normal_z = 0;
  *(u8 *)(iVar1 + 0x69) = 0;
  Entity_ClearInputFlags();
  Entity_InitGlobals2();
  return;
}

