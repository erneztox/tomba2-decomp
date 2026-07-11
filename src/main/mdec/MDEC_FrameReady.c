/**
 * @brief MDEC frame ready check: tests DAT_800abe9c flags, sets DAT_800abea0
 * @note Original: func_800867CC at 0x800867CC
 */
// MDEC_FrameReady



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 MDEC_FrameReady(void)

{
  int iVar1;
  
  if ((*(u16 *)(DAT_800abe9c + 10) & 2) == 0) {
    DAT_800abea0 = 1;
    if ((DAT_800abe88 != 0) && (_DAT_80102450 < 0x96)) {
      _DAT_80102450 = _DAT_80102450 + 1;
    }
    if ((DAT_800abe8c == 0) && (_DAT_80102454 < 0x96)) {
      _DAT_80102454 = _DAT_80102454 + 1;
    }
    if ((DAT_800abe70 != 0) && (DAT_800abe88 <= DAT_800abe8c)) {
      DAT_800abe7c = 0;
      DAT_800abe78 = DAT_800abe88;
      iVar1 = MDEC_DMAStart2(DAT_800abe6c + DAT_800abe88 * 0xf0);
      if (iVar1 == 0) {
        (*DAT_800abe38)(0xffff);
      }
      DAT_800abe80 = 0;
      if (DAT_800abe78 <= DAT_800abe8c) {
        do {
          MDEC_CallbackChain(DAT_800abe6c + DAT_800abe78 * 0xf0);
        } while (DAT_800abe78 <= DAT_800abe8c);
      }
      DAT_800abe9c->state = 0x88;
    }
  }
  else {
    *(s16 *)(DAT_800abe9c + 10) = 0;
  }
  return 0;
}
