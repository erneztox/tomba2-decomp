/**
 * @brief GTE matrix store: reads GTE regs, stores to param_2 array (+translation)
 * @note Original: func_800847B0 at 0x800847B0
 */
// GTE_StoreMatrix



#include "tomba.h"
s32 * FUN_800847b0(s32 *param_1,s32 *param_2)

{
  s16 uVar1;
  s32 uVar2;
  s32 uVar3;
  s32 uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1->flags;
  param_2->flags = uVar2;
  *param_2 = uVar3;
  *(s16 *)param_2 = (s16)uVar2;
  uVar4 = param_1->kind;
  uVar2 = param_1->sub_type;
  param_2->sub_type = uVar4;
  param_2->kind = uVar2;
  *(s16 *)(param_2 + 3) = (s16)uVar3;
  *(s16 *)(param_2 + 2) = (s16)uVar4;
  uVar1 = *(s16 *)(param_1 + 4);
  *(s16 *)(param_2 + 1) = (s16)uVar2;
  *(s16 *)(param_2 + 4) = uVar1;
  return param_2;
}
