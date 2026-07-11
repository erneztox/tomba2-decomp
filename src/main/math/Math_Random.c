/**
 * @brief LCG pseudo-random number generator: seed=seed*0x41c64e6d+0x3039, returns high 16 bits
 * @note Original: func_8009A450 at 0x8009A450
 */
// Math_Random



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8009a450(void)

{
  _DAT_80105ee8 = _DAT_80105ee8 * 0x41c64e6d + 0x3039;
  return _DAT_80105ee8 >> 0x10 & 0x7fff;
}
