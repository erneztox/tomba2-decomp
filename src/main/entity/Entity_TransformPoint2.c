/**
 * @brief Variant point transform: uses pre-computed matrix, no translation add
 * @note Original: func_80051D90 at 0x80051D90
 */
// Entity_TransformPoint2



#include "tomba.h"
void FUN_80051d90(int param_1,s32 param_2,s16 *param_3)

{
  FUN_800844c0(param_1 + 0x18);
  *param_3 = *param_3 + param_1->pos_x;
  param_3->flags = param_3->flags + *(s16 *)(param_1 + 0x30);
  param_3->kind = param_3->kind + *(s16 *)(param_1 + 0x34);
  return;
}
