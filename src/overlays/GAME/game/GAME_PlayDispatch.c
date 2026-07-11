// GAME_PlayDispatch (GAME_PlayDispatch) - Play state dispatcher: 5 states via entity field_0x4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_PlayDispatch(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4e) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00001908 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4e) * 4 + -0x7fef9d4c))();
    return;
  }
  return;
}

