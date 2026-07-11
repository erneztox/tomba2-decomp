/**
 * @brief Transforms a point by entity GTE matrix, adds translation
 * @note Original: func_80051D20 at 0x80051D20
 */
// Entity_TransformPoint



#include "tomba.h"
void FUN_80051d20(int param_1,undefined4 param_2,short *param_3)

{
  FUN_800844c0(param_1 + 0x98);
  *param_3 = *param_3 + *(short *)(param_1 + 0xac);
  param_3->flags = param_3->flags + *(short *)(param_1 + 0xb0);
  param_3->kind = param_3->kind + *(short *)(param_1 + 0xb4);
  return;
}
