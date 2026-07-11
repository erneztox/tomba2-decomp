// A03_TopLevelDispatch - Top-level dispatch: checks entity field_0x50 from DAT_1f800138

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_TopLevelDispatch(void)

{
  int iVar1;
  u8 uVar2;
  
  if (g_OverlayEntity->angle_offset == 0) {
    g_OverlayEntity->angle_offset = 1;
    g_PauseFlag = 1;
    g_MenuSelection = 0;
  }
  else if (g_OverlayEntity->angle_offset == 1) {
    iVar1 = func_0x00111484();
    if (iVar1 != 0) {
      uVar2 = (u8)iVar1;
      if (iVar1 == 2) {
        DAT_1f800137 = uVar2;
        g_SeqComplete2 = uVar2;
        g_GameMode = 3;
        DAT_800bf839 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar1 == 3) {
        g_SeqComplete2 = 2;
        g_GameMode = 0;
        _DAT_800bf83a = 0x104;
        DAT_1f800137 = 2;
        DAT_800bf839 = uVar2;
        DAT_800bf9fb = uVar2;
        g_OverlayEntity->angle_offset = g_OverlayEntity->angle_offset + 1;
      }
      *(u8 *)(g_OverlayEntity + 0x6b) = 0;
      g_PauseFlag = 0;
      g_OverlayEntity->angle_offset = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

