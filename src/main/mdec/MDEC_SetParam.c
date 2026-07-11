/**
 * @brief MDEC param setter: stores param + scratchpad value at 0x801026E0/E4
 * @note Original: func_80089620 at 0x80089620
 */
// MDEC_SetParam



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MDEC_SetParam(s32 param_1)

{
  _DAT_801026e4 = param_1;
  _DAT_801026e0 = (uint)_DAT_1f801120;
  return;
}
