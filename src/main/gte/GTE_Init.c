#include "gte_inline.h"
/**
 * @brief GTE init: enables coprocessor, sets IR1=0x155, IR2=0x100, SZ0=1000
 * @note Original: func_80083FF8 at 0x80083FF8
 */
// GTE_Init



uint GTE_Init(void)

{
  s32 unaff_retaddr;
  
  DAT_800a6300 = unaff_retaddr;
  IRQ_Disable();
  setCopReg(0,Status,Status | 0x40000000);
  setCopControlWord(2,0xe800,0x155);
  setCopControlWord(2,0xf000,0x100);
  setCopControlWord(2,0xd000,1000);
  setCopControlWord(2,0xd800,0xffffef9e);
  setCopControlWord(2,0xe000,0x1400000);
  setCopControlWord(2,0xc000,0);
  setCopControlWord(2,0xc800,0);
  return Status | 0x40000000;
}
