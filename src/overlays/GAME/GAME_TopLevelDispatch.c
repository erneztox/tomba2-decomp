// GAME_TopLevelDispatch (GAME_TopLevelDispatch) - Top-level dispatcher: 6 states via entity field_0x4a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_TopLevelDispatch(void)

{
  if (g_OverlayEntity->velocity_y < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0801258c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)g_OverlayEntity->velocity_y * 4 + -0x7fef9ce4))();
    return;
  }
  return;
}

