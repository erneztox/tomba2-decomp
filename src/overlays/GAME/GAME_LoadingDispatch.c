// GAME_LoadingDispatch (GAME_LoadingDispatch) - Loading screen dispatcher: 6 states via entity field_0x4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_LoadingDispatch(void)

{
  if (g_OverlayEntity->sprite_x < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00001040 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)g_OverlayEntity->sprite_x * 4 + -0x7fef9d64))();
    return;
  }
  return;
}

