// GAME_StateTransitionAudio (GAME_StateTransitionAudio) - State transition with audio: sets bank 9, loads level, checks flag

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_StateTransitionAudio(void)

{
  u16 uVar1;
  int iVar2;
  
  uVar1 = g_OverlayEntity->sprite_x;
  if (uVar1 == 1) {
    GPU_OT_Process();
    g_OverlayEntity->sprite_x = g_OverlayEntity->sprite_x + 1;
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      Audio_SetBank(9);
      GPU_OT_Process();
      g_OverlayEntity->sprite_x = g_OverlayEntity->sprite_x + 1;
      g_LoadingFlag = 1;
      func_0x00044bd4(0x800452c0,g_GameState,0,1);
    }
  }
  else if (uVar1 == 2) {
    GPU_DrawProcess();
    if (g_LoadComplete != '\0') {
      Audio_ReleaseChannel();
      iVar2 = g_OverlayEntity;
      g_OverlayEntity->normal_x = 2;
      iVar2->velocity_y = 1;
      iVar2->normal_z = 1;
      iVar2->sprite_x = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

