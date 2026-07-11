// GAME_ResultsDispatch (GAME_ResultsDispatch) - Results/summary screen dispatcher: 7 states via field_0x4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_ResultsDispatch(void)

{
  if (g_OverlayEntity->sprite_x < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00001d44 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)g_OverlayEntity->sprite_x * 4 + -0x7fef9d34))();
    return;
  }
  return;
}

