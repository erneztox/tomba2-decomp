/**
 * @brief Checks bit at position in global bitfield at 0x800BFE48
 * @note Original: func_8006EFF4 at 0x8006EFF4
 */
// Game_CheckBit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Game_CheckBit(uint param_1)

{
  return _g_EventFlags >> (param_1 & 0x1f) & 1;
}
