// GAME_StateDispatch (GAME_StateDispatch) - Main state dispatcher: 5 states via entity field_0x4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_StateDispatch(void)

{
  if (g_OverlayEntity->normal_z < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801082c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)g_OverlayEntity->normal_z * 4 + -0x7fef9dac))();
    return;
  }
  return;
}

