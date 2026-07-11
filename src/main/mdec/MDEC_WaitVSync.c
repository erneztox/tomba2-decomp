/**
 * @brief MDEC VSync wait: polls _DAT_1f801120 vs _DAT_801026e0, handles timeout
 * @note Original: func_80089640 at 0x80089640
 */
// MDEC_WaitVSync



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_80089640(void)

{
  uint uVar1;
  
  uVar1 = (uint)_DAT_1f801120;
  if (uVar1 < _DAT_801026e0) {
    if (_DAT_1f801128 == 0) {
      uVar1 = uVar1 + 0x10000;
    }
    else {
      uVar1 = uVar1 + _DAT_1f801128;
    }
  }
  if ((_DAT_1f801124 & 0x200) == 0) {
    uVar1 = uVar1 - _DAT_801026e0 >> 3;
  }
  else {
    uVar1 = uVar1 - _DAT_801026e0;
  }
  return _DAT_801026e4 <= uVar1;
}
