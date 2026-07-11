/**
 * @brief Checks system flag at 0x800ECF54 AND with input state
 * @note Original: func_80055844 at 0x80055844
 */
// Game_CheckFlagSys



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_80055844(void)

{
  return (_g_InputState & _g_InputMask) != 0;
}
