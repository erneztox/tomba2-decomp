/**
 * @brief GTE matrix * vector multiply: loads matrix from array, transforms vector
 * @note Original: func_80084470 at 0x80084470
 */
// GTE_MulMatrixVec



#include "tomba.h"
undefined4 * FUN_80084470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  
  setCopControlWord(2,0,*param_1);
  setCopControlWord(2,0x800,param_1->flags);
  setCopControlWord(2,0x1000,param_1->kind);
  setCopControlWord(2,0x1800,param_1->sub_type);
  setCopControlWord(2,0x2000,param_1->state);
  setCopReg(2,in_zero,*param_2);
  setCopReg(2,in_at,param_2->flags);
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,0x19);
  *param_3 = uVar1;
  uVar1 = getCopReg(2,0x1a);
  param_3->flags = uVar1;
  uVar1 = getCopReg(2,0x1b);
  param_3->kind = uVar1;
  return param_3;
}
