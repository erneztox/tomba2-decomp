// GAME_StateDispatch (GAME_StateDispatch) - Main state dispatcher: 5 states via entity field_0x4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_StateDispatch(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4c) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0000082c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4c) * 4 + -0x7fef9dac))();
    return;
  }
  return;
}

