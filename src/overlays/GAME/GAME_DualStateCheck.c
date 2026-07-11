// GAME_DualStateCheck (GAME_DualStateCheck) - Dual state checker: checks field_0x4c and field_0x4e interdependently

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_DualStateCheck(void)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = g_OverlayEntity;
  if (g_OverlayEntity->normal_z == 0) {
    if (g_OverlayEntity->sprite_x == 0) {
      Game_InitSaveData(0,0,0);
      iVar2 = g_OverlayEntity;
      psVar1 = g_OverlayEntity->sprite_x;
      g_OverlayEntity->angle_offset = 0;
      iVar2->sprite_x = *psVar1 + 1;
    }
    else if (g_OverlayEntity->sprite_x == 1) {
      func_0x00109450();
    }
  }
  else if (g_OverlayEntity->normal_z == 1) {
    psVar1 = g_OverlayEntity->velocity_y;
    g_OverlayEntity->normal_z = 0;
    iVar2->velocity_y = *psVar1 + 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

