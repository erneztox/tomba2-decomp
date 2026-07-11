// SOP_MainUpdate (SOP_MainUpdate) - Main SOP state machine: title screen update loop, manages sub-states and CD loading

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_MainUpdate(void)

{
  u16 uVar1;
  int iVar2;
  
  if (g_OverlayEntity->draw_x == 0) {
    Screen_FadeTransition(0x80100400);
    func_0x0010a0e0(0x800f2418);
    Entity_UpdateLoop();
    g_LoadingFlag = 1;
    if (g_EntityPool0 == '\0') {
      g_EntityPool0 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (g_EntityPool0 == '\x01') {
      if (g_LoadSubState == '\0') {
        Camera_SetModeSeq(&g_EntityPool0,0x800e8040);
      }
      else if (g_LoadSubState == '\x01') {
        g_LoadSubState = 0;
        Audio_SeqPlay2();
        if (g_GameSubState != '\x05') {
          func_0x0010bffc(0x800ed018);
        }
        func_0x00109fe0(0x800f2418);
        EntityLoop_Active();
        if (g_GameSubState != '\x05') {
          func_0x0010c26c(0x800ed018);
        }
        g_LoadingFlag = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  g_OverlayEntity->draw_x = g_OverlayEntity->draw_x + -1;
  uVar1 = g_OverlayEntity->sprite_y;
  if (uVar1 == 1) {
    iVar2 = func_0x0010c79c();
    if (iVar2 != 0) {
      g_OverlayEntity->sprite_y = g_OverlayEntity->sprite_y + 1;
    }
  }
  else if ((uVar1 < 2) && (uVar1 == 0)) {
    g_OverlayEntity->angle_delta = 0;
    Engine_LoadOverlayEntry(0xe);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

