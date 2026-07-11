// GAME_MainUpdate (GAME_MainUpdate) - Main game state update handler: checks flags g_GameMode/f, manages transitions

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_MainUpdate(void)

{
  u16 uVar1;
  int iVar2;
  
  uVar1 = g_OverlayEntity->sprite_x;
  if (uVar1 != 1) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        g_OverlayEntity->sprite_x = 1;
        return;
      }
      halt_baddata();
    }
    if (uVar1 != 0) {
      halt_baddata();
    }
    g_OverlayEntity->sprite_x = 1;
    Engine_DispatchInit();
    Game_InitSaveData(0,0,0);
  }
  func_0x00108be4();
  iVar2 = g_OverlayEntity;
  if (g_GameMode == '\x03') {
    if (g_SeqComplete2 != '\0') {
      return;
    }
    Input_InitSystem();
    iVar2 = g_OverlayEntity;
    g_OverlayEntity->normal_z = 2;
    if (_DAT_800e7fee == 0) {
      iVar2->sprite_x = 2;
    }
    else {
      DAT_800bf880 = 1;
      _DAT_1f800194 = _DAT_800e7fee;
      iVar2->sprite_x = 0;
    }
  }
  else {
    if (DAT_800bf839 == '\0') {
      return;
    }
    if (g_SeqComplete2 != '\0') {
      return;
    }
    if (DAT_800bf839 == '\b') {
      g_OverlayEntity->velocity_y = 1;
      iVar2->normal_z = 2;
      iVar2->sprite_x = 3;
    }
    else {
      if (4 < g_GameMode2) {
        func_0x00050894(0);
      }
      iVar2 = g_OverlayEntity;
      g_OverlayEntity->velocity_y = 1;
      iVar2->normal_z = 2;
      iVar2->sprite_x = 6;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

