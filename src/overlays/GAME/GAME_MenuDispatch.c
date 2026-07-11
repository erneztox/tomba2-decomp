// GAME_MenuDispatch (GAME_MenuDispatch) - Menu dispatcher: 12 states via field_0x6b, handles input flags

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_MenuDispatch(void)

{
  if (*(u8 *)(g_OverlayEntity + 0x6b) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08011f1c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(u8 *)(g_OverlayEntity + 0x6b) * 4 + -0x7fef9d14))();
    return;
  }
  g_MenuExitFlag = 0;
  DAT_800bf81e = DAT_800bf81e & 2;
  return;
}

