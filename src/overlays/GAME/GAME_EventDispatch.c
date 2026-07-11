// GAME_EventDispatch (GAME_EventDispatch) - Event/sequence dispatch: processes event results, manages camera events

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_EventDispatch(void)

{
  u16 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = g_OverlayEntity->angle_offset;
  if (uVar1 == 2) {
    g_OverlayEntity->angle_offset = 3;
    func_0x00050894(0);
    g_PauseFlag = 2;
    Entity_ClearPool2();
  }
  else if (uVar1 < 3) {
    g_OverlayEntity->angle_offset = uVar1 + 1;
  }
  else if (uVar1 == 3) {
    iVar3 = Event_DispatchMain();
    iVar2 = g_OverlayEntity;
    if (iVar3 != 0) {
      g_OverlayEntity->angle_offset = 0;
      *(u8 *)(iVar2 + 0x6b) = 0;
      g_PauseFlag = 0;
      g_NextState = 8;
      UI_DrawScreenOverlay();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

