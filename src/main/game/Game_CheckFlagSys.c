/**
 * @brief Checks system flag at 0x800ECF54 AND with input state
 * @note Original: func_80055844 at 0x80055844
 */
// Game_CheckFlagSys



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80055844(void)

{
  return (_DAT_800ecf54 & _DAT_1f800172) != 0;
}
