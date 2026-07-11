/**
 * @brief MDEC DMA check: tests DAT_800abe98 flags, calls FUN_80086a80 if active
 * @note Original: func_80086764 at 0x80086764
 */
// MDEC_CheckDMA



#include "tomba.h"
s32 FUN_80086764(void)

{
  s32 uVar1;
  
  uVar1 = 0;
  if (((DAT_800abe98->flags & 1) != 0) && (uVar1 = 0, (*DAT_800abe98 & 1) != 0)) {
    if (DAT_800abe60 != (code *)0x0) {
      (*DAT_800abe60)();
    }
    uVar1 = 1;
  }
  return uVar1;
}
