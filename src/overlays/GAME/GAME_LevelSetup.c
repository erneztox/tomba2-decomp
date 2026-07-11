// GAME_LevelSetup (GAME_LevelSetup) - Level setup: sets player position (1000,-1000,3000), spawns camera entities

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_LevelSetup(void)

{
  int iVar1;
  
  if (g_GameMode2 == 2) {
    g_PlayerEntity = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  g_PlayerEntity = 3;
  _g_CameraPosX = 1000;
  _g_CameraPosY = -1000;
  _g_CameraPosZ = 3000;
  _DAT_800e7ed6 = 0xc00;
  if (g_GameMode2 < 3) {
    Camera_SetTarget(0x800e8008,0x80108f78);
    Camera_SetModeSeq(0x800e8008,0x800e8040);
    iVar1 = Entity_SpawnNoPos(0x19,0);
    iVar1->pos_x = _g_CameraPosX;
    iVar1->pos_y = _g_CameraPosY + 0x82;
    *(short *)(iVar1 + 0x30) = _g_CameraPosZ + 0x1194;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (g_GameMode2 == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  Camera_SetTarget(0x800e8008,0x80108f90);
  iVar1 = Entity_SpawnNoPos(0x23,0);
  iVar1->pos_x = _g_CameraPosX;
  iVar1->pos_y = _g_CameraPosY;
  *(short *)(iVar1 + 0x30) = _g_CameraPosZ;
  _g_CameraZoom = 0xc00;
  Camera_UpdateOrbit();
  Audio_SetBank(8);
  return;
}

