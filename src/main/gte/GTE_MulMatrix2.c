/**
 * @brief GTE matrix multiply variant 2: loads 2 matrices, multiplies, stores result
 * @note Original: func_800844C0 at 0x800844C0
 */
// GTE_MulMatrix2



#include "tomba.h"
#include "gte_inline.h"
s16 * GTE_MulMatrix2(s32 *param_1,s32 *param_2,s16 *param_3)

{
  s32 in_zero;
  s32 in_at;
  s32 uVar1;
  s32 uVar2;
  s32 uVar3;
  
  setCopControlWord(2,0,*param_1);
  setCopControlWord(2,0x800,param_1->flags);
  setCopControlWord(2,0x1000,param_1->kind);
  setCopControlWord(2,0x1800,param_1->sub_type);
  setCopControlWord(2,0x2000,param_1->state);
  setCopReg(2,in_zero,*param_2);
  setCopReg(2,in_at,param_2->flags);
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,0x4800);
  uVar2 = getCopReg(2,0x5000);
  uVar3 = getCopReg(2,0x5800);
  *param_3 = (s16)uVar1;
  param_3->flags = (s16)uVar2;
  param_3->kind = (s16)uVar3;
  return param_3;
}
