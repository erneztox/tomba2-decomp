// GAME_SystemInit (GAME_SystemInit) - System init (without game-specific): pool init, entity init, render init

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_SystemInit(void)

{
  int iVar1;
  
  Engine_InitPool();
  Game_InitGlobals();
  Overlay_LookupString();
  Entity_Behavior_Cutscene2();
  Audio_InitCD();
  Game_InitLevel();
  GTE_ProjectionInit();
  iVar1 = g_OverlayEntity;
  g_OverlayEntity->sprite_x = 1;
  *(u8 *)(iVar1 + 0x6b) = 0;
  return;
}

