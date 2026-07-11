/**
 * @brief Checks global input flag at 0x800E7E68 AND with input state
 * @note Original: func_80055824 at 0x80055824
 */
// Game_CheckFlagInput



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80055824(void)

{
  return (_DAT_800e7e68 & _DAT_1f800172) != 0;
}
