/**
 * @brief MDEC DMA wait: polls DAT_800abe9c word->state bit until clear, checks timeout
 * @note Original: func_8008732C at 0x8008732C
 */
// MDEC_WaitDMA



#include "tomba.h"
s32 FUN_8008732c(void)

{
  u16 uVar1;
  int iVar2;
  
  iVar2 = DAT_800abe9c;
  *DAT_800abe98 = 0xffffff7f;
  uVar1 = *(u16 *)(iVar2 + 4);
  while( true ) {
    if ((uVar1 & 0x80) == 0) {
      *(u16 *)(DAT_800abe9c + 10) = *(u16 *)(DAT_800abe9c + 10) | 0x10;
      return 1;
    }
    iVar2 = FUN_80089640();
    if (iVar2 != 0) break;
    uVar1 = *(u16 *)(DAT_800abe9c + 4);
  }
  return 0;
}
