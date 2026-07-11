// GAME_FrameUpdate (GAME_FrameUpdate) - Per-frame update: increments counters, calls entity/render/sound updates

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_FrameUpdate(void)

{
  int iVar1;
  
  if (g_OverlayEntity->sprite_x == 0) {
    if (g_GameState == '\x05') {
      DAT_800bf871 = 3;
    }
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
    Engine_LoadOverlay(g_GameState);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _g_InputPressed = _g_InputPressed + 1;
  _DAT_800bf878 = _DAT_800bf878 + 1;
  if (g_PauseFlag == 0) {
    Entity_InputUpdate();
    Entity_UpdateBGList();
    Entity_UpdateList8();
    Entity_UpdateAll();
    Engine_PoolUpdate();
    UI_PanelDispatch();
    Entity_UpdateChildren();
    Engine_DispatchLevel();
    func_0x0006ec44();
    func_0x00050de4();
    func_0x0001cac0();
  }
  if (g_PauseFlag < 2) {
    Engine_ExecuteGameLoop();
  }
  func_0x0010810c();
  Audio_SFXSequence();
  Audio_SeqPlay2();
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
    if (4 < g_GameMode2) {
      func_0x00050894(0);
    }
    iVar1 = g_OverlayEntity;
    g_OverlayEntity->velocity_y = 1;
    iVar1->normal_z = 2;
    iVar1->sprite_x = 6;
  }
  return;
}

