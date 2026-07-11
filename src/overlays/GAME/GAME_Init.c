// GAME_Init (GAME_Init) - Game initialization: pool clear, entity init, render init, sound init

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_Init(void)

{
  int iVar1;
  
  iVar1 = g_OverlayEntity;
  if (g_OverlayEntity->sprite_x == 0) {
    g_OverlayEntity->sprite_x = 1;
    *(u8 *)(iVar1 + 0x6b) = 0;
    Engine_InitPool();
    Game_InitGlobals();
    Overlay_LookupString();
    Audio_InitCD();
    Game_InitLevel();
    GTE_ProjectionInit();
    Engine_DispatchOverlay(g_GameState);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00108cac();
  iVar1 = g_OverlayEntity;
  if (g_GameMode == '\x03') {
    if (g_SeqComplete2 == '\0') {
      if (_DAT_800e7fee != 0) {
        DAT_800bf880 = 1;
        _DAT_1f800194 = _DAT_800e7fee;
      }
      g_OverlayEntity->sprite_x = 0;
      halt_baddata();
    }
  }
  else if ((DAT_800bf839 == '\x03') && (g_SeqComplete2 == '\0')) {
    DAT_800bf839 = '\x02';
    g_GameMode2 = 2;
    g_OverlayEntity->velocity_y = 1;
    iVar1->normal_z = 2;
    iVar1->sprite_x = 6;
  }
  return;
}

