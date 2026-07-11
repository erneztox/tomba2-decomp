#include "gte_inline.h"
/**
 * @brief GTE scale Z setter: sets SZ3=param1<<16, SZ2=param2<<16 via cop control
 * @note Original: func_800846D0 at 0x800846D0
 */
// GTE_SetScaleZ



void FUN_800846d0(int param_1,int param_2)

{
  setCopControlWord(2,0xc000,param_1 << 0x10);
  setCopControlWord(2,0xc800,param_2 << 0x10);
  return;
}
