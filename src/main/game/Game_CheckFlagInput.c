/**
 * @brief Checks global input flag at 0x800E7E68 AND with input state
 * @note Original: func_80055824 at 0x80055824
 */
// Game_CheckFlagInput



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 Game_CheckFlagInput(void)

{
  return (_g_PadState & _g_InputMask) != 0;
}
