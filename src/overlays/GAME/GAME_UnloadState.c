// GAME_UnloadState (GAME_UnloadState) - Unload/reset state: clears entity sub-states, calls UI reset

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_UnloadState(void)

{
  int iVar1;
  
  if (g_OverlayEntity->normal_z == 0) {
    Input_InitSystem();
    g_OverlayEntity->normal_z = g_OverlayEntity->normal_z + 1;
  }
  else if (g_OverlayEntity->normal_z == 1) {
    *(u8 *)(g_OverlayEntity + 0x69) = 0;
    *(u8 *)(g_OverlayEntity + 0x6a) = 0;
    *(u8 *)(g_OverlayEntity + 0x6b) = 0;
    iVar1 = g_OverlayEntity;
    g_OverlayEntity->velocity_y = 0;
    iVar1->normal_z = 0;
    iVar1->sprite_x = 0;
    Sys_ClearEvent(1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

