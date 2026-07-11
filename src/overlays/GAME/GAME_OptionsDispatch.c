// GAME_OptionsDispatch (GAME_OptionsDispatch) - Options screen dispatcher: 7 states via field_0x4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_OptionsDispatch(void)

{
  if (g_OverlayEntity->normal_z < 7) {
                    /* WARNING: Could not emulate address calculation at 0x080126e0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)g_OverlayEntity->normal_z * 4 + -0x7fef9ccc))();
    return;
  }
  return;
}

