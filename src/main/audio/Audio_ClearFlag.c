/**
 * @brief Audio flag clearer: DAT_80105c90 = 0
 * @note Original: func_800931A0 at 0x800931A0
 */
// Audio_ClearFlag



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_ClearFlag(void)

{
  _DAT_80105c90 = 0;
  return;
}
