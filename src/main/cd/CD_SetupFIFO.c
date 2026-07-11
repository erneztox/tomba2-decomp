/**
 * @brief CD FIFO setup: sets param_2=0x40001010, DAT_800ac668=0, configures transfer
 * @note Original: func_80097760 at 0x80097760
 */
// CD_SetupFIFO



#include "tomba.h"
int FUN_80097760(int param_1,s32 *param_2)

{
  uint uVar1;
  
  uVar1 = DAT_800ac62c;
  if (param_1 < 1) {
    param_1 = 0;
  }
  else {
    *param_2 = 0x40001010;
    DAT_800ac668 = 0;
    DAT_800ac664 = param_1;
    DAT_800ac66c = param_2;
    param_2->flags = (0x10000 << (uVar1 & 0x1f)) + -0x1010;
  }
  return param_1;
}
