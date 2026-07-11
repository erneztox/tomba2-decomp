/**
 * @brief Checks bit in global flag at 0x800BFE50 at given position
 * @note Original: func_80078894 at 0x80078894
 */
// Game_CheckBit50



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80078894(uint param_1)

{
  return _DAT_800bfe50 & 1 << (param_1 & 0x1f);
}
