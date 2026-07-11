/**
 * @brief GTE matrix multiply: loads matrix, calls copFunction(0x486012), reads result
 * @note Original: func_80084220 at 0x80084220
 */
// GTE_MulMatrix



#include "tomba.h"
undefined4 * FUN_80084220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  setCopReg(2,0,*param_1);
  setCopReg(2,0x800,param_1->flags);
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,9);
  *param_2 = uVar1;
  uVar1 = getCopReg(2,10);
  param_2->flags = uVar1;
  uVar1 = getCopReg(2,0xb);
  param_2->kind = uVar1;
  return param_2;
}
