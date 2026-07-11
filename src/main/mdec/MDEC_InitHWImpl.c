/**
 * @brief MDEC hardware init impl: IRQ enable, DMA setup, callback chain
 * @note Original: func_80086970 at 0x80086970
 */
// MDEC_InitHWImpl



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void MDEC_InitHWImpl(void)

{
  s32 *puVar1;
  
  DAT_800abe70 = 0;
  BIOS_Syscall0();
  BIOS_Syscall_C0_80087400(2,&DAT_80102440);
  BIOS_Syscall_C0_800873F0(2,&DAT_80102440);
  puVar1 = DAT_800abe98;
  *DAT_800abe98 = 0xfffffffe;
  puVar1->state = puVar1->state | 1;
  BIOS_CallC0(3,0);
  BIOS_Syscall0_2();
  (*DAT_800abe3c)(DAT_800abe6c);
  (*DAT_800abe3c)(DAT_800abe6c + 0xf0);
  _DAT_80102454 = 0;
  _DAT_80102450 = 0;
  DAT_800abe70 = 1;
  return;
}
