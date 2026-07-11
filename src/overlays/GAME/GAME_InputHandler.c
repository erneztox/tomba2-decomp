// GAME_InputHandler (GAME_InputHandler) - Input/flag handler: reads _g_PlayerFlags buttons, triggers transitions

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_InputHandler(void)

{
  char *pcVar1;
  
  GPU_SpriteList();
  if ((_g_PlayerFlags & 0x10) == 0) {
    if ((_g_PlayerFlags & 0x40) == 0) {
      if ((_g_PlayerFlags & 0x2008) != 0) {
        *(u8 *)(g_OverlayEntity + 0x6b) = 2;
        Audio_SetBank(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((_g_PlayerFlags & 0x4000) != 0) {
        *(u8 *)(g_OverlayEntity + 0x6b) = g_MenuSelection + 3;
        pcVar1 = (char *)(g_OverlayEntity + 0x6b);
        g_OverlayEntity->angle_offset = 0;
        if (*pcVar1 == '\x03') {
          g_MenuSelection = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*pcVar1 == '\x04') {
          g_MenuSelection = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        g_MenuSelection = 1;
        Game_InitSaveData(0,0,0);
        g_PauseFlag = 2;
        Audio_PlaySoundEffect(0x11,0,0);
      }
    }
    else if (g_MenuSelection < 2) {
      g_MenuSelection = g_MenuSelection + 1;
      halt_baddata();
    }
  }
  else if (g_MenuSelection != 0) {
    g_MenuSelection = g_MenuSelection - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

