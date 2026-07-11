/**
 * @brief MDEC hardware init impl: IRQ enable, DMA setup, callback chain
 * @note Original: func_80086970 at 0x80086970
 */
// MDEC_InitHWImpl



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80086970(void)

{
  s32 *puVar1;
  
  DAT_800abe70 = 0;
  FUN_80080890();
  FUN_80087400(2,&DAT_80102440);
  FUN_800873f0(2,&DAT_80102440);
  puVar1 = DAT_800abe98;
  *DAT_800abe98 = 0xfffffffe;
  puVar1->state = puVar1->state | 1;
  FUN_80085b10(3,0);
  FUN_800808a0();
  (*DAT_800abe3c)(DAT_800abe6c);
  (*DAT_800abe3c)(DAT_800abe6c + 0xf0);
  _DAT_80102454 = 0;
  _DAT_80102450 = 0;
  DAT_800abe70 = 1;
  return;
}
