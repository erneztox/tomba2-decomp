/**
 * @brief Audio value calc: computes DAT_80105d04 + offset*0x10, scales result
 * @note Original: func_8009440C at 0x8009440C
 */
// Audio_CalcValue



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s16 FUN_8009440c(s16 param_1,s16 param_2)

{
  s16 uVar1;
  int iVar2;
  
  iVar2 = (((int)DAT_80105d04 + DAT_80105cff * 0x10) * 0x10000 >> 0xb) + _DAT_80105ce8;
  uVar1 = FUN_80094474((int)param_1,(int)param_2,iVar2->state,
                       iVar2->behavior_state);
  return uVar1;
}
