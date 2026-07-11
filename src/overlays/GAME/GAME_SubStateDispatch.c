// GAME_SubStateDispatch (GAME_SubStateDispatch) - Sub-state dispatcher: 12 states via entity field_0x4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_SubStateDispatch(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4e) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x000009a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4e) * 4 + -0x7fef9d94))();
    return;
  }
  return;
}

