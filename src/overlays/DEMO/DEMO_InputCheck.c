// DEMO_InputCheck (DEMO_InputCheck) - Demo input check: aborts demo on button press

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_InputCheck(void)

{
  u16 uVar1;
  int iVar2;
  u8 bVar3;
  short sVar4;
  
  iVar2 = g_OverlayEntity;
  uVar1 = g_OverlayEntity->velocity_y;
  if (uVar1 == 1) {
    if ((_g_InputPressed & 0x10) != 0) {
      GPU_RenderSprite_V1(0x100,0x20,0,0x8010624c,0);
    }
    if (g_GameState == '\x03') {
      func_0x00106ee4();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00106e28();
    sVar4 = g_OverlayEntity->target_rot_y;
    g_OverlayEntity->target_rot_y = sVar4 + -1;
    if ((sVar4 != 1) && (sVar4 = Entity_RenderInit(0), sVar4 == 0)) {
      return;
    }
    g_OverlayEntity->velocity_y = g_OverlayEntity->velocity_y + 1;
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      g_OverlayEntity->velocity_y = 1;
      iVar2->target_rot_y = 900;
      Entity_ClearInputFlags();
      g_GameState = *(char *)((uint)g_OverlayEntity->sprite_param2 * 4 + -0x7fef88f4);
      g_PlayerState = 4;
      func_0x00044bd4(0x800452c0,g_GameState,1);
      Engine_InitPool();
      Game_InitGlobals();
      Overlay_LookupString();
      Entity_Behavior_Cutscene2();
      Audio_InitCD();
      Game_InitLevel();
      GTE_ProjectionInit();
      Engine_InitState(g_OverlayEntity->sprite_param2);
      DAT_1f80019a = 1;
      bVar3 = g_OverlayEntity->sprite_param2 + 1;
      g_OverlayEntity->sprite_param2 = bVar3;
      if (bVar3 < 3) {
        return;
      }
      g_OverlayEntity->sprite_param2 = 0;
    }
  }
  else if (uVar1 == 2) {
    Input_InitSystem();
    DAT_1f80019a = 0;
    g_OverlayEntity->normal_x = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

