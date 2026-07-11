/**
 * @brief MDEC configurator: sets DAT_800abe8c/88/70 based on param mode flags
 * @note Original: func_80086620 at 0x80086620
 */
// MDEC_Config



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80086620(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_800abe8c << 1 | (uint)(DAT_800abe88 == 0);
  if (uVar1 != param_1) {
    DAT_800abe70 = 0;
    if ((param_1 & 1) == 0) {
      DAT_800abe88 = 1;
    }
    else {
      DAT_800abe88 = 0;
      if (0x95 < _DAT_80102450) {
        (*DAT_800abe3c)(DAT_800abe6c);
      }
      _DAT_80102450 = 0;
    }
    if ((param_1 & 2) == 0) {
      DAT_800abe8c = 0;
    }
    else {
      DAT_800abe8c = 1;
      if (0x95 < _DAT_80102454) {
        (*DAT_800abe3c)(DAT_800abe6c + 0xf0);
      }
      _DAT_80102454 = 0;
    }
    DAT_800abe70 = 1;
  }
  return uVar1;
}
