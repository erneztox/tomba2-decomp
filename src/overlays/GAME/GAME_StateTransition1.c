// GAME_StateTransition1 (GAME_StateTransition1) - State transition: loads level data, checks completion flag g_LoadComplete

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_StateTransition1(void)

{
  u16 uVar1;
  int iVar2;
  
  iVar2 = g_OverlayEntity;
  uVar1 = g_OverlayEntity->sprite_x;
  if (uVar1 == 1) {
    func_0x0003fb84();
    g_OverlayEntity->sprite_x = g_OverlayEntity->sprite_x + 1;
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      g_LoadingFlag = 1;
      g_OverlayEntity->sprite_x = g_OverlayEntity->sprite_x + 1;
      func_0x00044bd4(0x800452c0,g_GameState,0,1);
    }
  }
  else if (uVar1 == 2) {
    if (g_LoadComplete == '\0') {
      func_0x0003ea88();
      return;
    }
    g_OverlayEntity->normal_x = 2;
    iVar2->velocity_y = 1;
    iVar2->normal_z = 1;
    iVar2->sprite_x = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

